#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
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
#include <QString>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcheckbox.h>
#include "libqcheckbox.h"
#include "libqcheckbox.hxx"

QCheckBox* QCheckBox_new(QWidget* parent) {
    return new VirtualQCheckBox(parent);
}

QCheckBox* QCheckBox_new2() {
    return new VirtualQCheckBox();
}

QCheckBox* QCheckBox_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCheckBox(text_QString);
}

QCheckBox* QCheckBox_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCheckBox(text_QString, parent);
}

QMetaObject* QCheckBox_MetaObject(const QCheckBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCheckBox_Metacast(QCheckBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCheckBox_Metacall(QCheckBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCheckBox_Tr(const char* s) {
    auto _ret = QCheckBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QCheckBox_SizeHint(const QCheckBox* self) {
    return new QSize(self->sizeHint());
}

QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self) {
    return new QSize(self->minimumSizeHint());
}

void QCheckBox_SetTristate(QCheckBox* self) {
    self->setTristate();
}

bool QCheckBox_IsTristate(const QCheckBox* self) {
    return self->isTristate();
}

int QCheckBox_CheckState(const QCheckBox* self) {
    return static_cast<int>(self->checkState());
}

void QCheckBox_SetCheckState(QCheckBox* self, int state) {
    self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
    self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_Connect_StateChanged(QCheckBox* self, intptr_t slot) {
    void (*slotFunc)(QCheckBox*, int) = reinterpret_cast<void (*)(QCheckBox*, int)>(slot);
    QCheckBox::connect(self,
                       static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged),
                       [self, slotFunc](int param1) {
                           int sigval1 = param1;
                           slotFunc(self, sigval1);
                       });
}

void QCheckBox_CheckStateChanged(QCheckBox* self, int param1) {
    self->checkStateChanged(static_cast<Qt::CheckState>(param1));
}

void QCheckBox_Connect_CheckStateChanged(QCheckBox* self, intptr_t slot) {
    void (*slotFunc)(QCheckBox*, int) = reinterpret_cast<void (*)(QCheckBox*, int)>(slot);
    QCheckBox::connect(self,
                       static_cast<void (QCheckBox::*)(Qt::CheckState)>(&QCheckBox::checkStateChanged),
                       [self, slotFunc](Qt::CheckState param1) {
                           int sigval1 = static_cast<int>(param1);
                           slotFunc(self, sigval1);
                       });
}

bool QCheckBox_Event(QCheckBox* self, QEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        return vqcheckbox->event(e);
    }
    qFatal("Error: Protected method QCheckBox::event called without a directly constructed type");
}

bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos) {
    auto* vqcheckbox = dynamic_cast<const VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        return vqcheckbox->hitButton(*pos);
    }
    qFatal("Error: Protected method QCheckBox::hitButton called without a directly constructed type");
}

void QCheckBox_CheckStateSet(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->checkStateSet();
    }
}

void QCheckBox_NextCheckState(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->nextCheckState();
    }
}

void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->paintEvent(param1);
    }
}

void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->mouseMoveEvent(param1);
    }
}

void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option) {
    auto* vqcheckbox = dynamic_cast<const VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->initStyleOption(option);
    }
}

libqt_string QCheckBox_Tr2(const char* s, const char* c) {
    auto _ret = QCheckBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCheckBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCheckBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
    self->setTristate(y);
}

// Base class handler implementation
QMetaObject* QCheckBox_SuperMetaObject(const QCheckBox* self) {
    return (QMetaObject*)self->QCheckBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMetaObject(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_metaobject_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCheckBox_SuperMetacast(QCheckBox* self, const char* param1) {
    return self->QCheckBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMetacast(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_metacast_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCheckBox_SuperMetacall(QCheckBox* self, int param1, int param2, void** param3) {
    return self->QCheckBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMetacall(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_metacall_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QCheckBox_SuperSizeHint(const QCheckBox* self) {
    return new QSize(self->QCheckBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSizeHint(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_sizehint_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QCheckBox_SuperMinimumSizeHint(const QCheckBox* self) {
    return new QSize(self->QCheckBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMinimumSizeHint(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_minimumsizehint_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QCheckBox_SuperEvent(QCheckBox* self, QEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        return vqcheckbox->QCheckBox::event(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_event_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_Event_Callback>(slot);
}

// Base class handler implementation
bool QCheckBox_SuperHitButton(const QCheckBox* self, const QPoint* pos) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->QCheckBox::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method QCheckBox::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHitButton(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_hitbutton_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_HitButton_Callback>(slot);
}

// Base class handler implementation
void QCheckBox_SuperCheckStateSet(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::checkStateSet();
    } else
        qFatal("Error: Protected virtual method QCheckBox::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCheckStateSet(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_checkstateset_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_CheckStateSet_Callback>(slot);
}

// Base class handler implementation
void QCheckBox_SuperNextCheckState(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::nextCheckState();
    } else
        qFatal("Error: Protected virtual method QCheckBox::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnNextCheckState(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_nextcheckstate_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_NextCheckState_Callback>(slot);
}

// Base class handler implementation
void QCheckBox_SuperPaintEvent(QCheckBox* self, QPaintEvent* param1) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCheckBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnPaintEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_paintevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QCheckBox_SuperMouseMoveEvent(QCheckBox* self, QMouseEvent* param1) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCheckBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMouseMoveEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_mousemoveevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QCheckBox_SuperInitStyleOption(const QCheckBox* self, QStyleOptionButton* option) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        vqcheckbox->QCheckBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QCheckBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInitStyleOption(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_initstyleoption_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_KeyPressEvent(QCheckBox* self, QKeyEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperKeyPressEvent(QCheckBox* self, QKeyEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnKeyPressEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_keypressevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_KeyReleaseEvent(QCheckBox* self, QKeyEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperKeyReleaseEvent(QCheckBox* self, QKeyEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnKeyReleaseEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_keyreleaseevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_MousePressEvent(QCheckBox* self, QMouseEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperMousePressEvent(QCheckBox* self, QMouseEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMousePressEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_mousepressevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_MouseReleaseEvent(QCheckBox* self, QMouseEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperMouseReleaseEvent(QCheckBox* self, QMouseEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMouseReleaseEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_mousereleaseevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_FocusInEvent(QCheckBox* self, QFocusEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperFocusInEvent(QCheckBox* self, QFocusEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusInEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_focusinevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_FocusOutEvent(QCheckBox* self, QFocusEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperFocusOutEvent(QCheckBox* self, QFocusEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusOutEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_focusoutevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ChangeEvent(QCheckBox* self, QEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperChangeEvent(QCheckBox* self, QEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnChangeEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_changeevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_TimerEvent(QCheckBox* self, QTimerEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperTimerEvent(QCheckBox* self, QTimerEvent* e) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QCheckBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnTimerEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_timerevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int QCheckBox_DevType(const QCheckBox* self) {
    return self->devType();
}

// Base class handler implementation
int QCheckBox_SuperDevType(const QCheckBox* self) {
    return self->QCheckBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDevType(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_devtype_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_SetVisible(QCheckBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QCheckBox_SuperSetVisible(QCheckBox* self, bool visible) {
    self->QCheckBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSetVisible(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_setvisible_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QCheckBox_HeightForWidth(const QCheckBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QCheckBox_SuperHeightForWidth(const QCheckBox* self, int param1) {
    return self->QCheckBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHeightForWidth(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_heightforwidth_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QCheckBox_HasHeightForWidth(const QCheckBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QCheckBox_SuperHasHeightForWidth(const QCheckBox* self) {
    return self->QCheckBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHasHeightForWidth(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_hasheightforwidth_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QCheckBox_PaintEngine(const QCheckBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QCheckBox_SuperPaintEngine(const QCheckBox* self) {
    return self->QCheckBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnPaintEngine(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_paintengine_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_MouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperMouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMouseDoubleClickEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_WheelEvent(QCheckBox* self, QWheelEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperWheelEvent(QCheckBox* self, QWheelEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnWheelEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_wheelevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_EnterEvent(QCheckBox* self, QEnterEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperEnterEvent(QCheckBox* self, QEnterEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnEnterEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_enterevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_LeaveEvent(QCheckBox* self, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperLeaveEvent(QCheckBox* self, QEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnLeaveEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_leaveevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_MoveEvent(QCheckBox* self, QMoveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperMoveEvent(QCheckBox* self, QMoveEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMoveEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_moveevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ResizeEvent(QCheckBox* self, QResizeEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperResizeEvent(QCheckBox* self, QResizeEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnResizeEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_resizeevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_CloseEvent(QCheckBox* self, QCloseEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperCloseEvent(QCheckBox* self, QCloseEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCloseEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_closeevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ContextMenuEvent(QCheckBox* self, QContextMenuEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperContextMenuEvent(QCheckBox* self, QContextMenuEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnContextMenuEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_contextmenuevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_TabletEvent(QCheckBox* self, QTabletEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperTabletEvent(QCheckBox* self, QTabletEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnTabletEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_tabletevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ActionEvent(QCheckBox* self, QActionEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperActionEvent(QCheckBox* self, QActionEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnActionEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_actionevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_DragEnterEvent(QCheckBox* self, QDragEnterEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperDragEnterEvent(QCheckBox* self, QDragEnterEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDragEnterEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_dragenterevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_DragMoveEvent(QCheckBox* self, QDragMoveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperDragMoveEvent(QCheckBox* self, QDragMoveEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDragMoveEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_dragmoveevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_DragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperDragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDragLeaveEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_dragleaveevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_DropEvent(QCheckBox* self, QDropEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperDropEvent(QCheckBox* self, QDropEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDropEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_dropevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ShowEvent(QCheckBox* self, QShowEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperShowEvent(QCheckBox* self, QShowEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnShowEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_showevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_HideEvent(QCheckBox* self, QHideEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperHideEvent(QCheckBox* self, QHideEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHideEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_hideevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QCheckBox_NativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        return vqcheckbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QCheckBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCheckBox_SuperNativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        return vqcheckbox->QCheckBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QCheckBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnNativeEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_nativeevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QCheckBox_Metric(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox) {
        return vqcheckbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QCheckBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QCheckBox_SuperMetric(const QCheckBox* self, int param1) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->QCheckBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QCheckBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMetric(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_metric_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_InitPainter(const QCheckBox* self, QPainter* painter) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox) {
        vqcheckbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperInitPainter(const QCheckBox* self, QPainter* painter) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        vqcheckbox->QCheckBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QCheckBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInitPainter(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_initpainter_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QCheckBox_Redirected(const QCheckBox* self, QPoint* offset) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox) {
        return vqcheckbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QCheckBox_SuperRedirected(const QCheckBox* self, QPoint* offset) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->QCheckBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QCheckBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnRedirected(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_redirected_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QCheckBox_SharedPainter(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox) {
        return vqcheckbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QCheckBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QCheckBox_SuperSharedPainter(const QCheckBox* self) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->QCheckBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QCheckBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSharedPainter(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_sharedpainter_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_InputMethodEvent(QCheckBox* self, QInputMethodEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperInputMethodEvent(QCheckBox* self, QInputMethodEvent* param1) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCheckBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInputMethodEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_inputmethodevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QCheckBox_InputMethodQuery(const QCheckBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QCheckBox_SuperInputMethodQuery(const QCheckBox* self, int param1) {
    return new QVariant(self->QCheckBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInputMethodQuery(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self)))
        vqcheckbox->qcheckbox_inputmethodquery_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QCheckBox_FocusNextPrevChild(QCheckBox* self, bool next) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        return vqcheckbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCheckBox_SuperFocusNextPrevChild(QCheckBox* self, bool next) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        return vqcheckbox->QCheckBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QCheckBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusNextPrevChild(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_focusnextprevchild_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QCheckBox_EventFilter(QCheckBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCheckBox_SuperEventFilter(QCheckBox* self, QObject* watched, QEvent* event) {
    return self->QCheckBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnEventFilter(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_eventfilter_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ChildEvent(QCheckBox* self, QChildEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperChildEvent(QCheckBox* self, QChildEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnChildEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_childevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_CustomEvent(QCheckBox* self, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperCustomEvent(QCheckBox* self, QEvent* event) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCheckBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCustomEvent(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_customevent_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_ConnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperConnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCheckBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnConnectNotify(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_connectnotify_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCheckBox_DisconnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox) {
        vqcheckbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCheckBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCheckBox_SuperDisconnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->QCheckBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCheckBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDisconnectNotify(QCheckBox* self, intptr_t slot) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self))
        vqcheckbox->qcheckbox_disconnectnotify_callback = reinterpret_cast<VirtualQCheckBox::QCheckBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QCheckBox_UpdateMicroFocus(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->VirtualQCheckBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QCheckBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QCheckBox_Create(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->VirtualQCheckBox::create();
    } else
        qFatal("Error: Protected method QCheckBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QCheckBox_Destroy(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        vqcheckbox->VirtualQCheckBox::destroy();
    } else
        qFatal("Error: Protected method QCheckBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCheckBox_FocusNextChild(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        return vqcheckbox->VirtualQCheckBox::focusNextChild();
    } else
        qFatal("Error: Protected method QCheckBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCheckBox_FocusPreviousChild(QCheckBox* self) {
    if (auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self)) {
        return vqcheckbox->VirtualQCheckBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QCheckBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QCheckBox_Sender(const QCheckBox* self) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->VirtualQCheckBox::sender();
    } else
        qFatal("Error: Protected method QCheckBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCheckBox_SenderSignalIndex(const QCheckBox* self) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->VirtualQCheckBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCheckBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCheckBox_Receivers(const QCheckBox* self, const char* signal) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->VirtualQCheckBox::receivers(signal);
    } else
        qFatal("Error: Protected method QCheckBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCheckBox_IsSignalConnected(const QCheckBox* self, const QMetaMethod* signal) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->VirtualQCheckBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCheckBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QCheckBox_GetDecodedMetricF(const QCheckBox* self, int metricA, int metricB) {
    if (auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self))) {
        return vqcheckbox->VirtualQCheckBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QCheckBox::getDecodedMetricF called without a directly constructed type");
}

void QCheckBox_Delete(QCheckBox* self) {
    delete self;
}
