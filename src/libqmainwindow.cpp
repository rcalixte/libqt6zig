#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDockWidget>
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
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
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
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmainwindow.h>
#include "libqmainwindow.h"
#include "libqmainwindow.hxx"

QMainWindow* QMainWindow_new(QWidget* parent) {
    return new VirtualQMainWindow(parent);
}

QMainWindow* QMainWindow_new2() {
    return new VirtualQMainWindow();
}

QMainWindow* QMainWindow_new3(QWidget* parent, int flags) {
    return new VirtualQMainWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QMainWindow_MetaObject(const QMainWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMainWindow_Metacast(QMainWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMainWindow_Metacall(QMainWindow* self, int param1, int param2, void** param3) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMainWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMainWindow_OnMetacall(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Metacall_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMainWindow_QBaseMetacall(QMainWindow* self, int param1, int param2, void** param3) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Metacall_IsBase(true);
        return vqmainwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMainWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMainWindow_Tr(const char* s) {
    QString _ret = QMainWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QMainWindow_IconSize(const QMainWindow* self) {
    return new QSize(self->iconSize());
}

void QMainWindow_SetIconSize(QMainWindow* self, const QSize* iconSize) {
    self->setIconSize(*iconSize);
}

int QMainWindow_ToolButtonStyle(const QMainWindow* self) {
    return static_cast<int>(self->toolButtonStyle());
}

void QMainWindow_SetToolButtonStyle(QMainWindow* self, int toolButtonStyle) {
    self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

bool QMainWindow_IsAnimated(const QMainWindow* self) {
    return self->isAnimated();
}

bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self) {
    return self->isDockNestingEnabled();
}

bool QMainWindow_DocumentMode(const QMainWindow* self) {
    return self->documentMode();
}

void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled) {
    self->setDocumentMode(enabled);
}

int QMainWindow_TabShape(const QMainWindow* self) {
    return static_cast<int>(self->tabShape());
}

void QMainWindow_SetTabShape(QMainWindow* self, int tabShape) {
    self->setTabShape(static_cast<QTabWidget::TabShape>(tabShape));
}

int QMainWindow_TabPosition(const QMainWindow* self, int area) {
    return static_cast<int>(self->tabPosition(static_cast<Qt::DockWidgetArea>(area)));
}

void QMainWindow_SetTabPosition(QMainWindow* self, int areas, int tabPosition) {
    self->setTabPosition(static_cast<Qt::DockWidgetAreas>(areas), static_cast<QTabWidget::TabPosition>(tabPosition));
}

void QMainWindow_SetDockOptions(QMainWindow* self, int options) {
    self->setDockOptions(static_cast<QMainWindow::DockOptions>(options));
}

int QMainWindow_DockOptions(const QMainWindow* self) {
    return static_cast<int>(self->dockOptions());
}

bool QMainWindow_IsSeparator(const QMainWindow* self, const QPoint* pos) {
    return self->isSeparator(*pos);
}

QMenuBar* QMainWindow_MenuBar(const QMainWindow* self) {
    return self->menuBar();
}

void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar) {
    self->setMenuBar(menubar);
}

QWidget* QMainWindow_MenuWidget(const QMainWindow* self) {
    return self->menuWidget();
}

void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar) {
    self->setMenuWidget(menubar);
}

QStatusBar* QMainWindow_StatusBar(const QMainWindow* self) {
    return self->statusBar();
}

void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar) {
    self->setStatusBar(statusbar);
}

QWidget* QMainWindow_CentralWidget(const QMainWindow* self) {
    return self->centralWidget();
}

void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget) {
    self->setCentralWidget(widget);
}

QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self) {
    return self->takeCentralWidget();
}

void QMainWindow_SetCorner(QMainWindow* self, int corner, int area) {
    self->setCorner(static_cast<Qt::Corner>(corner), static_cast<Qt::DockWidgetArea>(area));
}

int QMainWindow_Corner(const QMainWindow* self, int corner) {
    return static_cast<int>(self->corner(static_cast<Qt::Corner>(corner)));
}

void QMainWindow_AddToolBarBreak(QMainWindow* self) {
    self->addToolBarBreak();
}

void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before) {
    self->insertToolBarBreak(before);
}

void QMainWindow_AddToolBar(QMainWindow* self, int area, QToolBar* toolbar) {
    self->addToolBar(static_cast<Qt::ToolBarArea>(area), toolbar);
}

void QMainWindow_AddToolBar2(QMainWindow* self, QToolBar* toolbar) {
    self->addToolBar(toolbar);
}

QToolBar* QMainWindow_AddToolBar3(QMainWindow* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addToolBar(title_QString);
}

void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar) {
    self->insertToolBar(before, toolbar);
}

void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar) {
    self->removeToolBar(toolbar);
}

void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before) {
    self->removeToolBarBreak(before);
}

bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self) {
    return self->unifiedTitleAndToolBarOnMac();
}

int QMainWindow_ToolBarArea(const QMainWindow* self, const QToolBar* toolbar) {
    return static_cast<int>(self->toolBarArea(toolbar));
}

bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar) {
    return self->toolBarBreak(toolbar);
}

void QMainWindow_AddDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget) {
    self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget);
}

void QMainWindow_AddDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation) {
    self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation) {
    self->splitDockWidget(after, dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second) {
    self->tabifyDockWidget(first, second);
}

libqt_list /* of QDockWidget* */ QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget) {
    QList<QDockWidget*> _ret = self->tabifiedDockWidgets(dockwidget);
    // Convert QList<> from C++ memory to manually-managed C memory
    QDockWidget** _arr = static_cast<QDockWidget**>(malloc(sizeof(QDockWidget*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
    self->removeDockWidget(dockwidget);
}

bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
    return self->restoreDockWidget(dockwidget);
}

int QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget) {
    return static_cast<int>(self->dockWidgetArea(dockwidget));
}

void QMainWindow_ResizeDocks(QMainWindow* self, const libqt_list /* of QDockWidget* */ docks, const libqt_list /* of int */ sizes, int orientation) {
    QList<QDockWidget*> docks_QList;
    docks_QList.reserve(docks.len);
    QDockWidget** docks_arr = static_cast<QDockWidget**>(docks.data);
    for (size_t i = 0; i < docks.len; ++i) {
        docks_QList.push_back(docks_arr[i]);
    }
    QList<int> sizes_QList;
    sizes_QList.reserve(sizes.len);
    int* sizes_arr = static_cast<int*>(sizes.data);
    for (size_t i = 0; i < sizes.len; ++i) {
        sizes_QList.push_back(static_cast<int>(sizes_arr[i]));
    }
    self->resizeDocks(docks_QList, sizes_QList, static_cast<Qt::Orientation>(orientation));
}

libqt_string QMainWindow_SaveState(const QMainWindow* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QMainWindow_RestoreState(QMainWindow* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return self->createPopupMenu();
    } else {
        return ((VirtualQMainWindow*)self)->createPopupMenu();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMainWindow_OnCreatePopupMenu(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_CreatePopupMenu_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_CreatePopupMenu_Callback>(slot));
    }
}

// Virtual base class handler implementation
QMenu* QMainWindow_QBaseCreatePopupMenu(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_CreatePopupMenu_IsBase(true);
        return vqmainwindow->createPopupMenu();
    } else {
        return ((VirtualQMainWindow*)self)->createPopupMenu();
    }
}

void QMainWindow_SetAnimated(QMainWindow* self, bool enabled) {
    self->setAnimated(enabled);
}

void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled) {
    self->setDockNestingEnabled(enabled);
}

void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set) {
    self->setUnifiedTitleAndToolBarOnMac(set);
}

void QMainWindow_IconSizeChanged(QMainWindow* self, const QSize* iconSize) {
    self->iconSizeChanged(*iconSize);
}

void QMainWindow_Connect_IconSizeChanged(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, QSize*) = reinterpret_cast<void (*)(QMainWindow*, QSize*)>(slot);
    QMainWindow::connect(self, &QMainWindow::iconSizeChanged, [self, slotFunc](const QSize& iconSize) {
        const QSize& iconSize_ret = iconSize;
        // Cast returned reference into pointer
        QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
        slotFunc(self, sigval1);
    });
}

void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, int toolButtonStyle) {
    self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QMainWindow_Connect_ToolButtonStyleChanged(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, int) = reinterpret_cast<void (*)(QMainWindow*, int)>(slot);
    QMainWindow::connect(self, &QMainWindow::toolButtonStyleChanged, [self, slotFunc](Qt::ToolButtonStyle toolButtonStyle) {
        int sigval1 = static_cast<int>(toolButtonStyle);
        slotFunc(self, sigval1);
    });
}

void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget) {
    self->tabifiedDockWidgetActivated(dockWidget);
}

void QMainWindow_Connect_TabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, QDockWidget*) = reinterpret_cast<void (*)(QMainWindow*, QDockWidget*)>(slot);
    QMainWindow::connect(self, &QMainWindow::tabifiedDockWidgetActivated, [self, slotFunc](QDockWidget* dockWidget) {
        QDockWidget* sigval1 = dockWidget;
        slotFunc(self, sigval1);
    });
}

void QMainWindow_ContextMenuEvent(QMainWindow* self, QContextMenuEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->contextMenuEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMainWindow_OnContextMenuEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ContextMenuEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QMainWindow_QBaseContextMenuEvent(QMainWindow* self, QContextMenuEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ContextMenuEvent_IsBase(true);
        vqmainwindow->contextMenuEvent(event);
    }
}

bool QMainWindow_Event(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->event(event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QMainWindow_OnEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Event_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QMainWindow_QBaseEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Event_IsBase(true);
        return vqmainwindow->event(event);
    }
    return {};
}

libqt_string QMainWindow_Tr2(const char* s, const char* c) {
    QString _ret = QMainWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMainWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMainWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMainWindow_AddToolBarBreak1(QMainWindow* self, int area) {
    self->addToolBarBreak(static_cast<Qt::ToolBarArea>(area));
}

libqt_string QMainWindow_SaveState1(const QMainWindow* self, int version) {
    QByteArray _qb = self->saveState(static_cast<int>(version));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QMainWindow_RestoreState2(QMainWindow* self, const libqt_string state, int version) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray, static_cast<int>(version));
}

// Derived class handler implementation
int QMainWindow_DevType(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->devType();
    } else {
        return self->QMainWindow::devType();
    }
}

// Base class handler implementation
int QMainWindow_QBaseDevType(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DevType_IsBase(true);
        return vqmainwindow->devType();
    } else {
        return self->QMainWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDevType(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DevType_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_SetVisible(QMainWindow* self, bool visible) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setVisible(visible);
    } else {
        self->QMainWindow::setVisible(visible);
    }
}

// Base class handler implementation
void QMainWindow_QBaseSetVisible(QMainWindow* self, bool visible) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SetVisible_IsBase(true);
        vqmainwindow->setVisible(visible);
    } else {
        self->QMainWindow::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSetVisible(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SetVisible_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMainWindow_SizeHint(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return new QSize(vqmainwindow->sizeHint());
    } else {
        return new QSize(((VirtualQMainWindow*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QMainWindow_QBaseSizeHint(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SizeHint_IsBase(true);
        return new QSize(vqmainwindow->sizeHint());
    } else {
        return new QSize(((VirtualQMainWindow*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSizeHint(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SizeHint_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMainWindow_MinimumSizeHint(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return new QSize(vqmainwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMainWindow*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMainWindow_QBaseMinimumSizeHint(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MinimumSizeHint_IsBase(true);
        return new QSize(vqmainwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMainWindow*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMinimumSizeHint(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QMainWindow_HeightForWidth(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMainWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMainWindow_QBaseHeightForWidth(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_HeightForWidth_IsBase(true);
        return vqmainwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMainWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnHeightForWidth(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_HeightForWidth_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_HasHeightForWidth(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->hasHeightForWidth();
    } else {
        return self->QMainWindow::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMainWindow_QBaseHasHeightForWidth(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_HasHeightForWidth_IsBase(true);
        return vqmainwindow->hasHeightForWidth();
    } else {
        return self->QMainWindow::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnHasHeightForWidth(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMainWindow_PaintEngine(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->paintEngine();
    } else {
        return self->QMainWindow::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMainWindow_QBasePaintEngine(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_PaintEngine_IsBase(true);
        return vqmainwindow->paintEngine();
    } else {
        return self->QMainWindow::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnPaintEngine(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_PaintEngine_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_MousePressEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->mousePressEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseMousePressEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MousePressEvent_IsBase(true);
        vqmainwindow->mousePressEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMousePressEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_MouseReleaseEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseMouseReleaseEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MouseReleaseEvent_IsBase(true);
        vqmainwindow->mouseReleaseEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMouseReleaseEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_MouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseMouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MouseDoubleClickEvent_IsBase(true);
        vqmainwindow->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMouseDoubleClickEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_MouseMoveEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->mouseMoveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseMouseMoveEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MouseMoveEvent_IsBase(true);
        vqmainwindow->mouseMoveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMouseMoveEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_WheelEvent(QMainWindow* self, QWheelEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->wheelEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseWheelEvent(QMainWindow* self, QWheelEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_WheelEvent_IsBase(true);
        vqmainwindow->wheelEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnWheelEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_WheelEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_KeyPressEvent(QMainWindow* self, QKeyEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->keyPressEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseKeyPressEvent(QMainWindow* self, QKeyEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_KeyPressEvent_IsBase(true);
        vqmainwindow->keyPressEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnKeyPressEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_KeyReleaseEvent(QMainWindow* self, QKeyEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->keyReleaseEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseKeyReleaseEvent(QMainWindow* self, QKeyEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_KeyReleaseEvent_IsBase(true);
        vqmainwindow->keyReleaseEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnKeyReleaseEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_FocusInEvent(QMainWindow* self, QFocusEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->focusInEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseFocusInEvent(QMainWindow* self, QFocusEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusInEvent_IsBase(true);
        vqmainwindow->focusInEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusInEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_FocusOutEvent(QMainWindow* self, QFocusEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->focusOutEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseFocusOutEvent(QMainWindow* self, QFocusEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusOutEvent_IsBase(true);
        vqmainwindow->focusOutEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusOutEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_EnterEvent(QMainWindow* self, QEnterEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->enterEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseEnterEvent(QMainWindow* self, QEnterEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_EnterEvent_IsBase(true);
        vqmainwindow->enterEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnEnterEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_EnterEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_LeaveEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->leaveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseLeaveEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_LeaveEvent_IsBase(true);
        vqmainwindow->leaveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnLeaveEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_LeaveEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_PaintEvent(QMainWindow* self, QPaintEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->paintEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBasePaintEvent(QMainWindow* self, QPaintEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_PaintEvent_IsBase(true);
        vqmainwindow->paintEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnPaintEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_PaintEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_MoveEvent(QMainWindow* self, QMoveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->moveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseMoveEvent(QMainWindow* self, QMoveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MoveEvent_IsBase(true);
        vqmainwindow->moveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMoveEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_MoveEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_ResizeEvent(QMainWindow* self, QResizeEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->resizeEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseResizeEvent(QMainWindow* self, QResizeEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ResizeEvent_IsBase(true);
        vqmainwindow->resizeEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnResizeEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_CloseEvent(QMainWindow* self, QCloseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->closeEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseCloseEvent(QMainWindow* self, QCloseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_CloseEvent_IsBase(true);
        vqmainwindow->closeEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCloseEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_CloseEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_TabletEvent(QMainWindow* self, QTabletEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->tabletEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseTabletEvent(QMainWindow* self, QTabletEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_TabletEvent_IsBase(true);
        vqmainwindow->tabletEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnTabletEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_TabletEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_ActionEvent(QMainWindow* self, QActionEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->actionEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseActionEvent(QMainWindow* self, QActionEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ActionEvent_IsBase(true);
        vqmainwindow->actionEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnActionEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ActionEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_DragEnterEvent(QMainWindow* self, QDragEnterEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->dragEnterEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseDragEnterEvent(QMainWindow* self, QDragEnterEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DragEnterEvent_IsBase(true);
        vqmainwindow->dragEnterEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDragEnterEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DragEnterEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_DragMoveEvent(QMainWindow* self, QDragMoveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->dragMoveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseDragMoveEvent(QMainWindow* self, QDragMoveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DragMoveEvent_IsBase(true);
        vqmainwindow->dragMoveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDragMoveEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DragMoveEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_DragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->dragLeaveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseDragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DragLeaveEvent_IsBase(true);
        vqmainwindow->dragLeaveEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDragLeaveEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_DropEvent(QMainWindow* self, QDropEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->dropEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseDropEvent(QMainWindow* self, QDropEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DropEvent_IsBase(true);
        vqmainwindow->dropEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDropEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DropEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_ShowEvent(QMainWindow* self, QShowEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->showEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseShowEvent(QMainWindow* self, QShowEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ShowEvent_IsBase(true);
        vqmainwindow->showEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnShowEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ShowEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_HideEvent(QMainWindow* self, QHideEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->hideEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseHideEvent(QMainWindow* self, QHideEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_HideEvent_IsBase(true);
        vqmainwindow->hideEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnHideEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_HideEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_NativeEvent(QMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMainWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMainWindow_QBaseNativeEvent(QMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_NativeEvent_IsBase(true);
        return vqmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMainWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnNativeEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_NativeEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_ChangeEvent(QMainWindow* self, QEvent* param1) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->changeEvent(param1);
    } else {
        ((VirtualQMainWindow*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QMainWindow_QBaseChangeEvent(QMainWindow* self, QEvent* param1) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ChangeEvent_IsBase(true);
        vqmainwindow->changeEvent(param1);
    } else {
        ((VirtualQMainWindow*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnChangeEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ChangeEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMainWindow_Metric(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMainWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMainWindow_QBaseMetric(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Metric_IsBase(true);
        return vqmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMainWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMetric(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Metric_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_InitPainter(const QMainWindow* self, QPainter* painter) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->initPainter(painter);
    } else {
        ((VirtualQMainWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QMainWindow_QBaseInitPainter(const QMainWindow* self, QPainter* painter) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_InitPainter_IsBase(true);
        vqmainwindow->initPainter(painter);
    } else {
        ((VirtualQMainWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnInitPainter(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_InitPainter_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMainWindow_Redirected(const QMainWindow* self, QPoint* offset) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->redirected(offset);
    } else {
        return ((VirtualQMainWindow*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMainWindow_QBaseRedirected(const QMainWindow* self, QPoint* offset) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Redirected_IsBase(true);
        return vqmainwindow->redirected(offset);
    } else {
        return ((VirtualQMainWindow*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnRedirected(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Redirected_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMainWindow_SharedPainter(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->sharedPainter();
    } else {
        return ((VirtualQMainWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMainWindow_QBaseSharedPainter(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SharedPainter_IsBase(true);
        return vqmainwindow->sharedPainter();
    } else {
        return ((VirtualQMainWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSharedPainter(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SharedPainter_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_InputMethodEvent(QMainWindow* self, QInputMethodEvent* param1) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->inputMethodEvent(param1);
    } else {
        ((VirtualQMainWindow*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMainWindow_QBaseInputMethodEvent(QMainWindow* self, QInputMethodEvent* param1) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_InputMethodEvent_IsBase(true);
        vqmainwindow->inputMethodEvent(param1);
    } else {
        ((VirtualQMainWindow*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnInputMethodEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_InputMethodEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMainWindow_InputMethodQuery(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return new QVariant(vqmainwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMainWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMainWindow_QBaseInputMethodQuery(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_InputMethodQuery_IsBase(true);
        return new QVariant(vqmainwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMainWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnInputMethodQuery(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_InputMethodQuery_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_FocusNextPrevChild(QMainWindow* self, bool next) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualQMainWindow*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMainWindow_QBaseFocusNextPrevChild(QMainWindow* self, bool next) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusNextPrevChild_IsBase(true);
        return vqmainwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualQMainWindow*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusNextPrevChild(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_EventFilter(QMainWindow* self, QObject* watched, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->eventFilter(watched, event);
    } else {
        return self->QMainWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMainWindow_QBaseEventFilter(QMainWindow* self, QObject* watched, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_EventFilter_IsBase(true);
        return vqmainwindow->eventFilter(watched, event);
    } else {
        return self->QMainWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnEventFilter(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_EventFilter_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_TimerEvent(QMainWindow* self, QTimerEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->timerEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseTimerEvent(QMainWindow* self, QTimerEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_TimerEvent_IsBase(true);
        vqmainwindow->timerEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnTimerEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_TimerEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_ChildEvent(QMainWindow* self, QChildEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->childEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseChildEvent(QMainWindow* self, QChildEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ChildEvent_IsBase(true);
        vqmainwindow->childEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnChildEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ChildEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_CustomEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->customEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMainWindow_QBaseCustomEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_CustomEvent_IsBase(true);
        vqmainwindow->customEvent(event);
    } else {
        ((VirtualQMainWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCustomEvent(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_CustomEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_ConnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->connectNotify(*signal);
    } else {
        ((VirtualQMainWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMainWindow_QBaseConnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ConnectNotify_IsBase(true);
        vqmainwindow->connectNotify(*signal);
    } else {
        ((VirtualQMainWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnConnectNotify(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_DisconnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMainWindow_QBaseDisconnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DisconnectNotify_IsBase(true);
        vqmainwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQMainWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDisconnectNotify(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_UpdateMicroFocus(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->updateMicroFocus();
    } else {
        ((VirtualQMainWindow*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QMainWindow_QBaseUpdateMicroFocus(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_UpdateMicroFocus_IsBase(true);
        vqmainwindow->updateMicroFocus();
    } else {
        ((VirtualQMainWindow*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnUpdateMicroFocus(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_Create(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->create();
    } else {
        ((VirtualQMainWindow*)self)->create();
    }
}

// Base class handler implementation
void QMainWindow_QBaseCreate(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Create_IsBase(true);
        vqmainwindow->create();
    } else {
        ((VirtualQMainWindow*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCreate(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Create_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMainWindow_Destroy(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->destroy();
    } else {
        ((VirtualQMainWindow*)self)->destroy();
    }
}

// Base class handler implementation
void QMainWindow_QBaseDestroy(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Destroy_IsBase(true);
        vqmainwindow->destroy();
    } else {
        ((VirtualQMainWindow*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDestroy(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Destroy_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_FocusNextChild(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->focusNextChild();
    } else {
        return ((VirtualQMainWindow*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QMainWindow_QBaseFocusNextChild(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusNextChild_IsBase(true);
        return vqmainwindow->focusNextChild();
    } else {
        return ((VirtualQMainWindow*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusNextChild(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusNextChild_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_FocusPreviousChild(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->focusPreviousChild();
    } else {
        return ((VirtualQMainWindow*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMainWindow_QBaseFocusPreviousChild(QMainWindow* self) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusPreviousChild_IsBase(true);
        return vqmainwindow->focusPreviousChild();
    } else {
        return ((VirtualQMainWindow*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusPreviousChild(QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMainWindow_Sender(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->sender();
    } else {
        return ((VirtualQMainWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMainWindow_QBaseSender(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Sender_IsBase(true);
        return vqmainwindow->sender();
    } else {
        return ((VirtualQMainWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSender(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Sender_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMainWindow_SenderSignalIndex(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->senderSignalIndex();
    } else {
        return ((VirtualQMainWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMainWindow_QBaseSenderSignalIndex(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SenderSignalIndex_IsBase(true);
        return vqmainwindow->senderSignalIndex();
    } else {
        return ((VirtualQMainWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSenderSignalIndex(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMainWindow_Receivers(const QMainWindow* self, const char* signal) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->receivers(signal);
    } else {
        return ((VirtualQMainWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMainWindow_QBaseReceivers(const QMainWindow* self, const char* signal) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Receivers_IsBase(true);
        return vqmainwindow->receivers(signal);
    } else {
        return ((VirtualQMainWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnReceivers(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_Receivers_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMainWindow_IsSignalConnected(const QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMainWindow_QBaseIsSignalConnected(const QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_IsSignalConnected_IsBase(true);
        return vqmainwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQMainWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnIsSignalConnected(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QMainWindow_GetDecodedMetricF(const QMainWindow* self, int metricA, int metricB) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        return vqmainwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMainWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QMainWindow_QBaseGetDecodedMetricF(const QMainWindow* self, int metricA, int metricB) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_GetDecodedMetricF_IsBase(true);
        return vqmainwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMainWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnGetDecodedMetricF(const QMainWindow* self, intptr_t slot) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
        vqmainwindow->setQMainWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_GetDecodedMetricF_Callback>(slot));
    }
}

void QMainWindow_Delete(QMainWindow* self) {
    delete self;
}
