#include <KConfigGroup>
#include <KMainWindow>
#include <KToolBar>
#include <KXMLGUIClient>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDomElement>
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
#include <QMainWindow>
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
#include <QStyleOptionToolBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ktoolbar.h>
#include "libktoolbar.h"
#include "libktoolbar.hxx"

KToolBar* KToolBar_new(QWidget* parent) {
    return new VirtualKToolBar(parent);
}

KToolBar* KToolBar_new2(const libqt_string objectName, QWidget* parent) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    return new VirtualKToolBar(objectName_QString, parent);
}

KToolBar* KToolBar_new3(const libqt_string objectName, QMainWindow* parentWindow, int area) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    return new VirtualKToolBar(objectName_QString, parentWindow, static_cast<Qt::ToolBarArea>(area));
}

KToolBar* KToolBar_new4(QWidget* parent, bool isMainToolBar) {
    return new VirtualKToolBar(parent, isMainToolBar);
}

KToolBar* KToolBar_new5(QWidget* parent, bool isMainToolBar, bool readConfig) {
    return new VirtualKToolBar(parent, isMainToolBar, readConfig);
}

KToolBar* KToolBar_new6(const libqt_string objectName, QWidget* parent, bool readConfig) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    return new VirtualKToolBar(objectName_QString, parent, readConfig);
}

KToolBar* KToolBar_new7(const libqt_string objectName, QMainWindow* parentWindow, int area, bool newLine) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    return new VirtualKToolBar(objectName_QString, parentWindow, static_cast<Qt::ToolBarArea>(area), newLine);
}

KToolBar* KToolBar_new8(const libqt_string objectName, QMainWindow* parentWindow, int area, bool newLine, bool isMainToolBar) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    return new VirtualKToolBar(objectName_QString, parentWindow, static_cast<Qt::ToolBarArea>(area), newLine, isMainToolBar);
}

KToolBar* KToolBar_new9(const libqt_string objectName, QMainWindow* parentWindow, int area, bool newLine, bool isMainToolBar, bool readConfig) {
    QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
    return new VirtualKToolBar(objectName_QString, parentWindow, static_cast<Qt::ToolBarArea>(area), newLine, isMainToolBar, readConfig);
}

QMetaObject* KToolBar_MetaObject(const KToolBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBar_Metacast(KToolBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBar_Metacall(KToolBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToolBar_Tr(const char* s) {
    auto _ret = KToolBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KMainWindow* KToolBar_MainWindow(const KToolBar* self) {
    return self->mainWindow();
}

void KToolBar_SetIconDimensions(KToolBar* self, int size) {
    self->setIconDimensions(static_cast<int>(size));
}

int KToolBar_IconSizeDefault(const KToolBar* self) {
    return self->iconSizeDefault();
}

void KToolBar_SaveSettings(KToolBar* self, KConfigGroup* cg) {
    self->saveSettings(*cg);
}

void KToolBar_ApplySettings(KToolBar* self, const KConfigGroup* cg) {
    self->applySettings(*cg);
}

void KToolBar_AddXMLGUIClient(KToolBar* self, KXMLGUIClient* client) {
    self->addXMLGUIClient(client);
}

void KToolBar_RemoveXMLGUIClient(KToolBar* self, KXMLGUIClient* client) {
    self->removeXMLGUIClient(client);
}

void KToolBar_LoadState(KToolBar* self, const QDomElement* element) {
    self->loadState(*element);
}

void KToolBar_SaveState(const KToolBar* self, QDomElement* element) {
    self->saveState(*element);
}

bool KToolBar_EventFilter(KToolBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

bool KToolBar_ToolBarsEditable() {
    return KToolBar::toolBarsEditable();
}

void KToolBar_SetToolBarsEditable(bool editable) {
    KToolBar::setToolBarsEditable(editable);
}

bool KToolBar_ToolBarsLocked() {
    return KToolBar::toolBarsLocked();
}

void KToolBar_SetToolBarsLocked(bool locked) {
    KToolBar::setToolBarsLocked(locked);
}

void KToolBar_EmitToolbarStyleChanged() {
    KToolBar::emitToolbarStyleChanged();
}

void KToolBar_SlotMovableChanged(KToolBar* self, bool movable) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->slotMovableChanged(movable);
    }
}

void KToolBar_ContextMenuEvent(KToolBar* self, QContextMenuEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->contextMenuEvent(param1);
    }
}

void KToolBar_ActionEvent(KToolBar* self, QActionEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->actionEvent(param1);
    }
}

void KToolBar_DragEnterEvent(KToolBar* self, QDragEnterEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->dragEnterEvent(param1);
    }
}

void KToolBar_DragMoveEvent(KToolBar* self, QDragMoveEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->dragMoveEvent(param1);
    }
}

void KToolBar_DragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->dragLeaveEvent(param1);
    }
}

void KToolBar_DropEvent(KToolBar* self, QDropEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->dropEvent(param1);
    }
}

void KToolBar_MousePressEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->mousePressEvent(param1);
    }
}

void KToolBar_MouseMoveEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->mouseMoveEvent(param1);
    }
}

void KToolBar_MouseReleaseEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->mouseReleaseEvent(param1);
    }
}

libqt_string KToolBar_Tr2(const char* s, const char* c) {
    auto _ret = KToolBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = KToolBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToolBar_SuperMetaObject(const KToolBar* self) {
    return (QMetaObject*)self->KToolBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMetaObject(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_metaobject_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToolBar_SuperMetacast(KToolBar* self, const char* param1) {
    return self->KToolBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMetacast(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_metacast_callback = reinterpret_cast<VirtualKToolBar::KToolBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToolBar_SuperMetacall(KToolBar* self, int param1, int param2, void** param3) {
    return self->KToolBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMetacall(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_metacall_callback = reinterpret_cast<VirtualKToolBar::KToolBar_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KToolBar_SuperEventFilter(KToolBar* self, QObject* watched, QEvent* event) {
    return self->KToolBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnEventFilter(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_eventfilter_callback = reinterpret_cast<VirtualKToolBar::KToolBar_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperSlotMovableChanged(KToolBar* self, bool movable) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::slotMovableChanged(movable);
    } else
        qFatal("Error: Protected virtual method KToolBar::slotMovableChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSlotMovableChanged(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_slotmovablechanged_callback = reinterpret_cast<VirtualKToolBar::KToolBar_SlotMovableChanged_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperContextMenuEvent(KToolBar* self, QContextMenuEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnContextMenuEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_contextmenuevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperActionEvent(KToolBar* self, QActionEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnActionEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_actionevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ActionEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperDragEnterEvent(KToolBar* self, QDragEnterEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDragEnterEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_dragenterevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperDragMoveEvent(KToolBar* self, QDragMoveEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDragMoveEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_dragmoveevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperDragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDragLeaveEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_dragleaveevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperDropEvent(KToolBar* self, QDropEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDropEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_dropevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_DropEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperMousePressEvent(KToolBar* self, QMouseEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMousePressEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_mousepressevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperMouseMoveEvent(KToolBar* self, QMouseEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMouseMoveEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_mousemoveevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KToolBar_SuperMouseReleaseEvent(KToolBar* self, QMouseEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMouseReleaseEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_mousereleaseevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_ChangeEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperChangeEvent(KToolBar* self, QEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnChangeEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_changeevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_PaintEvent(KToolBar* self, QPaintEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperPaintEvent(KToolBar* self, QPaintEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnPaintEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_paintevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
bool KToolBar_Event(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        return vktoolbar->event(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBar_SuperEvent(KToolBar* self, QEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        return vktoolbar->KToolBar::event(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_event_callback = reinterpret_cast<VirtualKToolBar::KToolBar_Event_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_InitStyleOption(const KToolBar* self, QStyleOptionToolBar* option) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar) {
        vktoolbar->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KToolBar::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperInitStyleOption(const KToolBar* self, QStyleOptionToolBar* option) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        vktoolbar->KToolBar::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KToolBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInitStyleOption(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_initstyleoption_callback = reinterpret_cast<VirtualKToolBar::KToolBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KToolBar_DevType(const KToolBar* self) {
    return self->devType();
}

// Base class handler implementation
int KToolBar_SuperDevType(const KToolBar* self) {
    return self->KToolBar::devType();
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDevType(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_devtype_callback = reinterpret_cast<VirtualKToolBar::KToolBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_SetVisible(KToolBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KToolBar_SuperSetVisible(KToolBar* self, bool visible) {
    self->KToolBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSetVisible(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_setvisible_callback = reinterpret_cast<VirtualKToolBar::KToolBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KToolBar_SizeHint(const KToolBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KToolBar_SuperSizeHint(const KToolBar* self) {
    return new QSize(self->KToolBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSizeHint(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_sizehint_callback = reinterpret_cast<VirtualKToolBar::KToolBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KToolBar_MinimumSizeHint(const KToolBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KToolBar_SuperMinimumSizeHint(const KToolBar* self) {
    return new QSize(self->KToolBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMinimumSizeHint(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_minimumsizehint_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KToolBar_HeightForWidth(const KToolBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KToolBar_SuperHeightForWidth(const KToolBar* self, int param1) {
    return self->KToolBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnHeightForWidth(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_heightforwidth_callback = reinterpret_cast<VirtualKToolBar::KToolBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KToolBar_HasHeightForWidth(const KToolBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KToolBar_SuperHasHeightForWidth(const KToolBar* self) {
    return self->KToolBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnHasHeightForWidth(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_hasheightforwidth_callback = reinterpret_cast<VirtualKToolBar::KToolBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KToolBar_PaintEngine(const KToolBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KToolBar_SuperPaintEngine(const KToolBar* self) {
    return self->KToolBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnPaintEngine(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_paintengine_callback = reinterpret_cast<VirtualKToolBar::KToolBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_MouseDoubleClickEvent(KToolBar* self, QMouseEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperMouseDoubleClickEvent(KToolBar* self, QMouseEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMouseDoubleClickEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_WheelEvent(KToolBar* self, QWheelEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperWheelEvent(KToolBar* self, QWheelEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnWheelEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_wheelevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_KeyPressEvent(KToolBar* self, QKeyEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperKeyPressEvent(KToolBar* self, QKeyEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnKeyPressEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_keypressevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_KeyReleaseEvent(KToolBar* self, QKeyEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperKeyReleaseEvent(KToolBar* self, QKeyEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnKeyReleaseEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_keyreleaseevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_FocusInEvent(KToolBar* self, QFocusEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperFocusInEvent(KToolBar* self, QFocusEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusInEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_focusinevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_FocusOutEvent(KToolBar* self, QFocusEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperFocusOutEvent(KToolBar* self, QFocusEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusOutEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_focusoutevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_EnterEvent(KToolBar* self, QEnterEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperEnterEvent(KToolBar* self, QEnterEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnEnterEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_enterevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_LeaveEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperLeaveEvent(KToolBar* self, QEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnLeaveEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_leaveevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_MoveEvent(KToolBar* self, QMoveEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperMoveEvent(KToolBar* self, QMoveEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMoveEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_moveevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_ResizeEvent(KToolBar* self, QResizeEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperResizeEvent(KToolBar* self, QResizeEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnResizeEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_resizeevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_CloseEvent(KToolBar* self, QCloseEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperCloseEvent(KToolBar* self, QCloseEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnCloseEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_closeevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_TabletEvent(KToolBar* self, QTabletEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperTabletEvent(KToolBar* self, QTabletEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnTabletEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_tabletevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_ShowEvent(KToolBar* self, QShowEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperShowEvent(KToolBar* self, QShowEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnShowEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_showevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_HideEvent(KToolBar* self, QHideEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperHideEvent(KToolBar* self, QHideEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnHideEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_hideevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KToolBar_NativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        return vktoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KToolBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBar_SuperNativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        return vktoolbar->KToolBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KToolBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnNativeEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_nativeevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KToolBar_Metric(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar) {
        return vktoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KToolBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KToolBar_SuperMetric(const KToolBar* self, int param1) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->KToolBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KToolBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMetric(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_metric_callback = reinterpret_cast<VirtualKToolBar::KToolBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_InitPainter(const KToolBar* self, QPainter* painter) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar) {
        vktoolbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KToolBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperInitPainter(const KToolBar* self, QPainter* painter) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        vktoolbar->KToolBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KToolBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInitPainter(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_initpainter_callback = reinterpret_cast<VirtualKToolBar::KToolBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KToolBar_Redirected(const KToolBar* self, QPoint* offset) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar) {
        return vktoolbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KToolBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KToolBar_SuperRedirected(const KToolBar* self, QPoint* offset) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->KToolBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KToolBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnRedirected(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_redirected_callback = reinterpret_cast<VirtualKToolBar::KToolBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KToolBar_SharedPainter(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar) {
        return vktoolbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KToolBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KToolBar_SuperSharedPainter(const KToolBar* self) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->KToolBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KToolBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSharedPainter(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_sharedpainter_callback = reinterpret_cast<VirtualKToolBar::KToolBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_InputMethodEvent(KToolBar* self, QInputMethodEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KToolBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperInputMethodEvent(KToolBar* self, QInputMethodEvent* param1) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KToolBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInputMethodEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_inputmethodevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KToolBar_InputMethodQuery(const KToolBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KToolBar_SuperInputMethodQuery(const KToolBar* self, int param1) {
    return new QVariant(self->KToolBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInputMethodQuery(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self)))
        vktoolbar->ktoolbar_inputmethodquery_callback = reinterpret_cast<VirtualKToolBar::KToolBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KToolBar_FocusNextPrevChild(KToolBar* self, bool next) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        return vktoolbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KToolBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBar_SuperFocusNextPrevChild(KToolBar* self, bool next) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        return vktoolbar->KToolBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KToolBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusNextPrevChild(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_focusnextprevchild_callback = reinterpret_cast<VirtualKToolBar::KToolBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_TimerEvent(KToolBar* self, QTimerEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperTimerEvent(KToolBar* self, QTimerEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnTimerEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_timerevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_ChildEvent(KToolBar* self, QChildEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperChildEvent(KToolBar* self, QChildEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnChildEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_childevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_CustomEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperCustomEvent(KToolBar* self, QEvent* event) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnCustomEvent(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_customevent_callback = reinterpret_cast<VirtualKToolBar::KToolBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_ConnectNotify(KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperConnectNotify(KToolBar* self, const QMetaMethod* signal) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnConnectNotify(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_connectnotify_callback = reinterpret_cast<VirtualKToolBar::KToolBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToolBar_DisconnectNotify(KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar) {
        vktoolbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBar_SuperDisconnectNotify(KToolBar* self, const QMetaMethod* signal) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->KToolBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDisconnectNotify(KToolBar* self, intptr_t slot) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self))
        vktoolbar->ktoolbar_disconnectnotify_callback = reinterpret_cast<VirtualKToolBar::KToolBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KToolBar_UpdateMicroFocus(KToolBar* self) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->VirtualKToolBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method KToolBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KToolBar_Create(KToolBar* self) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->VirtualKToolBar::create();
    } else
        qFatal("Error: Protected method KToolBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KToolBar_Destroy(KToolBar* self) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        vktoolbar->VirtualKToolBar::destroy();
    } else
        qFatal("Error: Protected method KToolBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolBar_FocusNextChild(KToolBar* self) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        return vktoolbar->VirtualKToolBar::focusNextChild();
    } else
        qFatal("Error: Protected method KToolBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolBar_FocusPreviousChild(KToolBar* self) {
    if (auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self)) {
        return vktoolbar->VirtualKToolBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method KToolBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KToolBar_Sender(const KToolBar* self) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->VirtualKToolBar::sender();
    } else
        qFatal("Error: Protected method KToolBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBar_SenderSignalIndex(const KToolBar* self) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->VirtualKToolBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToolBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBar_Receivers(const KToolBar* self, const char* signal) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->VirtualKToolBar::receivers(signal);
    } else
        qFatal("Error: Protected method KToolBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolBar_IsSignalConnected(const KToolBar* self, const QMetaMethod* signal) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->VirtualKToolBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToolBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KToolBar_GetDecodedMetricF(const KToolBar* self, int metricA, int metricB) {
    if (auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self))) {
        return vktoolbar->VirtualKToolBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KToolBar::getDecodedMetricF called without a directly constructed type");
}

void KToolBar_Delete(KToolBar* self) {
    delete self;
}
