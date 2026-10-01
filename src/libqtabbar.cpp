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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTabBar_Tr(const char* s) {
    auto _ret = QTabBar::tr(s);
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
    auto _ret = self->tabText(static_cast<int>(index));
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
    auto _ret = self->tabToolTip(static_cast<int>(index));
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
    auto _ret = self->tabWhatsThis(static_cast<int>(index));
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
    return new QSize(self->sizeHint());
}

QSize* QTabBar_MinimumSizeHint(const QTabBar* self) {
    return new QSize(self->minimumSizeHint());
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
    auto _ret = self->accessibleTabName(static_cast<int>(index));
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
    QTabBar::connect(self,
                     static_cast<void (QTabBar::*)(int)>(&QTabBar::currentChanged),
                     [self, slotFunc](int index) {
                         int sigval1 = index;
                         slotFunc(self, sigval1);
                     });
}

void QTabBar_TabCloseRequested(QTabBar* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void QTabBar_Connect_TabCloseRequested(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self,
                     static_cast<void (QTabBar::*)(int)>(&QTabBar::tabCloseRequested),
                     [self, slotFunc](int index) {
                         int sigval1 = index;
                         slotFunc(self, sigval1);
                     });
}

void QTabBar_TabMoved(QTabBar* self, int from, int to) {
    self->tabMoved(static_cast<int>(from), static_cast<int>(to));
}

void QTabBar_Connect_TabMoved(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int, int) = reinterpret_cast<void (*)(QTabBar*, int, int)>(slot);
    QTabBar::connect(self,
                     static_cast<void (QTabBar::*)(int, int)>(&QTabBar::tabMoved),
                     [self, slotFunc](int from, int to) {
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
    QTabBar::connect(self,
                     static_cast<void (QTabBar::*)(int)>(&QTabBar::tabBarClicked),
                     [self, slotFunc](int index) {
                         int sigval1 = index;
                         slotFunc(self, sigval1);
                     });
}

void QTabBar_TabBarDoubleClicked(QTabBar* self, int index) {
    self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabBar_Connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self,
                     static_cast<void (QTabBar::*)(int)>(&QTabBar::tabBarDoubleClicked),
                     [self, slotFunc](int index) {
                         int sigval1 = index;
                         slotFunc(self, sigval1);
                     });
}

QSize* QTabBar_TabSizeHint(const QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar) {
        return new QSize(vqtabbar->tabSizeHint(static_cast<int>(index)));
    }
    qFatal("Error: Protected method QTabBar::tabSizeHint called without a directly constructed type");
}

QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar) {
        return new QSize(vqtabbar->minimumTabSizeHint(static_cast<int>(index)));
    }
    qFatal("Error: Protected method QTabBar::minimumTabSizeHint called without a directly constructed type");
}

void QTabBar_TabInserted(QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->tabInserted(static_cast<int>(index));
    }
}

void QTabBar_TabRemoved(QTabBar* self, int index) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->tabRemoved(static_cast<int>(index));
    }
}

void QTabBar_TabLayoutChange(QTabBar* self) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->tabLayoutChange();
    }
}

bool QTabBar_Event(QTabBar* self, QEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        return vqtabbar->event(param1);
    }
    qFatal("Error: Protected method QTabBar::event called without a directly constructed type");
}

void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->resizeEvent(param1);
    }
}

void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->showEvent(param1);
    }
}

void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->hideEvent(param1);
    }
}

void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->paintEvent(param1);
    }
}

void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->mousePressEvent(param1);
    }
}

void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->mouseMoveEvent(param1);
    }
}

void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->mouseReleaseEvent(param1);
    }
}

void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->mouseDoubleClickEvent(param1);
    }
}

void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->wheelEvent(event);
    }
}

void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->keyPressEvent(param1);
    }
}

void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->changeEvent(param1);
    }
}

void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->timerEvent(event);
    }
}

void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex) {
    auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->initStyleOption(option, static_cast<int>(tabIndex));
    }
}

libqt_string QTabBar_Tr2(const char* s, const char* c) {
    auto _ret = QTabBar::tr(s, c);
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
    auto _ret = QTabBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTabBar_SuperMetaObject(const QTabBar* self) {
    return (QMetaObject*)self->QTabBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMetaObject(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_metaobject_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTabBar_SuperMetacast(QTabBar* self, const char* param1) {
    return self->QTabBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMetacast(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_metacast_callback = reinterpret_cast<VirtualQTabBar::QTabBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTabBar_SuperMetacall(QTabBar* self, int param1, int param2, void** param3) {
    return self->QTabBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMetacall(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_metacall_callback = reinterpret_cast<VirtualQTabBar::QTabBar_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QTabBar_SuperSizeHint(const QTabBar* self) {
    return new QSize(self->QTabBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSizeHint(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_sizehint_callback = reinterpret_cast<VirtualQTabBar::QTabBar_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QTabBar_SuperMinimumSizeHint(const QTabBar* self) {
    return new QSize(self->QTabBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMinimumSizeHint(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_minimumsizehint_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QTabBar_SuperTabSizeHint(const QTabBar* self, int index) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        return new QSize(vqtabbar->QTabBar::tabSizeHint(static_cast<int>(index)));
    qFatal("Error: Protected virtual method QTabBar::tabSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabSizeHint(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_tabsizehint_callback = reinterpret_cast<VirtualQTabBar::QTabBar_TabSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QTabBar_SuperMinimumTabSizeHint(const QTabBar* self, int index) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        return new QSize(vqtabbar->QTabBar::minimumTabSizeHint(static_cast<int>(index)));
    qFatal("Error: Protected virtual method QTabBar::minimumTabSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMinimumTabSizeHint(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_minimumtabsizehint_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MinimumTabSizeHint_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperTabInserted(QTabBar* self, int index) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::tabInserted(static_cast<int>(index));
    } else
        qFatal("Error: Protected virtual method QTabBar::tabInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabInserted(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_tabinserted_callback = reinterpret_cast<VirtualQTabBar::QTabBar_TabInserted_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperTabRemoved(QTabBar* self, int index) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::tabRemoved(static_cast<int>(index));
    } else
        qFatal("Error: Protected virtual method QTabBar::tabRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabRemoved(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_tabremoved_callback = reinterpret_cast<VirtualQTabBar::QTabBar_TabRemoved_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperTabLayoutChange(QTabBar* self) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::tabLayoutChange();
    } else
        qFatal("Error: Protected virtual method QTabBar::tabLayoutChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabLayoutChange(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_tablayoutchange_callback = reinterpret_cast<VirtualQTabBar::QTabBar_TabLayoutChange_Callback>(slot);
}

// Base class handler implementation
bool QTabBar_SuperEvent(QTabBar* self, QEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        return vqtabbar->QTabBar::event(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_event_callback = reinterpret_cast<VirtualQTabBar::QTabBar_Event_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperResizeEvent(QTabBar* self, QResizeEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnResizeEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_resizeevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperShowEvent(QTabBar* self, QShowEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnShowEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_showevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperHideEvent(QTabBar* self, QHideEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnHideEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_hideevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperPaintEvent(QTabBar* self, QPaintEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnPaintEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_paintevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperMousePressEvent(QTabBar* self, QMouseEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMousePressEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_mousepressevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperMouseMoveEvent(QTabBar* self, QMouseEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMouseMoveEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_mousemoveevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperMouseReleaseEvent(QTabBar* self, QMouseEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMouseReleaseEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_mousereleaseevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMouseDoubleClickEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperWheelEvent(QTabBar* self, QWheelEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnWheelEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_wheelevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperKeyPressEvent(QTabBar* self, QKeyEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnKeyPressEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_keypressevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperChangeEvent(QTabBar* self, QEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnChangeEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_changeevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperTimerEvent(QTabBar* self, QTimerEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTimerEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_timerevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QTabBar_SuperInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        vqtabbar->QTabBar::initStyleOption(option, static_cast<int>(tabIndex));
    } else
        qFatal("Error: Protected virtual method QTabBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInitStyleOption(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_initstyleoption_callback = reinterpret_cast<VirtualQTabBar::QTabBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTabBar_DevType(const QTabBar* self) {
    return self->devType();
}

// Base class handler implementation
int QTabBar_SuperDevType(const QTabBar* self) {
    return self->QTabBar::devType();
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDevType(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_devtype_callback = reinterpret_cast<VirtualQTabBar::QTabBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_SetVisible(QTabBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTabBar_SuperSetVisible(QTabBar* self, bool visible) {
    self->QTabBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSetVisible(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_setvisible_callback = reinterpret_cast<VirtualQTabBar::QTabBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTabBar_HeightForWidth(const QTabBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTabBar_SuperHeightForWidth(const QTabBar* self, int param1) {
    return self->QTabBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnHeightForWidth(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_heightforwidth_callback = reinterpret_cast<VirtualQTabBar::QTabBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTabBar_HasHeightForWidth(const QTabBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTabBar_SuperHasHeightForWidth(const QTabBar* self) {
    return self->QTabBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnHasHeightForWidth(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_hasheightforwidth_callback = reinterpret_cast<VirtualQTabBar::QTabBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTabBar_PaintEngine(const QTabBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTabBar_SuperPaintEngine(const QTabBar* self) {
    return self->QTabBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnPaintEngine(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_paintengine_callback = reinterpret_cast<VirtualQTabBar::QTabBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_KeyReleaseEvent(QTabBar* self, QKeyEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperKeyReleaseEvent(QTabBar* self, QKeyEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnKeyReleaseEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_keyreleaseevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_FocusInEvent(QTabBar* self, QFocusEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperFocusInEvent(QTabBar* self, QFocusEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusInEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_focusinevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_FocusOutEvent(QTabBar* self, QFocusEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperFocusOutEvent(QTabBar* self, QFocusEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusOutEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_focusoutevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_EnterEvent(QTabBar* self, QEnterEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperEnterEvent(QTabBar* self, QEnterEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnEnterEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_enterevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_LeaveEvent(QTabBar* self, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperLeaveEvent(QTabBar* self, QEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnLeaveEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_leaveevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_MoveEvent(QTabBar* self, QMoveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperMoveEvent(QTabBar* self, QMoveEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMoveEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_moveevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_CloseEvent(QTabBar* self, QCloseEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperCloseEvent(QTabBar* self, QCloseEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnCloseEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_closeevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_ContextMenuEvent(QTabBar* self, QContextMenuEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperContextMenuEvent(QTabBar* self, QContextMenuEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnContextMenuEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_contextmenuevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_TabletEvent(QTabBar* self, QTabletEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperTabletEvent(QTabBar* self, QTabletEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabletEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_tabletevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_ActionEvent(QTabBar* self, QActionEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperActionEvent(QTabBar* self, QActionEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnActionEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_actionevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_DragEnterEvent(QTabBar* self, QDragEnterEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperDragEnterEvent(QTabBar* self, QDragEnterEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDragEnterEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_dragenterevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_DragMoveEvent(QTabBar* self, QDragMoveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperDragMoveEvent(QTabBar* self, QDragMoveEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDragMoveEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_dragmoveevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_DragLeaveEvent(QTabBar* self, QDragLeaveEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperDragLeaveEvent(QTabBar* self, QDragLeaveEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDragLeaveEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_dragleaveevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_DropEvent(QTabBar* self, QDropEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperDropEvent(QTabBar* self, QDropEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDropEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_dropevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTabBar_NativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        return vqtabbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTabBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTabBar_SuperNativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        return vqtabbar->QTabBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTabBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnNativeEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_nativeevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTabBar_Metric(const QTabBar* self, int param1) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar) {
        return vqtabbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTabBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTabBar_SuperMetric(const QTabBar* self, int param1) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->QTabBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTabBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMetric(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_metric_callback = reinterpret_cast<VirtualQTabBar::QTabBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_InitPainter(const QTabBar* self, QPainter* painter) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar) {
        vqtabbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTabBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperInitPainter(const QTabBar* self, QPainter* painter) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        vqtabbar->QTabBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTabBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInitPainter(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_initpainter_callback = reinterpret_cast<VirtualQTabBar::QTabBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTabBar_Redirected(const QTabBar* self, QPoint* offset) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar) {
        return vqtabbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTabBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTabBar_SuperRedirected(const QTabBar* self, QPoint* offset) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->QTabBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTabBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnRedirected(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_redirected_callback = reinterpret_cast<VirtualQTabBar::QTabBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTabBar_SharedPainter(const QTabBar* self) {
    auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self));
    if (vqtabbar) {
        return vqtabbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTabBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTabBar_SuperSharedPainter(const QTabBar* self) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->QTabBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTabBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSharedPainter(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_sharedpainter_callback = reinterpret_cast<VirtualQTabBar::QTabBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_InputMethodEvent(QTabBar* self, QInputMethodEvent* param1) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTabBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperInputMethodEvent(QTabBar* self, QInputMethodEvent* param1) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInputMethodEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_inputmethodevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTabBar_InputMethodQuery(const QTabBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QTabBar_SuperInputMethodQuery(const QTabBar* self, int param1) {
    return new QVariant(self->QTabBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInputMethodQuery(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self)))
        vqtabbar->qtabbar_inputmethodquery_callback = reinterpret_cast<VirtualQTabBar::QTabBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QTabBar_FocusNextPrevChild(QTabBar* self, bool next) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        return vqtabbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTabBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTabBar_SuperFocusNextPrevChild(QTabBar* self, bool next) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        return vqtabbar->QTabBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTabBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnFocusNextPrevChild(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_focusnextprevchild_callback = reinterpret_cast<VirtualQTabBar::QTabBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QTabBar_EventFilter(QTabBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTabBar_SuperEventFilter(QTabBar* self, QObject* watched, QEvent* event) {
    return self->QTabBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnEventFilter(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_eventfilter_callback = reinterpret_cast<VirtualQTabBar::QTabBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_ChildEvent(QTabBar* self, QChildEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperChildEvent(QTabBar* self, QChildEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnChildEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_childevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_CustomEvent(QTabBar* self, QEvent* event) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperCustomEvent(QTabBar* self, QEvent* event) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnCustomEvent(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_customevent_callback = reinterpret_cast<VirtualQTabBar::QTabBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_ConnectNotify(QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTabBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperConnectNotify(QTabBar* self, const QMetaMethod* signal) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTabBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnConnectNotify(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_connectnotify_callback = reinterpret_cast<VirtualQTabBar::QTabBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTabBar_DisconnectNotify(QTabBar* self, const QMetaMethod* signal) {
    auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
    if (vqtabbar) {
        vqtabbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTabBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabBar_SuperDisconnectNotify(QTabBar* self, const QMetaMethod* signal) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->QTabBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTabBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnDisconnectNotify(QTabBar* self, intptr_t slot) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self))
        vqtabbar->qtabbar_disconnectnotify_callback = reinterpret_cast<VirtualQTabBar::QTabBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTabBar_UpdateMicroFocus(QTabBar* self) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->VirtualQTabBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTabBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTabBar_Create(QTabBar* self) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->VirtualQTabBar::create();
    } else
        qFatal("Error: Protected method QTabBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTabBar_Destroy(QTabBar* self) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        vqtabbar->VirtualQTabBar::destroy();
    } else
        qFatal("Error: Protected method QTabBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTabBar_FocusNextChild(QTabBar* self) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        return vqtabbar->VirtualQTabBar::focusNextChild();
    } else
        qFatal("Error: Protected method QTabBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTabBar_FocusPreviousChild(QTabBar* self) {
    if (auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self)) {
        return vqtabbar->VirtualQTabBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTabBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTabBar_Sender(const QTabBar* self) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->VirtualQTabBar::sender();
    } else
        qFatal("Error: Protected method QTabBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTabBar_SenderSignalIndex(const QTabBar* self) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->VirtualQTabBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTabBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTabBar_Receivers(const QTabBar* self, const char* signal) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->VirtualQTabBar::receivers(signal);
    } else
        qFatal("Error: Protected method QTabBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTabBar_IsSignalConnected(const QTabBar* self, const QMetaMethod* signal) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->VirtualQTabBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTabBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTabBar_GetDecodedMetricF(const QTabBar* self, int metricA, int metricB) {
    if (auto* vqtabbar = const_cast<VirtualQTabBar*>(dynamic_cast<const VirtualQTabBar*>(self))) {
        return vqtabbar->VirtualQTabBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTabBar::getDecodedMetricF called without a directly constructed type");
}

void QTabBar_Delete(QTabBar* self) {
    delete self;
}
