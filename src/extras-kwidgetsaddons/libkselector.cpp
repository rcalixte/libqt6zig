#include <KGradientSelector>
#include <KSelector>
#include <QAbstractSlider>
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
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kselector.h>
#include "libkselector.h"
#include "libkselector.hxx"

KSelector* KSelector_new(QWidget* parent) {
    return new VirtualKSelector(parent);
}

KSelector* KSelector_new2() {
    return new VirtualKSelector();
}

KSelector* KSelector_new3(int o) {
    return new VirtualKSelector(static_cast<Qt::Orientation>(o));
}

KSelector* KSelector_new4(int o, QWidget* parent) {
    return new VirtualKSelector(static_cast<Qt::Orientation>(o), parent);
}

QMetaObject* KSelector_MetaObject(const KSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelector_Metacast(KSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelector_Metacall(KSelector* self, int param1, int param2, void** param3) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnMetacall(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Metacall_Callback(reinterpret_cast<VirtualKSelector::KSelector_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KSelector_QBaseMetacall(KSelector* self, int param1, int param2, void** param3) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Metacall_IsBase(true);
        return vkselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSelector_Tr(const char* s) {
    QString _ret = KSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRect* KSelector_ContentsRect(const KSelector* self) {
    return new QRect(self->contentsRect());
}

void KSelector_SetIndent(KSelector* self, bool i) {
    self->setIndent(i);
}

bool KSelector_Indent(const KSelector* self) {
    return self->indent();
}

void KSelector_SetArrowDirection(KSelector* self, int direction) {
    self->setArrowDirection(static_cast<Qt::ArrowType>(direction));
}

int KSelector_ArrowDirection(const KSelector* self) {
    return static_cast<int>(self->arrowDirection());
}

void KSelector_DrawContents(KSelector* self, QPainter* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->drawContents(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnDrawContents(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DrawContents_Callback(reinterpret_cast<VirtualKSelector::KSelector_DrawContents_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBaseDrawContents(KSelector* self, QPainter* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DrawContents_IsBase(true);
        vkselector->drawContents(param1);
    }
}

void KSelector_DrawArrow(KSelector* self, QPainter* painter, const QPoint* pos) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->drawArrow(painter, *pos);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnDrawArrow(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DrawArrow_Callback(reinterpret_cast<VirtualKSelector::KSelector_DrawArrow_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBaseDrawArrow(KSelector* self, QPainter* painter, const QPoint* pos) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DrawArrow_IsBase(true);
        vkselector->drawArrow(painter, *pos);
    }
}

void KSelector_PaintEvent(KSelector* self, QPaintEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnPaintEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_PaintEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBasePaintEvent(KSelector* self, QPaintEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_PaintEvent_IsBase(true);
        vkselector->paintEvent(param1);
    }
}

void KSelector_MousePressEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->mousePressEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnMousePressEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MousePressEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBaseMousePressEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MousePressEvent_IsBase(true);
        vkselector->mousePressEvent(e);
    }
}

void KSelector_MouseMoveEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->mouseMoveEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnMouseMoveEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MouseMoveEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_MouseMoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBaseMouseMoveEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MouseMoveEvent_IsBase(true);
        vkselector->mouseMoveEvent(e);
    }
}

void KSelector_MouseReleaseEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->mouseReleaseEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnMouseReleaseEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_MouseReleaseEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBaseMouseReleaseEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MouseReleaseEvent_IsBase(true);
        vkselector->mouseReleaseEvent(e);
    }
}

void KSelector_WheelEvent(KSelector* self, QWheelEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->wheelEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelector_OnWheelEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_WheelEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_WheelEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelector_QBaseWheelEvent(KSelector* self, QWheelEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_WheelEvent_IsBase(true);
        vkselector->wheelEvent(param1);
    }
}

libqt_string KSelector_Tr2(const char* s, const char* c) {
    QString _ret = KSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSelector_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSelector::tr(s, c, static_cast<int>(n));
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
bool KSelector_Event(KSelector* self, QEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->event(e);
    } else {
        return ((VirtualKSelector*)self)->event(e);
    }
}

// Base class handler implementation
bool KSelector_QBaseEvent(KSelector* self, QEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Event_IsBase(true);
        return vkselector->event(e);
    } else {
        return ((VirtualKSelector*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Event_Callback(reinterpret_cast<VirtualKSelector::KSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_SliderChange(KSelector* self, int change) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->sliderChange(static_cast<VirtualKSelector::SliderChange>(change));
    } else {
        ((VirtualKSelector*)self)->sliderChange(static_cast<VirtualKSelector::SliderChange>(change));
    }
}

// Base class handler implementation
void KSelector_QBaseSliderChange(KSelector* self, int change) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SliderChange_IsBase(true);
        vkselector->sliderChange(static_cast<VirtualKSelector::SliderChange>(change));
    } else {
        ((VirtualKSelector*)self)->sliderChange(static_cast<VirtualKSelector::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSliderChange(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SliderChange_Callback(reinterpret_cast<VirtualKSelector::KSelector_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_KeyPressEvent(KSelector* self, QKeyEvent* ev) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->keyPressEvent(ev);
    } else {
        ((VirtualKSelector*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void KSelector_QBaseKeyPressEvent(KSelector* self, QKeyEvent* ev) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_KeyPressEvent_IsBase(true);
        vkselector->keyPressEvent(ev);
    } else {
        ((VirtualKSelector*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnKeyPressEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_KeyPressEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_TimerEvent(KSelector* self, QTimerEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->timerEvent(param1);
    } else {
        ((VirtualKSelector*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KSelector_QBaseTimerEvent(KSelector* self, QTimerEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_TimerEvent_IsBase(true);
        vkselector->timerEvent(param1);
    } else {
        ((VirtualKSelector*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnTimerEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_TimerEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ChangeEvent(KSelector* self, QEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->changeEvent(e);
    } else {
        ((VirtualKSelector*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KSelector_QBaseChangeEvent(KSelector* self, QEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ChangeEvent_IsBase(true);
        vkselector->changeEvent(e);
    } else {
        ((VirtualKSelector*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnChangeEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ChangeEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelector_DevType(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->devType();
    } else {
        return self->KSelector::devType();
    }
}

// Base class handler implementation
int KSelector_QBaseDevType(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DevType_IsBase(true);
        return vkselector->devType();
    } else {
        return self->KSelector::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDevType(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DevType_Callback(reinterpret_cast<VirtualKSelector::KSelector_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_SetVisible(KSelector* self, bool visible) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setVisible(visible);
    } else {
        self->KSelector::setVisible(visible);
    }
}

// Base class handler implementation
void KSelector_QBaseSetVisible(KSelector* self, bool visible) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SetVisible_IsBase(true);
        vkselector->setVisible(visible);
    } else {
        self->KSelector::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSetVisible(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SetVisible_Callback(reinterpret_cast<VirtualKSelector::KSelector_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSelector_SizeHint(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return new QSize(vkselector->sizeHint());
    } else {
        return new QSize(((VirtualKSelector*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KSelector_QBaseSizeHint(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SizeHint_IsBase(true);
        return new QSize(vkselector->sizeHint());
    } else {
        return new QSize(((VirtualKSelector*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSizeHint(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SizeHint_Callback(reinterpret_cast<VirtualKSelector::KSelector_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSelector_MinimumSizeHint(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return new QSize(vkselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSelector*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KSelector_QBaseMinimumSizeHint(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MinimumSizeHint_IsBase(true);
        return new QSize(vkselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSelector*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMinimumSizeHint(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MinimumSizeHint_Callback(reinterpret_cast<VirtualKSelector::KSelector_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelector_HeightForWidth(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KSelector_QBaseHeightForWidth(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_HeightForWidth_IsBase(true);
        return vkselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnHeightForWidth(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_HeightForWidth_Callback(reinterpret_cast<VirtualKSelector::KSelector_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_HasHeightForWidth(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->hasHeightForWidth();
    } else {
        return self->KSelector::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KSelector_QBaseHasHeightForWidth(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_HasHeightForWidth_IsBase(true);
        return vkselector->hasHeightForWidth();
    } else {
        return self->KSelector::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnHasHeightForWidth(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_HasHeightForWidth_Callback(reinterpret_cast<VirtualKSelector::KSelector_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KSelector_PaintEngine(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->paintEngine();
    } else {
        return self->KSelector::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KSelector_QBasePaintEngine(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_PaintEngine_IsBase(true);
        return vkselector->paintEngine();
    } else {
        return self->KSelector::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnPaintEngine(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_PaintEngine_Callback(reinterpret_cast<VirtualKSelector::KSelector_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_MouseDoubleClickEvent(KSelector* self, QMouseEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseMouseDoubleClickEvent(KSelector* self, QMouseEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MouseDoubleClickEvent_IsBase(true);
        vkselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMouseDoubleClickEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_KeyReleaseEvent(KSelector* self, QKeyEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->keyReleaseEvent(event);
    } else {
        ((VirtualKSelector*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseKeyReleaseEvent(KSelector* self, QKeyEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_KeyReleaseEvent_IsBase(true);
        vkselector->keyReleaseEvent(event);
    } else {
        ((VirtualKSelector*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnKeyReleaseEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_FocusInEvent(KSelector* self, QFocusEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->focusInEvent(event);
    } else {
        ((VirtualKSelector*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseFocusInEvent(KSelector* self, QFocusEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusInEvent_IsBase(true);
        vkselector->focusInEvent(event);
    } else {
        ((VirtualKSelector*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusInEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusInEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_FocusOutEvent(KSelector* self, QFocusEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->focusOutEvent(event);
    } else {
        ((VirtualKSelector*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseFocusOutEvent(KSelector* self, QFocusEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusOutEvent_IsBase(true);
        vkselector->focusOutEvent(event);
    } else {
        ((VirtualKSelector*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusOutEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusOutEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_EnterEvent(KSelector* self, QEnterEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->enterEvent(event);
    } else {
        ((VirtualKSelector*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseEnterEvent(KSelector* self, QEnterEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_EnterEvent_IsBase(true);
        vkselector->enterEvent(event);
    } else {
        ((VirtualKSelector*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnEnterEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_EnterEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_LeaveEvent(KSelector* self, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->leaveEvent(event);
    } else {
        ((VirtualKSelector*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseLeaveEvent(KSelector* self, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_LeaveEvent_IsBase(true);
        vkselector->leaveEvent(event);
    } else {
        ((VirtualKSelector*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnLeaveEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_LeaveEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_MoveEvent(KSelector* self, QMoveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->moveEvent(event);
    } else {
        ((VirtualKSelector*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseMoveEvent(KSelector* self, QMoveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MoveEvent_IsBase(true);
        vkselector->moveEvent(event);
    } else {
        ((VirtualKSelector*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMoveEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_MoveEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ResizeEvent(KSelector* self, QResizeEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->resizeEvent(event);
    } else {
        ((VirtualKSelector*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseResizeEvent(KSelector* self, QResizeEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ResizeEvent_IsBase(true);
        vkselector->resizeEvent(event);
    } else {
        ((VirtualKSelector*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnResizeEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ResizeEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_CloseEvent(KSelector* self, QCloseEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->closeEvent(event);
    } else {
        ((VirtualKSelector*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseCloseEvent(KSelector* self, QCloseEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_CloseEvent_IsBase(true);
        vkselector->closeEvent(event);
    } else {
        ((VirtualKSelector*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnCloseEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_CloseEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ContextMenuEvent(KSelector* self, QContextMenuEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->contextMenuEvent(event);
    } else {
        ((VirtualKSelector*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseContextMenuEvent(KSelector* self, QContextMenuEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ContextMenuEvent_IsBase(true);
        vkselector->contextMenuEvent(event);
    } else {
        ((VirtualKSelector*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnContextMenuEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ContextMenuEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_TabletEvent(KSelector* self, QTabletEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->tabletEvent(event);
    } else {
        ((VirtualKSelector*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseTabletEvent(KSelector* self, QTabletEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_TabletEvent_IsBase(true);
        vkselector->tabletEvent(event);
    } else {
        ((VirtualKSelector*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnTabletEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_TabletEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ActionEvent(KSelector* self, QActionEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->actionEvent(event);
    } else {
        ((VirtualKSelector*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseActionEvent(KSelector* self, QActionEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ActionEvent_IsBase(true);
        vkselector->actionEvent(event);
    } else {
        ((VirtualKSelector*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnActionEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ActionEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_DragEnterEvent(KSelector* self, QDragEnterEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->dragEnterEvent(event);
    } else {
        ((VirtualKSelector*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseDragEnterEvent(KSelector* self, QDragEnterEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DragEnterEvent_IsBase(true);
        vkselector->dragEnterEvent(event);
    } else {
        ((VirtualKSelector*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDragEnterEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DragEnterEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_DragMoveEvent(KSelector* self, QDragMoveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->dragMoveEvent(event);
    } else {
        ((VirtualKSelector*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseDragMoveEvent(KSelector* self, QDragMoveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DragMoveEvent_IsBase(true);
        vkselector->dragMoveEvent(event);
    } else {
        ((VirtualKSelector*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDragMoveEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DragMoveEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_DragLeaveEvent(KSelector* self, QDragLeaveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->dragLeaveEvent(event);
    } else {
        ((VirtualKSelector*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseDragLeaveEvent(KSelector* self, QDragLeaveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DragLeaveEvent_IsBase(true);
        vkselector->dragLeaveEvent(event);
    } else {
        ((VirtualKSelector*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDragLeaveEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DragLeaveEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_DropEvent(KSelector* self, QDropEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->dropEvent(event);
    } else {
        ((VirtualKSelector*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseDropEvent(KSelector* self, QDropEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DropEvent_IsBase(true);
        vkselector->dropEvent(event);
    } else {
        ((VirtualKSelector*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDropEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DropEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ShowEvent(KSelector* self, QShowEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->showEvent(event);
    } else {
        ((VirtualKSelector*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseShowEvent(KSelector* self, QShowEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ShowEvent_IsBase(true);
        vkselector->showEvent(event);
    } else {
        ((VirtualKSelector*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnShowEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ShowEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_HideEvent(KSelector* self, QHideEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->hideEvent(event);
    } else {
        ((VirtualKSelector*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseHideEvent(KSelector* self, QHideEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_HideEvent_IsBase(true);
        vkselector->hideEvent(event);
    } else {
        ((VirtualKSelector*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnHideEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_HideEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_NativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KSelector_QBaseNativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_NativeEvent_IsBase(true);
        return vkselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnNativeEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_NativeEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelector_Metric(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KSelector_QBaseMetric(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Metric_IsBase(true);
        return vkselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMetric(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Metric_Callback(reinterpret_cast<VirtualKSelector::KSelector_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_InitPainter(const KSelector* self, QPainter* painter) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->initPainter(painter);
    } else {
        ((VirtualKSelector*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KSelector_QBaseInitPainter(const KSelector* self, QPainter* painter) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_InitPainter_IsBase(true);
        vkselector->initPainter(painter);
    } else {
        ((VirtualKSelector*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnInitPainter(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_InitPainter_Callback(reinterpret_cast<VirtualKSelector::KSelector_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KSelector_Redirected(const KSelector* self, QPoint* offset) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->redirected(offset);
    } else {
        return ((VirtualKSelector*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KSelector_QBaseRedirected(const KSelector* self, QPoint* offset) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Redirected_IsBase(true);
        return vkselector->redirected(offset);
    } else {
        return ((VirtualKSelector*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnRedirected(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Redirected_Callback(reinterpret_cast<VirtualKSelector::KSelector_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KSelector_SharedPainter(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->sharedPainter();
    } else {
        return ((VirtualKSelector*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KSelector_QBaseSharedPainter(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SharedPainter_IsBase(true);
        return vkselector->sharedPainter();
    } else {
        return ((VirtualKSelector*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSharedPainter(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SharedPainter_Callback(reinterpret_cast<VirtualKSelector::KSelector_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_InputMethodEvent(KSelector* self, QInputMethodEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->inputMethodEvent(param1);
    } else {
        ((VirtualKSelector*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KSelector_QBaseInputMethodEvent(KSelector* self, QInputMethodEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_InputMethodEvent_IsBase(true);
        vkselector->inputMethodEvent(param1);
    } else {
        ((VirtualKSelector*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnInputMethodEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_InputMethodEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KSelector_InputMethodQuery(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return new QVariant(vkselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KSelector_QBaseInputMethodQuery(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_InputMethodQuery_IsBase(true);
        return new QVariant(vkselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnInputMethodQuery(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_InputMethodQuery_Callback(reinterpret_cast<VirtualKSelector::KSelector_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_FocusNextPrevChild(KSelector* self, bool next) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKSelector*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KSelector_QBaseFocusNextPrevChild(KSelector* self, bool next) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusNextPrevChild_IsBase(true);
        return vkselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKSelector*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusNextPrevChild(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKSelector::KSelector_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_EventFilter(KSelector* self, QObject* watched, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->eventFilter(watched, event);
    } else {
        return self->KSelector::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSelector_QBaseEventFilter(KSelector* self, QObject* watched, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_EventFilter_IsBase(true);
        return vkselector->eventFilter(watched, event);
    } else {
        return self->KSelector::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnEventFilter(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_EventFilter_Callback(reinterpret_cast<VirtualKSelector::KSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ChildEvent(KSelector* self, QChildEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->childEvent(event);
    } else {
        ((VirtualKSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseChildEvent(KSelector* self, QChildEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ChildEvent_IsBase(true);
        vkselector->childEvent(event);
    } else {
        ((VirtualKSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnChildEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ChildEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_CustomEvent(KSelector* self, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->customEvent(event);
    } else {
        ((VirtualKSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSelector_QBaseCustomEvent(KSelector* self, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_CustomEvent_IsBase(true);
        vkselector->customEvent(event);
    } else {
        ((VirtualKSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnCustomEvent(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_CustomEvent_Callback(reinterpret_cast<VirtualKSelector::KSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_ConnectNotify(KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->connectNotify(*signal);
    } else {
        ((VirtualKSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSelector_QBaseConnectNotify(KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ConnectNotify_IsBase(true);
        vkselector->connectNotify(*signal);
    } else {
        ((VirtualKSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnConnectNotify(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_ConnectNotify_Callback(reinterpret_cast<VirtualKSelector::KSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_DisconnectNotify(KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->disconnectNotify(*signal);
    } else {
        ((VirtualKSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSelector_QBaseDisconnectNotify(KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DisconnectNotify_IsBase(true);
        vkselector->disconnectNotify(*signal);
    } else {
        ((VirtualKSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDisconnectNotify(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualKSelector::KSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_SetRepeatAction(KSelector* self, int action) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualKSelector*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void KSelector_QBaseSetRepeatAction(KSelector* self, int action) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SetRepeatAction_IsBase(true);
        vkselector->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualKSelector*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSetRepeatAction(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SetRepeatAction_Callback(reinterpret_cast<VirtualKSelector::KSelector_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelector_RepeatAction(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return static_cast<int>(vkselector->repeatAction());
    } else {
        return static_cast<int>(((VirtualKSelector*)self)->repeatAction());
    }
}

// Base class handler implementation
int KSelector_QBaseRepeatAction(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_RepeatAction_IsBase(true);
        return static_cast<int>(vkselector->repeatAction());
    } else {
        return static_cast<int>(((VirtualKSelector*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnRepeatAction(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_RepeatAction_Callback(reinterpret_cast<VirtualKSelector::KSelector_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_UpdateMicroFocus(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->updateMicroFocus();
    } else {
        ((VirtualKSelector*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KSelector_QBaseUpdateMicroFocus(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_UpdateMicroFocus_IsBase(true);
        vkselector->updateMicroFocus();
    } else {
        ((VirtualKSelector*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnUpdateMicroFocus(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKSelector::KSelector_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_Create(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->create();
    } else {
        ((VirtualKSelector*)self)->create();
    }
}

// Base class handler implementation
void KSelector_QBaseCreate(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Create_IsBase(true);
        vkselector->create();
    } else {
        ((VirtualKSelector*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnCreate(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Create_Callback(reinterpret_cast<VirtualKSelector::KSelector_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelector_Destroy(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->destroy();
    } else {
        ((VirtualKSelector*)self)->destroy();
    }
}

// Base class handler implementation
void KSelector_QBaseDestroy(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Destroy_IsBase(true);
        vkselector->destroy();
    } else {
        ((VirtualKSelector*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDestroy(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Destroy_Callback(reinterpret_cast<VirtualKSelector::KSelector_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_FocusNextChild(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->focusNextChild();
    } else {
        return ((VirtualKSelector*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KSelector_QBaseFocusNextChild(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusNextChild_IsBase(true);
        return vkselector->focusNextChild();
    } else {
        return ((VirtualKSelector*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusNextChild(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusNextChild_Callback(reinterpret_cast<VirtualKSelector::KSelector_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_FocusPreviousChild(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->focusPreviousChild();
    } else {
        return ((VirtualKSelector*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KSelector_QBaseFocusPreviousChild(KSelector* self) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusPreviousChild_IsBase(true);
        return vkselector->focusPreviousChild();
    } else {
        return ((VirtualKSelector*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusPreviousChild(KSelector* self, intptr_t slot) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_FocusPreviousChild_Callback(reinterpret_cast<VirtualKSelector::KSelector_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSelector_Sender(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->sender();
    } else {
        return ((VirtualKSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSelector_QBaseSender(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Sender_IsBase(true);
        return vkselector->sender();
    } else {
        return ((VirtualKSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSender(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Sender_Callback(reinterpret_cast<VirtualKSelector::KSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelector_SenderSignalIndex(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->senderSignalIndex();
    } else {
        return ((VirtualKSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSelector_QBaseSenderSignalIndex(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SenderSignalIndex_IsBase(true);
        return vkselector->senderSignalIndex();
    } else {
        return ((VirtualKSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSenderSignalIndex(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSelector::KSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelector_Receivers(const KSelector* self, const char* signal) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->receivers(signal);
    } else {
        return ((VirtualKSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSelector_QBaseReceivers(const KSelector* self, const char* signal) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Receivers_IsBase(true);
        return vkselector->receivers(signal);
    } else {
        return ((VirtualKSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnReceivers(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_Receivers_Callback(reinterpret_cast<VirtualKSelector::KSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelector_IsSignalConnected(const KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSelector_QBaseIsSignalConnected(const KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_IsSignalConnected_IsBase(true);
        return vkselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnIsSignalConnected(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualKSelector::KSelector_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KSelector_GetDecodedMetricF(const KSelector* self, int metricA, int metricB) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        return vkselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KSelector_QBaseGetDecodedMetricF(const KSelector* self, int metricA, int metricB) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_GetDecodedMetricF_IsBase(true);
        return vkselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnGetDecodedMetricF(const KSelector* self, intptr_t slot) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector && vkselector->isVirtualKSelector) {
        vkselector->setKSelector_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKSelector::KSelector_GetDecodedMetricF_Callback>(slot));
    }
}

void KSelector_Delete(KSelector* self) {
    delete self;
}

KGradientSelector* KGradientSelector_new(QWidget* parent) {
    return new VirtualKGradientSelector(parent);
}

KGradientSelector* KGradientSelector_new2() {
    return new VirtualKGradientSelector();
}

KGradientSelector* KGradientSelector_new3(int o) {
    return new VirtualKGradientSelector(static_cast<Qt::Orientation>(o));
}

KGradientSelector* KGradientSelector_new4(int o, QWidget* parent) {
    return new VirtualKGradientSelector(static_cast<Qt::Orientation>(o), parent);
}

QMetaObject* KGradientSelector_MetaObject(const KGradientSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* KGradientSelector_Metacast(KGradientSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KGradientSelector_Metacall(KGradientSelector* self, int param1, int param2, void** param3) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKGradientSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KGradientSelector_OnMetacall(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Metacall_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KGradientSelector_QBaseMetacall(KGradientSelector* self, int param1, int param2, void** param3) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Metacall_IsBase(true);
        return vkgradientselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKGradientSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KGradientSelector_Tr(const char* s) {
    QString _ret = KGradientSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGradientSelector_SetStops(KGradientSelector* self, const libqt_list /* of libqt_pair  tuple of double and QColor*  */ stops) {
    QList<QPair<double, QColor>> stops_QList;
    stops_QList.reserve(stops.len);
    libqt_pair /* tuple of double and QColor* */* stops_arr = static_cast<libqt_pair /* tuple of double and QColor* */*>(stops.data);
    for (size_t i = 0; i < stops.len; ++i) {
        QPair<double, QColor> stops_arr_i_QPair;
        double* stops_arr_i_first = static_cast<double*>(stops_arr[i].first);
        QColor** stops_arr_i_second = static_cast<QColor**>(stops_arr[i].second);
        stops_arr_i_QPair.first = static_cast<double>(stops_arr_i_first[0]);
        stops_arr_i_QPair.second = *(stops_arr_i_second[0]);
        stops_QList.push_back(stops_arr_i_QPair);
    }
    self->setStops(stops_QList);
}

libqt_list /* of libqt_pair  tuple of double and QColor*  */ KGradientSelector_Stops(const KGradientSelector* self) {
    QList<QPair<double, QColor>> _ret = self->stops();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and QColor* */* _arr = static_cast<libqt_pair /* tuple of double and QColor* */*>(malloc(sizeof(libqt_pair /* tuple of double and QColor* */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QColor> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        QColor** _lv_second = static_cast<QColor**>(malloc(sizeof(QColor*)));
        *_lv_first = _lv_ret.first;
        *_lv_second = new QColor(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KGradientSelector_SetColors(KGradientSelector* self, const QColor* col1, const QColor* col2) {
    self->setColors(*col1, *col2);
}

void KGradientSelector_SetText(KGradientSelector* self, const libqt_string t1, const libqt_string t2) {
    QString t1_QString = QString::fromUtf8(t1.data, t1.len);
    QString t2_QString = QString::fromUtf8(t2.data, t2.len);
    self->setText(t1_QString, t2_QString);
}

void KGradientSelector_SetFirstColor(KGradientSelector* self, const QColor* col) {
    self->setFirstColor(*col);
}

void KGradientSelector_SetSecondColor(KGradientSelector* self, const QColor* col) {
    self->setSecondColor(*col);
}

void KGradientSelector_SetFirstText(KGradientSelector* self, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    self->setFirstText(t_QString);
}

void KGradientSelector_SetSecondText(KGradientSelector* self, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    self->setSecondText(t_QString);
}

QColor* KGradientSelector_FirstColor(const KGradientSelector* self) {
    return new QColor(self->firstColor());
}

QColor* KGradientSelector_SecondColor(const KGradientSelector* self) {
    return new QColor(self->secondColor());
}

libqt_string KGradientSelector_FirstText(const KGradientSelector* self) {
    QString _ret = self->firstText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGradientSelector_SecondText(const KGradientSelector* self) {
    QString _ret = self->secondText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGradientSelector_DrawContents(KGradientSelector* self, QPainter* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->drawContents(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KGradientSelector_OnDrawContents(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DrawContents_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DrawContents_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KGradientSelector_QBaseDrawContents(KGradientSelector* self, QPainter* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DrawContents_IsBase(true);
        vkgradientselector->drawContents(param1);
    }
}

QSize* KGradientSelector_MinimumSize(const KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<const VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return new QSize(vkgradientselector->minimumSize());
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KGradientSelector_OnMinimumSize(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MinimumSize_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MinimumSize_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* KGradientSelector_QBaseMinimumSize(const KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<const VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MinimumSize_IsBase(true);
        return new QSize(vkgradientselector->minimumSize());
    }
    return {};
}

libqt_string KGradientSelector_Tr2(const char* s, const char* c) {
    QString _ret = KGradientSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGradientSelector_Tr3(const char* s, const char* c, int n) {
    QString _ret = KGradientSelector::tr(s, c, static_cast<int>(n));
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
void KGradientSelector_DrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->drawArrow(painter, *pos);
    } else {
        ((VirtualKGradientSelector*)self)->drawArrow(painter, *pos);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DrawArrow_IsBase(true);
        vkgradientselector->drawArrow(painter, *pos);
    } else {
        ((VirtualKGradientSelector*)self)->drawArrow(painter, *pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDrawArrow(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DrawArrow_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DrawArrow_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_PaintEvent(KGradientSelector* self, QPaintEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->paintEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KGradientSelector_QBasePaintEvent(KGradientSelector* self, QPaintEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_PaintEvent_IsBase(true);
        vkgradientselector->paintEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnPaintEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_PaintEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_MousePressEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->mousePressEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseMousePressEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MousePressEvent_IsBase(true);
        vkgradientselector->mousePressEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMousePressEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MousePressEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_MouseMoveEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->mouseMoveEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseMouseMoveEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MouseMoveEvent_IsBase(true);
        vkgradientselector->mouseMoveEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMouseMoveEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MouseMoveEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_MouseReleaseEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->mouseReleaseEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseMouseReleaseEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MouseReleaseEvent_IsBase(true);
        vkgradientselector->mouseReleaseEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMouseReleaseEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_WheelEvent(KGradientSelector* self, QWheelEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->wheelEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseWheelEvent(KGradientSelector* self, QWheelEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_WheelEvent_IsBase(true);
        vkgradientselector->wheelEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnWheelEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_WheelEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_Event(KGradientSelector* self, QEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->event(e);
    } else {
        return ((VirtualKGradientSelector*)self)->event(e);
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseEvent(KGradientSelector* self, QEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Event_IsBase(true);
        return vkgradientselector->event(e);
    } else {
        return ((VirtualKGradientSelector*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Event_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_SliderChange(KGradientSelector* self, int change) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->sliderChange(static_cast<VirtualKGradientSelector::SliderChange>(change));
    } else {
        ((VirtualKGradientSelector*)self)->sliderChange(static_cast<VirtualKGradientSelector::SliderChange>(change));
    }
}

// Base class handler implementation
void KGradientSelector_QBaseSliderChange(KGradientSelector* self, int change) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SliderChange_IsBase(true);
        vkgradientselector->sliderChange(static_cast<VirtualKGradientSelector::SliderChange>(change));
    } else {
        ((VirtualKGradientSelector*)self)->sliderChange(static_cast<VirtualKGradientSelector::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSliderChange(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SliderChange_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_KeyPressEvent(KGradientSelector* self, QKeyEvent* ev) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->keyPressEvent(ev);
    } else {
        ((VirtualKGradientSelector*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseKeyPressEvent(KGradientSelector* self, QKeyEvent* ev) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_KeyPressEvent_IsBase(true);
        vkgradientselector->keyPressEvent(ev);
    } else {
        ((VirtualKGradientSelector*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnKeyPressEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_KeyPressEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_TimerEvent(KGradientSelector* self, QTimerEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->timerEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseTimerEvent(KGradientSelector* self, QTimerEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_TimerEvent_IsBase(true);
        vkgradientselector->timerEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnTimerEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_TimerEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ChangeEvent(KGradientSelector* self, QEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->changeEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseChangeEvent(KGradientSelector* self, QEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ChangeEvent_IsBase(true);
        vkgradientselector->changeEvent(e);
    } else {
        ((VirtualKGradientSelector*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnChangeEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ChangeEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KGradientSelector_DevType(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->devType();
    } else {
        return self->KGradientSelector::devType();
    }
}

// Base class handler implementation
int KGradientSelector_QBaseDevType(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DevType_IsBase(true);
        return vkgradientselector->devType();
    } else {
        return self->KGradientSelector::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDevType(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DevType_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_SetVisible(KGradientSelector* self, bool visible) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setVisible(visible);
    } else {
        self->KGradientSelector::setVisible(visible);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseSetVisible(KGradientSelector* self, bool visible) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SetVisible_IsBase(true);
        vkgradientselector->setVisible(visible);
    } else {
        self->KGradientSelector::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSetVisible(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SetVisible_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KGradientSelector_SizeHint(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return new QSize(vkgradientselector->sizeHint());
    } else {
        return new QSize(((VirtualKGradientSelector*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KGradientSelector_QBaseSizeHint(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SizeHint_IsBase(true);
        return new QSize(vkgradientselector->sizeHint());
    } else {
        return new QSize(((VirtualKGradientSelector*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSizeHint(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SizeHint_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KGradientSelector_MinimumSizeHint(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return new QSize(vkgradientselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKGradientSelector*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KGradientSelector_QBaseMinimumSizeHint(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MinimumSizeHint_IsBase(true);
        return new QSize(vkgradientselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKGradientSelector*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMinimumSizeHint(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MinimumSizeHint_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KGradientSelector_HeightForWidth(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KGradientSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KGradientSelector_QBaseHeightForWidth(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_HeightForWidth_IsBase(true);
        return vkgradientselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KGradientSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnHeightForWidth(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_HeightForWidth_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_HasHeightForWidth(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->hasHeightForWidth();
    } else {
        return self->KGradientSelector::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseHasHeightForWidth(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_HasHeightForWidth_IsBase(true);
        return vkgradientselector->hasHeightForWidth();
    } else {
        return self->KGradientSelector::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnHasHeightForWidth(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_HasHeightForWidth_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KGradientSelector_PaintEngine(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->paintEngine();
    } else {
        return self->KGradientSelector::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KGradientSelector_QBasePaintEngine(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_PaintEngine_IsBase(true);
        return vkgradientselector->paintEngine();
    } else {
        return self->KGradientSelector::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnPaintEngine(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_PaintEngine_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_MouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseMouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MouseDoubleClickEvent_IsBase(true);
        vkgradientselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMouseDoubleClickEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_KeyReleaseEvent(KGradientSelector* self, QKeyEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->keyReleaseEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseKeyReleaseEvent(KGradientSelector* self, QKeyEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_KeyReleaseEvent_IsBase(true);
        vkgradientselector->keyReleaseEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnKeyReleaseEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_FocusInEvent(KGradientSelector* self, QFocusEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->focusInEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseFocusInEvent(KGradientSelector* self, QFocusEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusInEvent_IsBase(true);
        vkgradientselector->focusInEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusInEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusInEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_FocusOutEvent(KGradientSelector* self, QFocusEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->focusOutEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseFocusOutEvent(KGradientSelector* self, QFocusEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusOutEvent_IsBase(true);
        vkgradientselector->focusOutEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusOutEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusOutEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_EnterEvent(KGradientSelector* self, QEnterEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->enterEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseEnterEvent(KGradientSelector* self, QEnterEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_EnterEvent_IsBase(true);
        vkgradientselector->enterEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnEnterEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_EnterEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_LeaveEvent(KGradientSelector* self, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->leaveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseLeaveEvent(KGradientSelector* self, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_LeaveEvent_IsBase(true);
        vkgradientselector->leaveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnLeaveEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_LeaveEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_MoveEvent(KGradientSelector* self, QMoveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->moveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseMoveEvent(KGradientSelector* self, QMoveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MoveEvent_IsBase(true);
        vkgradientselector->moveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMoveEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_MoveEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ResizeEvent(KGradientSelector* self, QResizeEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->resizeEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseResizeEvent(KGradientSelector* self, QResizeEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ResizeEvent_IsBase(true);
        vkgradientselector->resizeEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnResizeEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ResizeEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_CloseEvent(KGradientSelector* self, QCloseEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->closeEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseCloseEvent(KGradientSelector* self, QCloseEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_CloseEvent_IsBase(true);
        vkgradientselector->closeEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnCloseEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_CloseEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->contextMenuEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ContextMenuEvent_IsBase(true);
        vkgradientselector->contextMenuEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnContextMenuEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ContextMenuEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_TabletEvent(KGradientSelector* self, QTabletEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->tabletEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseTabletEvent(KGradientSelector* self, QTabletEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_TabletEvent_IsBase(true);
        vkgradientselector->tabletEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnTabletEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_TabletEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ActionEvent(KGradientSelector* self, QActionEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->actionEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseActionEvent(KGradientSelector* self, QActionEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ActionEvent_IsBase(true);
        vkgradientselector->actionEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnActionEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ActionEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_DragEnterEvent(KGradientSelector* self, QDragEnterEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->dragEnterEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDragEnterEvent(KGradientSelector* self, QDragEnterEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DragEnterEvent_IsBase(true);
        vkgradientselector->dragEnterEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDragEnterEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DragEnterEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_DragMoveEvent(KGradientSelector* self, QDragMoveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->dragMoveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDragMoveEvent(KGradientSelector* self, QDragMoveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DragMoveEvent_IsBase(true);
        vkgradientselector->dragMoveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDragMoveEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DragMoveEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_DragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->dragLeaveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DragLeaveEvent_IsBase(true);
        vkgradientselector->dragLeaveEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDragLeaveEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DragLeaveEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_DropEvent(KGradientSelector* self, QDropEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->dropEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDropEvent(KGradientSelector* self, QDropEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DropEvent_IsBase(true);
        vkgradientselector->dropEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDropEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DropEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ShowEvent(KGradientSelector* self, QShowEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->showEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseShowEvent(KGradientSelector* self, QShowEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ShowEvent_IsBase(true);
        vkgradientselector->showEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnShowEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ShowEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_HideEvent(KGradientSelector* self, QHideEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->hideEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseHideEvent(KGradientSelector* self, QHideEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_HideEvent_IsBase(true);
        vkgradientselector->hideEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnHideEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_HideEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_NativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKGradientSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseNativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_NativeEvent_IsBase(true);
        return vkgradientselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKGradientSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnNativeEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_NativeEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KGradientSelector_Metric(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKGradientSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KGradientSelector_QBaseMetric(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Metric_IsBase(true);
        return vkgradientselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKGradientSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMetric(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Metric_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_InitPainter(const KGradientSelector* self, QPainter* painter) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->initPainter(painter);
    } else {
        ((VirtualKGradientSelector*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseInitPainter(const KGradientSelector* self, QPainter* painter) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_InitPainter_IsBase(true);
        vkgradientselector->initPainter(painter);
    } else {
        ((VirtualKGradientSelector*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnInitPainter(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_InitPainter_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KGradientSelector_Redirected(const KGradientSelector* self, QPoint* offset) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->redirected(offset);
    } else {
        return ((VirtualKGradientSelector*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KGradientSelector_QBaseRedirected(const KGradientSelector* self, QPoint* offset) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Redirected_IsBase(true);
        return vkgradientselector->redirected(offset);
    } else {
        return ((VirtualKGradientSelector*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnRedirected(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Redirected_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KGradientSelector_SharedPainter(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->sharedPainter();
    } else {
        return ((VirtualKGradientSelector*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KGradientSelector_QBaseSharedPainter(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SharedPainter_IsBase(true);
        return vkgradientselector->sharedPainter();
    } else {
        return ((VirtualKGradientSelector*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSharedPainter(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SharedPainter_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_InputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->inputMethodEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseInputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_InputMethodEvent_IsBase(true);
        vkgradientselector->inputMethodEvent(param1);
    } else {
        ((VirtualKGradientSelector*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnInputMethodEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_InputMethodEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KGradientSelector_InputMethodQuery(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return new QVariant(vkgradientselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKGradientSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KGradientSelector_QBaseInputMethodQuery(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_InputMethodQuery_IsBase(true);
        return new QVariant(vkgradientselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKGradientSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnInputMethodQuery(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_InputMethodQuery_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_FocusNextPrevChild(KGradientSelector* self, bool next) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKGradientSelector*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseFocusNextPrevChild(KGradientSelector* self, bool next) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusNextPrevChild_IsBase(true);
        return vkgradientselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKGradientSelector*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusNextPrevChild(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_EventFilter(KGradientSelector* self, QObject* watched, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->eventFilter(watched, event);
    } else {
        return self->KGradientSelector::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseEventFilter(KGradientSelector* self, QObject* watched, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_EventFilter_IsBase(true);
        return vkgradientselector->eventFilter(watched, event);
    } else {
        return self->KGradientSelector::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnEventFilter(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_EventFilter_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ChildEvent(KGradientSelector* self, QChildEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->childEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseChildEvent(KGradientSelector* self, QChildEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ChildEvent_IsBase(true);
        vkgradientselector->childEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnChildEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ChildEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_CustomEvent(KGradientSelector* self, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->customEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseCustomEvent(KGradientSelector* self, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_CustomEvent_IsBase(true);
        vkgradientselector->customEvent(event);
    } else {
        ((VirtualKGradientSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnCustomEvent(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_CustomEvent_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_ConnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->connectNotify(*signal);
    } else {
        ((VirtualKGradientSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseConnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ConnectNotify_IsBase(true);
        vkgradientselector->connectNotify(*signal);
    } else {
        ((VirtualKGradientSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnConnectNotify(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_ConnectNotify_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_DisconnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->disconnectNotify(*signal);
    } else {
        ((VirtualKGradientSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDisconnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DisconnectNotify_IsBase(true);
        vkgradientselector->disconnectNotify(*signal);
    } else {
        ((VirtualKGradientSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDisconnectNotify(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_SetRepeatAction(KGradientSelector* self, int action) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualKGradientSelector*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void KGradientSelector_QBaseSetRepeatAction(KGradientSelector* self, int action) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SetRepeatAction_IsBase(true);
        vkgradientselector->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualKGradientSelector*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSetRepeatAction(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SetRepeatAction_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int KGradientSelector_RepeatAction(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return static_cast<int>(vkgradientselector->repeatAction());
    } else {
        return static_cast<int>(((VirtualKGradientSelector*)self)->repeatAction());
    }
}

// Base class handler implementation
int KGradientSelector_QBaseRepeatAction(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_RepeatAction_IsBase(true);
        return static_cast<int>(vkgradientselector->repeatAction());
    } else {
        return static_cast<int>(((VirtualKGradientSelector*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnRepeatAction(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_RepeatAction_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_UpdateMicroFocus(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->updateMicroFocus();
    } else {
        ((VirtualKGradientSelector*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KGradientSelector_QBaseUpdateMicroFocus(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_UpdateMicroFocus_IsBase(true);
        vkgradientselector->updateMicroFocus();
    } else {
        ((VirtualKGradientSelector*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnUpdateMicroFocus(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_Create(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->create();
    } else {
        ((VirtualKGradientSelector*)self)->create();
    }
}

// Base class handler implementation
void KGradientSelector_QBaseCreate(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Create_IsBase(true);
        vkgradientselector->create();
    } else {
        ((VirtualKGradientSelector*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnCreate(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Create_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KGradientSelector_Destroy(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->destroy();
    } else {
        ((VirtualKGradientSelector*)self)->destroy();
    }
}

// Base class handler implementation
void KGradientSelector_QBaseDestroy(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Destroy_IsBase(true);
        vkgradientselector->destroy();
    } else {
        ((VirtualKGradientSelector*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDestroy(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Destroy_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_FocusNextChild(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->focusNextChild();
    } else {
        return ((VirtualKGradientSelector*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseFocusNextChild(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusNextChild_IsBase(true);
        return vkgradientselector->focusNextChild();
    } else {
        return ((VirtualKGradientSelector*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusNextChild(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusNextChild_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_FocusPreviousChild(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->focusPreviousChild();
    } else {
        return ((VirtualKGradientSelector*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseFocusPreviousChild(KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusPreviousChild_IsBase(true);
        return vkgradientselector->focusPreviousChild();
    } else {
        return ((VirtualKGradientSelector*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusPreviousChild(KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_FocusPreviousChild_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KGradientSelector_Sender(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->sender();
    } else {
        return ((VirtualKGradientSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* KGradientSelector_QBaseSender(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Sender_IsBase(true);
        return vkgradientselector->sender();
    } else {
        return ((VirtualKGradientSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSender(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Sender_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KGradientSelector_SenderSignalIndex(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->senderSignalIndex();
    } else {
        return ((VirtualKGradientSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KGradientSelector_QBaseSenderSignalIndex(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SenderSignalIndex_IsBase(true);
        return vkgradientselector->senderSignalIndex();
    } else {
        return ((VirtualKGradientSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSenderSignalIndex(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KGradientSelector_Receivers(const KGradientSelector* self, const char* signal) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->receivers(signal);
    } else {
        return ((VirtualKGradientSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KGradientSelector_QBaseReceivers(const KGradientSelector* self, const char* signal) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Receivers_IsBase(true);
        return vkgradientselector->receivers(signal);
    } else {
        return ((VirtualKGradientSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnReceivers(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_Receivers_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGradientSelector_IsSignalConnected(const KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKGradientSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KGradientSelector_QBaseIsSignalConnected(const KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_IsSignalConnected_IsBase(true);
        return vkgradientselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKGradientSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnIsSignalConnected(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KGradientSelector_GetDecodedMetricF(const KGradientSelector* self, int metricA, int metricB) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        return vkgradientselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKGradientSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KGradientSelector_QBaseGetDecodedMetricF(const KGradientSelector* self, int metricA, int metricB) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_GetDecodedMetricF_IsBase(true);
        return vkgradientselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKGradientSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnGetDecodedMetricF(const KGradientSelector* self, intptr_t slot) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector && vkgradientselector->isVirtualKGradientSelector) {
        vkgradientselector->setKGradientSelector_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKGradientSelector::KGradientSelector_GetDecodedMetricF_Callback>(slot));
    }
}

void KGradientSelector_Delete(KGradientSelector* self) {
    delete self;
}
