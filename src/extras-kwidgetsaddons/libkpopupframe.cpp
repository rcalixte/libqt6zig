#include <KPopupFrame>
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
#include <kpopupframe.h>
#include "libkpopupframe.h"
#include "libkpopupframe.hxx"

KPopupFrame* KPopupFrame_new(QWidget* parent) {
    return new VirtualKPopupFrame(parent);
}

KPopupFrame* KPopupFrame_new2() {
    return new VirtualKPopupFrame();
}

QMetaObject* KPopupFrame_MetaObject(const KPopupFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPopupFrame_Metacast(KPopupFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPopupFrame_Metacall(KPopupFrame* self, int param1, int param2, void** param3) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPopupFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPopupFrame_Tr(const char* s) {
    QString _ret = KPopupFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPopupFrame_KeyPressEvent(KPopupFrame* self, QKeyEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->keyPressEvent(e);
    }
}

void KPopupFrame_HideEvent(KPopupFrame* self, QHideEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->hideEvent(e);
    }
}

void KPopupFrame_Close(KPopupFrame* self, int r) {
    self->close(static_cast<int>(r));
}

void KPopupFrame_SetMainWidget(KPopupFrame* self, QWidget* m) {
    self->setMainWidget(m);
}

void KPopupFrame_ResizeEvent(KPopupFrame* self, QResizeEvent* resize) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        self->resizeEvent(resize);
    } else {
        ((VirtualKPopupFrame*)self)->resizeEvent(resize);
    }
}

void KPopupFrame_Popup(KPopupFrame* self, const QPoint* pos) {
    self->popup(*pos);
}

int KPopupFrame_Exec(KPopupFrame* self, const QPoint* p) {
    return self->exec(*p);
}

int KPopupFrame_Exec2(KPopupFrame* self, int x, int y) {
    return self->exec(static_cast<int>(x), static_cast<int>(y));
}

void KPopupFrame_LeaveModality(KPopupFrame* self) {
    self->leaveModality();
}

void KPopupFrame_Connect_LeaveModality(KPopupFrame* self, intptr_t slot) {
    void (*slotFunc)(KPopupFrame*) = reinterpret_cast<void (*)(KPopupFrame*)>(slot);
    KPopupFrame::connect(self, &KPopupFrame::leaveModality, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KPopupFrame_Tr2(const char* s, const char* c) {
    QString _ret = KPopupFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPopupFrame_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPopupFrame::tr(s, c, static_cast<int>(n));
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
int KPopupFrame_QBaseMetacall(KPopupFrame* self, int param1, int param2, void** param3) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Metacall_IsBase(true);
        return vkpopupframe->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPopupFrame::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMetacall(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Metacall_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KPopupFrame_QBaseKeyPressEvent(KPopupFrame* self, QKeyEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_KeyPressEvent_IsBase(true);
        vkpopupframe->keyPressEvent(e);
    } else {
        ((VirtualKPopupFrame*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnKeyPressEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_KeyPressEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KPopupFrame_QBaseHideEvent(KPopupFrame* self, QHideEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_HideEvent_IsBase(true);
        vkpopupframe->hideEvent(e);
    } else {
        ((VirtualKPopupFrame*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnHideEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_HideEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_HideEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KPopupFrame_QBaseResizeEvent(KPopupFrame* self, QResizeEvent* resize) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ResizeEvent_IsBase(true);
        vkpopupframe->resizeEvent(resize);
    } else {
        self->KPopupFrame::resizeEvent(resize);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnResizeEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ResizeEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPopupFrame_SizeHint(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return new QSize(vkpopupframe->sizeHint());
    } else {
        return new QSize(((VirtualKPopupFrame*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPopupFrame_QBaseSizeHint(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SizeHint_IsBase(true);
        return new QSize(vkpopupframe->sizeHint());
    } else {
        return new QSize(((VirtualKPopupFrame*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSizeHint(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SizeHint_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_Event(KPopupFrame* self, QEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->event(e);
    } else {
        return ((VirtualKPopupFrame*)self)->event(e);
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseEvent(KPopupFrame* self, QEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Event_IsBase(true);
        return vkpopupframe->event(e);
    } else {
        return ((VirtualKPopupFrame*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Event_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_PaintEvent(KPopupFrame* self, QPaintEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->paintEvent(param1);
    } else {
        ((VirtualKPopupFrame*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KPopupFrame_QBasePaintEvent(KPopupFrame* self, QPaintEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_PaintEvent_IsBase(true);
        vkpopupframe->paintEvent(param1);
    } else {
        ((VirtualKPopupFrame*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnPaintEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_PaintEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_ChangeEvent(KPopupFrame* self, QEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->changeEvent(param1);
    } else {
        ((VirtualKPopupFrame*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseChangeEvent(KPopupFrame* self, QEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ChangeEvent_IsBase(true);
        vkpopupframe->changeEvent(param1);
    } else {
        ((VirtualKPopupFrame*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnChangeEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ChangeEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_InitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->initStyleOption(option);
    } else {
        ((VirtualKPopupFrame*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseInitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InitStyleOption_IsBase(true);
        vkpopupframe->initStyleOption(option);
    } else {
        ((VirtualKPopupFrame*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInitStyleOption(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InitStyleOption_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KPopupFrame_DevType(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->devType();
    } else {
        return self->KPopupFrame::devType();
    }
}

// Base class handler implementation
int KPopupFrame_QBaseDevType(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DevType_IsBase(true);
        return vkpopupframe->devType();
    } else {
        return self->KPopupFrame::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDevType(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DevType_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_SetVisible(KPopupFrame* self, bool visible) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setVisible(visible);
    } else {
        self->KPopupFrame::setVisible(visible);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseSetVisible(KPopupFrame* self, bool visible) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SetVisible_IsBase(true);
        vkpopupframe->setVisible(visible);
    } else {
        self->KPopupFrame::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSetVisible(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SetVisible_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPopupFrame_MinimumSizeHint(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return new QSize(vkpopupframe->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPopupFrame*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPopupFrame_QBaseMinimumSizeHint(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MinimumSizeHint_IsBase(true);
        return new QSize(vkpopupframe->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPopupFrame*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMinimumSizeHint(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPopupFrame_HeightForWidth(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPopupFrame::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPopupFrame_QBaseHeightForWidth(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_HeightForWidth_IsBase(true);
        return vkpopupframe->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPopupFrame::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnHeightForWidth(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_HeightForWidth_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_HasHeightForWidth(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->hasHeightForWidth();
    } else {
        return self->KPopupFrame::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseHasHeightForWidth(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_HasHeightForWidth_IsBase(true);
        return vkpopupframe->hasHeightForWidth();
    } else {
        return self->KPopupFrame::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnHasHeightForWidth(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPopupFrame_PaintEngine(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->paintEngine();
    } else {
        return self->KPopupFrame::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPopupFrame_QBasePaintEngine(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_PaintEngine_IsBase(true);
        return vkpopupframe->paintEngine();
    } else {
        return self->KPopupFrame::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnPaintEngine(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_PaintEngine_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_MousePressEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->mousePressEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseMousePressEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MousePressEvent_IsBase(true);
        vkpopupframe->mousePressEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMousePressEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MousePressEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_MouseReleaseEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->mouseReleaseEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseMouseReleaseEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MouseReleaseEvent_IsBase(true);
        vkpopupframe->mouseReleaseEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMouseReleaseEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_MouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseMouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MouseDoubleClickEvent_IsBase(true);
        vkpopupframe->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMouseDoubleClickEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_MouseMoveEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->mouseMoveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseMouseMoveEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MouseMoveEvent_IsBase(true);
        vkpopupframe->mouseMoveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMouseMoveEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_WheelEvent(KPopupFrame* self, QWheelEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->wheelEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseWheelEvent(KPopupFrame* self, QWheelEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_WheelEvent_IsBase(true);
        vkpopupframe->wheelEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnWheelEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_WheelEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_KeyReleaseEvent(KPopupFrame* self, QKeyEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->keyReleaseEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseKeyReleaseEvent(KPopupFrame* self, QKeyEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_KeyReleaseEvent_IsBase(true);
        vkpopupframe->keyReleaseEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnKeyReleaseEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_FocusInEvent(KPopupFrame* self, QFocusEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->focusInEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseFocusInEvent(KPopupFrame* self, QFocusEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusInEvent_IsBase(true);
        vkpopupframe->focusInEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusInEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusInEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_FocusOutEvent(KPopupFrame* self, QFocusEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->focusOutEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseFocusOutEvent(KPopupFrame* self, QFocusEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusOutEvent_IsBase(true);
        vkpopupframe->focusOutEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusOutEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusOutEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_EnterEvent(KPopupFrame* self, QEnterEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->enterEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseEnterEvent(KPopupFrame* self, QEnterEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_EnterEvent_IsBase(true);
        vkpopupframe->enterEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnEnterEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_EnterEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_LeaveEvent(KPopupFrame* self, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->leaveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseLeaveEvent(KPopupFrame* self, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_LeaveEvent_IsBase(true);
        vkpopupframe->leaveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnLeaveEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_LeaveEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_MoveEvent(KPopupFrame* self, QMoveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->moveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseMoveEvent(KPopupFrame* self, QMoveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MoveEvent_IsBase(true);
        vkpopupframe->moveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMoveEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_MoveEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_CloseEvent(KPopupFrame* self, QCloseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->closeEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseCloseEvent(KPopupFrame* self, QCloseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_CloseEvent_IsBase(true);
        vkpopupframe->closeEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnCloseEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_CloseEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_ContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->contextMenuEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ContextMenuEvent_IsBase(true);
        vkpopupframe->contextMenuEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnContextMenuEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_TabletEvent(KPopupFrame* self, QTabletEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->tabletEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseTabletEvent(KPopupFrame* self, QTabletEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_TabletEvent_IsBase(true);
        vkpopupframe->tabletEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnTabletEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_TabletEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_ActionEvent(KPopupFrame* self, QActionEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->actionEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseActionEvent(KPopupFrame* self, QActionEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ActionEvent_IsBase(true);
        vkpopupframe->actionEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnActionEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ActionEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_DragEnterEvent(KPopupFrame* self, QDragEnterEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->dragEnterEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDragEnterEvent(KPopupFrame* self, QDragEnterEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DragEnterEvent_IsBase(true);
        vkpopupframe->dragEnterEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDragEnterEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DragEnterEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_DragMoveEvent(KPopupFrame* self, QDragMoveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->dragMoveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDragMoveEvent(KPopupFrame* self, QDragMoveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DragMoveEvent_IsBase(true);
        vkpopupframe->dragMoveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDragMoveEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DragMoveEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_DragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->dragLeaveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DragLeaveEvent_IsBase(true);
        vkpopupframe->dragLeaveEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDragLeaveEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_DropEvent(KPopupFrame* self, QDropEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->dropEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDropEvent(KPopupFrame* self, QDropEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DropEvent_IsBase(true);
        vkpopupframe->dropEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDropEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DropEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_ShowEvent(KPopupFrame* self, QShowEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->showEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseShowEvent(KPopupFrame* self, QShowEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ShowEvent_IsBase(true);
        vkpopupframe->showEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnShowEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ShowEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_NativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPopupFrame*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseNativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_NativeEvent_IsBase(true);
        return vkpopupframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPopupFrame*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnNativeEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_NativeEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPopupFrame_Metric(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPopupFrame*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPopupFrame_QBaseMetric(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Metric_IsBase(true);
        return vkpopupframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPopupFrame*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMetric(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Metric_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_InitPainter(const KPopupFrame* self, QPainter* painter) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->initPainter(painter);
    } else {
        ((VirtualKPopupFrame*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseInitPainter(const KPopupFrame* self, QPainter* painter) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InitPainter_IsBase(true);
        vkpopupframe->initPainter(painter);
    } else {
        ((VirtualKPopupFrame*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInitPainter(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InitPainter_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPopupFrame_Redirected(const KPopupFrame* self, QPoint* offset) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->redirected(offset);
    } else {
        return ((VirtualKPopupFrame*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPopupFrame_QBaseRedirected(const KPopupFrame* self, QPoint* offset) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Redirected_IsBase(true);
        return vkpopupframe->redirected(offset);
    } else {
        return ((VirtualKPopupFrame*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnRedirected(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Redirected_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPopupFrame_SharedPainter(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->sharedPainter();
    } else {
        return ((VirtualKPopupFrame*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPopupFrame_QBaseSharedPainter(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SharedPainter_IsBase(true);
        return vkpopupframe->sharedPainter();
    } else {
        return ((VirtualKPopupFrame*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSharedPainter(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SharedPainter_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_InputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->inputMethodEvent(param1);
    } else {
        ((VirtualKPopupFrame*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseInputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InputMethodEvent_IsBase(true);
        vkpopupframe->inputMethodEvent(param1);
    } else {
        ((VirtualKPopupFrame*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInputMethodEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InputMethodEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPopupFrame_InputMethodQuery(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return new QVariant(vkpopupframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPopupFrame*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPopupFrame_QBaseInputMethodQuery(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InputMethodQuery_IsBase(true);
        return new QVariant(vkpopupframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPopupFrame*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInputMethodQuery(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_InputMethodQuery_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_FocusNextPrevChild(KPopupFrame* self, bool next) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->focusNextPrevChild(next);
    } else {
        return ((VirtualKPopupFrame*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseFocusNextPrevChild(KPopupFrame* self, bool next) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusNextPrevChild_IsBase(true);
        return vkpopupframe->focusNextPrevChild(next);
    } else {
        return ((VirtualKPopupFrame*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusNextPrevChild(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_EventFilter(KPopupFrame* self, QObject* watched, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->eventFilter(watched, event);
    } else {
        return self->KPopupFrame::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseEventFilter(KPopupFrame* self, QObject* watched, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_EventFilter_IsBase(true);
        return vkpopupframe->eventFilter(watched, event);
    } else {
        return self->KPopupFrame::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnEventFilter(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_EventFilter_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_TimerEvent(KPopupFrame* self, QTimerEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->timerEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseTimerEvent(KPopupFrame* self, QTimerEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_TimerEvent_IsBase(true);
        vkpopupframe->timerEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnTimerEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_TimerEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_ChildEvent(KPopupFrame* self, QChildEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->childEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseChildEvent(KPopupFrame* self, QChildEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ChildEvent_IsBase(true);
        vkpopupframe->childEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnChildEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ChildEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_CustomEvent(KPopupFrame* self, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->customEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseCustomEvent(KPopupFrame* self, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_CustomEvent_IsBase(true);
        vkpopupframe->customEvent(event);
    } else {
        ((VirtualKPopupFrame*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnCustomEvent(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_CustomEvent_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_ConnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->connectNotify(*signal);
    } else {
        ((VirtualKPopupFrame*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseConnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ConnectNotify_IsBase(true);
        vkpopupframe->connectNotify(*signal);
    } else {
        ((VirtualKPopupFrame*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnConnectNotify(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_ConnectNotify_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_DisconnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->disconnectNotify(*signal);
    } else {
        ((VirtualKPopupFrame*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDisconnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DisconnectNotify_IsBase(true);
        vkpopupframe->disconnectNotify(*signal);
    } else {
        ((VirtualKPopupFrame*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDisconnectNotify(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DisconnectNotify_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_DrawFrame(KPopupFrame* self, QPainter* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->drawFrame(param1);
    } else {
        ((VirtualKPopupFrame*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDrawFrame(KPopupFrame* self, QPainter* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DrawFrame_IsBase(true);
        vkpopupframe->drawFrame(param1);
    } else {
        ((VirtualKPopupFrame*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDrawFrame(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_DrawFrame_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_UpdateMicroFocus(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->updateMicroFocus();
    } else {
        ((VirtualKPopupFrame*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPopupFrame_QBaseUpdateMicroFocus(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_UpdateMicroFocus_IsBase(true);
        vkpopupframe->updateMicroFocus();
    } else {
        ((VirtualKPopupFrame*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnUpdateMicroFocus(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_Create(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->create();
    } else {
        ((VirtualKPopupFrame*)self)->create();
    }
}

// Base class handler implementation
void KPopupFrame_QBaseCreate(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Create_IsBase(true);
        vkpopupframe->create();
    } else {
        ((VirtualKPopupFrame*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnCreate(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Create_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPopupFrame_Destroy(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->destroy();
    } else {
        ((VirtualKPopupFrame*)self)->destroy();
    }
}

// Base class handler implementation
void KPopupFrame_QBaseDestroy(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Destroy_IsBase(true);
        vkpopupframe->destroy();
    } else {
        ((VirtualKPopupFrame*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDestroy(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Destroy_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_FocusNextChild(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->focusNextChild();
    } else {
        return ((VirtualKPopupFrame*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseFocusNextChild(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusNextChild_IsBase(true);
        return vkpopupframe->focusNextChild();
    } else {
        return ((VirtualKPopupFrame*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusNextChild(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusNextChild_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_FocusPreviousChild(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->focusPreviousChild();
    } else {
        return ((VirtualKPopupFrame*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseFocusPreviousChild(KPopupFrame* self) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusPreviousChild_IsBase(true);
        return vkpopupframe->focusPreviousChild();
    } else {
        return ((VirtualKPopupFrame*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusPreviousChild(KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPopupFrame_Sender(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->sender();
    } else {
        return ((VirtualKPopupFrame*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPopupFrame_QBaseSender(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Sender_IsBase(true);
        return vkpopupframe->sender();
    } else {
        return ((VirtualKPopupFrame*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSender(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Sender_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPopupFrame_SenderSignalIndex(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->senderSignalIndex();
    } else {
        return ((VirtualKPopupFrame*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPopupFrame_QBaseSenderSignalIndex(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SenderSignalIndex_IsBase(true);
        return vkpopupframe->senderSignalIndex();
    } else {
        return ((VirtualKPopupFrame*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSenderSignalIndex(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPopupFrame_Receivers(const KPopupFrame* self, const char* signal) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->receivers(signal);
    } else {
        return ((VirtualKPopupFrame*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPopupFrame_QBaseReceivers(const KPopupFrame* self, const char* signal) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Receivers_IsBase(true);
        return vkpopupframe->receivers(signal);
    } else {
        return ((VirtualKPopupFrame*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnReceivers(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_Receivers_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPopupFrame_IsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->isSignalConnected(*signal);
    } else {
        return ((VirtualKPopupFrame*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPopupFrame_QBaseIsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_IsSignalConnected_IsBase(true);
        return vkpopupframe->isSignalConnected(*signal);
    } else {
        return ((VirtualKPopupFrame*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnIsSignalConnected(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_IsSignalConnected_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPopupFrame_GetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        return vkpopupframe->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPopupFrame*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPopupFrame_QBaseGetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_GetDecodedMetricF_IsBase(true);
        return vkpopupframe->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPopupFrame*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnGetDecodedMetricF(const KPopupFrame* self, intptr_t slot) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe && vkpopupframe->isVirtualKPopupFrame) {
        vkpopupframe->setKPopupFrame_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPopupFrame::KPopupFrame_GetDecodedMetricF_Callback>(slot));
    }
}

void KPopupFrame_Delete(KPopupFrame* self) {
    delete self;
}
