#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialogButtonBox>
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
#include <QPoint>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdialogbuttonbox.h>
#include "libqdialogbuttonbox.h"
#include "libqdialogbuttonbox.hxx"

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent) {
    return new VirtualQDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new2() {
    return new VirtualQDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new3(int orientation) {
    return new VirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent) {
    return new VirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QDialogButtonBox_MetaObject(const QDialogButtonBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDialogButtonBox_Metacast(QDialogButtonBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDialogButtonBox_Metacall(QDialogButtonBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDialogButtonBox_Tr(const char* s) {
    auto _ret = QDialogButtonBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_Orientation(const QDialogButtonBox* self) {
    return static_cast<int>(self->orientation());
}

void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role) {
    self->addButton(button, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, const libqt_string text, int role) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addButton(text_QString, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton3(QDialogButtonBox* self, int button) {
    return self->addButton(static_cast<QDialogButtonBox::StandardButton>(button));
}

void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button) {
    self->removeButton(button);
}

void QDialogButtonBox_Clear(QDialogButtonBox* self) {
    self->clear();
}

libqt_list /* of QAbstractButton* */ QDialogButtonBox_Buttons(const QDialogButtonBox* self) {
    QList<QAbstractButton*> _ret = self->buttons();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button) {
    return static_cast<int>(self->buttonRole(button));
}

void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons) {
    self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self) {
    return static_cast<int>(self->standardButtons());
}

int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button) {
    return static_cast<int>(self->standardButton(button));
}

QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which) {
    return self->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center) {
    self->setCenterButtons(center);
}

bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self) {
    return self->centerButtons();
}

void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button) {
    self->clicked(button);
}

void QDialogButtonBox_Connect_Clicked(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*, QAbstractButton*) = reinterpret_cast<void (*)(QDialogButtonBox*, QAbstractButton*)>(slot);
    QDialogButtonBox::connect(self,
                              static_cast<void (QDialogButtonBox::*)(QAbstractButton*)>(&QDialogButtonBox::clicked),
                              [self, slotFunc](QAbstractButton* button) {
                                  QAbstractButton* sigval1 = button;
                                  slotFunc(self, sigval1);
                              });
}

void QDialogButtonBox_Accepted(QDialogButtonBox* self) {
    self->accepted();
}

void QDialogButtonBox_Connect_Accepted(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self,
                              static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::accepted),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QDialogButtonBox_HelpRequested(QDialogButtonBox* self) {
    self->helpRequested();
}

void QDialogButtonBox_Connect_HelpRequested(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self,
                              static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::helpRequested),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QDialogButtonBox_Rejected(QDialogButtonBox* self) {
    self->rejected();
}

void QDialogButtonBox_Connect_Rejected(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self,
                              static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::rejected),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->changeEvent(event);
    }
}

bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        return vqdialogbuttonbox->event(event);
    }
    qFatal("Error: Protected method QDialogButtonBox::event called without a directly constructed type");
}

libqt_string QDialogButtonBox_Tr2(const char* s, const char* c) {
    auto _ret = QDialogButtonBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDialogButtonBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDialogButtonBox_SuperMetaObject(const QDialogButtonBox* self) {
    return (QMetaObject*)self->QDialogButtonBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMetaObject(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_metaobject_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDialogButtonBox_SuperMetacast(QDialogButtonBox* self, const char* param1) {
    return self->QDialogButtonBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMetacast(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_metacast_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDialogButtonBox_SuperMetacall(QDialogButtonBox* self, int param1, int param2, void** param3) {
    return self->QDialogButtonBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMetacall(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_metacall_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Metacall_Callback>(slot);
}

// Base class handler implementation
void QDialogButtonBox_SuperChangeEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnChangeEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_changeevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
bool QDialogButtonBox_SuperEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->QDialogButtonBox::event(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_event_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Event_Callback>(slot);
}

// Derived class handler implementation
int QDialogButtonBox_DevType(const QDialogButtonBox* self) {
    return self->devType();
}

// Base class handler implementation
int QDialogButtonBox_SuperDevType(const QDialogButtonBox* self) {
    return self->QDialogButtonBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDevType(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_devtype_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_SetVisible(QDialogButtonBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDialogButtonBox_SuperSetVisible(QDialogButtonBox* self, bool visible) {
    self->QDialogButtonBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSetVisible(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_setvisible_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDialogButtonBox_SizeHint(const QDialogButtonBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDialogButtonBox_SuperSizeHint(const QDialogButtonBox* self) {
    return new QSize(self->QDialogButtonBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSizeHint(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_sizehint_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDialogButtonBox_MinimumSizeHint(const QDialogButtonBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDialogButtonBox_SuperMinimumSizeHint(const QDialogButtonBox* self) {
    return new QSize(self->QDialogButtonBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMinimumSizeHint(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_minimumsizehint_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDialogButtonBox_HeightForWidth(const QDialogButtonBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDialogButtonBox_SuperHeightForWidth(const QDialogButtonBox* self, int param1) {
    return self->QDialogButtonBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnHeightForWidth(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_heightforwidth_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDialogButtonBox_HasHeightForWidth(const QDialogButtonBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDialogButtonBox_SuperHasHeightForWidth(const QDialogButtonBox* self) {
    return self->QDialogButtonBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnHasHeightForWidth(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_hasheightforwidth_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDialogButtonBox_PaintEngine(const QDialogButtonBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDialogButtonBox_SuperPaintEngine(const QDialogButtonBox* self) {
    return self->QDialogButtonBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnPaintEngine(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_paintengine_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_MousePressEvent(QDialogButtonBox* self, QMouseEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperMousePressEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMousePressEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_mousepressevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_MouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperMouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMouseReleaseEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_mousereleaseevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_MouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperMouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMouseDoubleClickEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_MouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperMouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMouseMoveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_mousemoveevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_WheelEvent(QDialogButtonBox* self, QWheelEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperWheelEvent(QDialogButtonBox* self, QWheelEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnWheelEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_wheelevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_KeyPressEvent(QDialogButtonBox* self, QKeyEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperKeyPressEvent(QDialogButtonBox* self, QKeyEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnKeyPressEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_keypressevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_KeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperKeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnKeyReleaseEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_keyreleaseevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_FocusInEvent(QDialogButtonBox* self, QFocusEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperFocusInEvent(QDialogButtonBox* self, QFocusEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusInEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_focusinevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_FocusOutEvent(QDialogButtonBox* self, QFocusEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperFocusOutEvent(QDialogButtonBox* self, QFocusEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusOutEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_focusoutevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_EnterEvent(QDialogButtonBox* self, QEnterEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperEnterEvent(QDialogButtonBox* self, QEnterEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEnterEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_enterevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_LeaveEvent(QDialogButtonBox* self, QEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperLeaveEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnLeaveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_leaveevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_PaintEvent(QDialogButtonBox* self, QPaintEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperPaintEvent(QDialogButtonBox* self, QPaintEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnPaintEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_paintevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_MoveEvent(QDialogButtonBox* self, QMoveEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperMoveEvent(QDialogButtonBox* self, QMoveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMoveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_moveevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_ResizeEvent(QDialogButtonBox* self, QResizeEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperResizeEvent(QDialogButtonBox* self, QResizeEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnResizeEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_resizeevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_CloseEvent(QDialogButtonBox* self, QCloseEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperCloseEvent(QDialogButtonBox* self, QCloseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnCloseEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_closeevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_ContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnContextMenuEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_contextmenuevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_TabletEvent(QDialogButtonBox* self, QTabletEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperTabletEvent(QDialogButtonBox* self, QTabletEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnTabletEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_tabletevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_ActionEvent(QDialogButtonBox* self, QActionEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperActionEvent(QDialogButtonBox* self, QActionEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnActionEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_actionevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_DragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperDragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDragEnterEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_dragenterevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_DragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperDragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDragMoveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_dragmoveevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_DragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperDragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDragLeaveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_dragleaveevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_DropEvent(QDialogButtonBox* self, QDropEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperDropEvent(QDialogButtonBox* self, QDropEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDropEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_dropevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_ShowEvent(QDialogButtonBox* self, QShowEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperShowEvent(QDialogButtonBox* self, QShowEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnShowEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_showevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_HideEvent(QDialogButtonBox* self, QHideEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperHideEvent(QDialogButtonBox* self, QHideEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnHideEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_hideevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDialogButtonBox_NativeEvent(QDialogButtonBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        return vqdialogbuttonbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDialogButtonBox_SuperNativeEvent(QDialogButtonBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->QDialogButtonBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnNativeEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_nativeevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDialogButtonBox_Metric(const QDialogButtonBox* self, int param1) {
    auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self));
    if (vqdialogbuttonbox) {
        return vqdialogbuttonbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDialogButtonBox_SuperMetric(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->QDialogButtonBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMetric(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_metric_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_InitPainter(const QDialogButtonBox* self, QPainter* painter) {
    auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self));
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperInitPainter(const QDialogButtonBox* self, QPainter* painter) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->QDialogButtonBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnInitPainter(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_initpainter_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDialogButtonBox_Redirected(const QDialogButtonBox* self, QPoint* offset) {
    auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self));
    if (vqdialogbuttonbox) {
        return vqdialogbuttonbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDialogButtonBox_SuperRedirected(const QDialogButtonBox* self, QPoint* offset) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->QDialogButtonBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnRedirected(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_redirected_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDialogButtonBox_SharedPainter(const QDialogButtonBox* self) {
    auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self));
    if (vqdialogbuttonbox) {
        return vqdialogbuttonbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDialogButtonBox_SuperSharedPainter(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->QDialogButtonBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSharedPainter(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_sharedpainter_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_InputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperInputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnInputMethodEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_inputmethodevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDialogButtonBox_InputMethodQuery(const QDialogButtonBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDialogButtonBox_SuperInputMethodQuery(const QDialogButtonBox* self, int param1) {
    return new QVariant(self->QDialogButtonBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnInputMethodQuery(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self)))
        vqdialogbuttonbox->qdialogbuttonbox_inputmethodquery_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDialogButtonBox_FocusNextPrevChild(QDialogButtonBox* self, bool next) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        return vqdialogbuttonbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDialogButtonBox_SuperFocusNextPrevChild(QDialogButtonBox* self, bool next) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->QDialogButtonBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusNextPrevChild(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_focusnextprevchild_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDialogButtonBox_EventFilter(QDialogButtonBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDialogButtonBox_SuperEventFilter(QDialogButtonBox* self, QObject* watched, QEvent* event) {
    return self->QDialogButtonBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEventFilter(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_eventfilter_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_TimerEvent(QDialogButtonBox* self, QTimerEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperTimerEvent(QDialogButtonBox* self, QTimerEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnTimerEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_timerevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_ChildEvent(QDialogButtonBox* self, QChildEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperChildEvent(QDialogButtonBox* self, QChildEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnChildEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_childevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_CustomEvent(QDialogButtonBox* self, QEvent* event) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperCustomEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnCustomEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_customevent_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_ConnectNotify(QDialogButtonBox* self, const QMetaMethod* signal) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperConnectNotify(QDialogButtonBox* self, const QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnConnectNotify(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_connectnotify_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDialogButtonBox_DisconnectNotify(QDialogButtonBox* self, const QMetaMethod* signal) {
    auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
    if (vqdialogbuttonbox) {
        vqdialogbuttonbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDialogButtonBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialogButtonBox_SuperDisconnectNotify(QDialogButtonBox* self, const QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->QDialogButtonBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDialogButtonBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDisconnectNotify(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self))
        vqdialogbuttonbox->qdialogbuttonbox_disconnectnotify_callback = reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDialogButtonBox_UpdateMicroFocus(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->VirtualQDialogButtonBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDialogButtonBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDialogButtonBox_Create(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->VirtualQDialogButtonBox::create();
    } else
        qFatal("Error: Protected method QDialogButtonBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDialogButtonBox_Destroy(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->VirtualQDialogButtonBox::destroy();
    } else
        qFatal("Error: Protected method QDialogButtonBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDialogButtonBox_FocusNextChild(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::focusNextChild();
    } else
        qFatal("Error: Protected method QDialogButtonBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDialogButtonBox_FocusPreviousChild(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDialogButtonBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDialogButtonBox_Sender(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::sender();
    } else
        qFatal("Error: Protected method QDialogButtonBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDialogButtonBox_SenderSignalIndex(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDialogButtonBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDialogButtonBox_Receivers(const QDialogButtonBox* self, const char* signal) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::receivers(signal);
    } else
        qFatal("Error: Protected method QDialogButtonBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDialogButtonBox_IsSignalConnected(const QDialogButtonBox* self, const QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDialogButtonBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDialogButtonBox_GetDecodedMetricF(const QDialogButtonBox* self, int metricA, int metricB) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->VirtualQDialogButtonBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDialogButtonBox::getDecodedMetricF called without a directly constructed type");
}

void QDialogButtonBox_Delete(QDialogButtonBox* self) {
    delete self;
}
