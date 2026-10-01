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
#include <QGroupBox>
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
#include <QStyleOptionGroupBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgroupbox.h>
#include "libqgroupbox.h"
#include "libqgroupbox.hxx"

QGroupBox* QGroupBox_new(QWidget* parent) {
    return new VirtualQGroupBox(parent);
}

QGroupBox* QGroupBox_new2() {
    return new VirtualQGroupBox();
}

QGroupBox* QGroupBox_new3(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQGroupBox(title_QString);
}

QGroupBox* QGroupBox_new4(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQGroupBox(title_QString, parent);
}

QMetaObject* QGroupBox_MetaObject(const QGroupBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGroupBox_Metacast(QGroupBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGroupBox_Metacall(QGroupBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGroupBox_Tr(const char* s) {
    auto _ret = QGroupBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGroupBox_Title(const QGroupBox* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGroupBox_SetTitle(QGroupBox* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

int QGroupBox_Alignment(const QGroupBox* self) {
    return static_cast<int>(self->alignment());
}

void QGroupBox_SetAlignment(QGroupBox* self, int alignment) {
    self->setAlignment(static_cast<int>(alignment));
}

QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self) {
    return new QSize(self->minimumSizeHint());
}

bool QGroupBox_IsFlat(const QGroupBox* self) {
    return self->isFlat();
}

void QGroupBox_SetFlat(QGroupBox* self, bool flat) {
    self->setFlat(flat);
}

bool QGroupBox_IsCheckable(const QGroupBox* self) {
    return self->isCheckable();
}

void QGroupBox_SetCheckable(QGroupBox* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QGroupBox_IsChecked(const QGroupBox* self) {
    return self->isChecked();
}

void QGroupBox_SetChecked(QGroupBox* self, bool checked) {
    self->setChecked(checked);
}

void QGroupBox_Clicked(QGroupBox* self) {
    self->clicked();
}

void QGroupBox_Connect_Clicked(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*) = reinterpret_cast<void (*)(QGroupBox*)>(slot);
    QGroupBox::connect(self,
                       static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QGroupBox_Toggled(QGroupBox* self, bool param1) {
    self->toggled(param1);
}

void QGroupBox_Connect_Toggled(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*, bool) = reinterpret_cast<void (*)(QGroupBox*, bool)>(slot);
    QGroupBox::connect(self,
                       static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::toggled),
                       [self, slotFunc](bool param1) {
                           bool sigval1 = param1;
                           slotFunc(self, sigval1);
                       });
}

bool QGroupBox_Event(QGroupBox* self, QEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        return vqgroupbox->event(event);
    }
    qFatal("Error: Protected method QGroupBox::event called without a directly constructed type");
}

void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->childEvent(event);
    }
}

void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->resizeEvent(event);
    }
}

void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->paintEvent(event);
    }
}

void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->focusInEvent(event);
    }
}

void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->changeEvent(event);
    }
}

void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->mousePressEvent(event);
    }
}

void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->mouseMoveEvent(event);
    }
}

void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->mouseReleaseEvent(event);
    }
}

void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option) {
    auto* vqgroupbox = dynamic_cast<const VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->initStyleOption(option);
    }
}

libqt_string QGroupBox_Tr2(const char* s, const char* c) {
    auto _ret = QGroupBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGroupBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGroupBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGroupBox_Clicked1(QGroupBox* self, bool checked) {
    self->clicked(checked);
}

void QGroupBox_Connect_Clicked1(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*, bool) = reinterpret_cast<void (*)(QGroupBox*, bool)>(slot);
    QGroupBox::connect(self,
                       static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked),
                       [self, slotFunc](bool checked) {
                           bool sigval1 = checked;
                           slotFunc(self, sigval1);
                       });
}

// Base class handler implementation
QMetaObject* QGroupBox_SuperMetaObject(const QGroupBox* self) {
    return (QMetaObject*)self->QGroupBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMetaObject(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_metaobject_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGroupBox_SuperMetacast(QGroupBox* self, const char* param1) {
    return self->QGroupBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMetacast(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_metacast_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGroupBox_SuperMetacall(QGroupBox* self, int param1, int param2, void** param3) {
    return self->QGroupBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMetacall(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_metacall_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QGroupBox_SuperMinimumSizeHint(const QGroupBox* self) {
    return new QSize(self->QGroupBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMinimumSizeHint(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_minimumsizehint_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QGroupBox_SuperEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->QGroupBox::event(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_event_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_Event_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperChildEvent(QGroupBox* self, QChildEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnChildEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_childevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ChildEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperResizeEvent(QGroupBox* self, QResizeEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnResizeEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_resizeevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperPaintEvent(QGroupBox* self, QPaintEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnPaintEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_paintevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperFocusInEvent(QGroupBox* self, QFocusEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusInEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_focusinevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperChangeEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnChangeEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_changeevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperMousePressEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMousePressEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_mousepressevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperMouseMoveEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseMoveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_mousemoveevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperMouseReleaseEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseReleaseEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_mousereleaseevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGroupBox_SuperInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->QGroupBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QGroupBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInitStyleOption(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_initstyleoption_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QGroupBox_DevType(const QGroupBox* self) {
    return self->devType();
}

// Base class handler implementation
int QGroupBox_SuperDevType(const QGroupBox* self) {
    return self->QGroupBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDevType(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_devtype_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_SetVisible(QGroupBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QGroupBox_SuperSetVisible(QGroupBox* self, bool visible) {
    self->QGroupBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSetVisible(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_setvisible_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QGroupBox_SizeHint(const QGroupBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QGroupBox_SuperSizeHint(const QGroupBox* self) {
    return new QSize(self->QGroupBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSizeHint(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_sizehint_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int QGroupBox_HeightForWidth(const QGroupBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QGroupBox_SuperHeightForWidth(const QGroupBox* self, int param1) {
    return self->QGroupBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnHeightForWidth(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_heightforwidth_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QGroupBox_HasHeightForWidth(const QGroupBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QGroupBox_SuperHasHeightForWidth(const QGroupBox* self) {
    return self->QGroupBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnHasHeightForWidth(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_hasheightforwidth_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QGroupBox_PaintEngine(const QGroupBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QGroupBox_SuperPaintEngine(const QGroupBox* self) {
    return self->QGroupBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnPaintEngine(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_paintengine_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_MouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperMouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseDoubleClickEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_WheelEvent(QGroupBox* self, QWheelEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperWheelEvent(QGroupBox* self, QWheelEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnWheelEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_wheelevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_KeyPressEvent(QGroupBox* self, QKeyEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperKeyPressEvent(QGroupBox* self, QKeyEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnKeyPressEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_keypressevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_KeyReleaseEvent(QGroupBox* self, QKeyEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperKeyReleaseEvent(QGroupBox* self, QKeyEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnKeyReleaseEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_keyreleaseevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_FocusOutEvent(QGroupBox* self, QFocusEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperFocusOutEvent(QGroupBox* self, QFocusEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusOutEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_focusoutevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_EnterEvent(QGroupBox* self, QEnterEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperEnterEvent(QGroupBox* self, QEnterEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEnterEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_enterevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_LeaveEvent(QGroupBox* self, QEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperLeaveEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnLeaveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_leaveevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_MoveEvent(QGroupBox* self, QMoveEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperMoveEvent(QGroupBox* self, QMoveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMoveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_moveevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_CloseEvent(QGroupBox* self, QCloseEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperCloseEvent(QGroupBox* self, QCloseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnCloseEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_closeevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_ContextMenuEvent(QGroupBox* self, QContextMenuEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperContextMenuEvent(QGroupBox* self, QContextMenuEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnContextMenuEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_contextmenuevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_TabletEvent(QGroupBox* self, QTabletEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperTabletEvent(QGroupBox* self, QTabletEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnTabletEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_tabletevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_ActionEvent(QGroupBox* self, QActionEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperActionEvent(QGroupBox* self, QActionEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnActionEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_actionevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_DragEnterEvent(QGroupBox* self, QDragEnterEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperDragEnterEvent(QGroupBox* self, QDragEnterEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDragEnterEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_dragenterevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_DragMoveEvent(QGroupBox* self, QDragMoveEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperDragMoveEvent(QGroupBox* self, QDragMoveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDragMoveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_dragmoveevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_DragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperDragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDragLeaveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_dragleaveevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_DropEvent(QGroupBox* self, QDropEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperDropEvent(QGroupBox* self, QDropEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDropEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_dropevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_ShowEvent(QGroupBox* self, QShowEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperShowEvent(QGroupBox* self, QShowEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnShowEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_showevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_HideEvent(QGroupBox* self, QHideEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperHideEvent(QGroupBox* self, QHideEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnHideEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_hideevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGroupBox_NativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        return vqgroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QGroupBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGroupBox_SuperNativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->QGroupBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QGroupBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnNativeEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_nativeevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QGroupBox_Metric(const QGroupBox* self, int param1) {
    auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self));
    if (vqgroupbox) {
        return vqgroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QGroupBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QGroupBox_SuperMetric(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->QGroupBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QGroupBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMetric(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_metric_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_InitPainter(const QGroupBox* self, QPainter* painter) {
    auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self));
    if (vqgroupbox) {
        vqgroupbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperInitPainter(const QGroupBox* self, QPainter* painter) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->QGroupBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QGroupBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInitPainter(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_initpainter_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QGroupBox_Redirected(const QGroupBox* self, QPoint* offset) {
    auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self));
    if (vqgroupbox) {
        return vqgroupbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QGroupBox_SuperRedirected(const QGroupBox* self, QPoint* offset) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->QGroupBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QGroupBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnRedirected(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_redirected_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QGroupBox_SharedPainter(const QGroupBox* self) {
    auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self));
    if (vqgroupbox) {
        return vqgroupbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QGroupBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QGroupBox_SuperSharedPainter(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->QGroupBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QGroupBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSharedPainter(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_sharedpainter_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_InputMethodEvent(QGroupBox* self, QInputMethodEvent* param1) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperInputMethodEvent(QGroupBox* self, QInputMethodEvent* param1) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QGroupBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInputMethodEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_inputmethodevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGroupBox_InputMethodQuery(const QGroupBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QGroupBox_SuperInputMethodQuery(const QGroupBox* self, int param1) {
    return new QVariant(self->QGroupBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInputMethodQuery(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self)))
        vqgroupbox->qgroupbox_inputmethodquery_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QGroupBox_FocusNextPrevChild(QGroupBox* self, bool next) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        return vqgroupbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGroupBox_SuperFocusNextPrevChild(QGroupBox* self, bool next) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->QGroupBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QGroupBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusNextPrevChild(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_focusnextprevchild_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QGroupBox_EventFilter(QGroupBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGroupBox_SuperEventFilter(QGroupBox* self, QObject* watched, QEvent* event) {
    return self->QGroupBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEventFilter(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_eventfilter_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_TimerEvent(QGroupBox* self, QTimerEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperTimerEvent(QGroupBox* self, QTimerEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnTimerEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_timerevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_CustomEvent(QGroupBox* self, QEvent* event) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperCustomEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGroupBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnCustomEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_customevent_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_ConnectNotify(QGroupBox* self, const QMetaMethod* signal) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperConnectNotify(QGroupBox* self, const QMetaMethod* signal) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGroupBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnConnectNotify(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_connectnotify_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGroupBox_DisconnectNotify(QGroupBox* self, const QMetaMethod* signal) {
    auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
    if (vqgroupbox) {
        vqgroupbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGroupBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGroupBox_SuperDisconnectNotify(QGroupBox* self, const QMetaMethod* signal) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->QGroupBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGroupBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDisconnectNotify(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self))
        vqgroupbox->qgroupbox_disconnectnotify_callback = reinterpret_cast<VirtualQGroupBox::QGroupBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGroupBox_UpdateMicroFocus(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->VirtualQGroupBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGroupBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGroupBox_Create(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->VirtualQGroupBox::create();
    } else
        qFatal("Error: Protected method QGroupBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QGroupBox_Destroy(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->VirtualQGroupBox::destroy();
    } else
        qFatal("Error: Protected method QGroupBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGroupBox_FocusNextChild(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->VirtualQGroupBox::focusNextChild();
    } else
        qFatal("Error: Protected method QGroupBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGroupBox_FocusPreviousChild(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->VirtualQGroupBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QGroupBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGroupBox_Sender(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->VirtualQGroupBox::sender();
    } else
        qFatal("Error: Protected method QGroupBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGroupBox_SenderSignalIndex(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->VirtualQGroupBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGroupBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGroupBox_Receivers(const QGroupBox* self, const char* signal) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->VirtualQGroupBox::receivers(signal);
    } else
        qFatal("Error: Protected method QGroupBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGroupBox_IsSignalConnected(const QGroupBox* self, const QMetaMethod* signal) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->VirtualQGroupBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGroupBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QGroupBox_GetDecodedMetricF(const QGroupBox* self, int metricA, int metricB) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->VirtualQGroupBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QGroupBox::getDecodedMetricF called without a directly constructed type");
}

void QGroupBox_Delete(QGroupBox* self) {
    delete self;
}
