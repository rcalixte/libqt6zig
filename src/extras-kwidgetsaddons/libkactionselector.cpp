#include <KActionSelector>
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
#include <QListWidget>
#include <QListWidgetItem>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kactionselector.h>
#include "libkactionselector.h"
#include "libkactionselector.hxx"

KActionSelector* KActionSelector_new(QWidget* parent) {
    return new VirtualKActionSelector(parent);
}

KActionSelector* KActionSelector_new2() {
    return new VirtualKActionSelector();
}

QMetaObject* KActionSelector_MetaObject(const KActionSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* KActionSelector_Metacast(KActionSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KActionSelector_Metacall(KActionSelector* self, int param1, int param2, void** param3) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKActionSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KActionSelector_OnMetacall(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Metacall_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KActionSelector_QBaseMetacall(KActionSelector* self, int param1, int param2, void** param3) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Metacall_IsBase(true);
        return vkactionselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKActionSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KActionSelector_Tr(const char* s) {
    QString _ret = KActionSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QListWidget* KActionSelector_AvailableListWidget(const KActionSelector* self) {
    return self->availableListWidget();
}

QListWidget* KActionSelector_SelectedListWidget(const KActionSelector* self) {
    return self->selectedListWidget();
}

bool KActionSelector_MoveOnDoubleClick(const KActionSelector* self) {
    return self->moveOnDoubleClick();
}

void KActionSelector_SetMoveOnDoubleClick(KActionSelector* self, bool enable) {
    self->setMoveOnDoubleClick(enable);
}

bool KActionSelector_KeyboardEnabled(const KActionSelector* self) {
    return self->keyboardEnabled();
}

void KActionSelector_SetKeyboardEnabled(KActionSelector* self, bool enable) {
    self->setKeyboardEnabled(enable);
}

libqt_string KActionSelector_AvailableLabel(const KActionSelector* self) {
    QString _ret = self->availableLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KActionSelector_SetAvailableLabel(KActionSelector* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setAvailableLabel(text_QString);
}

libqt_string KActionSelector_SelectedLabel(const KActionSelector* self) {
    QString _ret = self->selectedLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KActionSelector_SetSelectedLabel(KActionSelector* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSelectedLabel(text_QString);
}

int KActionSelector_AvailableInsertionPolicy(const KActionSelector* self) {
    return static_cast<int>(self->availableInsertionPolicy());
}

void KActionSelector_SetAvailableInsertionPolicy(KActionSelector* self, int policy) {
    self->setAvailableInsertionPolicy(static_cast<KActionSelector::InsertionPolicy>(policy));
}

int KActionSelector_SelectedInsertionPolicy(const KActionSelector* self) {
    return static_cast<int>(self->selectedInsertionPolicy());
}

void KActionSelector_SetSelectedInsertionPolicy(KActionSelector* self, int policy) {
    self->setSelectedInsertionPolicy(static_cast<KActionSelector::InsertionPolicy>(policy));
}

bool KActionSelector_ShowUpDownButtons(const KActionSelector* self) {
    return self->showUpDownButtons();
}

void KActionSelector_SetShowUpDownButtons(KActionSelector* self, bool show) {
    self->setShowUpDownButtons(show);
}

void KActionSelector_SetButtonIcon(KActionSelector* self, const libqt_string icon, int button) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setButtonIcon(icon_QString, static_cast<KActionSelector::MoveButton>(button));
}

void KActionSelector_SetButtonIconSet(KActionSelector* self, const QIcon* iconset, int button) {
    self->setButtonIconSet(*iconset, static_cast<KActionSelector::MoveButton>(button));
}

void KActionSelector_SetButtonTooltip(KActionSelector* self, const libqt_string tip, int button) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setButtonTooltip(tip_QString, static_cast<KActionSelector::MoveButton>(button));
}

void KActionSelector_SetButtonWhatsThis(KActionSelector* self, const libqt_string text, int button) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonWhatsThis(text_QString, static_cast<KActionSelector::MoveButton>(button));
}

void KActionSelector_Added(KActionSelector* self, QListWidgetItem* item) {
    self->added(item);
}

void KActionSelector_Connect_Added(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self, &KActionSelector::added, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void KActionSelector_Removed(KActionSelector* self, QListWidgetItem* item) {
    self->removed(item);
}

void KActionSelector_Connect_Removed(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self, &KActionSelector::removed, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void KActionSelector_MovedUp(KActionSelector* self, QListWidgetItem* item) {
    self->movedUp(item);
}

void KActionSelector_Connect_MovedUp(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self, &KActionSelector::movedUp, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void KActionSelector_MovedDown(KActionSelector* self, QListWidgetItem* item) {
    self->movedDown(item);
}

void KActionSelector_Connect_MovedDown(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self, &KActionSelector::movedDown, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void KActionSelector_SetButtonsEnabled(KActionSelector* self) {
    self->setButtonsEnabled();
}

libqt_string KActionSelector_Tr2(const char* s, const char* c) {
    QString _ret = KActionSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KActionSelector_Tr3(const char* s, const char* c, int n) {
    QString _ret = KActionSelector::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void KActionSelector_KeyPressEvent(KActionSelector* self, QKeyEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->keyPressEvent(param1);
    } else {
        ((VirtualKActionSelector*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KActionSelector_QBaseKeyPressEvent(KActionSelector* self, QKeyEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_KeyPressEvent_IsBase(true);
        vkactionselector->keyPressEvent(param1);
    } else {
        ((VirtualKActionSelector*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnKeyPressEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_KeyPressEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_EventFilter(KActionSelector* self, QObject* param1, QEvent* param2) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->eventFilter(param1, param2);
    } else {
        return ((VirtualKActionSelector*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KActionSelector_QBaseEventFilter(KActionSelector* self, QObject* param1, QEvent* param2) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_EventFilter_IsBase(true);
        return vkactionselector->eventFilter(param1, param2);
    } else {
        return ((VirtualKActionSelector*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnEventFilter(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_EventFilter_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionSelector_DevType(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->devType();
    } else {
        return self->KActionSelector::devType();
    }
}

// Base class handler implementation
int KActionSelector_QBaseDevType(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DevType_IsBase(true);
        return vkactionselector->devType();
    } else {
        return self->KActionSelector::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDevType(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DevType_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_SetVisible(KActionSelector* self, bool visible) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setVisible(visible);
    } else {
        self->KActionSelector::setVisible(visible);
    }
}

// Base class handler implementation
void KActionSelector_QBaseSetVisible(KActionSelector* self, bool visible) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SetVisible_IsBase(true);
        vkactionselector->setVisible(visible);
    } else {
        self->KActionSelector::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSetVisible(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SetVisible_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KActionSelector_SizeHint(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return new QSize(vkactionselector->sizeHint());
    } else {
        return new QSize(((VirtualKActionSelector*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KActionSelector_QBaseSizeHint(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SizeHint_IsBase(true);
        return new QSize(vkactionselector->sizeHint());
    } else {
        return new QSize(((VirtualKActionSelector*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSizeHint(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SizeHint_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KActionSelector_MinimumSizeHint(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return new QSize(vkactionselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKActionSelector*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KActionSelector_QBaseMinimumSizeHint(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MinimumSizeHint_IsBase(true);
        return new QSize(vkactionselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualKActionSelector*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMinimumSizeHint(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MinimumSizeHint_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionSelector_HeightForWidth(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KActionSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KActionSelector_QBaseHeightForWidth(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_HeightForWidth_IsBase(true);
        return vkactionselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KActionSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnHeightForWidth(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_HeightForWidth_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_HasHeightForWidth(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->hasHeightForWidth();
    } else {
        return self->KActionSelector::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KActionSelector_QBaseHasHeightForWidth(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_HasHeightForWidth_IsBase(true);
        return vkactionselector->hasHeightForWidth();
    } else {
        return self->KActionSelector::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnHasHeightForWidth(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_HasHeightForWidth_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KActionSelector_PaintEngine(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->paintEngine();
    } else {
        return self->KActionSelector::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KActionSelector_QBasePaintEngine(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_PaintEngine_IsBase(true);
        return vkactionselector->paintEngine();
    } else {
        return self->KActionSelector::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnPaintEngine(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_PaintEngine_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_Event(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->event(event);
    } else {
        return ((VirtualKActionSelector*)self)->event(event);
    }
}

// Base class handler implementation
bool KActionSelector_QBaseEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Event_IsBase(true);
        return vkactionselector->event(event);
    } else {
        return ((VirtualKActionSelector*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Event_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_MousePressEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->mousePressEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseMousePressEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MousePressEvent_IsBase(true);
        vkactionselector->mousePressEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMousePressEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MousePressEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_MouseReleaseEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->mouseReleaseEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseMouseReleaseEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MouseReleaseEvent_IsBase(true);
        vkactionselector->mouseReleaseEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMouseReleaseEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_MouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseMouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MouseDoubleClickEvent_IsBase(true);
        vkactionselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMouseDoubleClickEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_MouseMoveEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->mouseMoveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseMouseMoveEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MouseMoveEvent_IsBase(true);
        vkactionselector->mouseMoveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMouseMoveEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MouseMoveEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_WheelEvent(KActionSelector* self, QWheelEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->wheelEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseWheelEvent(KActionSelector* self, QWheelEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_WheelEvent_IsBase(true);
        vkactionselector->wheelEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnWheelEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_WheelEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_KeyReleaseEvent(KActionSelector* self, QKeyEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->keyReleaseEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseKeyReleaseEvent(KActionSelector* self, QKeyEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_KeyReleaseEvent_IsBase(true);
        vkactionselector->keyReleaseEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnKeyReleaseEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_FocusInEvent(KActionSelector* self, QFocusEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->focusInEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseFocusInEvent(KActionSelector* self, QFocusEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusInEvent_IsBase(true);
        vkactionselector->focusInEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusInEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusInEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_FocusOutEvent(KActionSelector* self, QFocusEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->focusOutEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseFocusOutEvent(KActionSelector* self, QFocusEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusOutEvent_IsBase(true);
        vkactionselector->focusOutEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusOutEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusOutEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_EnterEvent(KActionSelector* self, QEnterEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->enterEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseEnterEvent(KActionSelector* self, QEnterEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_EnterEvent_IsBase(true);
        vkactionselector->enterEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnEnterEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_EnterEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_LeaveEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->leaveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseLeaveEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_LeaveEvent_IsBase(true);
        vkactionselector->leaveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnLeaveEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_LeaveEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_PaintEvent(KActionSelector* self, QPaintEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->paintEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBasePaintEvent(KActionSelector* self, QPaintEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_PaintEvent_IsBase(true);
        vkactionselector->paintEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnPaintEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_PaintEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_MoveEvent(KActionSelector* self, QMoveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->moveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseMoveEvent(KActionSelector* self, QMoveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MoveEvent_IsBase(true);
        vkactionselector->moveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMoveEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_MoveEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ResizeEvent(KActionSelector* self, QResizeEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->resizeEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseResizeEvent(KActionSelector* self, QResizeEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ResizeEvent_IsBase(true);
        vkactionselector->resizeEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnResizeEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ResizeEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_CloseEvent(KActionSelector* self, QCloseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->closeEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseCloseEvent(KActionSelector* self, QCloseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_CloseEvent_IsBase(true);
        vkactionselector->closeEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnCloseEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_CloseEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ContextMenuEvent(KActionSelector* self, QContextMenuEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->contextMenuEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseContextMenuEvent(KActionSelector* self, QContextMenuEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ContextMenuEvent_IsBase(true);
        vkactionselector->contextMenuEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnContextMenuEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ContextMenuEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_TabletEvent(KActionSelector* self, QTabletEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->tabletEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseTabletEvent(KActionSelector* self, QTabletEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_TabletEvent_IsBase(true);
        vkactionselector->tabletEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnTabletEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_TabletEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ActionEvent(KActionSelector* self, QActionEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->actionEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseActionEvent(KActionSelector* self, QActionEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ActionEvent_IsBase(true);
        vkactionselector->actionEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnActionEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ActionEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_DragEnterEvent(KActionSelector* self, QDragEnterEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->dragEnterEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseDragEnterEvent(KActionSelector* self, QDragEnterEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DragEnterEvent_IsBase(true);
        vkactionselector->dragEnterEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDragEnterEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DragEnterEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_DragMoveEvent(KActionSelector* self, QDragMoveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->dragMoveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseDragMoveEvent(KActionSelector* self, QDragMoveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DragMoveEvent_IsBase(true);
        vkactionselector->dragMoveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDragMoveEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DragMoveEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_DragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->dragLeaveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseDragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DragLeaveEvent_IsBase(true);
        vkactionselector->dragLeaveEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDragLeaveEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DragLeaveEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_DropEvent(KActionSelector* self, QDropEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->dropEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseDropEvent(KActionSelector* self, QDropEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DropEvent_IsBase(true);
        vkactionselector->dropEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDropEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DropEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ShowEvent(KActionSelector* self, QShowEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->showEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseShowEvent(KActionSelector* self, QShowEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ShowEvent_IsBase(true);
        vkactionselector->showEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnShowEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ShowEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_HideEvent(KActionSelector* self, QHideEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->hideEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseHideEvent(KActionSelector* self, QHideEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_HideEvent_IsBase(true);
        vkactionselector->hideEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnHideEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_HideEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_NativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKActionSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KActionSelector_QBaseNativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_NativeEvent_IsBase(true);
        return vkactionselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKActionSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnNativeEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_NativeEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ChangeEvent(KActionSelector* self, QEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->changeEvent(param1);
    } else {
        ((VirtualKActionSelector*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KActionSelector_QBaseChangeEvent(KActionSelector* self, QEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ChangeEvent_IsBase(true);
        vkactionselector->changeEvent(param1);
    } else {
        ((VirtualKActionSelector*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnChangeEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ChangeEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionSelector_Metric(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKActionSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KActionSelector_QBaseMetric(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Metric_IsBase(true);
        return vkactionselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKActionSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMetric(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Metric_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_InitPainter(const KActionSelector* self, QPainter* painter) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->initPainter(painter);
    } else {
        ((VirtualKActionSelector*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KActionSelector_QBaseInitPainter(const KActionSelector* self, QPainter* painter) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_InitPainter_IsBase(true);
        vkactionselector->initPainter(painter);
    } else {
        ((VirtualKActionSelector*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnInitPainter(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_InitPainter_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KActionSelector_Redirected(const KActionSelector* self, QPoint* offset) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->redirected(offset);
    } else {
        return ((VirtualKActionSelector*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KActionSelector_QBaseRedirected(const KActionSelector* self, QPoint* offset) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Redirected_IsBase(true);
        return vkactionselector->redirected(offset);
    } else {
        return ((VirtualKActionSelector*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnRedirected(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Redirected_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KActionSelector_SharedPainter(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->sharedPainter();
    } else {
        return ((VirtualKActionSelector*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KActionSelector_QBaseSharedPainter(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SharedPainter_IsBase(true);
        return vkactionselector->sharedPainter();
    } else {
        return ((VirtualKActionSelector*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSharedPainter(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SharedPainter_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_InputMethodEvent(KActionSelector* self, QInputMethodEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->inputMethodEvent(param1);
    } else {
        ((VirtualKActionSelector*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KActionSelector_QBaseInputMethodEvent(KActionSelector* self, QInputMethodEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_InputMethodEvent_IsBase(true);
        vkactionselector->inputMethodEvent(param1);
    } else {
        ((VirtualKActionSelector*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnInputMethodEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_InputMethodEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KActionSelector_InputMethodQuery(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return new QVariant(vkactionselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKActionSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KActionSelector_QBaseInputMethodQuery(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_InputMethodQuery_IsBase(true);
        return new QVariant(vkactionselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKActionSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnInputMethodQuery(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_InputMethodQuery_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_FocusNextPrevChild(KActionSelector* self, bool next) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKActionSelector*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KActionSelector_QBaseFocusNextPrevChild(KActionSelector* self, bool next) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusNextPrevChild_IsBase(true);
        return vkactionselector->focusNextPrevChild(next);
    } else {
        return ((VirtualKActionSelector*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusNextPrevChild(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_TimerEvent(KActionSelector* self, QTimerEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->timerEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseTimerEvent(KActionSelector* self, QTimerEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_TimerEvent_IsBase(true);
        vkactionselector->timerEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnTimerEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_TimerEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ChildEvent(KActionSelector* self, QChildEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->childEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseChildEvent(KActionSelector* self, QChildEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ChildEvent_IsBase(true);
        vkactionselector->childEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnChildEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ChildEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_CustomEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->customEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KActionSelector_QBaseCustomEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_CustomEvent_IsBase(true);
        vkactionselector->customEvent(event);
    } else {
        ((VirtualKActionSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnCustomEvent(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_CustomEvent_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_ConnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->connectNotify(*signal);
    } else {
        ((VirtualKActionSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KActionSelector_QBaseConnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ConnectNotify_IsBase(true);
        vkactionselector->connectNotify(*signal);
    } else {
        ((VirtualKActionSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnConnectNotify(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_ConnectNotify_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_DisconnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->disconnectNotify(*signal);
    } else {
        ((VirtualKActionSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KActionSelector_QBaseDisconnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DisconnectNotify_IsBase(true);
        vkactionselector->disconnectNotify(*signal);
    } else {
        ((VirtualKActionSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDisconnectNotify(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_UpdateMicroFocus(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->updateMicroFocus();
    } else {
        ((VirtualKActionSelector*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KActionSelector_QBaseUpdateMicroFocus(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_UpdateMicroFocus_IsBase(true);
        vkactionselector->updateMicroFocus();
    } else {
        ((VirtualKActionSelector*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnUpdateMicroFocus(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_Create(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->create();
    } else {
        ((VirtualKActionSelector*)self)->create();
    }
}

// Base class handler implementation
void KActionSelector_QBaseCreate(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Create_IsBase(true);
        vkactionselector->create();
    } else {
        ((VirtualKActionSelector*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnCreate(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Create_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionSelector_Destroy(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->destroy();
    } else {
        ((VirtualKActionSelector*)self)->destroy();
    }
}

// Base class handler implementation
void KActionSelector_QBaseDestroy(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Destroy_IsBase(true);
        vkactionselector->destroy();
    } else {
        ((VirtualKActionSelector*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDestroy(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Destroy_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_FocusNextChild(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->focusNextChild();
    } else {
        return ((VirtualKActionSelector*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KActionSelector_QBaseFocusNextChild(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusNextChild_IsBase(true);
        return vkactionselector->focusNextChild();
    } else {
        return ((VirtualKActionSelector*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusNextChild(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusNextChild_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_FocusPreviousChild(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->focusPreviousChild();
    } else {
        return ((VirtualKActionSelector*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KActionSelector_QBaseFocusPreviousChild(KActionSelector* self) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusPreviousChild_IsBase(true);
        return vkactionselector->focusPreviousChild();
    } else {
        return ((VirtualKActionSelector*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusPreviousChild(KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_FocusPreviousChild_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KActionSelector_Sender(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->sender();
    } else {
        return ((VirtualKActionSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* KActionSelector_QBaseSender(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Sender_IsBase(true);
        return vkactionselector->sender();
    } else {
        return ((VirtualKActionSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSender(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Sender_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionSelector_SenderSignalIndex(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->senderSignalIndex();
    } else {
        return ((VirtualKActionSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KActionSelector_QBaseSenderSignalIndex(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SenderSignalIndex_IsBase(true);
        return vkactionselector->senderSignalIndex();
    } else {
        return ((VirtualKActionSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSenderSignalIndex(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionSelector_Receivers(const KActionSelector* self, const char* signal) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->receivers(signal);
    } else {
        return ((VirtualKActionSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KActionSelector_QBaseReceivers(const KActionSelector* self, const char* signal) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Receivers_IsBase(true);
        return vkactionselector->receivers(signal);
    } else {
        return ((VirtualKActionSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnReceivers(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_Receivers_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionSelector_IsSignalConnected(const KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KActionSelector_QBaseIsSignalConnected(const KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_IsSignalConnected_IsBase(true);
        return vkactionselector->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnIsSignalConnected(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KActionSelector_GetDecodedMetricF(const KActionSelector* self, int metricA, int metricB) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        return vkactionselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKActionSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KActionSelector_QBaseGetDecodedMetricF(const KActionSelector* self, int metricA, int metricB) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_GetDecodedMetricF_IsBase(true);
        return vkactionselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKActionSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnGetDecodedMetricF(const KActionSelector* self, intptr_t slot) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector && vkactionselector->isVirtualKActionSelector) {
        vkactionselector->setKActionSelector_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKActionSelector::KActionSelector_GetDecodedMetricF_Callback>(slot));
    }
}

void KActionSelector_Delete(KActionSelector* self) {
    delete self;
}
