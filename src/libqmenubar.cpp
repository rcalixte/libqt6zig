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
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMenuBar>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmenubar.h>
#include "libqmenubar.h"
#include "libqmenubar.hxx"

QMenuBar* QMenuBar_new(QWidget* parent) {
    return new VirtualQMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
    return new VirtualQMenuBar();
}

QMetaObject* QMenuBar_MetaObject(const QMenuBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMenuBar_Metacast(QMenuBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMenuBar_Metacall(QMenuBar* self, int param1, int param2, void** param3) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMenuBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMenuBar_OnMetacall(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Metacall_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMenuBar_QBaseMetacall(QMenuBar* self, int param1, int param2, void** param3) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Metacall_IsBase(true);
        return vqmenubar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMenuBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMenuBar_Tr(const char* s) {
    QString _ret = QMenuBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
    return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addMenu(title_QString);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, const QIcon* icon, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
    return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
    return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
    return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
    self->clear();
}

QAction* QMenuBar_ActiveAction(const QMenuBar* self) {
    return self->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
    self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
    self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(const QMenuBar* self) {
    return self->isDefaultUp();
}

QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1) {
    return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_ActionAt(const QMenuBar* self, const QPoint* param1) {
    return self->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
    self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(const QMenuBar* self) {
    return self->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(const QMenuBar* self) {
    return self->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
    self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
    self->triggered(action);
}

void QMenuBar_Connect_Triggered(QMenuBar* self, intptr_t slot) {
    void (*slotFunc)(QMenuBar*, QAction*) = reinterpret_cast<void (*)(QMenuBar*, QAction*)>(slot);
    QMenuBar::connect(self, &QMenuBar::triggered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
    self->hovered(action);
}

void QMenuBar_Connect_Hovered(QMenuBar* self, intptr_t slot) {
    void (*slotFunc)(QMenuBar*, QAction*) = reinterpret_cast<void (*)(QMenuBar*, QAction*)>(slot);
    QMenuBar::connect(self, &QMenuBar::hovered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

libqt_string QMenuBar_Tr2(const char* s, const char* c) {
    QString _ret = QMenuBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMenuBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMenuBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
    self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner) {
    return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

// Derived class handler implementation
QSize* QMenuBar_SizeHint(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return new QSize(vqmenubar->sizeHint());
    } else {
        return new QSize(((VirtualQMenuBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QMenuBar_QBaseSizeHint(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SizeHint_IsBase(true);
        return new QSize(vqmenubar->sizeHint());
    } else {
        return new QSize(((VirtualQMenuBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSizeHint(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SizeHint_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return new QSize(vqmenubar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMenuBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMenuBar_QBaseMinimumSizeHint(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqmenubar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMenuBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMinimumSizeHint(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenuBar_HeightForWidth(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMenuBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMenuBar_QBaseHeightForWidth(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_HeightForWidth_IsBase(true);
        return vqmenubar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMenuBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHeightForWidth(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_HeightForWidth_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setVisible(visible);
    } else {
        self->QMenuBar::setVisible(visible);
    }
}

// Base class handler implementation
void QMenuBar_QBaseSetVisible(QMenuBar* self, bool visible) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SetVisible_IsBase(true);
        vqmenubar->setVisible(visible);
    } else {
        self->QMenuBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSetVisible(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SetVisible_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->changeEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseChangeEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ChangeEvent_IsBase(true);
        vqmenubar->changeEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnChangeEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ChangeEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->keyPressEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseKeyPressEvent(QMenuBar* self, QKeyEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_KeyPressEvent_IsBase(true);
        vqmenubar->keyPressEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnKeyPressEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->mouseReleaseEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MouseReleaseEvent_IsBase(true);
        vqmenubar->mouseReleaseEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseReleaseEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->mousePressEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseMousePressEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MousePressEvent_IsBase(true);
        vqmenubar->mousePressEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMousePressEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MousePressEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->mouseMoveEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseMouseMoveEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MouseMoveEvent_IsBase(true);
        vqmenubar->mouseMoveEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseMoveEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->leaveEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseLeaveEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_LeaveEvent_IsBase(true);
        vqmenubar->leaveEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnLeaveEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_LeaveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->paintEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBasePaintEvent(QMenuBar* self, QPaintEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_PaintEvent_IsBase(true);
        vqmenubar->paintEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnPaintEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_PaintEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->resizeEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseResizeEvent(QMenuBar* self, QResizeEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ResizeEvent_IsBase(true);
        vqmenubar->resizeEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnResizeEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ResizeEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->actionEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseActionEvent(QMenuBar* self, QActionEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ActionEvent_IsBase(true);
        vqmenubar->actionEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnActionEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ActionEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->focusOutEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseFocusOutEvent(QMenuBar* self, QFocusEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusOutEvent_IsBase(true);
        vqmenubar->focusOutEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusOutEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->focusInEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseFocusInEvent(QMenuBar* self, QFocusEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusInEvent_IsBase(true);
        vqmenubar->focusInEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusInEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusInEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->timerEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseTimerEvent(QMenuBar* self, QTimerEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_TimerEvent_IsBase(true);
        vqmenubar->timerEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnTimerEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_TimerEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->eventFilter(param1, param2);
    } else {
        return ((VirtualQMenuBar*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QMenuBar_QBaseEventFilter(QMenuBar* self, QObject* param1, QEvent* param2) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_EventFilter_IsBase(true);
        return vqmenubar->eventFilter(param1, param2);
    } else {
        return ((VirtualQMenuBar*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEventFilter(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_EventFilter_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_Event(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->event(param1);
    } else {
        return ((VirtualQMenuBar*)self)->event(param1);
    }
}

// Base class handler implementation
bool QMenuBar_QBaseEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Event_IsBase(true);
        return vqmenubar->event(param1);
    } else {
        return ((VirtualQMenuBar*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Event_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->initStyleOption(option, action);
    } else {
        ((VirtualQMenuBar*)self)->initStyleOption(option, action);
    }
}

// Base class handler implementation
void QMenuBar_QBaseInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InitStyleOption_IsBase(true);
        vqmenubar->initStyleOption(option, action);
    } else {
        ((VirtualQMenuBar*)self)->initStyleOption(option, action);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInitStyleOption(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InitStyleOption_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenuBar_DevType(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->devType();
    } else {
        return self->QMenuBar::devType();
    }
}

// Base class handler implementation
int QMenuBar_QBaseDevType(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DevType_IsBase(true);
        return vqmenubar->devType();
    } else {
        return self->QMenuBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDevType(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DevType_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_HasHeightForWidth(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->hasHeightForWidth();
    } else {
        return self->QMenuBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMenuBar_QBaseHasHeightForWidth(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_HasHeightForWidth_IsBase(true);
        return vqmenubar->hasHeightForWidth();
    } else {
        return self->QMenuBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHasHeightForWidth(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMenuBar_PaintEngine(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->paintEngine();
    } else {
        return self->QMenuBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMenuBar_QBasePaintEngine(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_PaintEngine_IsBase(true);
        return vqmenubar->paintEngine();
    } else {
        return self->QMenuBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnPaintEngine(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_PaintEngine_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_MouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseMouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MouseDoubleClickEvent_IsBase(true);
        vqmenubar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseDoubleClickEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_WheelEvent(QMenuBar* self, QWheelEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->wheelEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseWheelEvent(QMenuBar* self, QWheelEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_WheelEvent_IsBase(true);
        vqmenubar->wheelEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnWheelEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_WheelEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_KeyReleaseEvent(QMenuBar* self, QKeyEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->keyReleaseEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseKeyReleaseEvent(QMenuBar* self, QKeyEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_KeyReleaseEvent_IsBase(true);
        vqmenubar->keyReleaseEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnKeyReleaseEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_EnterEvent(QMenuBar* self, QEnterEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->enterEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseEnterEvent(QMenuBar* self, QEnterEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_EnterEvent_IsBase(true);
        vqmenubar->enterEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEnterEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_EnterEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_MoveEvent(QMenuBar* self, QMoveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->moveEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseMoveEvent(QMenuBar* self, QMoveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MoveEvent_IsBase(true);
        vqmenubar->moveEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMoveEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_MoveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_CloseEvent(QMenuBar* self, QCloseEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->closeEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseCloseEvent(QMenuBar* self, QCloseEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_CloseEvent_IsBase(true);
        vqmenubar->closeEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnCloseEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_CloseEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ContextMenuEvent(QMenuBar* self, QContextMenuEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->contextMenuEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseContextMenuEvent(QMenuBar* self, QContextMenuEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ContextMenuEvent_IsBase(true);
        vqmenubar->contextMenuEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnContextMenuEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_TabletEvent(QMenuBar* self, QTabletEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->tabletEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseTabletEvent(QMenuBar* self, QTabletEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_TabletEvent_IsBase(true);
        vqmenubar->tabletEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnTabletEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_TabletEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_DragEnterEvent(QMenuBar* self, QDragEnterEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->dragEnterEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseDragEnterEvent(QMenuBar* self, QDragEnterEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DragEnterEvent_IsBase(true);
        vqmenubar->dragEnterEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDragEnterEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_DragMoveEvent(QMenuBar* self, QDragMoveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->dragMoveEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseDragMoveEvent(QMenuBar* self, QDragMoveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DragMoveEvent_IsBase(true);
        vqmenubar->dragMoveEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDragMoveEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_DragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->dragLeaveEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseDragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DragLeaveEvent_IsBase(true);
        vqmenubar->dragLeaveEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDragLeaveEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_DropEvent(QMenuBar* self, QDropEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->dropEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseDropEvent(QMenuBar* self, QDropEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DropEvent_IsBase(true);
        vqmenubar->dropEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDropEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DropEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ShowEvent(QMenuBar* self, QShowEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->showEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseShowEvent(QMenuBar* self, QShowEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ShowEvent_IsBase(true);
        vqmenubar->showEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnShowEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ShowEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_HideEvent(QMenuBar* self, QHideEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->hideEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseHideEvent(QMenuBar* self, QHideEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_HideEvent_IsBase(true);
        vqmenubar->hideEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHideEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_HideEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_NativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMenuBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMenuBar_QBaseNativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_NativeEvent_IsBase(true);
        return vqmenubar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMenuBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnNativeEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_NativeEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenuBar_Metric(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMenuBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMenuBar_QBaseMetric(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Metric_IsBase(true);
        return vqmenubar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMenuBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMetric(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Metric_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_InitPainter(const QMenuBar* self, QPainter* painter) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->initPainter(painter);
    } else {
        ((VirtualQMenuBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QMenuBar_QBaseInitPainter(const QMenuBar* self, QPainter* painter) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InitPainter_IsBase(true);
        vqmenubar->initPainter(painter);
    } else {
        ((VirtualQMenuBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInitPainter(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InitPainter_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMenuBar_Redirected(const QMenuBar* self, QPoint* offset) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->redirected(offset);
    } else {
        return ((VirtualQMenuBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMenuBar_QBaseRedirected(const QMenuBar* self, QPoint* offset) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Redirected_IsBase(true);
        return vqmenubar->redirected(offset);
    } else {
        return ((VirtualQMenuBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnRedirected(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Redirected_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMenuBar_SharedPainter(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->sharedPainter();
    } else {
        return ((VirtualQMenuBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMenuBar_QBaseSharedPainter(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SharedPainter_IsBase(true);
        return vqmenubar->sharedPainter();
    } else {
        return ((VirtualQMenuBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSharedPainter(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SharedPainter_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_InputMethodEvent(QMenuBar* self, QInputMethodEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->inputMethodEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMenuBar_QBaseInputMethodEvent(QMenuBar* self, QInputMethodEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InputMethodEvent_IsBase(true);
        vqmenubar->inputMethodEvent(param1);
    } else {
        ((VirtualQMenuBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInputMethodEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMenuBar_InputMethodQuery(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return new QVariant(vqmenubar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMenuBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMenuBar_QBaseInputMethodQuery(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqmenubar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMenuBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInputMethodQuery(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_FocusNextPrevChild(QMenuBar* self, bool next) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->focusNextPrevChild(next);
    } else {
        return ((VirtualQMenuBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMenuBar_QBaseFocusNextPrevChild(QMenuBar* self, bool next) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusNextPrevChild_IsBase(true);
        return vqmenubar->focusNextPrevChild(next);
    } else {
        return ((VirtualQMenuBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusNextPrevChild(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ChildEvent(QMenuBar* self, QChildEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->childEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseChildEvent(QMenuBar* self, QChildEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ChildEvent_IsBase(true);
        vqmenubar->childEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnChildEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ChildEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_CustomEvent(QMenuBar* self, QEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->customEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMenuBar_QBaseCustomEvent(QMenuBar* self, QEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_CustomEvent_IsBase(true);
        vqmenubar->customEvent(event);
    } else {
        ((VirtualQMenuBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnCustomEvent(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_CustomEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_ConnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->connectNotify(*signal);
    } else {
        ((VirtualQMenuBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMenuBar_QBaseConnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ConnectNotify_IsBase(true);
        vqmenubar->connectNotify(*signal);
    } else {
        ((VirtualQMenuBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnConnectNotify(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_ConnectNotify_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_DisconnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->disconnectNotify(*signal);
    } else {
        ((VirtualQMenuBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMenuBar_QBaseDisconnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DisconnectNotify_IsBase(true);
        vqmenubar->disconnectNotify(*signal);
    } else {
        ((VirtualQMenuBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDisconnectNotify(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_UpdateMicroFocus(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->updateMicroFocus();
    } else {
        ((VirtualQMenuBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QMenuBar_QBaseUpdateMicroFocus(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_UpdateMicroFocus_IsBase(true);
        vqmenubar->updateMicroFocus();
    } else {
        ((VirtualQMenuBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnUpdateMicroFocus(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_Create(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->create();
    } else {
        ((VirtualQMenuBar*)self)->create();
    }
}

// Base class handler implementation
void QMenuBar_QBaseCreate(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Create_IsBase(true);
        vqmenubar->create();
    } else {
        ((VirtualQMenuBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnCreate(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Create_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenuBar_Destroy(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->destroy();
    } else {
        ((VirtualQMenuBar*)self)->destroy();
    }
}

// Base class handler implementation
void QMenuBar_QBaseDestroy(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Destroy_IsBase(true);
        vqmenubar->destroy();
    } else {
        ((VirtualQMenuBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDestroy(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Destroy_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_FocusNextChild(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->focusNextChild();
    } else {
        return ((VirtualQMenuBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QMenuBar_QBaseFocusNextChild(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusNextChild_IsBase(true);
        return vqmenubar->focusNextChild();
    } else {
        return ((VirtualQMenuBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusNextChild(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusNextChild_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_FocusPreviousChild(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->focusPreviousChild();
    } else {
        return ((VirtualQMenuBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMenuBar_QBaseFocusPreviousChild(QMenuBar* self) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusPreviousChild_IsBase(true);
        return vqmenubar->focusPreviousChild();
    } else {
        return ((VirtualQMenuBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusPreviousChild(QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMenuBar_Sender(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->sender();
    } else {
        return ((VirtualQMenuBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMenuBar_QBaseSender(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Sender_IsBase(true);
        return vqmenubar->sender();
    } else {
        return ((VirtualQMenuBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSender(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Sender_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenuBar_SenderSignalIndex(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->senderSignalIndex();
    } else {
        return ((VirtualQMenuBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMenuBar_QBaseSenderSignalIndex(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SenderSignalIndex_IsBase(true);
        return vqmenubar->senderSignalIndex();
    } else {
        return ((VirtualQMenuBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSenderSignalIndex(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenuBar_Receivers(const QMenuBar* self, const char* signal) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->receivers(signal);
    } else {
        return ((VirtualQMenuBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMenuBar_QBaseReceivers(const QMenuBar* self, const char* signal) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Receivers_IsBase(true);
        return vqmenubar->receivers(signal);
    } else {
        return ((VirtualQMenuBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnReceivers(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_Receivers_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenuBar_IsSignalConnected(const QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->isSignalConnected(*signal);
    } else {
        return ((VirtualQMenuBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMenuBar_QBaseIsSignalConnected(const QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_IsSignalConnected_IsBase(true);
        return vqmenubar->isSignalConnected(*signal);
    } else {
        return ((VirtualQMenuBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnIsSignalConnected(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QMenuBar_GetDecodedMetricF(const QMenuBar* self, int metricA, int metricB) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        return vqmenubar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMenuBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QMenuBar_QBaseGetDecodedMetricF(const QMenuBar* self, int metricA, int metricB) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_GetDecodedMetricF_IsBase(true);
        return vqmenubar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMenuBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnGetDecodedMetricF(const QMenuBar* self, intptr_t slot) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
        vqmenubar->setQMenuBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_GetDecodedMetricF_Callback>(slot));
    }
}

void QMenuBar_Delete(QMenuBar* self) {
    delete self;
}
