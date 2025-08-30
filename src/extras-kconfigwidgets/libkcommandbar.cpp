#include <KCommandBar>
#define WORKAROUND_INNER_CLASS_DEFINITION_KCommandBar__ActionGroup
#include <QAction>
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
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcommandbar.h>
#include "libkcommandbar.h"
#include "libkcommandbar.hxx"

KCommandBar* KCommandBar_new(QWidget* parent) {
    return new VirtualKCommandBar(parent);
}

QMetaObject* KCommandBar_MetaObject(const KCommandBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCommandBar_Metacast(KCommandBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCommandBar_Metacall(KCommandBar* self, int param1, int param2, void** param3) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCommandBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCommandBar_Tr(const char* s) {
    QString _ret = KCommandBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCommandBar_SetActions(KCommandBar* self, const libqt_list /* of KCommandBar__ActionGroup* */ actions) {
    QList<KCommandBar::ActionGroup> actions_QList;
    actions_QList.reserve(actions.len);
    KCommandBar__ActionGroup** actions_arr = static_cast<KCommandBar__ActionGroup**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(*(actions_arr[i]));
    }
    self->setActions(actions_QList);
}

void KCommandBar_Show(KCommandBar* self) {
    self->show();
}

bool KCommandBar_EventFilter(KCommandBar* self, QObject* obj, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->eventFilter(obj, event);
    }
    return {};
}

libqt_string KCommandBar_Tr2(const char* s, const char* c) {
    QString _ret = KCommandBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCommandBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCommandBar::tr(s, c, static_cast<int>(n));
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
int KCommandBar_QBaseMetacall(KCommandBar* self, int param1, int param2, void** param3) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Metacall_IsBase(true);
        return vkcommandbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCommandBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMetacall(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Metacall_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KCommandBar_QBaseEventFilter(KCommandBar* self, QObject* obj, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_EventFilter_IsBase(true);
        return vkcommandbar->eventFilter(obj, event);
    } else {
        return ((VirtualKCommandBar*)self)->eventFilter(obj, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnEventFilter(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_EventFilter_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCommandBar_SizeHint(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return new QSize(vkcommandbar->sizeHint());
    } else {
        return new QSize(((VirtualKCommandBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KCommandBar_QBaseSizeHint(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SizeHint_IsBase(true);
        return new QSize(vkcommandbar->sizeHint());
    } else {
        return new QSize(((VirtualKCommandBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSizeHint(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SizeHint_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_Event(KCommandBar* self, QEvent* e) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->event(e);
    } else {
        return ((VirtualKCommandBar*)self)->event(e);
    }
}

// Base class handler implementation
bool KCommandBar_QBaseEvent(KCommandBar* self, QEvent* e) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Event_IsBase(true);
        return vkcommandbar->event(e);
    } else {
        return ((VirtualKCommandBar*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Event_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_PaintEvent(KCommandBar* self, QPaintEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->paintEvent(param1);
    } else {
        ((VirtualKCommandBar*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KCommandBar_QBasePaintEvent(KCommandBar* self, QPaintEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_PaintEvent_IsBase(true);
        vkcommandbar->paintEvent(param1);
    } else {
        ((VirtualKCommandBar*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnPaintEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_PaintEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ChangeEvent(KCommandBar* self, QEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->changeEvent(param1);
    } else {
        ((VirtualKCommandBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KCommandBar_QBaseChangeEvent(KCommandBar* self, QEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ChangeEvent_IsBase(true);
        vkcommandbar->changeEvent(param1);
    } else {
        ((VirtualKCommandBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnChangeEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ChangeEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_InitStyleOption(const KCommandBar* self, QStyleOptionFrame* option) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->initStyleOption(option);
    } else {
        ((VirtualKCommandBar*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KCommandBar_QBaseInitStyleOption(const KCommandBar* self, QStyleOptionFrame* option) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InitStyleOption_IsBase(true);
        vkcommandbar->initStyleOption(option);
    } else {
        ((VirtualKCommandBar*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInitStyleOption(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InitStyleOption_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KCommandBar_DevType(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->devType();
    } else {
        return self->KCommandBar::devType();
    }
}

// Base class handler implementation
int KCommandBar_QBaseDevType(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DevType_IsBase(true);
        return vkcommandbar->devType();
    } else {
        return self->KCommandBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDevType(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DevType_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_SetVisible(KCommandBar* self, bool visible) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setVisible(visible);
    } else {
        self->KCommandBar::setVisible(visible);
    }
}

// Base class handler implementation
void KCommandBar_QBaseSetVisible(KCommandBar* self, bool visible) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SetVisible_IsBase(true);
        vkcommandbar->setVisible(visible);
    } else {
        self->KCommandBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSetVisible(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SetVisible_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCommandBar_MinimumSizeHint(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return new QSize(vkcommandbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCommandBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KCommandBar_QBaseMinimumSizeHint(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MinimumSizeHint_IsBase(true);
        return new QSize(vkcommandbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCommandBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMinimumSizeHint(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KCommandBar_HeightForWidth(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCommandBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KCommandBar_QBaseHeightForWidth(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_HeightForWidth_IsBase(true);
        return vkcommandbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCommandBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnHeightForWidth(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_HeightForWidth_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_HasHeightForWidth(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->hasHeightForWidth();
    } else {
        return self->KCommandBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KCommandBar_QBaseHasHeightForWidth(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_HasHeightForWidth_IsBase(true);
        return vkcommandbar->hasHeightForWidth();
    } else {
        return self->KCommandBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnHasHeightForWidth(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KCommandBar_PaintEngine(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->paintEngine();
    } else {
        return self->KCommandBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KCommandBar_QBasePaintEngine(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_PaintEngine_IsBase(true);
        return vkcommandbar->paintEngine();
    } else {
        return self->KCommandBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnPaintEngine(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_PaintEngine_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_MousePressEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->mousePressEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseMousePressEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MousePressEvent_IsBase(true);
        vkcommandbar->mousePressEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMousePressEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MousePressEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_MouseReleaseEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->mouseReleaseEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseMouseReleaseEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MouseReleaseEvent_IsBase(true);
        vkcommandbar->mouseReleaseEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMouseReleaseEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_MouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseMouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MouseDoubleClickEvent_IsBase(true);
        vkcommandbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMouseDoubleClickEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_MouseMoveEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->mouseMoveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseMouseMoveEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MouseMoveEvent_IsBase(true);
        vkcommandbar->mouseMoveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMouseMoveEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_WheelEvent(KCommandBar* self, QWheelEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->wheelEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseWheelEvent(KCommandBar* self, QWheelEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_WheelEvent_IsBase(true);
        vkcommandbar->wheelEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnWheelEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_WheelEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_KeyPressEvent(KCommandBar* self, QKeyEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->keyPressEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseKeyPressEvent(KCommandBar* self, QKeyEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_KeyPressEvent_IsBase(true);
        vkcommandbar->keyPressEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnKeyPressEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_KeyPressEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_KeyReleaseEvent(KCommandBar* self, QKeyEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->keyReleaseEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseKeyReleaseEvent(KCommandBar* self, QKeyEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_KeyReleaseEvent_IsBase(true);
        vkcommandbar->keyReleaseEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnKeyReleaseEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_FocusInEvent(KCommandBar* self, QFocusEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->focusInEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseFocusInEvent(KCommandBar* self, QFocusEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusInEvent_IsBase(true);
        vkcommandbar->focusInEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusInEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusInEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_FocusOutEvent(KCommandBar* self, QFocusEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->focusOutEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseFocusOutEvent(KCommandBar* self, QFocusEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusOutEvent_IsBase(true);
        vkcommandbar->focusOutEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusOutEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusOutEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_EnterEvent(KCommandBar* self, QEnterEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->enterEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseEnterEvent(KCommandBar* self, QEnterEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_EnterEvent_IsBase(true);
        vkcommandbar->enterEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnEnterEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_EnterEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_LeaveEvent(KCommandBar* self, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->leaveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseLeaveEvent(KCommandBar* self, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_LeaveEvent_IsBase(true);
        vkcommandbar->leaveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnLeaveEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_LeaveEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_MoveEvent(KCommandBar* self, QMoveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->moveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseMoveEvent(KCommandBar* self, QMoveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MoveEvent_IsBase(true);
        vkcommandbar->moveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMoveEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_MoveEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ResizeEvent(KCommandBar* self, QResizeEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->resizeEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseResizeEvent(KCommandBar* self, QResizeEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ResizeEvent_IsBase(true);
        vkcommandbar->resizeEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnResizeEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ResizeEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_CloseEvent(KCommandBar* self, QCloseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->closeEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseCloseEvent(KCommandBar* self, QCloseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_CloseEvent_IsBase(true);
        vkcommandbar->closeEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnCloseEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_CloseEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ContextMenuEvent(KCommandBar* self, QContextMenuEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->contextMenuEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseContextMenuEvent(KCommandBar* self, QContextMenuEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ContextMenuEvent_IsBase(true);
        vkcommandbar->contextMenuEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnContextMenuEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_TabletEvent(KCommandBar* self, QTabletEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->tabletEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseTabletEvent(KCommandBar* self, QTabletEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_TabletEvent_IsBase(true);
        vkcommandbar->tabletEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnTabletEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_TabletEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ActionEvent(KCommandBar* self, QActionEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->actionEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseActionEvent(KCommandBar* self, QActionEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ActionEvent_IsBase(true);
        vkcommandbar->actionEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnActionEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ActionEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_DragEnterEvent(KCommandBar* self, QDragEnterEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->dragEnterEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseDragEnterEvent(KCommandBar* self, QDragEnterEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DragEnterEvent_IsBase(true);
        vkcommandbar->dragEnterEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDragEnterEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DragEnterEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_DragMoveEvent(KCommandBar* self, QDragMoveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->dragMoveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseDragMoveEvent(KCommandBar* self, QDragMoveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DragMoveEvent_IsBase(true);
        vkcommandbar->dragMoveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDragMoveEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DragMoveEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_DragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->dragLeaveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseDragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DragLeaveEvent_IsBase(true);
        vkcommandbar->dragLeaveEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDragLeaveEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_DropEvent(KCommandBar* self, QDropEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->dropEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseDropEvent(KCommandBar* self, QDropEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DropEvent_IsBase(true);
        vkcommandbar->dropEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDropEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DropEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ShowEvent(KCommandBar* self, QShowEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->showEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseShowEvent(KCommandBar* self, QShowEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ShowEvent_IsBase(true);
        vkcommandbar->showEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnShowEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ShowEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_HideEvent(KCommandBar* self, QHideEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->hideEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseHideEvent(KCommandBar* self, QHideEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_HideEvent_IsBase(true);
        vkcommandbar->hideEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnHideEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_HideEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_NativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCommandBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KCommandBar_QBaseNativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_NativeEvent_IsBase(true);
        return vkcommandbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCommandBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnNativeEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_NativeEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCommandBar_Metric(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCommandBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KCommandBar_QBaseMetric(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Metric_IsBase(true);
        return vkcommandbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCommandBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMetric(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Metric_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_InitPainter(const KCommandBar* self, QPainter* painter) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->initPainter(painter);
    } else {
        ((VirtualKCommandBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KCommandBar_QBaseInitPainter(const KCommandBar* self, QPainter* painter) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InitPainter_IsBase(true);
        vkcommandbar->initPainter(painter);
    } else {
        ((VirtualKCommandBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInitPainter(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InitPainter_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KCommandBar_Redirected(const KCommandBar* self, QPoint* offset) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->redirected(offset);
    } else {
        return ((VirtualKCommandBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KCommandBar_QBaseRedirected(const KCommandBar* self, QPoint* offset) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Redirected_IsBase(true);
        return vkcommandbar->redirected(offset);
    } else {
        return ((VirtualKCommandBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnRedirected(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Redirected_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KCommandBar_SharedPainter(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->sharedPainter();
    } else {
        return ((VirtualKCommandBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KCommandBar_QBaseSharedPainter(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SharedPainter_IsBase(true);
        return vkcommandbar->sharedPainter();
    } else {
        return ((VirtualKCommandBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSharedPainter(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SharedPainter_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_InputMethodEvent(KCommandBar* self, QInputMethodEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->inputMethodEvent(param1);
    } else {
        ((VirtualKCommandBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KCommandBar_QBaseInputMethodEvent(KCommandBar* self, QInputMethodEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InputMethodEvent_IsBase(true);
        vkcommandbar->inputMethodEvent(param1);
    } else {
        ((VirtualKCommandBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInputMethodEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InputMethodEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCommandBar_InputMethodQuery(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return new QVariant(vkcommandbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCommandBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KCommandBar_QBaseInputMethodQuery(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InputMethodQuery_IsBase(true);
        return new QVariant(vkcommandbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCommandBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInputMethodQuery(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_InputMethodQuery_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_FocusNextPrevChild(KCommandBar* self, bool next) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKCommandBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KCommandBar_QBaseFocusNextPrevChild(KCommandBar* self, bool next) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusNextPrevChild_IsBase(true);
        return vkcommandbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKCommandBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusNextPrevChild(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_TimerEvent(KCommandBar* self, QTimerEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->timerEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseTimerEvent(KCommandBar* self, QTimerEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_TimerEvent_IsBase(true);
        vkcommandbar->timerEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnTimerEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_TimerEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ChildEvent(KCommandBar* self, QChildEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->childEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseChildEvent(KCommandBar* self, QChildEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ChildEvent_IsBase(true);
        vkcommandbar->childEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnChildEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ChildEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_CustomEvent(KCommandBar* self, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->customEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCommandBar_QBaseCustomEvent(KCommandBar* self, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_CustomEvent_IsBase(true);
        vkcommandbar->customEvent(event);
    } else {
        ((VirtualKCommandBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnCustomEvent(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_CustomEvent_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_ConnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->connectNotify(*signal);
    } else {
        ((VirtualKCommandBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCommandBar_QBaseConnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ConnectNotify_IsBase(true);
        vkcommandbar->connectNotify(*signal);
    } else {
        ((VirtualKCommandBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnConnectNotify(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_ConnectNotify_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_DisconnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->disconnectNotify(*signal);
    } else {
        ((VirtualKCommandBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCommandBar_QBaseDisconnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DisconnectNotify_IsBase(true);
        vkcommandbar->disconnectNotify(*signal);
    } else {
        ((VirtualKCommandBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDisconnectNotify(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DisconnectNotify_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_DrawFrame(KCommandBar* self, QPainter* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->drawFrame(param1);
    } else {
        ((VirtualKCommandBar*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KCommandBar_QBaseDrawFrame(KCommandBar* self, QPainter* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DrawFrame_IsBase(true);
        vkcommandbar->drawFrame(param1);
    } else {
        ((VirtualKCommandBar*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDrawFrame(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_DrawFrame_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_UpdateMicroFocus(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->updateMicroFocus();
    } else {
        ((VirtualKCommandBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KCommandBar_QBaseUpdateMicroFocus(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_UpdateMicroFocus_IsBase(true);
        vkcommandbar->updateMicroFocus();
    } else {
        ((VirtualKCommandBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnUpdateMicroFocus(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_Create(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->create();
    } else {
        ((VirtualKCommandBar*)self)->create();
    }
}

// Base class handler implementation
void KCommandBar_QBaseCreate(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Create_IsBase(true);
        vkcommandbar->create();
    } else {
        ((VirtualKCommandBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnCreate(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Create_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KCommandBar_Destroy(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->destroy();
    } else {
        ((VirtualKCommandBar*)self)->destroy();
    }
}

// Base class handler implementation
void KCommandBar_QBaseDestroy(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Destroy_IsBase(true);
        vkcommandbar->destroy();
    } else {
        ((VirtualKCommandBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDestroy(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Destroy_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_FocusNextChild(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->focusNextChild();
    } else {
        return ((VirtualKCommandBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KCommandBar_QBaseFocusNextChild(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusNextChild_IsBase(true);
        return vkcommandbar->focusNextChild();
    } else {
        return ((VirtualKCommandBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusNextChild(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusNextChild_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_FocusPreviousChild(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->focusPreviousChild();
    } else {
        return ((VirtualKCommandBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KCommandBar_QBaseFocusPreviousChild(KCommandBar* self) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusPreviousChild_IsBase(true);
        return vkcommandbar->focusPreviousChild();
    } else {
        return ((VirtualKCommandBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusPreviousChild(KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCommandBar_Sender(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->sender();
    } else {
        return ((VirtualKCommandBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCommandBar_QBaseSender(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Sender_IsBase(true);
        return vkcommandbar->sender();
    } else {
        return ((VirtualKCommandBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSender(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Sender_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCommandBar_SenderSignalIndex(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->senderSignalIndex();
    } else {
        return ((VirtualKCommandBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCommandBar_QBaseSenderSignalIndex(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SenderSignalIndex_IsBase(true);
        return vkcommandbar->senderSignalIndex();
    } else {
        return ((VirtualKCommandBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSenderSignalIndex(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCommandBar_Receivers(const KCommandBar* self, const char* signal) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->receivers(signal);
    } else {
        return ((VirtualKCommandBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCommandBar_QBaseReceivers(const KCommandBar* self, const char* signal) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Receivers_IsBase(true);
        return vkcommandbar->receivers(signal);
    } else {
        return ((VirtualKCommandBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnReceivers(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_Receivers_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCommandBar_IsSignalConnected(const KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKCommandBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCommandBar_QBaseIsSignalConnected(const KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_IsSignalConnected_IsBase(true);
        return vkcommandbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKCommandBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnIsSignalConnected(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_IsSignalConnected_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KCommandBar_GetDecodedMetricF(const KCommandBar* self, int metricA, int metricB) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        return vkcommandbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCommandBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KCommandBar_QBaseGetDecodedMetricF(const KCommandBar* self, int metricA, int metricB) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_GetDecodedMetricF_IsBase(true);
        return vkcommandbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCommandBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnGetDecodedMetricF(const KCommandBar* self, intptr_t slot) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar && vkcommandbar->isVirtualKCommandBar) {
        vkcommandbar->setKCommandBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKCommandBar::KCommandBar_GetDecodedMetricF_Callback>(slot));
    }
}

void KCommandBar_Delete(KCommandBar* self) {
    delete self;
}

KCommandBar__ActionGroup* KCommandBar__ActionGroup_new(const KCommandBar__ActionGroup* param1) {
    return new KCommandBar::ActionGroup(*param1);
}

KCommandBar__ActionGroup* KCommandBar__ActionGroup_new2() {
    return new KCommandBar::ActionGroup();
}

libqt_string KCommandBar__ActionGroup_Name(const KCommandBar__ActionGroup* self) {
    QString name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void KCommandBar__ActionGroup_SetName(KCommandBar__ActionGroup* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

libqt_list /* of QAction* */ KCommandBar__ActionGroup_Actions(const KCommandBar__ActionGroup* self) {
    QList<QAction*> actions_ret = self->actions;
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** actions_arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (actions_ret.size() + 1)));
    for (qsizetype i = 0; i < actions_ret.size(); ++i) {
        actions_arr[i] = actions_ret[i];
    }
    libqt_list actions_out;
    actions_out.len = actions_ret.size();
    actions_out.data = static_cast<void*>(actions_arr);
    return actions_out;
}

void KCommandBar__ActionGroup_SetActions(KCommandBar__ActionGroup* self, libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->actions = actions_QList;
}

void KCommandBar__ActionGroup_OperatorAssign(KCommandBar__ActionGroup* self, const KCommandBar__ActionGroup* param1) {
    self->operator=(*param1);
}

void KCommandBar__ActionGroup_Delete(KCommandBar__ActionGroup* self) {
    delete self;
}
