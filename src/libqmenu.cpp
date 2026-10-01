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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMenu_Tr(const char* s) {
    auto _ret = QMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

QSize* QMenu_SizeHint(const QMenu* self) {
    return new QSize(self->sizeHint());
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

#ifdef __APPLE__
NSMenu* QMenu_ToNSMenu(QMenu* self) {
    return self->toNSMenu();
}
#endif

#ifdef __APPLE__
void QMenu_SetAsDockMenu(QMenu* self) {
    self->setAsDockMenu();
}
#endif

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
    QMenu::connect(self,
                   static_cast<void (QMenu::*)()>(&QMenu::aboutToShow),
                   [self, slotFunc]() {
                       slotFunc(self);
                   });
}

void QMenu_AboutToHide(QMenu* self) {
    self->aboutToHide();
}

void QMenu_Connect_AboutToHide(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*) = reinterpret_cast<void (*)(QMenu*)>(slot);
    QMenu::connect(self,
                   static_cast<void (QMenu::*)()>(&QMenu::aboutToHide),
                   [self, slotFunc]() {
                       slotFunc(self);
                   });
}

void QMenu_Triggered(QMenu* self, QAction* action) {
    self->triggered(action);
}

void QMenu_Connect_Triggered(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*, QAction*) = reinterpret_cast<void (*)(QMenu*, QAction*)>(slot);
    QMenu::connect(self,
                   static_cast<void (QMenu::*)(QAction*)>(&QMenu::triggered),
                   [self, slotFunc](QAction* action) {
                       QAction* sigval1 = action;
                       slotFunc(self, sigval1);
                   });
}

void QMenu_Hovered(QMenu* self, QAction* action) {
    self->hovered(action);
}

void QMenu_Connect_Hovered(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*, QAction*) = reinterpret_cast<void (*)(QMenu*, QAction*)>(slot);
    QMenu::connect(self,
                   static_cast<void (QMenu::*)(QAction*)>(&QMenu::hovered),
                   [self, slotFunc](QAction* action) {
                       QAction* sigval1 = action;
                       slotFunc(self, sigval1);
                   });
}

void QMenu_ChangeEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->changeEvent(param1);
    }
}

void QMenu_KeyPressEvent(QMenu* self, QKeyEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->keyPressEvent(param1);
    }
}

void QMenu_MouseReleaseEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->mouseReleaseEvent(param1);
    }
}

void QMenu_MousePressEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->mousePressEvent(param1);
    }
}

void QMenu_MouseMoveEvent(QMenu* self, QMouseEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->mouseMoveEvent(param1);
    }
}

void QMenu_WheelEvent(QMenu* self, QWheelEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->wheelEvent(param1);
    }
}

void QMenu_EnterEvent(QMenu* self, QEnterEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->enterEvent(param1);
    }
}

void QMenu_LeaveEvent(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->leaveEvent(param1);
    }
}

void QMenu_HideEvent(QMenu* self, QHideEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->hideEvent(param1);
    }
}

void QMenu_PaintEvent(QMenu* self, QPaintEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->paintEvent(param1);
    }
}

void QMenu_ActionEvent(QMenu* self, QActionEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->actionEvent(param1);
    }
}

void QMenu_TimerEvent(QMenu* self, QTimerEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->timerEvent(param1);
    }
}

bool QMenu_Event(QMenu* self, QEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        return vqmenu->event(param1);
    }
    qFatal("Error: Protected method QMenu::event called without a directly constructed type");
}

bool QMenu_FocusNextPrevChild(QMenu* self, bool next) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        return vqmenu->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QMenu::focusNextPrevChild called without a directly constructed type");
}

void QMenu_InitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->initStyleOption(option, action);
    }
}

libqt_string QMenu_Tr2(const char* s, const char* c) {
    auto _ret = QMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMenu::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

// Base class handler implementation
QMetaObject* QMenu_SuperMetaObject(const QMenu* self) {
    return (QMetaObject*)self->QMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMetaObject(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_metaobject_callback = reinterpret_cast<VirtualQMenu::QMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMenu_SuperMetacast(QMenu* self, const char* param1) {
    return self->QMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMetacast(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_metacast_callback = reinterpret_cast<VirtualQMenu::QMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMenu_SuperMetacall(QMenu* self, int param1, int param2, void** param3) {
    return self->QMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMetacall(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_metacall_callback = reinterpret_cast<VirtualQMenu::QMenu_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QMenu_SuperSizeHint(const QMenu* self) {
    return new QSize(self->QMenu::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSizeHint(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_sizehint_callback = reinterpret_cast<VirtualQMenu::QMenu_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperChangeEvent(QMenu* self, QEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnChangeEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_changeevent_callback = reinterpret_cast<VirtualQMenu::QMenu_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperKeyPressEvent(QMenu* self, QKeyEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnKeyPressEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_keypressevent_callback = reinterpret_cast<VirtualQMenu::QMenu_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperMouseReleaseEvent(QMenu* self, QMouseEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseReleaseEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_mousereleaseevent_callback = reinterpret_cast<VirtualQMenu::QMenu_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperMousePressEvent(QMenu* self, QMouseEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMousePressEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_mousepressevent_callback = reinterpret_cast<VirtualQMenu::QMenu_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperMouseMoveEvent(QMenu* self, QMouseEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseMoveEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_mousemoveevent_callback = reinterpret_cast<VirtualQMenu::QMenu_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperWheelEvent(QMenu* self, QWheelEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnWheelEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_wheelevent_callback = reinterpret_cast<VirtualQMenu::QMenu_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperEnterEvent(QMenu* self, QEnterEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEnterEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_enterevent_callback = reinterpret_cast<VirtualQMenu::QMenu_EnterEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperLeaveEvent(QMenu* self, QEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnLeaveEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_leaveevent_callback = reinterpret_cast<VirtualQMenu::QMenu_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperHideEvent(QMenu* self, QHideEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHideEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_hideevent_callback = reinterpret_cast<VirtualQMenu::QMenu_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperPaintEvent(QMenu* self, QPaintEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnPaintEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_paintevent_callback = reinterpret_cast<VirtualQMenu::QMenu_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperActionEvent(QMenu* self, QActionEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnActionEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_actionevent_callback = reinterpret_cast<VirtualQMenu::QMenu_ActionEvent_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperTimerEvent(QMenu* self, QTimerEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnTimerEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_timerevent_callback = reinterpret_cast<VirtualQMenu::QMenu_TimerEvent_Callback>(slot);
}

// Base class handler implementation
bool QMenu_SuperEvent(QMenu* self, QEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        return vqmenu->QMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_event_callback = reinterpret_cast<VirtualQMenu::QMenu_Event_Callback>(slot);
}

// Base class handler implementation
bool QMenu_SuperFocusNextPrevChild(QMenu* self, bool next) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        return vqmenu->QMenu::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QMenu::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusNextPrevChild(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_focusnextprevchild_callback = reinterpret_cast<VirtualQMenu::QMenu_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QMenu_SuperInitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        vqmenu->QMenu::initStyleOption(option, action);
    } else
        qFatal("Error: Protected virtual method QMenu::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInitStyleOption(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_initstyleoption_callback = reinterpret_cast<VirtualQMenu::QMenu_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QMenu_DevType(const QMenu* self) {
    return self->devType();
}

// Base class handler implementation
int QMenu_SuperDevType(const QMenu* self) {
    return self->QMenu::devType();
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDevType(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_devtype_callback = reinterpret_cast<VirtualQMenu::QMenu_DevType_Callback>(slot);
}

// Derived class handler implementation
void QMenu_SetVisible(QMenu* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QMenu_SuperSetVisible(QMenu* self, bool visible) {
    self->QMenu::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSetVisible(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_setvisible_callback = reinterpret_cast<VirtualQMenu::QMenu_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QMenu_MinimumSizeHint(const QMenu* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QMenu_SuperMinimumSizeHint(const QMenu* self) {
    return new QSize(self->QMenu::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMinimumSizeHint(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_minimumsizehint_callback = reinterpret_cast<VirtualQMenu::QMenu_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QMenu_HeightForWidth(const QMenu* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QMenu_SuperHeightForWidth(const QMenu* self, int param1) {
    return self->QMenu::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHeightForWidth(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_heightforwidth_callback = reinterpret_cast<VirtualQMenu::QMenu_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QMenu_HasHeightForWidth(const QMenu* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QMenu_SuperHasHeightForWidth(const QMenu* self) {
    return self->QMenu::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHasHeightForWidth(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_hasheightforwidth_callback = reinterpret_cast<VirtualQMenu::QMenu_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QMenu_PaintEngine(const QMenu* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QMenu_SuperPaintEngine(const QMenu* self) {
    return self->QMenu::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnPaintEngine(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_paintengine_callback = reinterpret_cast<VirtualQMenu::QMenu_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QMenu_MouseDoubleClickEvent(QMenu* self, QMouseEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperMouseDoubleClickEvent(QMenu* self, QMouseEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseDoubleClickEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_mousedoubleclickevent_callback = reinterpret_cast<VirtualQMenu::QMenu_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_KeyReleaseEvent(QMenu* self, QKeyEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperKeyReleaseEvent(QMenu* self, QKeyEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnKeyReleaseEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_keyreleaseevent_callback = reinterpret_cast<VirtualQMenu::QMenu_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_FocusInEvent(QMenu* self, QFocusEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperFocusInEvent(QMenu* self, QFocusEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusInEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_focusinevent_callback = reinterpret_cast<VirtualQMenu::QMenu_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_FocusOutEvent(QMenu* self, QFocusEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperFocusOutEvent(QMenu* self, QFocusEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusOutEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_focusoutevent_callback = reinterpret_cast<VirtualQMenu::QMenu_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_MoveEvent(QMenu* self, QMoveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperMoveEvent(QMenu* self, QMoveEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMoveEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_moveevent_callback = reinterpret_cast<VirtualQMenu::QMenu_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_ResizeEvent(QMenu* self, QResizeEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperResizeEvent(QMenu* self, QResizeEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnResizeEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_resizeevent_callback = reinterpret_cast<VirtualQMenu::QMenu_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_CloseEvent(QMenu* self, QCloseEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperCloseEvent(QMenu* self, QCloseEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnCloseEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_closeevent_callback = reinterpret_cast<VirtualQMenu::QMenu_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_ContextMenuEvent(QMenu* self, QContextMenuEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperContextMenuEvent(QMenu* self, QContextMenuEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnContextMenuEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_contextmenuevent_callback = reinterpret_cast<VirtualQMenu::QMenu_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_TabletEvent(QMenu* self, QTabletEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperTabletEvent(QMenu* self, QTabletEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnTabletEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_tabletevent_callback = reinterpret_cast<VirtualQMenu::QMenu_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_DragEnterEvent(QMenu* self, QDragEnterEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperDragEnterEvent(QMenu* self, QDragEnterEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDragEnterEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_dragenterevent_callback = reinterpret_cast<VirtualQMenu::QMenu_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_DragMoveEvent(QMenu* self, QDragMoveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperDragMoveEvent(QMenu* self, QDragMoveEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDragMoveEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_dragmoveevent_callback = reinterpret_cast<VirtualQMenu::QMenu_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_DragLeaveEvent(QMenu* self, QDragLeaveEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperDragLeaveEvent(QMenu* self, QDragLeaveEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDragLeaveEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_dragleaveevent_callback = reinterpret_cast<VirtualQMenu::QMenu_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_DropEvent(QMenu* self, QDropEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperDropEvent(QMenu* self, QDropEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDropEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_dropevent_callback = reinterpret_cast<VirtualQMenu::QMenu_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_ShowEvent(QMenu* self, QShowEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperShowEvent(QMenu* self, QShowEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnShowEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_showevent_callback = reinterpret_cast<VirtualQMenu::QMenu_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMenu_NativeEvent(QMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        return vqmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QMenu::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMenu_SuperNativeEvent(QMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        return vqmenu->QMenu::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QMenu::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnNativeEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_nativeevent_callback = reinterpret_cast<VirtualQMenu::QMenu_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QMenu_Metric(const QMenu* self, int param1) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu) {
        return vqmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QMenu::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QMenu_SuperMetric(const QMenu* self, int param1) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->QMenu::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QMenu::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMetric(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_metric_callback = reinterpret_cast<VirtualQMenu::QMenu_Metric_Callback>(slot);
}

// Derived class handler implementation
void QMenu_InitPainter(const QMenu* self, QPainter* painter) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu) {
        vqmenu->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QMenu::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperInitPainter(const QMenu* self, QPainter* painter) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        vqmenu->QMenu::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QMenu::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInitPainter(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_initpainter_callback = reinterpret_cast<VirtualQMenu::QMenu_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QMenu_Redirected(const QMenu* self, QPoint* offset) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu) {
        return vqmenu->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QMenu::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QMenu_SuperRedirected(const QMenu* self, QPoint* offset) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->QMenu::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QMenu::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnRedirected(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_redirected_callback = reinterpret_cast<VirtualQMenu::QMenu_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QMenu_SharedPainter(const QMenu* self) {
    auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self));
    if (vqmenu) {
        return vqmenu->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QMenu::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QMenu_SuperSharedPainter(const QMenu* self) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->QMenu::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QMenu::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSharedPainter(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_sharedpainter_callback = reinterpret_cast<VirtualQMenu::QMenu_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QMenu_InputMethodEvent(QMenu* self, QInputMethodEvent* param1) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMenu::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperInputMethodEvent(QMenu* self, QInputMethodEvent* param1) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenu::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInputMethodEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_inputmethodevent_callback = reinterpret_cast<VirtualQMenu::QMenu_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QMenu_InputMethodQuery(const QMenu* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QMenu_SuperInputMethodQuery(const QMenu* self, int param1) {
    return new QVariant(self->QMenu::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInputMethodQuery(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self)))
        vqmenu->qmenu_inputmethodquery_callback = reinterpret_cast<VirtualQMenu::QMenu_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QMenu_EventFilter(QMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMenu_SuperEventFilter(QMenu* self, QObject* watched, QEvent* event) {
    return self->QMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEventFilter(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_eventfilter_callback = reinterpret_cast<VirtualQMenu::QMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMenu_ChildEvent(QMenu* self, QChildEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperChildEvent(QMenu* self, QChildEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnChildEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_childevent_callback = reinterpret_cast<VirtualQMenu::QMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_CustomEvent(QMenu* self, QEvent* event) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperCustomEvent(QMenu* self, QEvent* event) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnCustomEvent(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_customevent_callback = reinterpret_cast<VirtualQMenu::QMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenu_ConnectNotify(QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperConnectNotify(QMenu* self, const QMetaMethod* signal) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnConnectNotify(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_connectnotify_callback = reinterpret_cast<VirtualQMenu::QMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMenu_DisconnectNotify(QMenu* self, const QMetaMethod* signal) {
    auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
    if (vqmenu) {
        vqmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenu_SuperDisconnectNotify(QMenu* self, const QMetaMethod* signal) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->QMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnDisconnectNotify(QMenu* self, intptr_t slot) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self))
        vqmenu->qmenu_disconnectnotify_callback = reinterpret_cast<VirtualQMenu::QMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QMenu_ColumnCount(const QMenu* self) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->VirtualQMenu::columnCount();
    } else
        qFatal("Error: Protected method QMenu::columnCount called without a directly constructed type");
}

// Derived class protected handler implementation
void QMenu_UpdateMicroFocus(QMenu* self) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->VirtualQMenu::updateMicroFocus();
    } else
        qFatal("Error: Protected method QMenu::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QMenu_Create(QMenu* self) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->VirtualQMenu::create();
    } else
        qFatal("Error: Protected method QMenu::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QMenu_Destroy(QMenu* self) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        vqmenu->VirtualQMenu::destroy();
    } else
        qFatal("Error: Protected method QMenu::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMenu_FocusNextChild(QMenu* self) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        return vqmenu->VirtualQMenu::focusNextChild();
    } else
        qFatal("Error: Protected method QMenu::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMenu_FocusPreviousChild(QMenu* self) {
    if (auto* vqmenu = dynamic_cast<VirtualQMenu*>(self)) {
        return vqmenu->VirtualQMenu::focusPreviousChild();
    } else
        qFatal("Error: Protected method QMenu::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QMenu_Sender(const QMenu* self) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->VirtualQMenu::sender();
    } else
        qFatal("Error: Protected method QMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMenu_SenderSignalIndex(const QMenu* self) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->VirtualQMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMenu_Receivers(const QMenu* self, const char* signal) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->VirtualQMenu::receivers(signal);
    } else
        qFatal("Error: Protected method QMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMenu_IsSignalConnected(const QMenu* self, const QMetaMethod* signal) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->VirtualQMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMenu::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QMenu_GetDecodedMetricF(const QMenu* self, int metricA, int metricB) {
    if (auto* vqmenu = const_cast<VirtualQMenu*>(dynamic_cast<const VirtualQMenu*>(self))) {
        return vqmenu->VirtualQMenu::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QMenu::getDecodedMetricF called without a directly constructed type");
}

void QMenu_Delete(QMenu* self) {
    delete self;
}
