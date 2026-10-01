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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStatusBar_Tr(const char* s) {
    auto _ret = QStatusBar::tr(s);
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
    auto _ret = self->currentMessage();
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
    QStatusBar::connect(self,
                        static_cast<void (QStatusBar::*)(const QString&)>(&QStatusBar::messageChanged),
                        [self, slotFunc](const QString& text) {
                            const auto text_ret = text;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray text_b = text_ret.toUtf8();
                            auto text_str_len = text_b.length();
                            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                            memcpy((void*)text_str, text_b.data(), text_str_len);
                            ((char*)text_str)[text_str_len] = '\0';
                            const char* sigval1 = text_str;
                            slotFunc(self, sigval1);
                            libqt_free(text_str);
                        });
}

void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->showEvent(param1);
    }
}

void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->paintEvent(param1);
    }
}

void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->resizeEvent(param1);
    }
}

bool QStatusBar_Event(QStatusBar* self, QEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        return vqstatusbar->event(param1);
    }
    qFatal("Error: Protected method QStatusBar::event called without a directly constructed type");
}

libqt_string QStatusBar_Tr2(const char* s, const char* c) {
    auto _ret = QStatusBar::tr(s, c);
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
    auto _ret = QStatusBar::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QStatusBar_SuperMetaObject(const QStatusBar* self) {
    return (QMetaObject*)self->QStatusBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMetaObject(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_metaobject_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStatusBar_SuperMetacast(QStatusBar* self, const char* param1) {
    return self->QStatusBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMetacast(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_metacast_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStatusBar_SuperMetacall(QStatusBar* self, int param1, int param2, void** param3) {
    return self->QStatusBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMetacall(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_metacall_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_Metacall_Callback>(slot);
}

// Base class handler implementation
void QStatusBar_SuperShowEvent(QStatusBar* self, QShowEvent* param1) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStatusBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnShowEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_showevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QStatusBar_SuperPaintEvent(QStatusBar* self, QPaintEvent* param1) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStatusBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnPaintEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_paintevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QStatusBar_SuperResizeEvent(QStatusBar* self, QResizeEvent* param1) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStatusBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnResizeEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_resizeevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
bool QStatusBar_SuperEvent(QStatusBar* self, QEvent* param1) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        return vqstatusbar->QStatusBar::event(param1);
    } else
        qFatal("Error: Protected virtual method QStatusBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_event_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_Event_Callback>(slot);
}

// Derived class handler implementation
int QStatusBar_DevType(const QStatusBar* self) {
    return self->devType();
}

// Base class handler implementation
int QStatusBar_SuperDevType(const QStatusBar* self) {
    return self->QStatusBar::devType();
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDevType(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_devtype_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_SetVisible(QStatusBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QStatusBar_SuperSetVisible(QStatusBar* self, bool visible) {
    self->QStatusBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSetVisible(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_setvisible_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QStatusBar_SizeHint(const QStatusBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QStatusBar_SuperSizeHint(const QStatusBar* self) {
    return new QSize(self->QStatusBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSizeHint(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_sizehint_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QStatusBar_MinimumSizeHint(const QStatusBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QStatusBar_SuperMinimumSizeHint(const QStatusBar* self) {
    return new QSize(self->QStatusBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMinimumSizeHint(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_minimumsizehint_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QStatusBar_HeightForWidth(const QStatusBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QStatusBar_SuperHeightForWidth(const QStatusBar* self, int param1) {
    return self->QStatusBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHeightForWidth(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_heightforwidth_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QStatusBar_HasHeightForWidth(const QStatusBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QStatusBar_SuperHasHeightForWidth(const QStatusBar* self) {
    return self->QStatusBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHasHeightForWidth(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_hasheightforwidth_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QStatusBar_PaintEngine(const QStatusBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QStatusBar_SuperPaintEngine(const QStatusBar* self) {
    return self->QStatusBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnPaintEngine(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_paintengine_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_MousePressEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperMousePressEvent(QStatusBar* self, QMouseEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMousePressEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_mousepressevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_MouseReleaseEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperMouseReleaseEvent(QStatusBar* self, QMouseEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMouseReleaseEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_mousereleaseevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_MouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperMouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMouseDoubleClickEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_MouseMoveEvent(QStatusBar* self, QMouseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperMouseMoveEvent(QStatusBar* self, QMouseEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMouseMoveEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_mousemoveevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_WheelEvent(QStatusBar* self, QWheelEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperWheelEvent(QStatusBar* self, QWheelEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnWheelEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_wheelevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_KeyPressEvent(QStatusBar* self, QKeyEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperKeyPressEvent(QStatusBar* self, QKeyEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnKeyPressEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_keypressevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_KeyReleaseEvent(QStatusBar* self, QKeyEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperKeyReleaseEvent(QStatusBar* self, QKeyEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnKeyReleaseEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_keyreleaseevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_FocusInEvent(QStatusBar* self, QFocusEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperFocusInEvent(QStatusBar* self, QFocusEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusInEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_focusinevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_FocusOutEvent(QStatusBar* self, QFocusEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperFocusOutEvent(QStatusBar* self, QFocusEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusOutEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_focusoutevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_EnterEvent(QStatusBar* self, QEnterEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperEnterEvent(QStatusBar* self, QEnterEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnEnterEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_enterevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_LeaveEvent(QStatusBar* self, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperLeaveEvent(QStatusBar* self, QEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnLeaveEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_leaveevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_MoveEvent(QStatusBar* self, QMoveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperMoveEvent(QStatusBar* self, QMoveEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMoveEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_moveevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_CloseEvent(QStatusBar* self, QCloseEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperCloseEvent(QStatusBar* self, QCloseEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnCloseEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_closeevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_ContextMenuEvent(QStatusBar* self, QContextMenuEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperContextMenuEvent(QStatusBar* self, QContextMenuEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnContextMenuEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_contextmenuevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_TabletEvent(QStatusBar* self, QTabletEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperTabletEvent(QStatusBar* self, QTabletEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnTabletEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_tabletevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_ActionEvent(QStatusBar* self, QActionEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperActionEvent(QStatusBar* self, QActionEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnActionEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_actionevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_DragEnterEvent(QStatusBar* self, QDragEnterEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperDragEnterEvent(QStatusBar* self, QDragEnterEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDragEnterEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_dragenterevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_DragMoveEvent(QStatusBar* self, QDragMoveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperDragMoveEvent(QStatusBar* self, QDragMoveEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDragMoveEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_dragmoveevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_DragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperDragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDragLeaveEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_dragleaveevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_DropEvent(QStatusBar* self, QDropEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperDropEvent(QStatusBar* self, QDropEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDropEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_dropevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_HideEvent(QStatusBar* self, QHideEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperHideEvent(QStatusBar* self, QHideEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHideEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_hideevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QStatusBar_NativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        return vqstatusbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QStatusBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QStatusBar_SuperNativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        return vqstatusbar->QStatusBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QStatusBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnNativeEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_nativeevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_ChangeEvent(QStatusBar* self, QEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperChangeEvent(QStatusBar* self, QEvent* param1) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStatusBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnChangeEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_changeevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QStatusBar_Metric(const QStatusBar* self, int param1) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar) {
        return vqstatusbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QStatusBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QStatusBar_SuperMetric(const QStatusBar* self, int param1) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->QStatusBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QStatusBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnMetric(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_metric_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_InitPainter(const QStatusBar* self, QPainter* painter) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar) {
        vqstatusbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperInitPainter(const QStatusBar* self, QPainter* painter) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        vqstatusbar->QStatusBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QStatusBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnInitPainter(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_initpainter_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QStatusBar_Redirected(const QStatusBar* self, QPoint* offset) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar) {
        return vqstatusbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QStatusBar_SuperRedirected(const QStatusBar* self, QPoint* offset) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->QStatusBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QStatusBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnRedirected(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_redirected_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QStatusBar_SharedPainter(const QStatusBar* self) {
    auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self));
    if (vqstatusbar) {
        return vqstatusbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QStatusBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QStatusBar_SuperSharedPainter(const QStatusBar* self) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->QStatusBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QStatusBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnSharedPainter(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_sharedpainter_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_InputMethodEvent(QStatusBar* self, QInputMethodEvent* param1) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperInputMethodEvent(QStatusBar* self, QInputMethodEvent* param1) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStatusBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnInputMethodEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_inputmethodevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QStatusBar_InputMethodQuery(const QStatusBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QStatusBar_SuperInputMethodQuery(const QStatusBar* self, int param1) {
    return new QVariant(self->QStatusBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnInputMethodQuery(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self)))
        vqstatusbar->qstatusbar_inputmethodquery_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QStatusBar_FocusNextPrevChild(QStatusBar* self, bool next) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        return vqstatusbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QStatusBar_SuperFocusNextPrevChild(QStatusBar* self, bool next) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        return vqstatusbar->QStatusBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QStatusBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnFocusNextPrevChild(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_focusnextprevchild_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QStatusBar_EventFilter(QStatusBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStatusBar_SuperEventFilter(QStatusBar* self, QObject* watched, QEvent* event) {
    return self->QStatusBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnEventFilter(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_eventfilter_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_TimerEvent(QStatusBar* self, QTimerEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperTimerEvent(QStatusBar* self, QTimerEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnTimerEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_timerevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_ChildEvent(QStatusBar* self, QChildEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperChildEvent(QStatusBar* self, QChildEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnChildEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_childevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_CustomEvent(QStatusBar* self, QEvent* event) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperCustomEvent(QStatusBar* self, QEvent* event) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStatusBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnCustomEvent(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_customevent_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_ConnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperConnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStatusBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnConnectNotify(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_connectnotify_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStatusBar_DisconnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
    if (vqstatusbar) {
        vqstatusbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStatusBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStatusBar_SuperDisconnectNotify(QStatusBar* self, const QMetaMethod* signal) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->QStatusBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStatusBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnDisconnectNotify(QStatusBar* self, intptr_t slot) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self))
        vqstatusbar->qstatusbar_disconnectnotify_callback = reinterpret_cast<VirtualQStatusBar::QStatusBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QStatusBar_Reformat(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->VirtualQStatusBar::reformat();
    } else
        qFatal("Error: Protected method QStatusBar::reformat called without a directly constructed type");
}

// Derived class protected handler implementation
void QStatusBar_HideOrShow(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->VirtualQStatusBar::hideOrShow();
    } else
        qFatal("Error: Protected method QStatusBar::hideOrShow called without a directly constructed type");
}

// Derived class protected handler implementation
void QStatusBar_UpdateMicroFocus(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->VirtualQStatusBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method QStatusBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QStatusBar_Create(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->VirtualQStatusBar::create();
    } else
        qFatal("Error: Protected method QStatusBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QStatusBar_Destroy(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        vqstatusbar->VirtualQStatusBar::destroy();
    } else
        qFatal("Error: Protected method QStatusBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStatusBar_FocusNextChild(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        return vqstatusbar->VirtualQStatusBar::focusNextChild();
    } else
        qFatal("Error: Protected method QStatusBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStatusBar_FocusPreviousChild(QStatusBar* self) {
    if (auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self)) {
        return vqstatusbar->VirtualQStatusBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method QStatusBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QStatusBar_Sender(const QStatusBar* self) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->VirtualQStatusBar::sender();
    } else
        qFatal("Error: Protected method QStatusBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStatusBar_SenderSignalIndex(const QStatusBar* self) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->VirtualQStatusBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStatusBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStatusBar_Receivers(const QStatusBar* self, const char* signal) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->VirtualQStatusBar::receivers(signal);
    } else
        qFatal("Error: Protected method QStatusBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStatusBar_IsSignalConnected(const QStatusBar* self, const QMetaMethod* signal) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->VirtualQStatusBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStatusBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QStatusBar_GetDecodedMetricF(const QStatusBar* self, int metricA, int metricB) {
    if (auto* vqstatusbar = const_cast<VirtualQStatusBar*>(dynamic_cast<const VirtualQStatusBar*>(self))) {
        return vqstatusbar->VirtualQStatusBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QStatusBar::getDecodedMetricF called without a directly constructed type");
}

void QStatusBar_Delete(QStatusBar* self) {
    delete self;
}
