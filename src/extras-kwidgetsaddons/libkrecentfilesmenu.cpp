#include <KRecentFilesMenu>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <krecentfilesmenu.h>
#include "libkrecentfilesmenu.h"
#include "libkrecentfilesmenu.hxx"

KRecentFilesMenu* KRecentFilesMenu_new(QWidget* parent) {
    return new VirtualKRecentFilesMenu(parent);
}

KRecentFilesMenu* KRecentFilesMenu_new2(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKRecentFilesMenu(title_QString);
}

KRecentFilesMenu* KRecentFilesMenu_new3() {
    return new VirtualKRecentFilesMenu();
}

KRecentFilesMenu* KRecentFilesMenu_new4(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKRecentFilesMenu(title_QString, parent);
}

QMetaObject* KRecentFilesMenu_MetaObject(const KRecentFilesMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRecentFilesMenu_Metacast(KRecentFilesMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRecentFilesMenu_Metacall(KRecentFilesMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRecentFilesMenu_Tr(const char* s) {
    auto _ret = KRecentFilesMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRecentFilesMenu_Group(const KRecentFilesMenu* self) {
    auto _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRecentFilesMenu_SetGroup(KRecentFilesMenu* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setGroup(group_QString);
}

void KRecentFilesMenu_AddUrl(KRecentFilesMenu* self, const QUrl* url) {
    self->addUrl(*url);
}

void KRecentFilesMenu_RemoveUrl(KRecentFilesMenu* self, const QUrl* url) {
    self->removeUrl(*url);
}

int KRecentFilesMenu_MaximumItems(const KRecentFilesMenu* self) {
    return self->maximumItems();
}

void KRecentFilesMenu_SetMaximumItems(KRecentFilesMenu* self, size_t maximumItems) {
    self->setMaximumItems(static_cast<size_t>(maximumItems));
}

libqt_list /* of QUrl* */ KRecentFilesMenu_RecentFiles(const KRecentFilesMenu* self) {
    QList<QUrl> _ret = self->recentFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KRecentFilesMenu_ClearRecentFiles(KRecentFilesMenu* self) {
    self->clearRecentFiles();
}

void KRecentFilesMenu_UrlTriggered(KRecentFilesMenu* self, const QUrl* url) {
    self->urlTriggered(*url);
}

void KRecentFilesMenu_Connect_UrlTriggered(KRecentFilesMenu* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesMenu*, QUrl*) = reinterpret_cast<void (*)(KRecentFilesMenu*, QUrl*)>(slot);
    KRecentFilesMenu::connect(self,
                              static_cast<void (KRecentFilesMenu::*)(const QUrl&)>(&KRecentFilesMenu::urlTriggered),
                              [self, slotFunc](const QUrl& url) {
                                  const QUrl& url_ret = url;
                                  // Cast returned reference into pointer
                                  QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                  slotFunc(self, sigval1);
                              });
}

void KRecentFilesMenu_RecentFilesChanged(KRecentFilesMenu* self) {
    self->recentFilesChanged();
}

void KRecentFilesMenu_Connect_RecentFilesChanged(KRecentFilesMenu* self, intptr_t slot) {
    void (*slotFunc)(KRecentFilesMenu*) = reinterpret_cast<void (*)(KRecentFilesMenu*)>(slot);
    KRecentFilesMenu::connect(self,
                              static_cast<void (KRecentFilesMenu::*)()>(&KRecentFilesMenu::recentFilesChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string KRecentFilesMenu_Tr2(const char* s, const char* c) {
    auto _ret = KRecentFilesMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRecentFilesMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KRecentFilesMenu::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRecentFilesMenu_AddUrl2(KRecentFilesMenu* self, const QUrl* url, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addUrl(*url, name_QString);
}

// Base class handler implementation
QMetaObject* KRecentFilesMenu_SuperMetaObject(const KRecentFilesMenu* self) {
    return (QMetaObject*)self->KRecentFilesMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMetaObject(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_metaobject_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRecentFilesMenu_SuperMetacast(KRecentFilesMenu* self, const char* param1) {
    return self->KRecentFilesMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMetacast(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_metacast_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRecentFilesMenu_SuperMetacall(KRecentFilesMenu* self, int param1, int param2, void** param3) {
    return self->KRecentFilesMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMetacall(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_metacall_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* KRecentFilesMenu_SizeHint(const KRecentFilesMenu* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KRecentFilesMenu_SuperSizeHint(const KRecentFilesMenu* self) {
    return new QSize(self->KRecentFilesMenu::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSizeHint(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_sizehint_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ChangeEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperChangeEvent(KRecentFilesMenu* self, QEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnChangeEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_changeevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_KeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperKeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnKeyPressEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_keypressevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_MouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperMouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMouseReleaseEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_mousereleaseevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_MousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperMousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMousePressEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_mousepressevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_MouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperMouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMouseMoveEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_mousemoveevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_WheelEvent(KRecentFilesMenu* self, QWheelEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperWheelEvent(KRecentFilesMenu* self, QWheelEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnWheelEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_wheelevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_EnterEvent(KRecentFilesMenu* self, QEnterEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->enterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperEnterEvent(KRecentFilesMenu* self, QEnterEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnEnterEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_enterevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_LeaveEvent(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->leaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperLeaveEvent(KRecentFilesMenu* self, QEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnLeaveEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_leaveevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_HideEvent(KRecentFilesMenu* self, QHideEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperHideEvent(KRecentFilesMenu* self, QHideEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnHideEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_hideevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_PaintEvent(KRecentFilesMenu* self, QPaintEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperPaintEvent(KRecentFilesMenu* self, QPaintEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnPaintEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_paintevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ActionEvent(KRecentFilesMenu* self, QActionEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->actionEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperActionEvent(KRecentFilesMenu* self, QActionEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnActionEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_actionevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_TimerEvent(KRecentFilesMenu* self, QTimerEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperTimerEvent(KRecentFilesMenu* self, QTimerEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnTimerEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_timerevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesMenu_Event(KRecentFilesMenu* self, QEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        return vkrecentfilesmenu->event(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRecentFilesMenu_SuperEvent(KRecentFilesMenu* self, QEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        return vkrecentfilesmenu->KRecentFilesMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_event_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesMenu_FocusNextPrevChild(KRecentFilesMenu* self, bool next) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        return vkrecentfilesmenu->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRecentFilesMenu_SuperFocusNextPrevChild(KRecentFilesMenu* self, bool next) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        return vkrecentfilesmenu->KRecentFilesMenu::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusNextPrevChild(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_focusnextprevchild_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_InitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->initStyleOption(option, action);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperInitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        vkrecentfilesmenu->KRecentFilesMenu::initStyleOption(option, action);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInitStyleOption(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_initstyleoption_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KRecentFilesMenu_DevType(const KRecentFilesMenu* self) {
    return self->devType();
}

// Base class handler implementation
int KRecentFilesMenu_SuperDevType(const KRecentFilesMenu* self) {
    return self->KRecentFilesMenu::devType();
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDevType(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_devtype_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DevType_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_SetVisible(KRecentFilesMenu* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KRecentFilesMenu_SuperSetVisible(KRecentFilesMenu* self, bool visible) {
    self->KRecentFilesMenu::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSetVisible(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_setvisible_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KRecentFilesMenu_MinimumSizeHint(const KRecentFilesMenu* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KRecentFilesMenu_SuperMinimumSizeHint(const KRecentFilesMenu* self) {
    return new QSize(self->KRecentFilesMenu::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMinimumSizeHint(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_minimumsizehint_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KRecentFilesMenu_HeightForWidth(const KRecentFilesMenu* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KRecentFilesMenu_SuperHeightForWidth(const KRecentFilesMenu* self, int param1) {
    return self->KRecentFilesMenu::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnHeightForWidth(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_heightforwidth_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesMenu_HasHeightForWidth(const KRecentFilesMenu* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KRecentFilesMenu_SuperHasHeightForWidth(const KRecentFilesMenu* self) {
    return self->KRecentFilesMenu::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnHasHeightForWidth(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_hasheightforwidth_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KRecentFilesMenu_PaintEngine(const KRecentFilesMenu* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KRecentFilesMenu_SuperPaintEngine(const KRecentFilesMenu* self) {
    return self->KRecentFilesMenu::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnPaintEngine(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_paintengine_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_MouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperMouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMouseDoubleClickEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_mousedoubleclickevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_KeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperKeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnKeyReleaseEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_keyreleaseevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_FocusInEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperFocusInEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusInEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_focusinevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_FocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperFocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnFocusOutEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_focusoutevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_MoveEvent(KRecentFilesMenu* self, QMoveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperMoveEvent(KRecentFilesMenu* self, QMoveEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMoveEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_moveevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ResizeEvent(KRecentFilesMenu* self, QResizeEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperResizeEvent(KRecentFilesMenu* self, QResizeEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnResizeEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_resizeevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_CloseEvent(KRecentFilesMenu* self, QCloseEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperCloseEvent(KRecentFilesMenu* self, QCloseEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnCloseEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_closeevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnContextMenuEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_contextmenuevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_TabletEvent(KRecentFilesMenu* self, QTabletEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperTabletEvent(KRecentFilesMenu* self, QTabletEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnTabletEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_tabletevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_DragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperDragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDragEnterEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_dragenterevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_DragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperDragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDragMoveEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_dragmoveevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_DragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperDragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDragLeaveEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_dragleaveevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_DropEvent(KRecentFilesMenu* self, QDropEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperDropEvent(KRecentFilesMenu* self, QDropEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDropEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_dropevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ShowEvent(KRecentFilesMenu* self, QShowEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperShowEvent(KRecentFilesMenu* self, QShowEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnShowEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_showevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesMenu_NativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        return vkrecentfilesmenu->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRecentFilesMenu_SuperNativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        return vkrecentfilesmenu->KRecentFilesMenu::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnNativeEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_nativeevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KRecentFilesMenu_Metric(const KRecentFilesMenu* self, int param1) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu) {
        return vkrecentfilesmenu->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KRecentFilesMenu_SuperMetric(const KRecentFilesMenu* self, int param1) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->KRecentFilesMenu::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnMetric(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_metric_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Metric_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_InitPainter(const KRecentFilesMenu* self, QPainter* painter) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperInitPainter(const KRecentFilesMenu* self, QPainter* painter) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        vkrecentfilesmenu->KRecentFilesMenu::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInitPainter(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_initpainter_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KRecentFilesMenu_Redirected(const KRecentFilesMenu* self, QPoint* offset) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu) {
        return vkrecentfilesmenu->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KRecentFilesMenu_SuperRedirected(const KRecentFilesMenu* self, QPoint* offset) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->KRecentFilesMenu::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnRedirected(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_redirected_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KRecentFilesMenu_SharedPainter(const KRecentFilesMenu* self) {
    auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self));
    if (vkrecentfilesmenu) {
        return vkrecentfilesmenu->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KRecentFilesMenu_SuperSharedPainter(const KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->KRecentFilesMenu::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnSharedPainter(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_sharedpainter_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_InputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperInputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInputMethodEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_inputmethodevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRecentFilesMenu_InputMethodQuery(const KRecentFilesMenu* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KRecentFilesMenu_SuperInputMethodQuery(const KRecentFilesMenu* self, int param1) {
    return new QVariant(self->KRecentFilesMenu::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnInputMethodQuery(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self)))
        vkrecentfilesmenu->krecentfilesmenu_inputmethodquery_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KRecentFilesMenu_EventFilter(KRecentFilesMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KRecentFilesMenu_SuperEventFilter(KRecentFilesMenu* self, QObject* watched, QEvent* event) {
    return self->KRecentFilesMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnEventFilter(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_eventfilter_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ChildEvent(KRecentFilesMenu* self, QChildEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperChildEvent(KRecentFilesMenu* self, QChildEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnChildEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_childevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_CustomEvent(KRecentFilesMenu* self, QEvent* event) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperCustomEvent(KRecentFilesMenu* self, QEvent* event) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnCustomEvent(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_customevent_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_ConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnConnectNotify(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_connectnotify_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRecentFilesMenu_DisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self);
    if (vkrecentfilesmenu) {
        vkrecentfilesmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRecentFilesMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRecentFilesMenu_SuperDisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->KRecentFilesMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRecentFilesMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRecentFilesMenu_OnDisconnectNotify(KRecentFilesMenu* self, intptr_t slot) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self))
        vkrecentfilesmenu->krecentfilesmenu_disconnectnotify_callback = reinterpret_cast<VirtualKRecentFilesMenu::KRecentFilesMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int KRecentFilesMenu_ColumnCount(const KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::columnCount();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::columnCount called without a directly constructed type");
}

// Derived class protected handler implementation
void KRecentFilesMenu_UpdateMicroFocus(KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->VirtualKRecentFilesMenu::updateMicroFocus();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KRecentFilesMenu_Create(KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->VirtualKRecentFilesMenu::create();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KRecentFilesMenu_Destroy(KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        vkrecentfilesmenu->VirtualKRecentFilesMenu::destroy();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRecentFilesMenu_FocusNextChild(KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::focusNextChild();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRecentFilesMenu_FocusPreviousChild(KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = dynamic_cast<VirtualKRecentFilesMenu*>(self)) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::focusPreviousChild();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRecentFilesMenu_Sender(const KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::sender();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRecentFilesMenu_SenderSignalIndex(const KRecentFilesMenu* self) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRecentFilesMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRecentFilesMenu_Receivers(const KRecentFilesMenu* self, const char* signal) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KRecentFilesMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRecentFilesMenu_IsSignalConnected(const KRecentFilesMenu* self, const QMetaMethod* signal) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRecentFilesMenu::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KRecentFilesMenu_GetDecodedMetricF(const KRecentFilesMenu* self, int metricA, int metricB) {
    if (auto* vkrecentfilesmenu = const_cast<VirtualKRecentFilesMenu*>(dynamic_cast<const VirtualKRecentFilesMenu*>(self))) {
        return vkrecentfilesmenu->VirtualKRecentFilesMenu::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KRecentFilesMenu::getDecodedMetricF called without a directly constructed type");
}

void KRecentFilesMenu_Delete(KRecentFilesMenu* self) {
    delete self;
}
