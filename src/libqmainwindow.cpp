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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMainWindow_Tr(const char* s) {
    auto _ret = QMainWindow::tr(s);
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
    QDockWidget** _arr = static_cast<QDockWidget**>(malloc(sizeof(QDockWidget*) * (_ret.size())));
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QMainWindow_RestoreState(QMainWindow* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self) {
    return self->createPopupMenu();
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
    QMainWindow::connect(self,
                         static_cast<void (QMainWindow::*)(const QSize&)>(&QMainWindow::iconSizeChanged),
                         [self, slotFunc](const QSize& iconSize) {
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
    QMainWindow::connect(self,
                         static_cast<void (QMainWindow::*)(Qt::ToolButtonStyle)>(&QMainWindow::toolButtonStyleChanged),
                         [self, slotFunc](Qt::ToolButtonStyle toolButtonStyle) {
                             int sigval1 = static_cast<int>(toolButtonStyle);
                             slotFunc(self, sigval1);
                         });
}

void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget) {
    self->tabifiedDockWidgetActivated(dockWidget);
}

void QMainWindow_Connect_TabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, QDockWidget*) = reinterpret_cast<void (*)(QMainWindow*, QDockWidget*)>(slot);
    QMainWindow::connect(self,
                         static_cast<void (QMainWindow::*)(QDockWidget*)>(&QMainWindow::tabifiedDockWidgetActivated),
                         [self, slotFunc](QDockWidget* dockWidget) {
                             QDockWidget* sigval1 = dockWidget;
                             slotFunc(self, sigval1);
                         });
}

void QMainWindow_ContextMenuEvent(QMainWindow* self, QContextMenuEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->contextMenuEvent(event);
    }
}

bool QMainWindow_Event(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        return vqmainwindow->event(event);
    }
    qFatal("Error: Protected method QMainWindow::event called without a directly constructed type");
}

libqt_string QMainWindow_Tr2(const char* s, const char* c) {
    auto _ret = QMainWindow::tr(s, c);
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
    auto _ret = QMainWindow::tr(s, c, static_cast<int>(n));
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QMainWindow_RestoreState2(QMainWindow* self, const libqt_string state, int version) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray, static_cast<int>(version));
}

// Base class handler implementation
QMetaObject* QMainWindow_SuperMetaObject(const QMainWindow* self) {
    return (QMetaObject*)self->QMainWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMetaObject(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_metaobject_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMainWindow_SuperMetacast(QMainWindow* self, const char* param1) {
    return self->QMainWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMetacast(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_metacast_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMainWindow_SuperMetacall(QMainWindow* self, int param1, int param2, void** param3) {
    return self->QMainWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMetacall(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_metacall_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
QMenu* QMainWindow_SuperCreatePopupMenu(QMainWindow* self) {
    return self->QMainWindow::createPopupMenu();
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCreatePopupMenu(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_createpopupmenu_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_CreatePopupMenu_Callback>(slot);
}

// Base class handler implementation
void QMainWindow_SuperContextMenuEvent(QMainWindow* self, QContextMenuEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnContextMenuEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_contextmenuevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
bool QMainWindow_SuperEvent(QMainWindow* self, QEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        return vqmainwindow->QMainWindow::event(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_event_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_Event_Callback>(slot);
}

// Derived class handler implementation
int QMainWindow_DevType(const QMainWindow* self) {
    return self->devType();
}

// Base class handler implementation
int QMainWindow_SuperDevType(const QMainWindow* self) {
    return self->QMainWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDevType(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_devtype_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_SetVisible(QMainWindow* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QMainWindow_SuperSetVisible(QMainWindow* self, bool visible) {
    self->QMainWindow::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSetVisible(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_setvisible_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QMainWindow_SizeHint(const QMainWindow* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QMainWindow_SuperSizeHint(const QMainWindow* self) {
    return new QSize(self->QMainWindow::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSizeHint(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_sizehint_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QMainWindow_MinimumSizeHint(const QMainWindow* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QMainWindow_SuperMinimumSizeHint(const QMainWindow* self) {
    return new QSize(self->QMainWindow::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMinimumSizeHint(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_minimumsizehint_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QMainWindow_HeightForWidth(const QMainWindow* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QMainWindow_SuperHeightForWidth(const QMainWindow* self, int param1) {
    return self->QMainWindow::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnHeightForWidth(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_heightforwidth_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QMainWindow_HasHeightForWidth(const QMainWindow* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QMainWindow_SuperHasHeightForWidth(const QMainWindow* self) {
    return self->QMainWindow::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnHasHeightForWidth(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_hasheightforwidth_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QMainWindow_PaintEngine(const QMainWindow* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QMainWindow_SuperPaintEngine(const QMainWindow* self) {
    return self->QMainWindow::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnPaintEngine(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_paintengine_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_MousePressEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperMousePressEvent(QMainWindow* self, QMouseEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMousePressEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_mousepressevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_MouseReleaseEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperMouseReleaseEvent(QMainWindow* self, QMouseEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMouseReleaseEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_mousereleaseevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_MouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperMouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMouseDoubleClickEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_MouseMoveEvent(QMainWindow* self, QMouseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperMouseMoveEvent(QMainWindow* self, QMouseEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMouseMoveEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_mousemoveevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_WheelEvent(QMainWindow* self, QWheelEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperWheelEvent(QMainWindow* self, QWheelEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnWheelEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_wheelevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_KeyPressEvent(QMainWindow* self, QKeyEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperKeyPressEvent(QMainWindow* self, QKeyEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnKeyPressEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_keypressevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_KeyReleaseEvent(QMainWindow* self, QKeyEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperKeyReleaseEvent(QMainWindow* self, QKeyEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnKeyReleaseEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_keyreleaseevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_FocusInEvent(QMainWindow* self, QFocusEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperFocusInEvent(QMainWindow* self, QFocusEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusInEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_focusinevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_FocusOutEvent(QMainWindow* self, QFocusEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperFocusOutEvent(QMainWindow* self, QFocusEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusOutEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_focusoutevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_EnterEvent(QMainWindow* self, QEnterEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperEnterEvent(QMainWindow* self, QEnterEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnEnterEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_enterevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_LeaveEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperLeaveEvent(QMainWindow* self, QEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnLeaveEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_leaveevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_PaintEvent(QMainWindow* self, QPaintEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperPaintEvent(QMainWindow* self, QPaintEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnPaintEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_paintevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_MoveEvent(QMainWindow* self, QMoveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperMoveEvent(QMainWindow* self, QMoveEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMoveEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_moveevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_ResizeEvent(QMainWindow* self, QResizeEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperResizeEvent(QMainWindow* self, QResizeEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnResizeEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_resizeevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_CloseEvent(QMainWindow* self, QCloseEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperCloseEvent(QMainWindow* self, QCloseEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCloseEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_closeevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_TabletEvent(QMainWindow* self, QTabletEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperTabletEvent(QMainWindow* self, QTabletEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnTabletEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_tabletevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_ActionEvent(QMainWindow* self, QActionEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperActionEvent(QMainWindow* self, QActionEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnActionEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_actionevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_DragEnterEvent(QMainWindow* self, QDragEnterEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperDragEnterEvent(QMainWindow* self, QDragEnterEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDragEnterEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_dragenterevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_DragMoveEvent(QMainWindow* self, QDragMoveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperDragMoveEvent(QMainWindow* self, QDragMoveEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDragMoveEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_dragmoveevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_DragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperDragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDragLeaveEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_dragleaveevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_DropEvent(QMainWindow* self, QDropEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperDropEvent(QMainWindow* self, QDropEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDropEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_dropevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_ShowEvent(QMainWindow* self, QShowEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperShowEvent(QMainWindow* self, QShowEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnShowEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_showevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_HideEvent(QMainWindow* self, QHideEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperHideEvent(QMainWindow* self, QHideEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnHideEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_hideevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMainWindow_NativeEvent(QMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        return vqmainwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QMainWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMainWindow_SuperNativeEvent(QMainWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        return vqmainwindow->QMainWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QMainWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnNativeEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_nativeevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_ChangeEvent(QMainWindow* self, QEvent* param1) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperChangeEvent(QMainWindow* self, QEvent* param1) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMainWindow::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnChangeEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_changeevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QMainWindow_Metric(const QMainWindow* self, int param1) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow) {
        return vqmainwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QMainWindow::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QMainWindow_SuperMetric(const QMainWindow* self, int param1) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->QMainWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QMainWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnMetric(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_metric_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_Metric_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_InitPainter(const QMainWindow* self, QPainter* painter) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow) {
        vqmainwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperInitPainter(const QMainWindow* self, QPainter* painter) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        vqmainwindow->QMainWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QMainWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnInitPainter(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_initpainter_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QMainWindow_Redirected(const QMainWindow* self, QPoint* offset) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow) {
        return vqmainwindow->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QMainWindow_SuperRedirected(const QMainWindow* self, QPoint* offset) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->QMainWindow::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QMainWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnRedirected(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_redirected_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QMainWindow_SharedPainter(const QMainWindow* self) {
    auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self));
    if (vqmainwindow) {
        return vqmainwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QMainWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QMainWindow_SuperSharedPainter(const QMainWindow* self) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->QMainWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QMainWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnSharedPainter(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_sharedpainter_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_InputMethodEvent(QMainWindow* self, QInputMethodEvent* param1) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperInputMethodEvent(QMainWindow* self, QInputMethodEvent* param1) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMainWindow::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnInputMethodEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_inputmethodevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QMainWindow_InputMethodQuery(const QMainWindow* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QMainWindow_SuperInputMethodQuery(const QMainWindow* self, int param1) {
    return new QVariant(self->QMainWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnInputMethodQuery(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self)))
        vqmainwindow->qmainwindow_inputmethodquery_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QMainWindow_FocusNextPrevChild(QMainWindow* self, bool next) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        return vqmainwindow->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMainWindow_SuperFocusNextPrevChild(QMainWindow* self, bool next) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        return vqmainwindow->QMainWindow::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QMainWindow::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnFocusNextPrevChild(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_focusnextprevchild_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QMainWindow_EventFilter(QMainWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMainWindow_SuperEventFilter(QMainWindow* self, QObject* watched, QEvent* event) {
    return self->QMainWindow::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnEventFilter(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_eventfilter_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_TimerEvent(QMainWindow* self, QTimerEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperTimerEvent(QMainWindow* self, QTimerEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnTimerEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_timerevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_ChildEvent(QMainWindow* self, QChildEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperChildEvent(QMainWindow* self, QChildEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnChildEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_childevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_CustomEvent(QMainWindow* self, QEvent* event) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperCustomEvent(QMainWindow* self, QEvent* event) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMainWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCustomEvent(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_customevent_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_ConnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperConnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMainWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnConnectNotify(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_connectnotify_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMainWindow_DisconnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
    if (vqmainwindow) {
        vqmainwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMainWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMainWindow_SuperDisconnectNotify(QMainWindow* self, const QMetaMethod* signal) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->QMainWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMainWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnDisconnectNotify(QMainWindow* self, intptr_t slot) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self))
        vqmainwindow->qmainwindow_disconnectnotify_callback = reinterpret_cast<VirtualQMainWindow::QMainWindow_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QMainWindow_UpdateMicroFocus(QMainWindow* self) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->VirtualQMainWindow::updateMicroFocus();
    } else
        qFatal("Error: Protected method QMainWindow::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QMainWindow_Create(QMainWindow* self) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->VirtualQMainWindow::create();
    } else
        qFatal("Error: Protected method QMainWindow::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QMainWindow_Destroy(QMainWindow* self) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        vqmainwindow->VirtualQMainWindow::destroy();
    } else
        qFatal("Error: Protected method QMainWindow::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMainWindow_FocusNextChild(QMainWindow* self) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        return vqmainwindow->VirtualQMainWindow::focusNextChild();
    } else
        qFatal("Error: Protected method QMainWindow::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMainWindow_FocusPreviousChild(QMainWindow* self) {
    if (auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self)) {
        return vqmainwindow->VirtualQMainWindow::focusPreviousChild();
    } else
        qFatal("Error: Protected method QMainWindow::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QMainWindow_Sender(const QMainWindow* self) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->VirtualQMainWindow::sender();
    } else
        qFatal("Error: Protected method QMainWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMainWindow_SenderSignalIndex(const QMainWindow* self) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->VirtualQMainWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMainWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMainWindow_Receivers(const QMainWindow* self, const char* signal) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->VirtualQMainWindow::receivers(signal);
    } else
        qFatal("Error: Protected method QMainWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMainWindow_IsSignalConnected(const QMainWindow* self, const QMetaMethod* signal) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->VirtualQMainWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMainWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QMainWindow_GetDecodedMetricF(const QMainWindow* self, int metricA, int metricB) {
    if (auto* vqmainwindow = const_cast<VirtualQMainWindow*>(dynamic_cast<const VirtualQMainWindow*>(self))) {
        return vqmainwindow->VirtualQMainWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QMainWindow::getDecodedMetricF called without a directly constructed type");
}

void QMainWindow_Delete(QMainWindow* self) {
    delete self;
}
