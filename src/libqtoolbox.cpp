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
#include <QByteArray>
#include <cstring>
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
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQToolBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QToolBox_OnMetacall(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Metacall_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QToolBox_QBaseMetacall(QToolBox* self, int param1, int param2, void** param3) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Metacall_IsBase(true);
        return vqtoolbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQToolBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QToolBox_Tr(const char* s) {
    QString _ret = QToolBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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
    QString _ret = self->itemText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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
    QString _ret = self->itemToolTip(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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
    QToolBox::connect(self, &QToolBox::currentChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

libqt_string QToolBox_Tr2(const char* s, const char* c) {
    QString _ret = QToolBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QToolBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QToolBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QToolBox_Event(QToolBox* self, QEvent* e) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->event(e);
    } else {
        return ((VirtualQToolBox*)self)->event(e);
    }
}

// Base class handler implementation
bool QToolBox_QBaseEvent(QToolBox* self, QEvent* e) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Event_IsBase(true);
        return vqtoolbox->event(e);
    } else {
        return ((VirtualQToolBox*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Event_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ItemInserted(QToolBox* self, int index) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->itemInserted(static_cast<int>(index));
    } else {
        ((VirtualQToolBox*)self)->itemInserted(static_cast<int>(index));
    }
}

// Base class handler implementation
void QToolBox_QBaseItemInserted(QToolBox* self, int index) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ItemInserted_IsBase(true);
        vqtoolbox->itemInserted(static_cast<int>(index));
    } else {
        ((VirtualQToolBox*)self)->itemInserted(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnItemInserted(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ItemInserted_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ItemInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ItemRemoved(QToolBox* self, int index) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->itemRemoved(static_cast<int>(index));
    } else {
        ((VirtualQToolBox*)self)->itemRemoved(static_cast<int>(index));
    }
}

// Base class handler implementation
void QToolBox_QBaseItemRemoved(QToolBox* self, int index) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ItemRemoved_IsBase(true);
        vqtoolbox->itemRemoved(static_cast<int>(index));
    } else {
        ((VirtualQToolBox*)self)->itemRemoved(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnItemRemoved(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ItemRemoved_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ItemRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->showEvent(e);
    } else {
        ((VirtualQToolBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void QToolBox_QBaseShowEvent(QToolBox* self, QShowEvent* e) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ShowEvent_IsBase(true);
        vqtoolbox->showEvent(e);
    } else {
        ((VirtualQToolBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnShowEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ShowEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->changeEvent(param1);
    } else {
        ((VirtualQToolBox*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QToolBox_QBaseChangeEvent(QToolBox* self, QEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ChangeEvent_IsBase(true);
        vqtoolbox->changeEvent(param1);
    } else {
        ((VirtualQToolBox*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnChangeEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ChangeEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QToolBox_SizeHint(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return new QSize(vqtoolbox->sizeHint());
    } else {
        return new QSize(((VirtualQToolBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QToolBox_QBaseSizeHint(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SizeHint_IsBase(true);
        return new QSize(vqtoolbox->sizeHint());
    } else {
        return new QSize(((VirtualQToolBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSizeHint(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SizeHint_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_PaintEvent(QToolBox* self, QPaintEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->paintEvent(param1);
    } else {
        ((VirtualQToolBox*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QToolBox_QBasePaintEvent(QToolBox* self, QPaintEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_PaintEvent_IsBase(true);
        vqtoolbox->paintEvent(param1);
    } else {
        ((VirtualQToolBox*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnPaintEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_PaintEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_InitStyleOption(const QToolBox* self, QStyleOptionFrame* option) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->initStyleOption(option);
    } else {
        ((VirtualQToolBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QToolBox_QBaseInitStyleOption(const QToolBox* self, QStyleOptionFrame* option) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InitStyleOption_IsBase(true);
        vqtoolbox->initStyleOption(option);
    } else {
        ((VirtualQToolBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInitStyleOption(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InitStyleOption_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBox_DevType(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->devType();
    } else {
        return self->QToolBox::devType();
    }
}

// Base class handler implementation
int QToolBox_QBaseDevType(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DevType_IsBase(true);
        return vqtoolbox->devType();
    } else {
        return self->QToolBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDevType(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DevType_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_SetVisible(QToolBox* self, bool visible) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setVisible(visible);
    } else {
        self->QToolBox::setVisible(visible);
    }
}

// Base class handler implementation
void QToolBox_QBaseSetVisible(QToolBox* self, bool visible) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SetVisible_IsBase(true);
        vqtoolbox->setVisible(visible);
    } else {
        self->QToolBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSetVisible(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SetVisible_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QToolBox_MinimumSizeHint(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return new QSize(vqtoolbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQToolBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QToolBox_QBaseMinimumSizeHint(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqtoolbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQToolBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMinimumSizeHint(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBox_HeightForWidth(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QToolBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QToolBox_QBaseHeightForWidth(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_HeightForWidth_IsBase(true);
        return vqtoolbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QToolBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnHeightForWidth(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_HeightForWidth_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_HasHeightForWidth(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->hasHeightForWidth();
    } else {
        return self->QToolBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QToolBox_QBaseHasHeightForWidth(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_HasHeightForWidth_IsBase(true);
        return vqtoolbox->hasHeightForWidth();
    } else {
        return self->QToolBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnHasHeightForWidth(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QToolBox_PaintEngine(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->paintEngine();
    } else {
        return self->QToolBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QToolBox_QBasePaintEngine(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_PaintEngine_IsBase(true);
        return vqtoolbox->paintEngine();
    } else {
        return self->QToolBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnPaintEngine(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_PaintEngine_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_MousePressEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->mousePressEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseMousePressEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MousePressEvent_IsBase(true);
        vqtoolbox->mousePressEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMousePressEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MousePressEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_MouseReleaseEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseMouseReleaseEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MouseReleaseEvent_IsBase(true);
        vqtoolbox->mouseReleaseEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMouseReleaseEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_MouseDoubleClickEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseMouseDoubleClickEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MouseDoubleClickEvent_IsBase(true);
        vqtoolbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMouseDoubleClickEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_MouseMoveEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->mouseMoveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseMouseMoveEvent(QToolBox* self, QMouseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MouseMoveEvent_IsBase(true);
        vqtoolbox->mouseMoveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMouseMoveEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_WheelEvent(QToolBox* self, QWheelEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->wheelEvent(event);
    } else {
        ((VirtualQToolBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseWheelEvent(QToolBox* self, QWheelEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_WheelEvent_IsBase(true);
        vqtoolbox->wheelEvent(event);
    } else {
        ((VirtualQToolBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnWheelEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_WheelEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_KeyPressEvent(QToolBox* self, QKeyEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->keyPressEvent(event);
    } else {
        ((VirtualQToolBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseKeyPressEvent(QToolBox* self, QKeyEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_KeyPressEvent_IsBase(true);
        vqtoolbox->keyPressEvent(event);
    } else {
        ((VirtualQToolBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnKeyPressEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_KeyReleaseEvent(QToolBox* self, QKeyEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->keyReleaseEvent(event);
    } else {
        ((VirtualQToolBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseKeyReleaseEvent(QToolBox* self, QKeyEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_KeyReleaseEvent_IsBase(true);
        vqtoolbox->keyReleaseEvent(event);
    } else {
        ((VirtualQToolBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnKeyReleaseEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_FocusInEvent(QToolBox* self, QFocusEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->focusInEvent(event);
    } else {
        ((VirtualQToolBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseFocusInEvent(QToolBox* self, QFocusEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusInEvent_IsBase(true);
        vqtoolbox->focusInEvent(event);
    } else {
        ((VirtualQToolBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusInEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusInEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_FocusOutEvent(QToolBox* self, QFocusEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->focusOutEvent(event);
    } else {
        ((VirtualQToolBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseFocusOutEvent(QToolBox* self, QFocusEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusOutEvent_IsBase(true);
        vqtoolbox->focusOutEvent(event);
    } else {
        ((VirtualQToolBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusOutEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_EnterEvent(QToolBox* self, QEnterEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->enterEvent(event);
    } else {
        ((VirtualQToolBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseEnterEvent(QToolBox* self, QEnterEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_EnterEvent_IsBase(true);
        vqtoolbox->enterEvent(event);
    } else {
        ((VirtualQToolBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEnterEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_EnterEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_LeaveEvent(QToolBox* self, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->leaveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseLeaveEvent(QToolBox* self, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_LeaveEvent_IsBase(true);
        vqtoolbox->leaveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnLeaveEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_LeaveEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_MoveEvent(QToolBox* self, QMoveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->moveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseMoveEvent(QToolBox* self, QMoveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MoveEvent_IsBase(true);
        vqtoolbox->moveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMoveEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_MoveEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ResizeEvent(QToolBox* self, QResizeEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->resizeEvent(event);
    } else {
        ((VirtualQToolBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseResizeEvent(QToolBox* self, QResizeEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ResizeEvent_IsBase(true);
        vqtoolbox->resizeEvent(event);
    } else {
        ((VirtualQToolBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnResizeEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ResizeEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_CloseEvent(QToolBox* self, QCloseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->closeEvent(event);
    } else {
        ((VirtualQToolBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseCloseEvent(QToolBox* self, QCloseEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_CloseEvent_IsBase(true);
        vqtoolbox->closeEvent(event);
    } else {
        ((VirtualQToolBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnCloseEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_CloseEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ContextMenuEvent(QToolBox* self, QContextMenuEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->contextMenuEvent(event);
    } else {
        ((VirtualQToolBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseContextMenuEvent(QToolBox* self, QContextMenuEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ContextMenuEvent_IsBase(true);
        vqtoolbox->contextMenuEvent(event);
    } else {
        ((VirtualQToolBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnContextMenuEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_TabletEvent(QToolBox* self, QTabletEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->tabletEvent(event);
    } else {
        ((VirtualQToolBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseTabletEvent(QToolBox* self, QTabletEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_TabletEvent_IsBase(true);
        vqtoolbox->tabletEvent(event);
    } else {
        ((VirtualQToolBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnTabletEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_TabletEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ActionEvent(QToolBox* self, QActionEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->actionEvent(event);
    } else {
        ((VirtualQToolBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseActionEvent(QToolBox* self, QActionEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ActionEvent_IsBase(true);
        vqtoolbox->actionEvent(event);
    } else {
        ((VirtualQToolBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnActionEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ActionEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_DragEnterEvent(QToolBox* self, QDragEnterEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->dragEnterEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseDragEnterEvent(QToolBox* self, QDragEnterEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DragEnterEvent_IsBase(true);
        vqtoolbox->dragEnterEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDragEnterEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_DragMoveEvent(QToolBox* self, QDragMoveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->dragMoveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseDragMoveEvent(QToolBox* self, QDragMoveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DragMoveEvent_IsBase(true);
        vqtoolbox->dragMoveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDragMoveEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_DragLeaveEvent(QToolBox* self, QDragLeaveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->dragLeaveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseDragLeaveEvent(QToolBox* self, QDragLeaveEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DragLeaveEvent_IsBase(true);
        vqtoolbox->dragLeaveEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDragLeaveEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_DropEvent(QToolBox* self, QDropEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->dropEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseDropEvent(QToolBox* self, QDropEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DropEvent_IsBase(true);
        vqtoolbox->dropEvent(event);
    } else {
        ((VirtualQToolBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDropEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DropEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_HideEvent(QToolBox* self, QHideEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->hideEvent(event);
    } else {
        ((VirtualQToolBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseHideEvent(QToolBox* self, QHideEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_HideEvent_IsBase(true);
        vqtoolbox->hideEvent(event);
    } else {
        ((VirtualQToolBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnHideEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_HideEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_NativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQToolBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QToolBox_QBaseNativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_NativeEvent_IsBase(true);
        return vqtoolbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQToolBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnNativeEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_NativeEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBox_Metric(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQToolBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QToolBox_QBaseMetric(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Metric_IsBase(true);
        return vqtoolbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQToolBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnMetric(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Metric_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_InitPainter(const QToolBox* self, QPainter* painter) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->initPainter(painter);
    } else {
        ((VirtualQToolBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QToolBox_QBaseInitPainter(const QToolBox* self, QPainter* painter) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InitPainter_IsBase(true);
        vqtoolbox->initPainter(painter);
    } else {
        ((VirtualQToolBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInitPainter(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InitPainter_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QToolBox_Redirected(const QToolBox* self, QPoint* offset) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->redirected(offset);
    } else {
        return ((VirtualQToolBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QToolBox_QBaseRedirected(const QToolBox* self, QPoint* offset) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Redirected_IsBase(true);
        return vqtoolbox->redirected(offset);
    } else {
        return ((VirtualQToolBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnRedirected(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Redirected_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QToolBox_SharedPainter(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->sharedPainter();
    } else {
        return ((VirtualQToolBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QToolBox_QBaseSharedPainter(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SharedPainter_IsBase(true);
        return vqtoolbox->sharedPainter();
    } else {
        return ((VirtualQToolBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSharedPainter(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SharedPainter_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_InputMethodEvent(QToolBox* self, QInputMethodEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->inputMethodEvent(param1);
    } else {
        ((VirtualQToolBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QToolBox_QBaseInputMethodEvent(QToolBox* self, QInputMethodEvent* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InputMethodEvent_IsBase(true);
        vqtoolbox->inputMethodEvent(param1);
    } else {
        ((VirtualQToolBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInputMethodEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QToolBox_InputMethodQuery(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return new QVariant(vqtoolbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQToolBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QToolBox_QBaseInputMethodQuery(const QToolBox* self, int param1) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqtoolbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQToolBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnInputMethodQuery(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_FocusNextPrevChild(QToolBox* self, bool next) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQToolBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QToolBox_QBaseFocusNextPrevChild(QToolBox* self, bool next) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusNextPrevChild_IsBase(true);
        return vqtoolbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQToolBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusNextPrevChild(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_EventFilter(QToolBox* self, QObject* watched, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->eventFilter(watched, event);
    } else {
        return self->QToolBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QToolBox_QBaseEventFilter(QToolBox* self, QObject* watched, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_EventFilter_IsBase(true);
        return vqtoolbox->eventFilter(watched, event);
    } else {
        return self->QToolBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEventFilter(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_EventFilter_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_TimerEvent(QToolBox* self, QTimerEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->timerEvent(event);
    } else {
        ((VirtualQToolBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseTimerEvent(QToolBox* self, QTimerEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_TimerEvent_IsBase(true);
        vqtoolbox->timerEvent(event);
    } else {
        ((VirtualQToolBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnTimerEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_TimerEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ChildEvent(QToolBox* self, QChildEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->childEvent(event);
    } else {
        ((VirtualQToolBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseChildEvent(QToolBox* self, QChildEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ChildEvent_IsBase(true);
        vqtoolbox->childEvent(event);
    } else {
        ((VirtualQToolBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnChildEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ChildEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_CustomEvent(QToolBox* self, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->customEvent(event);
    } else {
        ((VirtualQToolBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QToolBox_QBaseCustomEvent(QToolBox* self, QEvent* event) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_CustomEvent_IsBase(true);
        vqtoolbox->customEvent(event);
    } else {
        ((VirtualQToolBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnCustomEvent(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_CustomEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_ConnectNotify(QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->connectNotify(*signal);
    } else {
        ((VirtualQToolBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QToolBox_QBaseConnectNotify(QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ConnectNotify_IsBase(true);
        vqtoolbox->connectNotify(*signal);
    } else {
        ((VirtualQToolBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnConnectNotify(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_ConnectNotify_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_DisconnectNotify(QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->disconnectNotify(*signal);
    } else {
        ((VirtualQToolBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QToolBox_QBaseDisconnectNotify(QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DisconnectNotify_IsBase(true);
        vqtoolbox->disconnectNotify(*signal);
    } else {
        ((VirtualQToolBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDisconnectNotify(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_DrawFrame(QToolBox* self, QPainter* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->drawFrame(param1);
    } else {
        ((VirtualQToolBox*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QToolBox_QBaseDrawFrame(QToolBox* self, QPainter* param1) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DrawFrame_IsBase(true);
        vqtoolbox->drawFrame(param1);
    } else {
        ((VirtualQToolBox*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDrawFrame(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_DrawFrame_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_UpdateMicroFocus(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->updateMicroFocus();
    } else {
        ((VirtualQToolBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QToolBox_QBaseUpdateMicroFocus(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_UpdateMicroFocus_IsBase(true);
        vqtoolbox->updateMicroFocus();
    } else {
        ((VirtualQToolBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnUpdateMicroFocus(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_Create(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->create();
    } else {
        ((VirtualQToolBox*)self)->create();
    }
}

// Base class handler implementation
void QToolBox_QBaseCreate(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Create_IsBase(true);
        vqtoolbox->create();
    } else {
        ((VirtualQToolBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnCreate(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Create_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBox_Destroy(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->destroy();
    } else {
        ((VirtualQToolBox*)self)->destroy();
    }
}

// Base class handler implementation
void QToolBox_QBaseDestroy(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Destroy_IsBase(true);
        vqtoolbox->destroy();
    } else {
        ((VirtualQToolBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnDestroy(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Destroy_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_FocusNextChild(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->focusNextChild();
    } else {
        return ((VirtualQToolBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QToolBox_QBaseFocusNextChild(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusNextChild_IsBase(true);
        return vqtoolbox->focusNextChild();
    } else {
        return ((VirtualQToolBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusNextChild(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusNextChild_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_FocusPreviousChild(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->focusPreviousChild();
    } else {
        return ((VirtualQToolBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QToolBox_QBaseFocusPreviousChild(QToolBox* self) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusPreviousChild_IsBase(true);
        return vqtoolbox->focusPreviousChild();
    } else {
        return ((VirtualQToolBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnFocusPreviousChild(QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QToolBox_Sender(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->sender();
    } else {
        return ((VirtualQToolBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* QToolBox_QBaseSender(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Sender_IsBase(true);
        return vqtoolbox->sender();
    } else {
        return ((VirtualQToolBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSender(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Sender_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBox_SenderSignalIndex(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->senderSignalIndex();
    } else {
        return ((VirtualQToolBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QToolBox_QBaseSenderSignalIndex(const QToolBox* self) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SenderSignalIndex_IsBase(true);
        return vqtoolbox->senderSignalIndex();
    } else {
        return ((VirtualQToolBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnSenderSignalIndex(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBox_Receivers(const QToolBox* self, const char* signal) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->receivers(signal);
    } else {
        return ((VirtualQToolBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QToolBox_QBaseReceivers(const QToolBox* self, const char* signal) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Receivers_IsBase(true);
        return vqtoolbox->receivers(signal);
    } else {
        return ((VirtualQToolBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnReceivers(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_Receivers_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBox_IsSignalConnected(const QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        return vqtoolbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQToolBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QToolBox_QBaseIsSignalConnected(const QToolBox* self, const QMetaMethod* signal) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_IsSignalConnected_IsBase(true);
        return vqtoolbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQToolBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnIsSignalConnected(const QToolBox* self, intptr_t slot) {
    auto* vqtoolbox = const_cast<VirtualQToolBox*>(dynamic_cast<const VirtualQToolBox*>(self));
    if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
        vqtoolbox->setQToolBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_IsSignalConnected_Callback>(slot));
    }
}

void QToolBox_Delete(QToolBox* self) {
    delete self;
}
