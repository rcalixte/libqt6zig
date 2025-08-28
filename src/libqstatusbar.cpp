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
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qstatusbar.h>
#include "libqstatusbar.h"
#include "libqstatusbar.hxx"

QStatusBar* QStatusBar_new(QWidget* parent) {
    return new VirtualQStatusBar(parent);
}

QStatusBar* QStatusBar_new2() {
    return new VirtualQStatusBar();
}

QMetaObject* QStatusBar_MetaObject(const QStatusBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStatusBar_Metacast(QStatusBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStatusBar_Metacall(QStatusBar* self, int param1, int param2, void** param3) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStatusBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStatusBar_OnMetacall(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Metacall_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStatusBar_QBaseMetacall(QStatusBar* self, int param1, int param2, void** param3) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Metacall_IsBase(true);
        return vqstatusbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStatusBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStatusBar_Tr(const char* s) {
    QString _ret = QStatusBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget) {
    self->addWidget(widget);
}

int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget) {
    return self->insertWidget(static_cast<int>(index), widget);
}

void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget) {
    self->addPermanentWidget(widget);
}

int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget) {
    return self->insertPermanentWidget(static_cast<int>(index), widget);
}

void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget) {
    self->removeWidget(widget);
}

void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled) {
    self->setSizeGripEnabled(sizeGripEnabled);
}

bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self) {
    return self->isSizeGripEnabled();
}

libqt_string QStatusBar_CurrentMessage(const QStatusBar* self) {
    QString _ret = self->currentMessage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStatusBar_ShowMessage(QStatusBar* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->showMessage(text_QString);
}

void QStatusBar_ClearMessage(QStatusBar* self) {
    self->clearMessage();
}

void QStatusBar_MessageChanged(QStatusBar* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->messageChanged(text_QString);
}

void QStatusBar_Connect_MessageChanged(QStatusBar* self, intptr_t slot) {
    void (*slotFunc)(QStatusBar*, const char*) = reinterpret_cast<void (*)(QStatusBar*, const char*)>(slot);
    QStatusBar::connect(self, &QStatusBar::messageChanged, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->showEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStatusBar_OnShowEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ShowEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ShowEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStatusBar_QBaseShowEvent(QStatusBar* self, QShowEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ShowEvent_IsBase(true);
        vqstatusbar->showEvent(param1);
    }
}

void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStatusBar_OnPaintEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_PaintEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStatusBar_QBasePaintEvent(QStatusBar* self, QPaintEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_PaintEvent_IsBase(true);
        vqstatusbar->paintEvent(param1);
    }
}

void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->resizeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStatusBar_OnResizeEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ResizeEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStatusBar_QBaseResizeEvent(QStatusBar* self, QResizeEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ResizeEvent_IsBase(true);
        vqstatusbar->resizeEvent(param1);
    }
}

bool QStatusBar_Event(QStatusBar* self, QEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->event(param1);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QStatusBar_OnEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Event_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStatusBar_QBaseEvent(QStatusBar* self, QEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Event_IsBase(true);
        return vqstatusbar->event(param1);
    }
    return {};
}

libqt_string QStatusBar_Tr2(const char* s, const char* c) {
    QString _ret = QStatusBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStatusBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStatusBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch) {
    self->addWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
    return self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch) {
    self->addPermanentWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
    return self->insertPermanentWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_ShowMessage2(QStatusBar* self, const libqt_string text, int timeout) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->showMessage(text_QString, static_cast<int>(timeout));
}

// Derived class handler implementation
int QStatusBar_DevType(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->devType();
    } else {
        return self->QStatusBar::devType();
    }
}

// Base class handler implementation
int QStatusBar_QBaseDevType(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DevType_IsBase(true);
        return vqstatusbar->devType();
    } else {
        return self->QStatusBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDevType(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DevType_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_SetVisible(QStatusBar* self, bool visible) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setVisible(visible);
    } else {
        self->QStatusBar::setVisible(visible);
    }
}

// Base class handler implementation
void QStatusBar_QBaseSetVisible(QStatusBar* self, bool visible) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SetVisible_IsBase(true);
        vqstatusbar->setVisible(visible);
    } else {
        self->QStatusBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSetVisible(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SetVisible_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStatusBar_SizeHint(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return new QSize(vqstatusbar->sizeHint());
    } else {
        return new QSize(((VirtualQStatusBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QStatusBar_QBaseSizeHint(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SizeHint_IsBase(true);
        return new QSize(vqstatusbar->sizeHint());
    } else {
        return new QSize(((VirtualQStatusBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSizeHint(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SizeHint_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStatusBar_MinimumSizeHint(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return new QSize(vqstatusbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQStatusBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QStatusBar_QBaseMinimumSizeHint(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqstatusbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQStatusBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMinimumSizeHint(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QStatusBar_HeightForWidth(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QStatusBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QStatusBar_QBaseHeightForWidth(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HeightForWidth_IsBase(true);
        return vqstatusbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QStatusBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHeightForWidth(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HeightForWidth_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_HasHeightForWidth(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->hasHeightForWidth();
    } else {
        return self->QStatusBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QStatusBar_QBaseHasHeightForWidth(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HasHeightForWidth_IsBase(true);
        return vqstatusbar->hasHeightForWidth();
    } else {
        return self->QStatusBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHasHeightForWidth(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QStatusBar_PaintEngine(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->paintEngine();
    } else {
        return self->QStatusBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QStatusBar_QBasePaintEngine(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_PaintEngine_IsBase(true);
        return vqstatusbar->paintEngine();
    } else {
        return self->QStatusBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnPaintEngine(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_PaintEngine_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_MousePressEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->mousePressEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseMousePressEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MousePressEvent_IsBase(true);
        vqstatusbar->mousePressEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMousePressEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MousePressEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_MouseReleaseEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->mouseReleaseEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseMouseReleaseEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MouseReleaseEvent_IsBase(true);
        vqstatusbar->mouseReleaseEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMouseReleaseEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_MouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseMouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MouseDoubleClickEvent_IsBase(true);
        vqstatusbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMouseDoubleClickEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_MouseMoveEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->mouseMoveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseMouseMoveEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MouseMoveEvent_IsBase(true);
        vqstatusbar->mouseMoveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMouseMoveEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_WheelEvent(QStatusBar* self, QWheelEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->wheelEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseWheelEvent(QStatusBar* self, QWheelEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_WheelEvent_IsBase(true);
        vqstatusbar->wheelEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnWheelEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_WheelEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_KeyPressEvent(QStatusBar* self, QKeyEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->keyPressEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseKeyPressEvent(QStatusBar* self, QKeyEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_KeyPressEvent_IsBase(true);
        vqstatusbar->keyPressEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnKeyPressEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_KeyReleaseEvent(QStatusBar* self, QKeyEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->keyReleaseEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseKeyReleaseEvent(QStatusBar* self, QKeyEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_KeyReleaseEvent_IsBase(true);
        vqstatusbar->keyReleaseEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnKeyReleaseEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_FocusInEvent(QStatusBar* self, QFocusEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->focusInEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseFocusInEvent(QStatusBar* self, QFocusEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusInEvent_IsBase(true);
        vqstatusbar->focusInEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusInEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusInEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_FocusOutEvent(QStatusBar* self, QFocusEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->focusOutEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseFocusOutEvent(QStatusBar* self, QFocusEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusOutEvent_IsBase(true);
        vqstatusbar->focusOutEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusOutEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_EnterEvent(QStatusBar* self, QEnterEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->enterEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseEnterEvent(QStatusBar* self, QEnterEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_EnterEvent_IsBase(true);
        vqstatusbar->enterEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnEnterEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_EnterEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_LeaveEvent(QStatusBar* self, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->leaveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseLeaveEvent(QStatusBar* self, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_LeaveEvent_IsBase(true);
        vqstatusbar->leaveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnLeaveEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_LeaveEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_MoveEvent(QStatusBar* self, QMoveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->moveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseMoveEvent(QStatusBar* self, QMoveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MoveEvent_IsBase(true);
        vqstatusbar->moveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMoveEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_MoveEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_CloseEvent(QStatusBar* self, QCloseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->closeEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseCloseEvent(QStatusBar* self, QCloseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_CloseEvent_IsBase(true);
        vqstatusbar->closeEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnCloseEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_CloseEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_ContextMenuEvent(QStatusBar* self, QContextMenuEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->contextMenuEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseContextMenuEvent(QStatusBar* self, QContextMenuEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ContextMenuEvent_IsBase(true);
        vqstatusbar->contextMenuEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnContextMenuEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_TabletEvent(QStatusBar* self, QTabletEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->tabletEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseTabletEvent(QStatusBar* self, QTabletEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_TabletEvent_IsBase(true);
        vqstatusbar->tabletEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnTabletEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_TabletEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_ActionEvent(QStatusBar* self, QActionEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->actionEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseActionEvent(QStatusBar* self, QActionEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ActionEvent_IsBase(true);
        vqstatusbar->actionEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnActionEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ActionEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_DragEnterEvent(QStatusBar* self, QDragEnterEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->dragEnterEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseDragEnterEvent(QStatusBar* self, QDragEnterEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DragEnterEvent_IsBase(true);
        vqstatusbar->dragEnterEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDragEnterEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_DragMoveEvent(QStatusBar* self, QDragMoveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->dragMoveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseDragMoveEvent(QStatusBar* self, QDragMoveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DragMoveEvent_IsBase(true);
        vqstatusbar->dragMoveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDragMoveEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_DragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->dragLeaveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseDragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DragLeaveEvent_IsBase(true);
        vqstatusbar->dragLeaveEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDragLeaveEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_DropEvent(QStatusBar* self, QDropEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->dropEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseDropEvent(QStatusBar* self, QDropEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DropEvent_IsBase(true);
        vqstatusbar->dropEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDropEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DropEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_HideEvent(QStatusBar* self, QHideEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->hideEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseHideEvent(QStatusBar* self, QHideEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HideEvent_IsBase(true);
        vqstatusbar->hideEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHideEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HideEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_NativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQStatusBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QStatusBar_QBaseNativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_NativeEvent_IsBase(true);
        return vqstatusbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQStatusBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnNativeEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_NativeEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_ChangeEvent(QStatusBar* self, QEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->changeEvent(param1);
    } else {
        ((VirtualQStatusBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QStatusBar_QBaseChangeEvent(QStatusBar* self, QEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ChangeEvent_IsBase(true);
        vqstatusbar->changeEvent(param1);
    } else {
        ((VirtualQStatusBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnChangeEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ChangeEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QStatusBar_Metric(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQStatusBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QStatusBar_QBaseMetric(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Metric_IsBase(true);
        return vqstatusbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQStatusBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMetric(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Metric_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_InitPainter(const QStatusBar* self, QPainter* painter) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->initPainter(painter);
    } else {
        ((VirtualQStatusBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QStatusBar_QBaseInitPainter(const QStatusBar* self, QPainter* painter) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_InitPainter_IsBase(true);
        vqstatusbar->initPainter(painter);
    } else {
        ((VirtualQStatusBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnInitPainter(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_InitPainter_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QStatusBar_Redirected(const QStatusBar* self, QPoint* offset) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->redirected(offset);
    } else {
        return ((VirtualQStatusBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QStatusBar_QBaseRedirected(const QStatusBar* self, QPoint* offset) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Redirected_IsBase(true);
        return vqstatusbar->redirected(offset);
    } else {
        return ((VirtualQStatusBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnRedirected(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Redirected_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QStatusBar_SharedPainter(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->sharedPainter();
    } else {
        return ((VirtualQStatusBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QStatusBar_QBaseSharedPainter(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SharedPainter_IsBase(true);
        return vqstatusbar->sharedPainter();
    } else {
        return ((VirtualQStatusBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSharedPainter(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SharedPainter_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_InputMethodEvent(QStatusBar* self, QInputMethodEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->inputMethodEvent(param1);
    } else {
        ((VirtualQStatusBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QStatusBar_QBaseInputMethodEvent(QStatusBar* self, QInputMethodEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_InputMethodEvent_IsBase(true);
        vqstatusbar->inputMethodEvent(param1);
    } else {
        ((VirtualQStatusBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnInputMethodEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStatusBar_InputMethodQuery(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return new QVariant(vqstatusbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQStatusBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QStatusBar_QBaseInputMethodQuery(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqstatusbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQStatusBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnInputMethodQuery(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_FocusNextPrevChild(QStatusBar* self, bool next) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQStatusBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QStatusBar_QBaseFocusNextPrevChild(QStatusBar* self, bool next) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusNextPrevChild_IsBase(true);
        return vqstatusbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQStatusBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusNextPrevChild(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_EventFilter(QStatusBar* self, QObject* watched, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->eventFilter(watched, event);
    } else {
        return self->QStatusBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStatusBar_QBaseEventFilter(QStatusBar* self, QObject* watched, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_EventFilter_IsBase(true);
        return vqstatusbar->eventFilter(watched, event);
    } else {
        return self->QStatusBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnEventFilter(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_EventFilter_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_TimerEvent(QStatusBar* self, QTimerEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->timerEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseTimerEvent(QStatusBar* self, QTimerEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_TimerEvent_IsBase(true);
        vqstatusbar->timerEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnTimerEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_TimerEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_ChildEvent(QStatusBar* self, QChildEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->childEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseChildEvent(QStatusBar* self, QChildEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ChildEvent_IsBase(true);
        vqstatusbar->childEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnChildEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ChildEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_CustomEvent(QStatusBar* self, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->customEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStatusBar_QBaseCustomEvent(QStatusBar* self, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_CustomEvent_IsBase(true);
        vqstatusbar->customEvent(event);
    } else {
        ((VirtualQStatusBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnCustomEvent(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_CustomEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_ConnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->connectNotify(*signal);
    } else {
        ((VirtualQStatusBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStatusBar_QBaseConnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ConnectNotify_IsBase(true);
        vqstatusbar->connectNotify(*signal);
    } else {
        ((VirtualQStatusBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnConnectNotify(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_ConnectNotify_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_DisconnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->disconnectNotify(*signal);
    } else {
        ((VirtualQStatusBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStatusBar_QBaseDisconnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DisconnectNotify_IsBase(true);
        vqstatusbar->disconnectNotify(*signal);
    } else {
        ((VirtualQStatusBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDisconnectNotify(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_Reformat(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->reformat();
    } else {
        ((VirtualQStatusBar*)self)->reformat();
    }
}

// Base class handler implementation
void QStatusBar_QBaseReformat(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Reformat_IsBase(true);
        vqstatusbar->reformat();
    } else {
        ((VirtualQStatusBar*)self)->reformat();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnReformat(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Reformat_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Reformat_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_HideOrShow(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->hideOrShow();
    } else {
        ((VirtualQStatusBar*)self)->hideOrShow();
    }
}

// Base class handler implementation
void QStatusBar_QBaseHideOrShow(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HideOrShow_IsBase(true);
        vqstatusbar->hideOrShow();
    } else {
        ((VirtualQStatusBar*)self)->hideOrShow();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHideOrShow(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_HideOrShow_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_HideOrShow_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_UpdateMicroFocus(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->updateMicroFocus();
    } else {
        ((VirtualQStatusBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QStatusBar_QBaseUpdateMicroFocus(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_UpdateMicroFocus_IsBase(true);
        vqstatusbar->updateMicroFocus();
    } else {
        ((VirtualQStatusBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnUpdateMicroFocus(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_Create(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->create();
    } else {
        ((VirtualQStatusBar*)self)->create();
    }
}

// Base class handler implementation
void QStatusBar_QBaseCreate(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Create_IsBase(true);
        vqstatusbar->create();
    } else {
        ((VirtualQStatusBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnCreate(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Create_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusBar_Destroy(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->destroy();
    } else {
        ((VirtualQStatusBar*)self)->destroy();
    }
}

// Base class handler implementation
void QStatusBar_QBaseDestroy(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Destroy_IsBase(true);
        vqstatusbar->destroy();
    } else {
        ((VirtualQStatusBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDestroy(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Destroy_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_FocusNextChild(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->focusNextChild();
    } else {
        return ((VirtualQStatusBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QStatusBar_QBaseFocusNextChild(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusNextChild_IsBase(true);
        return vqstatusbar->focusNextChild();
    } else {
        return ((VirtualQStatusBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusNextChild(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusNextChild_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_FocusPreviousChild(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->focusPreviousChild();
    } else {
        return ((VirtualQStatusBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QStatusBar_QBaseFocusPreviousChild(QStatusBar* self) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusPreviousChild_IsBase(true);
        return vqstatusbar->focusPreviousChild();
    } else {
        return ((VirtualQStatusBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusPreviousChild(QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStatusBar_Sender(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->sender();
    } else {
        return ((VirtualQStatusBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStatusBar_QBaseSender(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Sender_IsBase(true);
        return vqstatusbar->sender();
    } else {
        return ((VirtualQStatusBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSender(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Sender_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStatusBar_SenderSignalIndex(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->senderSignalIndex();
    } else {
        return ((VirtualQStatusBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStatusBar_QBaseSenderSignalIndex(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SenderSignalIndex_IsBase(true);
        return vqstatusbar->senderSignalIndex();
    } else {
        return ((VirtualQStatusBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSenderSignalIndex(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStatusBar_Receivers(const QStatusBar* self, const char* signal) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->receivers(signal);
    } else {
        return ((VirtualQStatusBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStatusBar_QBaseReceivers(const QStatusBar* self, const char* signal) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Receivers_IsBase(true);
        return vqstatusbar->receivers(signal);
    } else {
        return ((VirtualQStatusBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnReceivers(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_Receivers_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStatusBar_IsSignalConnected(const QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQStatusBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStatusBar_QBaseIsSignalConnected(const QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_IsSignalConnected_IsBase(true);
        return vqstatusbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQStatusBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnIsSignalConnected(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QStatusBar_GetDecodedMetricF(const QStatusBar* self, int metricA, int metricB) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        return vqstatusbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQStatusBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QStatusBar_QBaseGetDecodedMetricF(const QStatusBar* self, int metricA, int metricB) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_GetDecodedMetricF_IsBase(true);
        return vqstatusbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQStatusBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnGetDecodedMetricF(const QStatusBar* self, intptr_t slot) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
        vqstatusbar->setQStatusBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_GetDecodedMetricF_Callback>(slot));
    }
}

void QStatusBar_Delete(QStatusBar* self) {
    delete self;
}
