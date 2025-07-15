#include <QAction>
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
#include <QList>
#include <QMenu>
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
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmenu.h>
#include "libqmenu.h"
#include "libqmenu.hxx"

QMenu* QMenu_new(QWidget* parent) {
    return new VirtualQMenu(parent);
}

QMenu* QMenu_new2() {
    return new VirtualQMenu();
}

QMenu* QMenu_new3(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQMenu(title_QString);
}

QMenu* QMenu_new4(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQMenu(title_QString, parent);
}

QMetaObject* QMenu_MetaObject(const QMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMenu_Metacast(QMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMenu_Metacall(QMenu* self, int param1, int param2, void** param3) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMenu_OnMetacall(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Metacall_Callback(reinterpret_cast<VirtualQMenu::QMenu_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMenu_QBaseMetacall(QMenu* self, int param1, int param2, void** param3) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Metacall_IsBase(true);
        return vqmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMenu_Tr(const char* s) {
    QString _ret = QMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QMenu_AddMenu(QMenu* self, QMenu* menu) {
    return self->addMenu(menu);
}

QMenu* QMenu_AddMenu2(QMenu* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addMenu(title_QString);
}

QMenu* QMenu_AddMenu3(QMenu* self, const QIcon* icon, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addMenu(*icon, title_QString);
}

QAction* QMenu_AddSeparator(QMenu* self) {
    return self->addSeparator();
}

QAction* QMenu_AddSection(QMenu* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addSection(text_QString);
}

QAction* QMenu_AddSection2(QMenu* self, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addSection(*icon, text_QString);
}

QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu) {
    return self->insertMenu(before, menu);
}

QAction* QMenu_InsertSeparator(QMenu* self, QAction* before) {
    return self->insertSeparator(before);
}

QAction* QMenu_InsertSection(QMenu* self, QAction* before, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertSection(before, text_QString);
}

QAction* QMenu_InsertSection2(QMenu* self, QAction* before, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertSection(before, *icon, text_QString);
}

bool QMenu_IsEmpty(const QMenu* self) {
    return self->isEmpty();
}

void QMenu_Clear(QMenu* self) {
    self->clear();
}

void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled) {
    self->setTearOffEnabled(tearOffEnabled);
}

bool QMenu_IsTearOffEnabled(const QMenu* self) {
    return self->isTearOffEnabled();
}

bool QMenu_IsTearOffMenuVisible(const QMenu* self) {
    return self->isTearOffMenuVisible();
}

void QMenu_ShowTearOffMenu(QMenu* self) {
    self->showTearOffMenu();
}

void QMenu_ShowTearOffMenu2(QMenu* self, const QPoint* pos) {
    self->showTearOffMenu(*pos);
}

void QMenu_HideTearOffMenu(QMenu* self) {
    self->hideTearOffMenu();
}

void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction) {
    self->setDefaultAction(defaultAction);
}

QAction* QMenu_DefaultAction(const QMenu* self) {
    return self->defaultAction();
}

void QMenu_SetActiveAction(QMenu* self, QAction* act) {
    self->setActiveAction(act);
}

QAction* QMenu_ActiveAction(const QMenu* self) {
    return self->activeAction();
}

void QMenu_Popup(QMenu* self, const QPoint* pos) {
    self->popup(*pos);
}

QAction* QMenu_Exec(QMenu* self) {
    return self->exec();
}

QAction* QMenu_Exec2(QMenu* self, const QPoint* pos) {
    return self->exec(*pos);
}

QAction* QMenu_Exec3(const libqt_list /* of QAction* */ actions, const QPoint* pos) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    return QMenu::exec(actions_QList, *pos);
}

QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1) {
    return new QRect(self->actionGeometry(param1));
}

QAction* QMenu_ActionAt(const QMenu* self, const QPoint* param1) {
    return self->actionAt(*param1);
}

QAction* QMenu_MenuAction(const QMenu* self) {
    return self->menuAction();
}

QMenu* QMenu_MenuInAction(const QAction* action) {
    return QMenu::menuInAction(action);
}

libqt_string QMenu_Title(const QMenu* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMenu_SetTitle(QMenu* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

QIcon* QMenu_Icon(const QMenu* self) {
    return new QIcon(self->icon());
}

void QMenu_SetIcon(QMenu* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget) {
    self->setNoReplayFor(widget);
}

bool QMenu_SeparatorsCollapsible(const QMenu* self) {
    return self->separatorsCollapsible();
}

void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse) {
    self->setSeparatorsCollapsible(collapse);
}

bool QMenu_ToolTipsVisible(const QMenu* self) {
    return self->toolTipsVisible();
}

void QMenu_SetToolTipsVisible(QMenu* self, bool visible) {
    self->setToolTipsVisible(visible);
}

void QMenu_AboutToShow(QMenu* self) {
    self->aboutToShow();
}

void QMenu_Connect_AboutToShow(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*) = reinterpret_cast<void (*)(QMenu*)>(slot);
    QMenu::connect(self, &QMenu::aboutToShow, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMenu_AboutToHide(QMenu* self) {
    self->aboutToHide();
}

void QMenu_Connect_AboutToHide(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*) = reinterpret_cast<void (*)(QMenu*)>(slot);
    QMenu::connect(self, &QMenu::aboutToHide, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMenu_Triggered(QMenu* self, QAction* action) {
    self->triggered(action);
}

void QMenu_Connect_Triggered(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*, QAction*) = reinterpret_cast<void (*)(QMenu*, QAction*)>(slot);
    QMenu::connect(self, &QMenu::triggered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void QMenu_Hovered(QMenu* self, QAction* action) {
    self->hovered(action);
}

void QMenu_Connect_Hovered(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*, QAction*) = reinterpret_cast<void (*)(QMenu*, QAction*)>(slot);
    QMenu::connect(self, &QMenu::hovered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

libqt_string QMenu_Tr2(const char* s, const char* c) {
    QString _ret = QMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMenu_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMenu::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMenu_Popup2(QMenu* self, const QPoint* pos, QAction* at) {
    self->popup(*pos, at);
}

QAction* QMenu_Exec22(QMenu* self, const QPoint* pos, QAction* at) {
    return self->exec(*pos, at);
}

QAction* QMenu_Exec32(const libqt_list /* of QAction* */ actions, const QPoint* pos, QAction* at) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    return QMenu::exec(actions_QList, *pos, at);
}

QAction* QMenu_Exec4(const libqt_list /* of QAction* */ actions, const QPoint* pos, QAction* at, QWidget* parent) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    return QMenu::exec(actions_QList, *pos, at, parent);
}

// Derived class handler implementation
QSize* QMenu_SizeHint(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return new QSize(vqmenu->sizeHint());
    } else {
        return new QSize(((VirtualQMenu*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QMenu_QBaseSizeHint(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SizeHint_IsBase(true);
        return new QSize(vqmenu->sizeHint());
    } else {
        return new QSize(((VirtualQMenu*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSizeHint(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SizeHint_Callback(reinterpret_cast<VirtualQMenu::QMenu_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ChangeEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->changeEvent(param1);
    } else {
        ((VirtualQMenu*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseChangeEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ChangeEvent_IsBase(true);
        vqmenu->changeEvent(param1);
    } else {
        ((VirtualQMenu*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnChangeEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ChangeEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_KeyPressEvent(QMenu* self, QKeyEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->keyPressEvent(param1);
    } else {
        ((VirtualQMenu*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseKeyPressEvent(QMenu* self, QKeyEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_KeyPressEvent_IsBase(true);
        vqmenu->keyPressEvent(param1);
    } else {
        ((VirtualQMenu*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnKeyPressEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_KeyPressEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_MouseReleaseEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->mouseReleaseEvent(param1);
    } else {
        ((VirtualQMenu*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseMouseReleaseEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MouseReleaseEvent_IsBase(true);
        vqmenu->mouseReleaseEvent(param1);
    } else {
        ((VirtualQMenu*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseReleaseEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_MousePressEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->mousePressEvent(param1);
    } else {
        ((VirtualQMenu*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseMousePressEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MousePressEvent_IsBase(true);
        vqmenu->mousePressEvent(param1);
    } else {
        ((VirtualQMenu*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMousePressEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MousePressEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_MouseMoveEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->mouseMoveEvent(param1);
    } else {
        ((VirtualQMenu*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseMouseMoveEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MouseMoveEvent_IsBase(true);
        vqmenu->mouseMoveEvent(param1);
    } else {
        ((VirtualQMenu*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseMoveEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_WheelEvent(QMenu* self, QWheelEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->wheelEvent(param1);
    } else {
        ((VirtualQMenu*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseWheelEvent(QMenu* self, QWheelEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_WheelEvent_IsBase(true);
        vqmenu->wheelEvent(param1);
    } else {
        ((VirtualQMenu*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnWheelEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_WheelEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_EnterEvent(QMenu* self, QEnterEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->enterEvent(param1);
    } else {
        ((VirtualQMenu*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseEnterEvent(QMenu* self, QEnterEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_EnterEvent_IsBase(true);
        vqmenu->enterEvent(param1);
    } else {
        ((VirtualQMenu*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEnterEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_EnterEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_LeaveEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->leaveEvent(param1);
    } else {
        ((VirtualQMenu*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseLeaveEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_LeaveEvent_IsBase(true);
        vqmenu->leaveEvent(param1);
    } else {
        ((VirtualQMenu*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnLeaveEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_LeaveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_HideEvent(QMenu* self, QHideEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->hideEvent(param1);
    } else {
        ((VirtualQMenu*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseHideEvent(QMenu* self, QHideEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_HideEvent_IsBase(true);
        vqmenu->hideEvent(param1);
    } else {
        ((VirtualQMenu*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHideEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_HideEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_PaintEvent(QMenu* self, QPaintEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->paintEvent(param1);
    } else {
        ((VirtualQMenu*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBasePaintEvent(QMenu* self, QPaintEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_PaintEvent_IsBase(true);
        vqmenu->paintEvent(param1);
    } else {
        ((VirtualQMenu*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnPaintEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_PaintEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ActionEvent(QMenu* self, QActionEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->actionEvent(param1);
    } else {
        ((VirtualQMenu*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseActionEvent(QMenu* self, QActionEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ActionEvent_IsBase(true);
        vqmenu->actionEvent(param1);
    } else {
        ((VirtualQMenu*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnActionEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ActionEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_TimerEvent(QMenu* self, QTimerEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->timerEvent(param1);
    } else {
        ((VirtualQMenu*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseTimerEvent(QMenu* self, QTimerEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_TimerEvent_IsBase(true);
        vqmenu->timerEvent(param1);
    } else {
        ((VirtualQMenu*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnTimerEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_TimerEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_Event(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->event(param1);
    } else {
        return ((VirtualQMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool QMenu_QBaseEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Event_IsBase(true);
        return vqmenu->event(param1);
    } else {
        return ((VirtualQMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Event_Callback(reinterpret_cast<VirtualQMenu::QMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_FocusNextPrevChild(QMenu* self, bool next) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->focusNextPrevChild(next);
    } else {
        return ((VirtualQMenu*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMenu_QBaseFocusNextPrevChild(QMenu* self, bool next) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusNextPrevChild_IsBase(true);
        return vqmenu->focusNextPrevChild(next);
    } else {
        return ((VirtualQMenu*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusNextPrevChild(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMenu::QMenu_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_InitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->initStyleOption(option, action);
    } else {
        ((VirtualQMenu*)self)->initStyleOption(option, action);
    }
}

// Base class handler implementation
void QMenu_QBaseInitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InitStyleOption_IsBase(true);
        vqmenu->initStyleOption(option, action);
    } else {
        ((VirtualQMenu*)self)->initStyleOption(option, action);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInitStyleOption(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InitStyleOption_Callback(reinterpret_cast<VirtualQMenu::QMenu_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenu_DevType(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->devType();
    } else {
        return self->QMenu::devType();
    }
}

// Base class handler implementation
int QMenu_QBaseDevType(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DevType_IsBase(true);
        return vqmenu->devType();
    } else {
        return self->QMenu::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDevType(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DevType_Callback(reinterpret_cast<VirtualQMenu::QMenu_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_SetVisible(QMenu* self, bool visible) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setVisible(visible);
    } else {
        self->QMenu::setVisible(visible);
    }
}

// Base class handler implementation
void QMenu_QBaseSetVisible(QMenu* self, bool visible) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SetVisible_IsBase(true);
        vqmenu->setVisible(visible);
    } else {
        self->QMenu::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSetVisible(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SetVisible_Callback(reinterpret_cast<VirtualQMenu::QMenu_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMenu_MinimumSizeHint(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return new QSize(vqmenu->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMenu*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMenu_QBaseMinimumSizeHint(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MinimumSizeHint_IsBase(true);
        return new QSize(vqmenu->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMenu*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMinimumSizeHint(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMenu::QMenu_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenu_HeightForWidth(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMenu::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMenu_QBaseHeightForWidth(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_HeightForWidth_IsBase(true);
        return vqmenu->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMenu::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHeightForWidth(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_HeightForWidth_Callback(reinterpret_cast<VirtualQMenu::QMenu_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_HasHeightForWidth(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->hasHeightForWidth();
    } else {
        return self->QMenu::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMenu_QBaseHasHeightForWidth(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_HasHeightForWidth_IsBase(true);
        return vqmenu->hasHeightForWidth();
    } else {
        return self->QMenu::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHasHeightForWidth(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMenu::QMenu_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMenu_PaintEngine(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->paintEngine();
    } else {
        return self->QMenu::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMenu_QBasePaintEngine(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_PaintEngine_IsBase(true);
        return vqmenu->paintEngine();
    } else {
        return self->QMenu::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnPaintEngine(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_PaintEngine_Callback(reinterpret_cast<VirtualQMenu::QMenu_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_MouseDoubleClickEvent(QMenu* self, QMouseEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQMenu*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseMouseDoubleClickEvent(QMenu* self, QMouseEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MouseDoubleClickEvent_IsBase(true);
        vqmenu->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQMenu*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseDoubleClickEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_KeyReleaseEvent(QMenu* self, QKeyEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->keyReleaseEvent(event);
    } else {
        ((VirtualQMenu*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseKeyReleaseEvent(QMenu* self, QKeyEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_KeyReleaseEvent_IsBase(true);
        vqmenu->keyReleaseEvent(event);
    } else {
        ((VirtualQMenu*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnKeyReleaseEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_FocusInEvent(QMenu* self, QFocusEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->focusInEvent(event);
    } else {
        ((VirtualQMenu*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseFocusInEvent(QMenu* self, QFocusEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusInEvent_IsBase(true);
        vqmenu->focusInEvent(event);
    } else {
        ((VirtualQMenu*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusInEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusInEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_FocusOutEvent(QMenu* self, QFocusEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->focusOutEvent(event);
    } else {
        ((VirtualQMenu*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseFocusOutEvent(QMenu* self, QFocusEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusOutEvent_IsBase(true);
        vqmenu->focusOutEvent(event);
    } else {
        ((VirtualQMenu*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusOutEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusOutEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_MoveEvent(QMenu* self, QMoveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->moveEvent(event);
    } else {
        ((VirtualQMenu*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseMoveEvent(QMenu* self, QMoveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MoveEvent_IsBase(true);
        vqmenu->moveEvent(event);
    } else {
        ((VirtualQMenu*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMoveEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_MoveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ResizeEvent(QMenu* self, QResizeEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->resizeEvent(event);
    } else {
        ((VirtualQMenu*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseResizeEvent(QMenu* self, QResizeEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ResizeEvent_IsBase(true);
        vqmenu->resizeEvent(event);
    } else {
        ((VirtualQMenu*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnResizeEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ResizeEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_CloseEvent(QMenu* self, QCloseEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->closeEvent(event);
    } else {
        ((VirtualQMenu*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseCloseEvent(QMenu* self, QCloseEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_CloseEvent_IsBase(true);
        vqmenu->closeEvent(event);
    } else {
        ((VirtualQMenu*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnCloseEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_CloseEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ContextMenuEvent(QMenu* self, QContextMenuEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->contextMenuEvent(event);
    } else {
        ((VirtualQMenu*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseContextMenuEvent(QMenu* self, QContextMenuEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ContextMenuEvent_IsBase(true);
        vqmenu->contextMenuEvent(event);
    } else {
        ((VirtualQMenu*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnContextMenuEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_TabletEvent(QMenu* self, QTabletEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->tabletEvent(event);
    } else {
        ((VirtualQMenu*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseTabletEvent(QMenu* self, QTabletEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_TabletEvent_IsBase(true);
        vqmenu->tabletEvent(event);
    } else {
        ((VirtualQMenu*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnTabletEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_TabletEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_DragEnterEvent(QMenu* self, QDragEnterEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->dragEnterEvent(event);
    } else {
        ((VirtualQMenu*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseDragEnterEvent(QMenu* self, QDragEnterEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DragEnterEvent_IsBase(true);
        vqmenu->dragEnterEvent(event);
    } else {
        ((VirtualQMenu*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDragEnterEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DragEnterEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_DragMoveEvent(QMenu* self, QDragMoveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->dragMoveEvent(event);
    } else {
        ((VirtualQMenu*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseDragMoveEvent(QMenu* self, QDragMoveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DragMoveEvent_IsBase(true);
        vqmenu->dragMoveEvent(event);
    } else {
        ((VirtualQMenu*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDragMoveEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DragMoveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_DragLeaveEvent(QMenu* self, QDragLeaveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->dragLeaveEvent(event);
    } else {
        ((VirtualQMenu*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseDragLeaveEvent(QMenu* self, QDragLeaveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DragLeaveEvent_IsBase(true);
        vqmenu->dragLeaveEvent(event);
    } else {
        ((VirtualQMenu*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDragLeaveEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_DropEvent(QMenu* self, QDropEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->dropEvent(event);
    } else {
        ((VirtualQMenu*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseDropEvent(QMenu* self, QDropEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DropEvent_IsBase(true);
        vqmenu->dropEvent(event);
    } else {
        ((VirtualQMenu*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDropEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DropEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ShowEvent(QMenu* self, QShowEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->showEvent(event);
    } else {
        ((VirtualQMenu*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseShowEvent(QMenu* self, QShowEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ShowEvent_IsBase(true);
        vqmenu->showEvent(event);
    } else {
        ((VirtualQMenu*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnShowEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ShowEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_NativeEvent(QMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMenu*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMenu_QBaseNativeEvent(QMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_NativeEvent_IsBase(true);
        return vqmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMenu*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnNativeEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_NativeEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenu_Metric(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMenu*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMenu_QBaseMetric(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Metric_IsBase(true);
        return vqmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMenu*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMetric(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Metric_Callback(reinterpret_cast<VirtualQMenu::QMenu_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_InitPainter(const QMenu* self, QPainter* painter) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->initPainter(painter);
    } else {
        ((VirtualQMenu*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QMenu_QBaseInitPainter(const QMenu* self, QPainter* painter) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InitPainter_IsBase(true);
        vqmenu->initPainter(painter);
    } else {
        ((VirtualQMenu*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInitPainter(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InitPainter_Callback(reinterpret_cast<VirtualQMenu::QMenu_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMenu_Redirected(const QMenu* self, QPoint* offset) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->redirected(offset);
    } else {
        return ((VirtualQMenu*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMenu_QBaseRedirected(const QMenu* self, QPoint* offset) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Redirected_IsBase(true);
        return vqmenu->redirected(offset);
    } else {
        return ((VirtualQMenu*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnRedirected(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Redirected_Callback(reinterpret_cast<VirtualQMenu::QMenu_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMenu_SharedPainter(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->sharedPainter();
    } else {
        return ((VirtualQMenu*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMenu_QBaseSharedPainter(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SharedPainter_IsBase(true);
        return vqmenu->sharedPainter();
    } else {
        return ((VirtualQMenu*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSharedPainter(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SharedPainter_Callback(reinterpret_cast<VirtualQMenu::QMenu_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_InputMethodEvent(QMenu* self, QInputMethodEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->inputMethodEvent(param1);
    } else {
        ((VirtualQMenu*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMenu_QBaseInputMethodEvent(QMenu* self, QInputMethodEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InputMethodEvent_IsBase(true);
        vqmenu->inputMethodEvent(param1);
    } else {
        ((VirtualQMenu*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInputMethodEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InputMethodEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMenu_InputMethodQuery(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return new QVariant(vqmenu->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMenu*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMenu_QBaseInputMethodQuery(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InputMethodQuery_IsBase(true);
        return new QVariant(vqmenu->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMenu*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInputMethodQuery(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_InputMethodQuery_Callback(reinterpret_cast<VirtualQMenu::QMenu_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_EventFilter(QMenu* self, QObject* watched, QEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->eventFilter(watched, event);
    } else {
        return self->QMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMenu_QBaseEventFilter(QMenu* self, QObject* watched, QEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_EventFilter_IsBase(true);
        return vqmenu->eventFilter(watched, event);
    } else {
        return self->QMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEventFilter(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_EventFilter_Callback(reinterpret_cast<VirtualQMenu::QMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ChildEvent(QMenu* self, QChildEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->childEvent(event);
    } else {
        ((VirtualQMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseChildEvent(QMenu* self, QChildEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ChildEvent_IsBase(true);
        vqmenu->childEvent(event);
    } else {
        ((VirtualQMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnChildEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ChildEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_CustomEvent(QMenu* self, QEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->customEvent(event);
    } else {
        ((VirtualQMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMenu_QBaseCustomEvent(QMenu* self, QEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_CustomEvent_IsBase(true);
        vqmenu->customEvent(event);
    } else {
        ((VirtualQMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnCustomEvent(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_CustomEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_ConnectNotify(QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->connectNotify(*signal);
    } else {
        ((VirtualQMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMenu_QBaseConnectNotify(QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ConnectNotify_IsBase(true);
        vqmenu->connectNotify(*signal);
    } else {
        ((VirtualQMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnConnectNotify(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ConnectNotify_Callback(reinterpret_cast<VirtualQMenu::QMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_DisconnectNotify(QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->disconnectNotify(*signal);
    } else {
        ((VirtualQMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMenu_QBaseDisconnectNotify(QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DisconnectNotify_IsBase(true);
        vqmenu->disconnectNotify(*signal);
    } else {
        ((VirtualQMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDisconnectNotify(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualQMenu::QMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenu_ColumnCount(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->columnCount();
    } else {
        return ((VirtualQMenu*)self)->columnCount();
    }
}

// Base class handler implementation
int QMenu_QBaseColumnCount(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ColumnCount_IsBase(true);
        return vqmenu->columnCount();
    } else {
        return ((VirtualQMenu*)self)->columnCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnColumnCount(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_ColumnCount_Callback(reinterpret_cast<VirtualQMenu::QMenu_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_UpdateMicroFocus(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->updateMicroFocus();
    } else {
        ((VirtualQMenu*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QMenu_QBaseUpdateMicroFocus(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_UpdateMicroFocus_IsBase(true);
        vqmenu->updateMicroFocus();
    } else {
        ((VirtualQMenu*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnUpdateMicroFocus(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMenu::QMenu_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_Create(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->create();
    } else {
        ((VirtualQMenu*)self)->create();
    }
}

// Base class handler implementation
void QMenu_QBaseCreate(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Create_IsBase(true);
        vqmenu->create();
    } else {
        ((VirtualQMenu*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnCreate(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Create_Callback(reinterpret_cast<VirtualQMenu::QMenu_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMenu_Destroy(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->destroy();
    } else {
        ((VirtualQMenu*)self)->destroy();
    }
}

// Base class handler implementation
void QMenu_QBaseDestroy(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Destroy_IsBase(true);
        vqmenu->destroy();
    } else {
        ((VirtualQMenu*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDestroy(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Destroy_Callback(reinterpret_cast<VirtualQMenu::QMenu_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_FocusNextChild(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->focusNextChild();
    } else {
        return ((VirtualQMenu*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QMenu_QBaseFocusNextChild(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusNextChild_IsBase(true);
        return vqmenu->focusNextChild();
    } else {
        return ((VirtualQMenu*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusNextChild(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusNextChild_Callback(reinterpret_cast<VirtualQMenu::QMenu_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_FocusPreviousChild(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->focusPreviousChild();
    } else {
        return ((VirtualQMenu*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMenu_QBaseFocusPreviousChild(QMenu* self) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusPreviousChild_IsBase(true);
        return vqmenu->focusPreviousChild();
    } else {
        return ((VirtualQMenu*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusPreviousChild(QMenu* self, intptr_t slot) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMenu::QMenu_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMenu_Sender(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->sender();
    } else {
        return ((VirtualQMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMenu_QBaseSender(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Sender_IsBase(true);
        return vqmenu->sender();
    } else {
        return ((VirtualQMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSender(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Sender_Callback(reinterpret_cast<VirtualQMenu::QMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenu_SenderSignalIndex(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->senderSignalIndex();
    } else {
        return ((VirtualQMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMenu_QBaseSenderSignalIndex(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SenderSignalIndex_IsBase(true);
        return vqmenu->senderSignalIndex();
    } else {
        return ((VirtualQMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSenderSignalIndex(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMenu::QMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMenu_Receivers(const QMenu* self, const char* signal) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->receivers(signal);
    } else {
        return ((VirtualQMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMenu_QBaseReceivers(const QMenu* self, const char* signal) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Receivers_IsBase(true);
        return vqmenu->receivers(signal);
    } else {
        return ((VirtualQMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnReceivers(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_Receivers_Callback(reinterpret_cast<VirtualQMenu::QMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMenu_IsSignalConnected(const QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualQMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMenu_QBaseIsSignalConnected(const QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_IsSignalConnected_IsBase(true);
        return vqmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualQMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnIsSignalConnected(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualQMenu::QMenu_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QMenu_GetDecodedMetricF(const QMenu* self, int metricA, int metricB) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        return vqmenu->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMenu*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QMenu_QBaseGetDecodedMetricF(const QMenu* self, int metricA, int metricB) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_GetDecodedMetricF_IsBase(true);
        return vqmenu->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMenu*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnGetDecodedMetricF(const QMenu* self, intptr_t slot) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu && vqmenu->isVirtualQMenu) {
        vqmenu->setQMenu_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQMenu::QMenu_GetDecodedMetricF_Callback>(slot));
    }
}

void QMenu_Delete(QMenu* self) {
    delete self;
}
