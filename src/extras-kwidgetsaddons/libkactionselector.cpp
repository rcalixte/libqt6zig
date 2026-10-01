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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KActionSelector_Tr(const char* s) {
    auto _ret = KActionSelector::tr(s);
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
    auto _ret = self->availableLabel();
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
    auto _ret = self->selectedLabel();
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
    KActionSelector::connect(self,
                             static_cast<void (KActionSelector::*)(QListWidgetItem*)>(&KActionSelector::added),
                             [self, slotFunc](QListWidgetItem* item) {
                                 QListWidgetItem* sigval1 = item;
                                 slotFunc(self, sigval1);
                             });
}

void KActionSelector_Removed(KActionSelector* self, QListWidgetItem* item) {
    self->removed(item);
}

void KActionSelector_Connect_Removed(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self,
                             static_cast<void (KActionSelector::*)(QListWidgetItem*)>(&KActionSelector::removed),
                             [self, slotFunc](QListWidgetItem* item) {
                                 QListWidgetItem* sigval1 = item;
                                 slotFunc(self, sigval1);
                             });
}

void KActionSelector_MovedUp(KActionSelector* self, QListWidgetItem* item) {
    self->movedUp(item);
}

void KActionSelector_Connect_MovedUp(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self,
                             static_cast<void (KActionSelector::*)(QListWidgetItem*)>(&KActionSelector::movedUp),
                             [self, slotFunc](QListWidgetItem* item) {
                                 QListWidgetItem* sigval1 = item;
                                 slotFunc(self, sigval1);
                             });
}

void KActionSelector_MovedDown(KActionSelector* self, QListWidgetItem* item) {
    self->movedDown(item);
}

void KActionSelector_Connect_MovedDown(KActionSelector* self, intptr_t slot) {
    void (*slotFunc)(KActionSelector*, QListWidgetItem*) = reinterpret_cast<void (*)(KActionSelector*, QListWidgetItem*)>(slot);
    KActionSelector::connect(self,
                             static_cast<void (KActionSelector::*)(QListWidgetItem*)>(&KActionSelector::movedDown),
                             [self, slotFunc](QListWidgetItem* item) {
                                 QListWidgetItem* sigval1 = item;
                                 slotFunc(self, sigval1);
                             });
}

void KActionSelector_SetButtonsEnabled(KActionSelector* self) {
    self->setButtonsEnabled();
}

void KActionSelector_KeyPressEvent(KActionSelector* self, QKeyEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->keyPressEvent(param1);
    }
}

bool KActionSelector_EventFilter(KActionSelector* self, QObject* param1, QEvent* param2) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        return vkactionselector->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method KActionSelector::eventFilter called without a directly constructed type");
}

libqt_string KActionSelector_Tr2(const char* s, const char* c) {
    auto _ret = KActionSelector::tr(s, c);
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
    auto _ret = KActionSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* KActionSelector_SuperMetaObject(const KActionSelector* self) {
    return (QMetaObject*)self->KActionSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMetaObject(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_metaobject_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KActionSelector_SuperMetacast(KActionSelector* self, const char* param1) {
    return self->KActionSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMetacast(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_metacast_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int KActionSelector_SuperMetacall(KActionSelector* self, int param1, int param2, void** param3) {
    return self->KActionSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMetacall(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_metacall_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_Metacall_Callback>(slot);
}

// Base class handler implementation
void KActionSelector_SuperKeyPressEvent(KActionSelector* self, QKeyEvent* param1) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KActionSelector::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnKeyPressEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_keypressevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
bool KActionSelector_SuperEventFilter(KActionSelector* self, QObject* param1, QEvent* param2) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        return vkactionselector->KActionSelector::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KActionSelector::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnEventFilter(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_eventfilter_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KActionSelector_DevType(const KActionSelector* self) {
    return self->devType();
}

// Base class handler implementation
int KActionSelector_SuperDevType(const KActionSelector* self) {
    return self->KActionSelector::devType();
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDevType(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_devtype_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_DevType_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_SetVisible(KActionSelector* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KActionSelector_SuperSetVisible(KActionSelector* self, bool visible) {
    self->KActionSelector::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSetVisible(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_setvisible_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KActionSelector_SizeHint(const KActionSelector* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KActionSelector_SuperSizeHint(const KActionSelector* self) {
    return new QSize(self->KActionSelector::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSizeHint(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_sizehint_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KActionSelector_MinimumSizeHint(const KActionSelector* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KActionSelector_SuperMinimumSizeHint(const KActionSelector* self) {
    return new QSize(self->KActionSelector::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMinimumSizeHint(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_minimumsizehint_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KActionSelector_HeightForWidth(const KActionSelector* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KActionSelector_SuperHeightForWidth(const KActionSelector* self, int param1) {
    return self->KActionSelector::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnHeightForWidth(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_heightforwidth_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KActionSelector_HasHeightForWidth(const KActionSelector* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KActionSelector_SuperHasHeightForWidth(const KActionSelector* self) {
    return self->KActionSelector::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnHasHeightForWidth(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_hasheightforwidth_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KActionSelector_PaintEngine(const KActionSelector* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KActionSelector_SuperPaintEngine(const KActionSelector* self) {
    return self->KActionSelector::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnPaintEngine(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_paintengine_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KActionSelector_Event(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        return vkactionselector->event(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KActionSelector_SuperEvent(KActionSelector* self, QEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        return vkactionselector->KActionSelector::event(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_event_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_Event_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_MousePressEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperMousePressEvent(KActionSelector* self, QMouseEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMousePressEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_mousepressevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_MouseReleaseEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperMouseReleaseEvent(KActionSelector* self, QMouseEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMouseReleaseEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_mousereleaseevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_MouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperMouseDoubleClickEvent(KActionSelector* self, QMouseEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMouseDoubleClickEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_mousedoubleclickevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_MouseMoveEvent(KActionSelector* self, QMouseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperMouseMoveEvent(KActionSelector* self, QMouseEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMouseMoveEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_mousemoveevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_WheelEvent(KActionSelector* self, QWheelEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperWheelEvent(KActionSelector* self, QWheelEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnWheelEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_wheelevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_KeyReleaseEvent(KActionSelector* self, QKeyEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperKeyReleaseEvent(KActionSelector* self, QKeyEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnKeyReleaseEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_keyreleaseevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_FocusInEvent(KActionSelector* self, QFocusEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperFocusInEvent(KActionSelector* self, QFocusEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusInEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_focusinevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_FocusOutEvent(KActionSelector* self, QFocusEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperFocusOutEvent(KActionSelector* self, QFocusEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusOutEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_focusoutevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_EnterEvent(KActionSelector* self, QEnterEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperEnterEvent(KActionSelector* self, QEnterEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnEnterEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_enterevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_LeaveEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperLeaveEvent(KActionSelector* self, QEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnLeaveEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_leaveevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_PaintEvent(KActionSelector* self, QPaintEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperPaintEvent(KActionSelector* self, QPaintEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnPaintEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_paintevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_MoveEvent(KActionSelector* self, QMoveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperMoveEvent(KActionSelector* self, QMoveEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMoveEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_moveevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ResizeEvent(KActionSelector* self, QResizeEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperResizeEvent(KActionSelector* self, QResizeEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnResizeEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_resizeevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_CloseEvent(KActionSelector* self, QCloseEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperCloseEvent(KActionSelector* self, QCloseEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnCloseEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_closeevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ContextMenuEvent(KActionSelector* self, QContextMenuEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperContextMenuEvent(KActionSelector* self, QContextMenuEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnContextMenuEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_contextmenuevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_TabletEvent(KActionSelector* self, QTabletEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperTabletEvent(KActionSelector* self, QTabletEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnTabletEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_tabletevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ActionEvent(KActionSelector* self, QActionEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperActionEvent(KActionSelector* self, QActionEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnActionEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_actionevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_DragEnterEvent(KActionSelector* self, QDragEnterEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperDragEnterEvent(KActionSelector* self, QDragEnterEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDragEnterEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_dragenterevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_DragMoveEvent(KActionSelector* self, QDragMoveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperDragMoveEvent(KActionSelector* self, QDragMoveEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDragMoveEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_dragmoveevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_DragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperDragLeaveEvent(KActionSelector* self, QDragLeaveEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDragLeaveEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_dragleaveevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_DropEvent(KActionSelector* self, QDropEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperDropEvent(KActionSelector* self, QDropEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDropEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_dropevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ShowEvent(KActionSelector* self, QShowEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperShowEvent(KActionSelector* self, QShowEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnShowEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_showevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_HideEvent(KActionSelector* self, QHideEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperHideEvent(KActionSelector* self, QHideEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnHideEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_hideevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KActionSelector_NativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        return vkactionselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KActionSelector::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KActionSelector_SuperNativeEvent(KActionSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        return vkactionselector->KActionSelector::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KActionSelector::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnNativeEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_nativeevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ChangeEvent(KActionSelector* self, QEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperChangeEvent(KActionSelector* self, QEvent* param1) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KActionSelector::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnChangeEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_changeevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KActionSelector_Metric(const KActionSelector* self, int param1) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector) {
        return vkactionselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KActionSelector::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KActionSelector_SuperMetric(const KActionSelector* self, int param1) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->KActionSelector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KActionSelector::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnMetric(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_metric_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_Metric_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_InitPainter(const KActionSelector* self, QPainter* painter) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector) {
        vkactionselector->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperInitPainter(const KActionSelector* self, QPainter* painter) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        vkactionselector->KActionSelector::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KActionSelector::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnInitPainter(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_initpainter_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KActionSelector_Redirected(const KActionSelector* self, QPoint* offset) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector) {
        return vkactionselector->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KActionSelector_SuperRedirected(const KActionSelector* self, QPoint* offset) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->KActionSelector::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KActionSelector::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnRedirected(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_redirected_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KActionSelector_SharedPainter(const KActionSelector* self) {
    auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self));
    if (vkactionselector) {
        return vkactionselector->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KActionSelector::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KActionSelector_SuperSharedPainter(const KActionSelector* self) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->KActionSelector::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KActionSelector::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnSharedPainter(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_sharedpainter_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_InputMethodEvent(KActionSelector* self, QInputMethodEvent* param1) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperInputMethodEvent(KActionSelector* self, QInputMethodEvent* param1) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KActionSelector::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnInputMethodEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_inputmethodevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KActionSelector_InputMethodQuery(const KActionSelector* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KActionSelector_SuperInputMethodQuery(const KActionSelector* self, int param1) {
    return new QVariant(self->KActionSelector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnInputMethodQuery(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self)))
        vkactionselector->kactionselector_inputmethodquery_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KActionSelector_FocusNextPrevChild(KActionSelector* self, bool next) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        return vkactionselector->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KActionSelector_SuperFocusNextPrevChild(KActionSelector* self, bool next) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        return vkactionselector->KActionSelector::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KActionSelector::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnFocusNextPrevChild(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_focusnextprevchild_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_TimerEvent(KActionSelector* self, QTimerEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperTimerEvent(KActionSelector* self, QTimerEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnTimerEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_timerevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ChildEvent(KActionSelector* self, QChildEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperChildEvent(KActionSelector* self, QChildEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnChildEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_childevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_CustomEvent(KActionSelector* self, QEvent* event) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperCustomEvent(KActionSelector* self, QEvent* event) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnCustomEvent(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_customevent_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_ConnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperConnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KActionSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnConnectNotify(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_connectnotify_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KActionSelector_DisconnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self);
    if (vkactionselector) {
        vkactionselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KActionSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionSelector_SuperDisconnectNotify(KActionSelector* self, const QMetaMethod* signal) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->KActionSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KActionSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionSelector_OnDisconnectNotify(KActionSelector* self, intptr_t slot) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self))
        vkactionselector->kactionselector_disconnectnotify_callback = reinterpret_cast<VirtualKActionSelector::KActionSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KActionSelector_UpdateMicroFocus(KActionSelector* self) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->VirtualKActionSelector::updateMicroFocus();
    } else
        qFatal("Error: Protected method KActionSelector::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KActionSelector_Create(KActionSelector* self) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->VirtualKActionSelector::create();
    } else
        qFatal("Error: Protected method KActionSelector::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KActionSelector_Destroy(KActionSelector* self) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        vkactionselector->VirtualKActionSelector::destroy();
    } else
        qFatal("Error: Protected method KActionSelector::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KActionSelector_FocusNextChild(KActionSelector* self) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        return vkactionselector->VirtualKActionSelector::focusNextChild();
    } else
        qFatal("Error: Protected method KActionSelector::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KActionSelector_FocusPreviousChild(KActionSelector* self) {
    if (auto* vkactionselector = dynamic_cast<VirtualKActionSelector*>(self)) {
        return vkactionselector->VirtualKActionSelector::focusPreviousChild();
    } else
        qFatal("Error: Protected method KActionSelector::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KActionSelector_Sender(const KActionSelector* self) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->VirtualKActionSelector::sender();
    } else
        qFatal("Error: Protected method KActionSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KActionSelector_SenderSignalIndex(const KActionSelector* self) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->VirtualKActionSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method KActionSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KActionSelector_Receivers(const KActionSelector* self, const char* signal) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->VirtualKActionSelector::receivers(signal);
    } else
        qFatal("Error: Protected method KActionSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KActionSelector_IsSignalConnected(const KActionSelector* self, const QMetaMethod* signal) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->VirtualKActionSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KActionSelector::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KActionSelector_GetDecodedMetricF(const KActionSelector* self, int metricA, int metricB) {
    if (auto* vkactionselector = const_cast<VirtualKActionSelector*>(dynamic_cast<const VirtualKActionSelector*>(self))) {
        return vkactionselector->VirtualKActionSelector::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KActionSelector::getDecodedMetricF called without a directly constructed type");
}

void KActionSelector_Delete(KActionSelector* self) {
    delete self;
}
