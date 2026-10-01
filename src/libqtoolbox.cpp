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
#include <QIcon>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBox>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbox.h>
#include "libqtoolbox.h"
#include "libqtoolbox.hxx"

QToolBox* QToolBox_new(QWidget* parent) {
    return new VirtualQToolBox(parent);
}

QToolBox* QToolBox_new2() {
    return new VirtualQToolBox();
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
    return new VirtualQToolBox(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QToolBox_MetaObject(const QToolBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QToolBox_Metacast(QToolBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QToolBox_Metacall(QToolBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QToolBox_Tr(const char* s) {
    auto _ret = QToolBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QToolBox_AddItem(QToolBox* self, QWidget* widget, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addItem(widget, text_QString);
}

int QToolBox_AddItem2(QToolBox* self, QWidget* widget, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addItem(widget, *icon, text_QString);
}

int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertItem(static_cast<int>(index), widget, text_QString);
}

int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertItem(static_cast<int>(index), widget, *icon, text_QString);
}

void QToolBox_RemoveItem(QToolBox* self, int index) {
    self->removeItem(static_cast<int>(index));
}

void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled) {
    self->setItemEnabled(static_cast<int>(index), enabled);
}

bool QToolBox_IsItemEnabled(const QToolBox* self, int index) {
    return self->isItemEnabled(static_cast<int>(index));
}

void QToolBox_SetItemText(QToolBox* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setItemText(static_cast<int>(index), text_QString);
}

libqt_string QToolBox_ItemText(const QToolBox* self, int index) {
    auto _ret = self->itemText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QToolBox_SetItemIcon(QToolBox* self, int index, const QIcon* icon) {
    self->setItemIcon(static_cast<int>(index), *icon);
}

QIcon* QToolBox_ItemIcon(const QToolBox* self, int index) {
    return new QIcon(self->itemIcon(static_cast<int>(index)));
}

void QToolBox_SetItemToolTip(QToolBox* self, int index, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setItemToolTip(static_cast<int>(index), toolTip_QString);
}

libqt_string QToolBox_ItemToolTip(const QToolBox* self, int index) {
    auto _ret = self->itemToolTip(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QToolBox_CurrentIndex(const QToolBox* self) {
    return self->currentIndex();
}

QWidget* QToolBox_CurrentWidget(const QToolBox* self) {
    return self->currentWidget();
}

QWidget* QToolBox_Widget(const QToolBox* self, int index) {
    return self->widget(static_cast<int>(index));
}

int QToolBox_IndexOf(const QToolBox* self, const QWidget* widget) {
    return self->indexOf(widget);
}

int QToolBox_Count(const QToolBox* self) {
    return self->count();
}

void QToolBox_SetCurrentIndex(QToolBox* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget) {
    self->setCurrentWidget(widget);
}

void QToolBox_CurrentChanged(QToolBox* self, int index) {
    self->currentChanged(static_cast<int>(index));
}

void QToolBox_Connect_CurrentChanged(QToolBox* self, intptr_t slot) {
    void (*slotFunc)(QToolBox*, int) = reinterpret_cast<void (*)(QToolBox*, int)>(slot);
    QToolBox::connect(self,
                      static_cast<void (QToolBox::*)(int)>(&QToolBox::currentChanged),
                      [self, slotFunc](int index) {
                          int sigval1 = index;
                          slotFunc(self, sigval1);
                      });
}

bool QToolBox_Event(QToolBox* self, QEvent* e) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        return vqtoolbox->event(e);
    }
    qFatal("Error: Protected method QToolBox::event called without a directly constructed type");
}

void QToolBox_ItemInserted(QToolBox* self, int index) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->itemInserted(static_cast<int>(index));
    }
}

void QToolBox_ItemRemoved(QToolBox* self, int index) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->itemRemoved(static_cast<int>(index));
    }
}

void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->showEvent(e);
    }
}

void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->changeEvent(param1);
    }
}

libqt_string QToolBox_Tr2(const char* s, const char* c) {
    auto _ret = QToolBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QToolBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QToolBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* QToolBox_SuperMetaObject(const QToolBox* self) {
    return (QMetaObject*)self->QToolBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMetaObject(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_metaobject_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QToolBox_SuperMetacast(QToolBox* self, const char* param1) {
    return self->QToolBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMetacast(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_metacast_callback = reinterpret_cast<VirtualQToolBox::QToolBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QToolBox_SuperMetacall(QToolBox* self, int param1, int param2, void** param3) {
    return self->QToolBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMetacall(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_metacall_callback = reinterpret_cast<VirtualQToolBox::QToolBox_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QToolBox_SuperEvent(QToolBox* self, QEvent* e) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        return vqtoolbox->QToolBox::event(e);
    } else
        qFatal("Error: Protected virtual method QToolBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_event_callback = reinterpret_cast<VirtualQToolBox::QToolBox_Event_Callback>(slot);
}

// Base class handler implementation
void QToolBox_SuperItemInserted(QToolBox* self, int index) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::itemInserted(static_cast<int>(index));
    } else
        qFatal("Error: Protected virtual method QToolBox::itemInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnItemInserted(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_iteminserted_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ItemInserted_Callback>(slot);
}

// Base class handler implementation
void QToolBox_SuperItemRemoved(QToolBox* self, int index) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::itemRemoved(static_cast<int>(index));
    } else
        qFatal("Error: Protected virtual method QToolBox::itemRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnItemRemoved(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_itemremoved_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ItemRemoved_Callback>(slot);
}

// Base class handler implementation
void QToolBox_SuperShowEvent(QToolBox* self, QShowEvent* e) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method QToolBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnShowEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_showevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QToolBox_SuperChangeEvent(QToolBox* self, QEvent* param1) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnChangeEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_changeevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QToolBox_SizeHint(const QToolBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QToolBox_SuperSizeHint(const QToolBox* self) {
    return new QSize(self->QToolBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSizeHint(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_sizehint_callback = reinterpret_cast<VirtualQToolBox::QToolBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_PaintEvent(QToolBox* self, QPaintEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QToolBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperPaintEvent(QToolBox* self, QPaintEvent* param1) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnPaintEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_paintevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_InitStyleOption(const QToolBox* self, QStyleOptionFrame* option) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox) {
        vqtoolbox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QToolBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperInitStyleOption(const QToolBox* self, QStyleOptionFrame* option) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        vqtoolbox->QToolBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QToolBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInitStyleOption(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_initstyleoption_callback = reinterpret_cast<VirtualQToolBox::QToolBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QToolBox_DevType(const QToolBox* self) {
    return self->devType();
}

// Base class handler implementation
int QToolBox_SuperDevType(const QToolBox* self) {
    return self->QToolBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDevType(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_devtype_callback = reinterpret_cast<VirtualQToolBox::QToolBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_SetVisible(QToolBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QToolBox_SuperSetVisible(QToolBox* self, bool visible) {
    self->QToolBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSetVisible(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_setvisible_callback = reinterpret_cast<VirtualQToolBox::QToolBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QToolBox_MinimumSizeHint(const QToolBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QToolBox_SuperMinimumSizeHint(const QToolBox* self) {
    return new QSize(self->QToolBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMinimumSizeHint(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_minimumsizehint_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QToolBox_HeightForWidth(const QToolBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QToolBox_SuperHeightForWidth(const QToolBox* self, int param1) {
    return self->QToolBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnHeightForWidth(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_heightforwidth_callback = reinterpret_cast<VirtualQToolBox::QToolBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QToolBox_HasHeightForWidth(const QToolBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QToolBox_SuperHasHeightForWidth(const QToolBox* self) {
    return self->QToolBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnHasHeightForWidth(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_hasheightforwidth_callback = reinterpret_cast<VirtualQToolBox::QToolBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QToolBox_PaintEngine(const QToolBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QToolBox_SuperPaintEngine(const QToolBox* self) {
    return self->QToolBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnPaintEngine(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_paintengine_callback = reinterpret_cast<VirtualQToolBox::QToolBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_MousePressEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperMousePressEvent(QToolBox* self, QMouseEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMousePressEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_mousepressevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_MouseReleaseEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperMouseReleaseEvent(QToolBox* self, QMouseEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMouseReleaseEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_mousereleaseevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_MouseDoubleClickEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperMouseDoubleClickEvent(QToolBox* self, QMouseEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMouseDoubleClickEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_MouseMoveEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperMouseMoveEvent(QToolBox* self, QMouseEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMouseMoveEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_mousemoveevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_WheelEvent(QToolBox* self, QWheelEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperWheelEvent(QToolBox* self, QWheelEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnWheelEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_wheelevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_KeyPressEvent(QToolBox* self, QKeyEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperKeyPressEvent(QToolBox* self, QKeyEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnKeyPressEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_keypressevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_KeyReleaseEvent(QToolBox* self, QKeyEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperKeyReleaseEvent(QToolBox* self, QKeyEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnKeyReleaseEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_keyreleaseevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_FocusInEvent(QToolBox* self, QFocusEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperFocusInEvent(QToolBox* self, QFocusEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusInEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_focusinevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_FocusOutEvent(QToolBox* self, QFocusEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperFocusOutEvent(QToolBox* self, QFocusEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusOutEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_focusoutevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_EnterEvent(QToolBox* self, QEnterEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperEnterEvent(QToolBox* self, QEnterEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEnterEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_enterevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_LeaveEvent(QToolBox* self, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperLeaveEvent(QToolBox* self, QEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnLeaveEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_leaveevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_MoveEvent(QToolBox* self, QMoveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperMoveEvent(QToolBox* self, QMoveEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMoveEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_moveevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_ResizeEvent(QToolBox* self, QResizeEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperResizeEvent(QToolBox* self, QResizeEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnResizeEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_resizeevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_CloseEvent(QToolBox* self, QCloseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperCloseEvent(QToolBox* self, QCloseEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnCloseEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_closeevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_ContextMenuEvent(QToolBox* self, QContextMenuEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperContextMenuEvent(QToolBox* self, QContextMenuEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnContextMenuEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_contextmenuevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_TabletEvent(QToolBox* self, QTabletEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperTabletEvent(QToolBox* self, QTabletEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnTabletEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_tabletevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_ActionEvent(QToolBox* self, QActionEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperActionEvent(QToolBox* self, QActionEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnActionEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_actionevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_DragEnterEvent(QToolBox* self, QDragEnterEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperDragEnterEvent(QToolBox* self, QDragEnterEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDragEnterEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_dragenterevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_DragMoveEvent(QToolBox* self, QDragMoveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperDragMoveEvent(QToolBox* self, QDragMoveEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDragMoveEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_dragmoveevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_DragLeaveEvent(QToolBox* self, QDragLeaveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperDragLeaveEvent(QToolBox* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDragLeaveEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_dragleaveevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_DropEvent(QToolBox* self, QDropEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperDropEvent(QToolBox* self, QDropEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDropEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_dropevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_HideEvent(QToolBox* self, QHideEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperHideEvent(QToolBox* self, QHideEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnHideEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_hideevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QToolBox_NativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        return vqtoolbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QToolBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QToolBox_SuperNativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        return vqtoolbox->QToolBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QToolBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnNativeEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_nativeevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QToolBox_Metric(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox) {
        return vqtoolbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QToolBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QToolBox_SuperMetric(const QToolBox* self, int param1) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->QToolBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QToolBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMetric(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_metric_callback = reinterpret_cast<VirtualQToolBox::QToolBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_InitPainter(const QToolBox* self, QPainter* painter) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox) {
        vqtoolbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QToolBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperInitPainter(const QToolBox* self, QPainter* painter) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        vqtoolbox->QToolBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QToolBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInitPainter(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_initpainter_callback = reinterpret_cast<VirtualQToolBox::QToolBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QToolBox_Redirected(const QToolBox* self, QPoint* offset) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox) {
        return vqtoolbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QToolBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QToolBox_SuperRedirected(const QToolBox* self, QPoint* offset) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->QToolBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QToolBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnRedirected(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_redirected_callback = reinterpret_cast<VirtualQToolBox::QToolBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QToolBox_SharedPainter(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox) {
        return vqtoolbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QToolBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QToolBox_SuperSharedPainter(const QToolBox* self) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->QToolBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QToolBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSharedPainter(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_sharedpainter_callback = reinterpret_cast<VirtualQToolBox::QToolBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_InputMethodEvent(QToolBox* self, QInputMethodEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QToolBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperInputMethodEvent(QToolBox* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInputMethodEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_inputmethodevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QToolBox_InputMethodQuery(const QToolBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QToolBox_SuperInputMethodQuery(const QToolBox* self, int param1) {
    return new QVariant(self->QToolBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInputMethodQuery(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self)))
        vqtoolbox->qtoolbox_inputmethodquery_callback = reinterpret_cast<VirtualQToolBox::QToolBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QToolBox_FocusNextPrevChild(QToolBox* self, bool next) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        return vqtoolbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QToolBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QToolBox_SuperFocusNextPrevChild(QToolBox* self, bool next) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        return vqtoolbox->QToolBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QToolBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusNextPrevChild(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_focusnextprevchild_callback = reinterpret_cast<VirtualQToolBox::QToolBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QToolBox_EventFilter(QToolBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QToolBox_SuperEventFilter(QToolBox* self, QObject* watched, QEvent* event) {
    return self->QToolBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEventFilter(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_eventfilter_callback = reinterpret_cast<VirtualQToolBox::QToolBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_TimerEvent(QToolBox* self, QTimerEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperTimerEvent(QToolBox* self, QTimerEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnTimerEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_timerevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_ChildEvent(QToolBox* self, QChildEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperChildEvent(QToolBox* self, QChildEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnChildEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_childevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_CustomEvent(QToolBox* self, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperCustomEvent(QToolBox* self, QEvent* event) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnCustomEvent(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_customevent_callback = reinterpret_cast<VirtualQToolBox::QToolBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_ConnectNotify(QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QToolBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperConnectNotify(QToolBox* self, const QMetaMethod* signal) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QToolBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnConnectNotify(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_connectnotify_callback = reinterpret_cast<VirtualQToolBox::QToolBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QToolBox_DisconnectNotify(QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox) {
        vqtoolbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QToolBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBox_SuperDisconnectNotify(QToolBox* self, const QMetaMethod* signal) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->QToolBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QToolBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDisconnectNotify(QToolBox* self, intptr_t slot) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self))
        vqtoolbox->qtoolbox_disconnectnotify_callback = reinterpret_cast<VirtualQToolBox::QToolBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QToolBox_DrawFrame(QToolBox* self, QPainter* param1) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->VirtualQToolBox::drawFrame(param1);
    } else
        qFatal("Error: Protected method QToolBox::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolBox_UpdateMicroFocus(QToolBox* self) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->VirtualQToolBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QToolBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolBox_Create(QToolBox* self) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->VirtualQToolBox::create();
    } else
        qFatal("Error: Protected method QToolBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolBox_Destroy(QToolBox* self) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        vqtoolbox->VirtualQToolBox::destroy();
    } else
        qFatal("Error: Protected method QToolBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolBox_FocusNextChild(QToolBox* self) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        return vqtoolbox->VirtualQToolBox::focusNextChild();
    } else
        qFatal("Error: Protected method QToolBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolBox_FocusPreviousChild(QToolBox* self) {
    if (auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self)) {
        return vqtoolbox->VirtualQToolBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QToolBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QToolBox_Sender(const QToolBox* self) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->VirtualQToolBox::sender();
    } else
        qFatal("Error: Protected method QToolBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QToolBox_SenderSignalIndex(const QToolBox* self) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->VirtualQToolBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QToolBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QToolBox_Receivers(const QToolBox* self, const char* signal) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->VirtualQToolBox::receivers(signal);
    } else
        qFatal("Error: Protected method QToolBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolBox_IsSignalConnected(const QToolBox* self, const QMetaMethod* signal) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->VirtualQToolBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QToolBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QToolBox_GetDecodedMetricF(const QToolBox* self, int metricA, int metricB) {
    if (auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self))) {
        return vqtoolbox->VirtualQToolBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QToolBox::getDecodedMetricF called without a directly constructed type");
}

void QToolBox_Delete(QToolBox* self) {
    delete self;
}
