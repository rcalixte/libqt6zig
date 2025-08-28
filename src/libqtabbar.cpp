#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QStyleOptionTab>
#include <QTabBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabbar.h>
#include "libqtabbar.h"
#include "libqtabbar.hxx"

QTabBar* QTabBar_new(QWidget* parent) {
    return new VirtualQTabBar(parent);
}

QTabBar* QTabBar_new2() {
    return new VirtualQTabBar();
}

QMetaObject* QTabBar_MetaObject(const QTabBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTabBar_Metacast(QTabBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTabBar_Metacall(QTabBar* self, int param1, int param2, void** param3) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTabBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMetacall(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Metacall_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTabBar_QBaseMetacall(QTabBar* self, int param1, int param2, void** param3) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Metacall_IsBase(true);
        return vqtabbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTabBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTabBar_Tr(const char* s) {
    QString _ret = QTabBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTabBar_Shape(const QTabBar* self) {
    return static_cast<int>(self->shape());
}

void QTabBar_SetShape(QTabBar* self, int shape) {
    self->setShape(static_cast<QTabBar::Shape>(shape));
}

int QTabBar_AddTab(QTabBar* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addTab(text_QString);
}

int QTabBar_AddTab2(QTabBar* self, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addTab(*icon, text_QString);
}

int QTabBar_InsertTab(QTabBar* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertTab(static_cast<int>(index), text_QString);
}

int QTabBar_InsertTab2(QTabBar* self, int index, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertTab(static_cast<int>(index), *icon, text_QString);
}

void QTabBar_RemoveTab(QTabBar* self, int index) {
    self->removeTab(static_cast<int>(index));
}

void QTabBar_MoveTab(QTabBar* self, int from, int to) {
    self->moveTab(static_cast<int>(from), static_cast<int>(to));
}

bool QTabBar_IsTabEnabled(const QTabBar* self, int index) {
    return self->isTabEnabled(static_cast<int>(index));
}

void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled) {
    self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabBar_IsTabVisible(const QTabBar* self, int index) {
    return self->isTabVisible(static_cast<int>(index));
}

void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible) {
    self->setTabVisible(static_cast<int>(index), visible);
}

libqt_string QTabBar_TabText(const QTabBar* self, int index) {
    QString _ret = self->tabText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabBar_SetTabText(QTabBar* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTabText(static_cast<int>(index), text_QString);
}

QColor* QTabBar_TabTextColor(const QTabBar* self, int index) {
    return new QColor(self->tabTextColor(static_cast<int>(index)));
}

void QTabBar_SetTabTextColor(QTabBar* self, int index, const QColor* color) {
    self->setTabTextColor(static_cast<int>(index), *color);
}

QIcon* QTabBar_TabIcon(const QTabBar* self, int index) {
    return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabBar_SetTabIcon(QTabBar* self, int index, const QIcon* icon) {
    self->setTabIcon(static_cast<int>(index), *icon);
}

int QTabBar_ElideMode(const QTabBar* self) {
    return static_cast<int>(self->elideMode());
}

void QTabBar_SetElideMode(QTabBar* self, int mode) {
    self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

void QTabBar_SetTabToolTip(QTabBar* self, int index, const libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setTabToolTip(static_cast<int>(index), tip_QString);
}

libqt_string QTabBar_TabToolTip(const QTabBar* self, int index) {
    QString _ret = self->tabToolTip(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabBar_SetTabWhatsThis(QTabBar* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

libqt_string QTabBar_TabWhatsThis(const QTabBar* self, int index) {
    QString _ret = self->tabWhatsThis(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabBar_SetTabData(QTabBar* self, int index, const QVariant* data) {
    self->setTabData(static_cast<int>(index), *data);
}

QVariant* QTabBar_TabData(const QTabBar* self, int index) {
    return new QVariant(self->tabData(static_cast<int>(index)));
}

QRect* QTabBar_TabRect(const QTabBar* self, int index) {
    return new QRect(self->tabRect(static_cast<int>(index)));
}

int QTabBar_TabAt(const QTabBar* self, const QPoint* pos) {
    return self->tabAt(*pos);
}

int QTabBar_CurrentIndex(const QTabBar* self) {
    return self->currentIndex();
}

int QTabBar_Count(const QTabBar* self) {
    return self->count();
}

QSize* QTabBar_SizeHint(const QTabBar* self) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQTabBar*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnSizeHint(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTabBar_QBaseSizeHint(const QTabBar* self) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SizeHint_IsBase(true);
        return new QSize(vqtabbar->sizeHint());
    } else {
        return new QSize(((VirtualQTabBar*)self)->sizeHint());
    }
}

QSize* QTabBar_MinimumSizeHint(const QTabBar* self) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTabBar*)self)->minimumSizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMinimumSizeHint(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MinimumSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTabBar_QBaseMinimumSizeHint(const QTabBar* self) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqtabbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTabBar*)self)->minimumSizeHint());
    }
}

void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase) {
    self->setDrawBase(drawTheBase);
}

bool QTabBar_DrawBase(const QTabBar* self) {
    return self->drawBase();
}

QSize* QTabBar_IconSize(const QTabBar* self) {
    return new QSize(self->iconSize());
}

void QTabBar_SetIconSize(QTabBar* self, const QSize* size) {
    self->setIconSize(*size);
}

bool QTabBar_UsesScrollButtons(const QTabBar* self) {
    return self->usesScrollButtons();
}

void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons) {
    self->setUsesScrollButtons(useButtons);
}

bool QTabBar_TabsClosable(const QTabBar* self) {
    return self->tabsClosable();
}

void QTabBar_SetTabsClosable(QTabBar* self, bool closable) {
    self->setTabsClosable(closable);
}

void QTabBar_SetTabButton(QTabBar* self, int index, int position, QWidget* widget) {
    self->setTabButton(static_cast<int>(index), static_cast<QTabBar::ButtonPosition>(position), widget);
}

QWidget* QTabBar_TabButton(const QTabBar* self, int index, int position) {
    return self->tabButton(static_cast<int>(index), static_cast<QTabBar::ButtonPosition>(position));
}

int QTabBar_SelectionBehaviorOnRemove(const QTabBar* self) {
    return static_cast<int>(self->selectionBehaviorOnRemove());
}

void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, int behavior) {
    self->setSelectionBehaviorOnRemove(static_cast<QTabBar::SelectionBehavior>(behavior));
}

bool QTabBar_Expanding(const QTabBar* self) {
    return self->expanding();
}

void QTabBar_SetExpanding(QTabBar* self, bool enabled) {
    self->setExpanding(enabled);
}

bool QTabBar_IsMovable(const QTabBar* self) {
    return self->isMovable();
}

void QTabBar_SetMovable(QTabBar* self, bool movable) {
    self->setMovable(movable);
}

bool QTabBar_DocumentMode(const QTabBar* self) {
    return self->documentMode();
}

void QTabBar_SetDocumentMode(QTabBar* self, bool set) {
    self->setDocumentMode(set);
}

bool QTabBar_AutoHide(const QTabBar* self) {
    return self->autoHide();
}

void QTabBar_SetAutoHide(QTabBar* self, bool hide) {
    self->setAutoHide(hide);
}

bool QTabBar_ChangeCurrentOnDrag(const QTabBar* self) {
    return self->changeCurrentOnDrag();
}

void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change) {
    self->setChangeCurrentOnDrag(change);
}

libqt_string QTabBar_AccessibleTabName(const QTabBar* self, int index) {
    QString _ret = self->accessibleTabName(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabBar_SetAccessibleTabName(QTabBar* self, int index, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAccessibleTabName(static_cast<int>(index), name_QString);
}

void QTabBar_SetCurrentIndex(QTabBar* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QTabBar_CurrentChanged(QTabBar* self, int index) {
    self->currentChanged(static_cast<int>(index));
}

void QTabBar_Connect_CurrentChanged(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::currentChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabBar_TabCloseRequested(QTabBar* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void QTabBar_Connect_TabCloseRequested(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabCloseRequested, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabBar_TabMoved(QTabBar* self, int from, int to) {
    self->tabMoved(static_cast<int>(from), static_cast<int>(to));
}

void QTabBar_Connect_TabMoved(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int, int) = reinterpret_cast<void (*)(QTabBar*, int, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabMoved, [self, slotFunc](int from, int to) {
        int sigval1 = from;
        int sigval2 = to;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTabBar_TabBarClicked(QTabBar* self, int index) {
    self->tabBarClicked(static_cast<int>(index));
}

void QTabBar_Connect_TabBarClicked(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabBarClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabBar_TabBarDoubleClicked(QTabBar* self, int index) {
    self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabBar_Connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabBarDoubleClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

QSize* QTabBar_TabSizeHint(const QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return new QSize(vqtabbar->tabSizeHint(static_cast<int>(index)));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnTabSizeHint(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabSizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTabBar_QBaseTabSizeHint(const QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabSizeHint_IsBase(true);
        return new QSize(vqtabbar->tabSizeHint(static_cast<int>(index)));
    }
    return {};
}

QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return new QSize(vqtabbar->minimumTabSizeHint(static_cast<int>(index)));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMinimumTabSizeHint(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MinimumTabSizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MinimumTabSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTabBar_QBaseMinimumTabSizeHint(const QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MinimumTabSizeHint_IsBase(true);
        return new QSize(vqtabbar->minimumTabSizeHint(static_cast<int>(index)));
    }
    return {};
}

void QTabBar_TabInserted(QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->tabInserted(static_cast<int>(index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnTabInserted(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabInserted_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabInserted_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseTabInserted(QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabInserted_IsBase(true);
        vqtabbar->tabInserted(static_cast<int>(index));
    }
}

void QTabBar_TabRemoved(QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->tabRemoved(static_cast<int>(index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnTabRemoved(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabRemoved_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabRemoved_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseTabRemoved(QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabRemoved_IsBase(true);
        vqtabbar->tabRemoved(static_cast<int>(index));
    }
}

void QTabBar_TabLayoutChange(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->tabLayoutChange();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnTabLayoutChange(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabLayoutChange_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabLayoutChange_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseTabLayoutChange(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabLayoutChange_IsBase(true);
        vqtabbar->tabLayoutChange();
    }
}

bool QTabBar_Event(QTabBar* self, QEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->event(param1);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Event_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTabBar_QBaseEvent(QTabBar* self, QEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Event_IsBase(true);
        return vqtabbar->event(param1);
    }
    return {};
}

void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->resizeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnResizeEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ResizeEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseResizeEvent(QTabBar* self, QResizeEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ResizeEvent_IsBase(true);
        vqtabbar->resizeEvent(param1);
    }
}

void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->showEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnShowEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ShowEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ShowEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseShowEvent(QTabBar* self, QShowEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ShowEvent_IsBase(true);
        vqtabbar->showEvent(param1);
    }
}

void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->hideEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnHideEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_HideEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_HideEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseHideEvent(QTabBar* self, QHideEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_HideEvent_IsBase(true);
        vqtabbar->hideEvent(param1);
    }
}

void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnPaintEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_PaintEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBasePaintEvent(QTabBar* self, QPaintEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_PaintEvent_IsBase(true);
        vqtabbar->paintEvent(param1);
    }
}

void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->mousePressEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMousePressEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MousePressEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseMousePressEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MousePressEvent_IsBase(true);
        vqtabbar->mousePressEvent(param1);
    }
}

void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->mouseMoveEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMouseMoveEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MouseMoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseMouseMoveEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MouseMoveEvent_IsBase(true);
        vqtabbar->mouseMoveEvent(param1);
    }
}

void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->mouseReleaseEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMouseReleaseEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseMouseReleaseEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MouseReleaseEvent_IsBase(true);
        vqtabbar->mouseReleaseEvent(param1);
    }
}

void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->mouseDoubleClickEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnMouseDoubleClickEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MouseDoubleClickEvent_IsBase(true);
        vqtabbar->mouseDoubleClickEvent(param1);
    }
}

void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->wheelEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnWheelEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_WheelEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_WheelEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseWheelEvent(QTabBar* self, QWheelEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_WheelEvent_IsBase(true);
        vqtabbar->wheelEvent(event);
    }
}

void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->keyPressEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnKeyPressEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_KeyPressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseKeyPressEvent(QTabBar* self, QKeyEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_KeyPressEvent_IsBase(true);
        vqtabbar->keyPressEvent(param1);
    }
}

void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->changeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnChangeEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ChangeEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ChangeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseChangeEvent(QTabBar* self, QEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ChangeEvent_IsBase(true);
        vqtabbar->changeEvent(param1);
    }
}

void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->timerEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnTimerEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TimerEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TimerEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseTimerEvent(QTabBar* self, QTimerEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TimerEvent_IsBase(true);
        vqtabbar->timerEvent(event);
    }
}

void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->initStyleOption(option, static_cast<int>(tabIndex));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabBar_OnInitStyleOption(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InitStyleOption_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabBar_QBaseInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InitStyleOption_IsBase(true);
        vqtabbar->initStyleOption(option, static_cast<int>(tabIndex));
    }
}

libqt_string QTabBar_Tr2(const char* s, const char* c) {
    QString _ret = QTabBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTabBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTabBar::tr(s, c, static_cast<int>(n));
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
int QTabBar_DevType(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->devType();
    } else {
        return self->QTabBar::devType();
    }
}

// Base class handler implementation
int QTabBar_QBaseDevType(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DevType_IsBase(true);
        return vqtabbar->devType();
    } else {
        return self->QTabBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDevType(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DevType_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_SetVisible(QTabBar* self, bool visible) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setVisible(visible);
    } else {
        self->QTabBar::setVisible(visible);
    }
}

// Base class handler implementation
void QTabBar_QBaseSetVisible(QTabBar* self, bool visible) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SetVisible_IsBase(true);
        vqtabbar->setVisible(visible);
    } else {
        self->QTabBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSetVisible(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SetVisible_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabBar_HeightForWidth(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTabBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTabBar_QBaseHeightForWidth(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_HeightForWidth_IsBase(true);
        return vqtabbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTabBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnHeightForWidth(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_HeightForWidth_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_HasHeightForWidth(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->hasHeightForWidth();
    } else {
        return self->QTabBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTabBar_QBaseHasHeightForWidth(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_HasHeightForWidth_IsBase(true);
        return vqtabbar->hasHeightForWidth();
    } else {
        return self->QTabBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnHasHeightForWidth(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTabBar_PaintEngine(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->paintEngine();
    } else {
        return self->QTabBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTabBar_QBasePaintEngine(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_PaintEngine_IsBase(true);
        return vqtabbar->paintEngine();
    } else {
        return self->QTabBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnPaintEngine(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_PaintEngine_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_KeyReleaseEvent(QTabBar* self, QKeyEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->keyReleaseEvent(event);
    } else {
        ((VirtualQTabBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseKeyReleaseEvent(QTabBar* self, QKeyEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_KeyReleaseEvent_IsBase(true);
        vqtabbar->keyReleaseEvent(event);
    } else {
        ((VirtualQTabBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnKeyReleaseEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_FocusInEvent(QTabBar* self, QFocusEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->focusInEvent(event);
    } else {
        ((VirtualQTabBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseFocusInEvent(QTabBar* self, QFocusEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusInEvent_IsBase(true);
        vqtabbar->focusInEvent(event);
    } else {
        ((VirtualQTabBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusInEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusInEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_FocusOutEvent(QTabBar* self, QFocusEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->focusOutEvent(event);
    } else {
        ((VirtualQTabBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseFocusOutEvent(QTabBar* self, QFocusEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusOutEvent_IsBase(true);
        vqtabbar->focusOutEvent(event);
    } else {
        ((VirtualQTabBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusOutEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_EnterEvent(QTabBar* self, QEnterEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->enterEvent(event);
    } else {
        ((VirtualQTabBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseEnterEvent(QTabBar* self, QEnterEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_EnterEvent_IsBase(true);
        vqtabbar->enterEvent(event);
    } else {
        ((VirtualQTabBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnEnterEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_EnterEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_LeaveEvent(QTabBar* self, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->leaveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseLeaveEvent(QTabBar* self, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_LeaveEvent_IsBase(true);
        vqtabbar->leaveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnLeaveEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_LeaveEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_MoveEvent(QTabBar* self, QMoveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->moveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseMoveEvent(QTabBar* self, QMoveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MoveEvent_IsBase(true);
        vqtabbar->moveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMoveEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_MoveEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_CloseEvent(QTabBar* self, QCloseEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->closeEvent(event);
    } else {
        ((VirtualQTabBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseCloseEvent(QTabBar* self, QCloseEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_CloseEvent_IsBase(true);
        vqtabbar->closeEvent(event);
    } else {
        ((VirtualQTabBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnCloseEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_CloseEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_ContextMenuEvent(QTabBar* self, QContextMenuEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->contextMenuEvent(event);
    } else {
        ((VirtualQTabBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseContextMenuEvent(QTabBar* self, QContextMenuEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ContextMenuEvent_IsBase(true);
        vqtabbar->contextMenuEvent(event);
    } else {
        ((VirtualQTabBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnContextMenuEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_TabletEvent(QTabBar* self, QTabletEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->tabletEvent(event);
    } else {
        ((VirtualQTabBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseTabletEvent(QTabBar* self, QTabletEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabletEvent_IsBase(true);
        vqtabbar->tabletEvent(event);
    } else {
        ((VirtualQTabBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabletEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_TabletEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_ActionEvent(QTabBar* self, QActionEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->actionEvent(event);
    } else {
        ((VirtualQTabBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseActionEvent(QTabBar* self, QActionEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ActionEvent_IsBase(true);
        vqtabbar->actionEvent(event);
    } else {
        ((VirtualQTabBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnActionEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ActionEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_DragEnterEvent(QTabBar* self, QDragEnterEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->dragEnterEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseDragEnterEvent(QTabBar* self, QDragEnterEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DragEnterEvent_IsBase(true);
        vqtabbar->dragEnterEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDragEnterEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_DragMoveEvent(QTabBar* self, QDragMoveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->dragMoveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseDragMoveEvent(QTabBar* self, QDragMoveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DragMoveEvent_IsBase(true);
        vqtabbar->dragMoveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDragMoveEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_DragLeaveEvent(QTabBar* self, QDragLeaveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->dragLeaveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseDragLeaveEvent(QTabBar* self, QDragLeaveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DragLeaveEvent_IsBase(true);
        vqtabbar->dragLeaveEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDragLeaveEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_DropEvent(QTabBar* self, QDropEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->dropEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseDropEvent(QTabBar* self, QDropEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DropEvent_IsBase(true);
        vqtabbar->dropEvent(event);
    } else {
        ((VirtualQTabBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDropEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DropEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_NativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTabBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTabBar_QBaseNativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_NativeEvent_IsBase(true);
        return vqtabbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTabBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnNativeEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_NativeEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabBar_Metric(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTabBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTabBar_QBaseMetric(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Metric_IsBase(true);
        return vqtabbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTabBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMetric(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Metric_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_InitPainter(const QTabBar* self, QPainter* painter) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->initPainter(painter);
    } else {
        ((VirtualQTabBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTabBar_QBaseInitPainter(const QTabBar* self, QPainter* painter) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InitPainter_IsBase(true);
        vqtabbar->initPainter(painter);
    } else {
        ((VirtualQTabBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInitPainter(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InitPainter_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTabBar_Redirected(const QTabBar* self, QPoint* offset) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->redirected(offset);
    } else {
        return ((VirtualQTabBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTabBar_QBaseRedirected(const QTabBar* self, QPoint* offset) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Redirected_IsBase(true);
        return vqtabbar->redirected(offset);
    } else {
        return ((VirtualQTabBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnRedirected(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Redirected_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTabBar_SharedPainter(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->sharedPainter();
    } else {
        return ((VirtualQTabBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTabBar_QBaseSharedPainter(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SharedPainter_IsBase(true);
        return vqtabbar->sharedPainter();
    } else {
        return ((VirtualQTabBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSharedPainter(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SharedPainter_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_InputMethodEvent(QTabBar* self, QInputMethodEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->inputMethodEvent(param1);
    } else {
        ((VirtualQTabBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTabBar_QBaseInputMethodEvent(QTabBar* self, QInputMethodEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InputMethodEvent_IsBase(true);
        vqtabbar->inputMethodEvent(param1);
    } else {
        ((VirtualQTabBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInputMethodEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTabBar_InputMethodQuery(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return new QVariant(vqtabbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTabBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QTabBar_QBaseInputMethodQuery(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqtabbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTabBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInputMethodQuery(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_FocusNextPrevChild(QTabBar* self, bool next) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQTabBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTabBar_QBaseFocusNextPrevChild(QTabBar* self, bool next) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusNextPrevChild_IsBase(true);
        return vqtabbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQTabBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusNextPrevChild(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_EventFilter(QTabBar* self, QObject* watched, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->eventFilter(watched, event);
    } else {
        return self->QTabBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTabBar_QBaseEventFilter(QTabBar* self, QObject* watched, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_EventFilter_IsBase(true);
        return vqtabbar->eventFilter(watched, event);
    } else {
        return self->QTabBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnEventFilter(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_EventFilter_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_ChildEvent(QTabBar* self, QChildEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->childEvent(event);
    } else {
        ((VirtualQTabBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseChildEvent(QTabBar* self, QChildEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ChildEvent_IsBase(true);
        vqtabbar->childEvent(event);
    } else {
        ((VirtualQTabBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnChildEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ChildEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_CustomEvent(QTabBar* self, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->customEvent(event);
    } else {
        ((VirtualQTabBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTabBar_QBaseCustomEvent(QTabBar* self, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_CustomEvent_IsBase(true);
        vqtabbar->customEvent(event);
    } else {
        ((VirtualQTabBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnCustomEvent(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_CustomEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_ConnectNotify(QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->connectNotify(*signal);
    } else {
        ((VirtualQTabBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTabBar_QBaseConnectNotify(QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ConnectNotify_IsBase(true);
        vqtabbar->connectNotify(*signal);
    } else {
        ((VirtualQTabBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnConnectNotify(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_ConnectNotify_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_DisconnectNotify(QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->disconnectNotify(*signal);
    } else {
        ((VirtualQTabBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTabBar_QBaseDisconnectNotify(QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DisconnectNotify_IsBase(true);
        vqtabbar->disconnectNotify(*signal);
    } else {
        ((VirtualQTabBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDisconnectNotify(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_UpdateMicroFocus(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->updateMicroFocus();
    } else {
        ((VirtualQTabBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTabBar_QBaseUpdateMicroFocus(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_UpdateMicroFocus_IsBase(true);
        vqtabbar->updateMicroFocus();
    } else {
        ((VirtualQTabBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnUpdateMicroFocus(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_Create(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->create();
    } else {
        ((VirtualQTabBar*)self)->create();
    }
}

// Base class handler implementation
void QTabBar_QBaseCreate(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Create_IsBase(true);
        vqtabbar->create();
    } else {
        ((VirtualQTabBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnCreate(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Create_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabBar_Destroy(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->destroy();
    } else {
        ((VirtualQTabBar*)self)->destroy();
    }
}

// Base class handler implementation
void QTabBar_QBaseDestroy(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Destroy_IsBase(true);
        vqtabbar->destroy();
    } else {
        ((VirtualQTabBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDestroy(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Destroy_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_FocusNextChild(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->focusNextChild();
    } else {
        return ((VirtualQTabBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTabBar_QBaseFocusNextChild(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusNextChild_IsBase(true);
        return vqtabbar->focusNextChild();
    } else {
        return ((VirtualQTabBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusNextChild(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusNextChild_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_FocusPreviousChild(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->focusPreviousChild();
    } else {
        return ((VirtualQTabBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTabBar_QBaseFocusPreviousChild(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusPreviousChild_IsBase(true);
        return vqtabbar->focusPreviousChild();
    } else {
        return ((VirtualQTabBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusPreviousChild(QTabBar* self, intptr_t slot) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTabBar_Sender(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->sender();
    } else {
        return ((VirtualQTabBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTabBar_QBaseSender(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Sender_IsBase(true);
        return vqtabbar->sender();
    } else {
        return ((VirtualQTabBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSender(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Sender_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabBar_SenderSignalIndex(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->senderSignalIndex();
    } else {
        return ((VirtualQTabBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTabBar_QBaseSenderSignalIndex(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SenderSignalIndex_IsBase(true);
        return vqtabbar->senderSignalIndex();
    } else {
        return ((VirtualQTabBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSenderSignalIndex(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabBar_Receivers(const QTabBar* self, const char* signal) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->receivers(signal);
    } else {
        return ((VirtualQTabBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTabBar_QBaseReceivers(const QTabBar* self, const char* signal) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Receivers_IsBase(true);
        return vqtabbar->receivers(signal);
    } else {
        return ((VirtualQTabBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnReceivers(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_Receivers_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabBar_IsSignalConnected(const QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQTabBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTabBar_QBaseIsSignalConnected(const QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_IsSignalConnected_IsBase(true);
        return vqtabbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQTabBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnIsSignalConnected(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QTabBar_GetDecodedMetricF(const QTabBar* self, int metricA, int metricB) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        return vqtabbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTabBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QTabBar_QBaseGetDecodedMetricF(const QTabBar* self, int metricA, int metricB) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_GetDecodedMetricF_IsBase(true);
        return vqtabbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTabBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnGetDecodedMetricF(const QTabBar* self, intptr_t slot) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar && vqtabbar->isVirtualQTabBar) {
        vqtabbar->setQTabBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_GetDecodedMetricF_Callback>(slot));
    }
}

void QTabBar_Delete(QTabBar* self) {
    delete self;
}
