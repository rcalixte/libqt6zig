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
#include <QByteArray>
#include <cstring>
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
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToolBar_Tr(const char* s) {
    QString _ret = KToolBar::tr(s);
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
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return self->eventFilter(watched, event);
    } else {
        return ((VirtualKToolBar*)self)->eventFilter(watched, event);
    }
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
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->slotMovableChanged(movable);
    }
}

void KToolBar_ContextMenuEvent(KToolBar* self, QContextMenuEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->contextMenuEvent(param1);
    }
}

void KToolBar_ActionEvent(KToolBar* self, QActionEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->actionEvent(param1);
    }
}

void KToolBar_DragEnterEvent(KToolBar* self, QDragEnterEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->dragEnterEvent(param1);
    }
}

void KToolBar_DragMoveEvent(KToolBar* self, QDragMoveEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->dragMoveEvent(param1);
    }
}

void KToolBar_DragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->dragLeaveEvent(param1);
    }
}

void KToolBar_DropEvent(KToolBar* self, QDropEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->dropEvent(param1);
    }
}

void KToolBar_MousePressEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->mousePressEvent(param1);
    }
}

void KToolBar_MouseMoveEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->mouseMoveEvent(param1);
    }
}

void KToolBar_MouseReleaseEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->mouseReleaseEvent(param1);
    }
}

libqt_string KToolBar_Tr2(const char* s, const char* c) {
    QString _ret = KToolBar::tr(s, c);
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
    QString _ret = KToolBar::tr(s, c, static_cast<int>(n));
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
int KToolBar_QBaseMetacall(KToolBar* self, int param1, int param2, void** param3) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Metacall_IsBase(true);
        return vktoolbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KToolBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMetacall(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Metacall_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KToolBar_QBaseEventFilter(KToolBar* self, QObject* watched, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_EventFilter_IsBase(true);
        return vktoolbar->eventFilter(watched, event);
    } else {
        return self->KToolBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnEventFilter(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_EventFilter_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseSlotMovableChanged(KToolBar* self, bool movable) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SlotMovableChanged_IsBase(true);
        vktoolbar->slotMovableChanged(movable);
    } else {
        ((VirtualKToolBar*)self)->slotMovableChanged(movable);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSlotMovableChanged(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SlotMovableChanged_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_SlotMovableChanged_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseContextMenuEvent(KToolBar* self, QContextMenuEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ContextMenuEvent_IsBase(true);
        vktoolbar->contextMenuEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnContextMenuEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseActionEvent(KToolBar* self, QActionEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ActionEvent_IsBase(true);
        vktoolbar->actionEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnActionEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ActionEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ActionEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseDragEnterEvent(KToolBar* self, QDragEnterEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DragEnterEvent_IsBase(true);
        vktoolbar->dragEnterEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDragEnterEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DragEnterEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_DragEnterEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseDragMoveEvent(KToolBar* self, QDragMoveEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DragMoveEvent_IsBase(true);
        vktoolbar->dragMoveEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDragMoveEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DragMoveEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_DragMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseDragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DragLeaveEvent_IsBase(true);
        vktoolbar->dragLeaveEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDragLeaveEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_DragLeaveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseDropEvent(KToolBar* self, QDropEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DropEvent_IsBase(true);
        vktoolbar->dropEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDropEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DropEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_DropEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseMousePressEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MousePressEvent_IsBase(true);
        vktoolbar->mousePressEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMousePressEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MousePressEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseMouseMoveEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MouseMoveEvent_IsBase(true);
        vktoolbar->mouseMoveEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMouseMoveEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KToolBar_QBaseMouseReleaseEvent(KToolBar* self, QMouseEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MouseReleaseEvent_IsBase(true);
        vktoolbar->mouseReleaseEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMouseReleaseEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_ChangeEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->changeEvent(event);
    } else {
        ((VirtualKToolBar*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseChangeEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ChangeEvent_IsBase(true);
        vktoolbar->changeEvent(event);
    } else {
        ((VirtualKToolBar*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnChangeEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ChangeEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_PaintEvent(KToolBar* self, QPaintEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->paintEvent(event);
    } else {
        ((VirtualKToolBar*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBasePaintEvent(KToolBar* self, QPaintEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_PaintEvent_IsBase(true);
        vktoolbar->paintEvent(event);
    } else {
        ((VirtualKToolBar*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnPaintEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_PaintEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_Event(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->event(event);
    } else {
        return ((VirtualKToolBar*)self)->event(event);
    }
}

// Base class handler implementation
bool KToolBar_QBaseEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Event_IsBase(true);
        return vktoolbar->event(event);
    } else {
        return ((VirtualKToolBar*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Event_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_InitStyleOption(const KToolBar* self, QStyleOptionToolBar* option) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->initStyleOption(option);
    } else {
        ((VirtualKToolBar*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KToolBar_QBaseInitStyleOption(const KToolBar* self, QStyleOptionToolBar* option) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InitStyleOption_IsBase(true);
        vktoolbar->initStyleOption(option);
    } else {
        ((VirtualKToolBar*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInitStyleOption(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InitStyleOption_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBar_DevType(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->devType();
    } else {
        return self->KToolBar::devType();
    }
}

// Base class handler implementation
int KToolBar_QBaseDevType(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DevType_IsBase(true);
        return vktoolbar->devType();
    } else {
        return self->KToolBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDevType(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DevType_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_SetVisible(KToolBar* self, bool visible) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setVisible(visible);
    } else {
        self->KToolBar::setVisible(visible);
    }
}

// Base class handler implementation
void KToolBar_QBaseSetVisible(KToolBar* self, bool visible) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SetVisible_IsBase(true);
        vktoolbar->setVisible(visible);
    } else {
        self->KToolBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSetVisible(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SetVisible_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KToolBar_SizeHint(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return new QSize(vktoolbar->sizeHint());
    } else {
        return new QSize(((VirtualKToolBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KToolBar_QBaseSizeHint(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SizeHint_IsBase(true);
        return new QSize(vktoolbar->sizeHint());
    } else {
        return new QSize(((VirtualKToolBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSizeHint(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SizeHint_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KToolBar_MinimumSizeHint(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return new QSize(vktoolbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKToolBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KToolBar_QBaseMinimumSizeHint(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MinimumSizeHint_IsBase(true);
        return new QSize(vktoolbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKToolBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMinimumSizeHint(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBar_HeightForWidth(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KToolBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KToolBar_QBaseHeightForWidth(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_HeightForWidth_IsBase(true);
        return vktoolbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KToolBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnHeightForWidth(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_HeightForWidth_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_HasHeightForWidth(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->hasHeightForWidth();
    } else {
        return self->KToolBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KToolBar_QBaseHasHeightForWidth(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_HasHeightForWidth_IsBase(true);
        return vktoolbar->hasHeightForWidth();
    } else {
        return self->KToolBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnHasHeightForWidth(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KToolBar_PaintEngine(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->paintEngine();
    } else {
        return self->KToolBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KToolBar_QBasePaintEngine(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_PaintEngine_IsBase(true);
        return vktoolbar->paintEngine();
    } else {
        return self->KToolBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnPaintEngine(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_PaintEngine_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_MouseDoubleClickEvent(KToolBar* self, QMouseEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKToolBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseMouseDoubleClickEvent(KToolBar* self, QMouseEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MouseDoubleClickEvent_IsBase(true);
        vktoolbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKToolBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMouseDoubleClickEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_WheelEvent(KToolBar* self, QWheelEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->wheelEvent(event);
    } else {
        ((VirtualKToolBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseWheelEvent(KToolBar* self, QWheelEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_WheelEvent_IsBase(true);
        vktoolbar->wheelEvent(event);
    } else {
        ((VirtualKToolBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnWheelEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_WheelEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_KeyPressEvent(KToolBar* self, QKeyEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->keyPressEvent(event);
    } else {
        ((VirtualKToolBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseKeyPressEvent(KToolBar* self, QKeyEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_KeyPressEvent_IsBase(true);
        vktoolbar->keyPressEvent(event);
    } else {
        ((VirtualKToolBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnKeyPressEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_KeyPressEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_KeyReleaseEvent(KToolBar* self, QKeyEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->keyReleaseEvent(event);
    } else {
        ((VirtualKToolBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseKeyReleaseEvent(KToolBar* self, QKeyEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_KeyReleaseEvent_IsBase(true);
        vktoolbar->keyReleaseEvent(event);
    } else {
        ((VirtualKToolBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnKeyReleaseEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_FocusInEvent(KToolBar* self, QFocusEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->focusInEvent(event);
    } else {
        ((VirtualKToolBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseFocusInEvent(KToolBar* self, QFocusEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusInEvent_IsBase(true);
        vktoolbar->focusInEvent(event);
    } else {
        ((VirtualKToolBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusInEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusInEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_FocusOutEvent(KToolBar* self, QFocusEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->focusOutEvent(event);
    } else {
        ((VirtualKToolBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseFocusOutEvent(KToolBar* self, QFocusEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusOutEvent_IsBase(true);
        vktoolbar->focusOutEvent(event);
    } else {
        ((VirtualKToolBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusOutEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusOutEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_EnterEvent(KToolBar* self, QEnterEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->enterEvent(event);
    } else {
        ((VirtualKToolBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseEnterEvent(KToolBar* self, QEnterEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_EnterEvent_IsBase(true);
        vktoolbar->enterEvent(event);
    } else {
        ((VirtualKToolBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnEnterEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_EnterEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_LeaveEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->leaveEvent(event);
    } else {
        ((VirtualKToolBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseLeaveEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_LeaveEvent_IsBase(true);
        vktoolbar->leaveEvent(event);
    } else {
        ((VirtualKToolBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnLeaveEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_LeaveEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_MoveEvent(KToolBar* self, QMoveEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->moveEvent(event);
    } else {
        ((VirtualKToolBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseMoveEvent(KToolBar* self, QMoveEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MoveEvent_IsBase(true);
        vktoolbar->moveEvent(event);
    } else {
        ((VirtualKToolBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMoveEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_MoveEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_ResizeEvent(KToolBar* self, QResizeEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->resizeEvent(event);
    } else {
        ((VirtualKToolBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseResizeEvent(KToolBar* self, QResizeEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ResizeEvent_IsBase(true);
        vktoolbar->resizeEvent(event);
    } else {
        ((VirtualKToolBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnResizeEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ResizeEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_CloseEvent(KToolBar* self, QCloseEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->closeEvent(event);
    } else {
        ((VirtualKToolBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseCloseEvent(KToolBar* self, QCloseEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_CloseEvent_IsBase(true);
        vktoolbar->closeEvent(event);
    } else {
        ((VirtualKToolBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnCloseEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_CloseEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_TabletEvent(KToolBar* self, QTabletEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->tabletEvent(event);
    } else {
        ((VirtualKToolBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseTabletEvent(KToolBar* self, QTabletEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_TabletEvent_IsBase(true);
        vktoolbar->tabletEvent(event);
    } else {
        ((VirtualKToolBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnTabletEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_TabletEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_ShowEvent(KToolBar* self, QShowEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->showEvent(event);
    } else {
        ((VirtualKToolBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseShowEvent(KToolBar* self, QShowEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ShowEvent_IsBase(true);
        vktoolbar->showEvent(event);
    } else {
        ((VirtualKToolBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnShowEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ShowEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_HideEvent(KToolBar* self, QHideEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->hideEvent(event);
    } else {
        ((VirtualKToolBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseHideEvent(KToolBar* self, QHideEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_HideEvent_IsBase(true);
        vktoolbar->hideEvent(event);
    } else {
        ((VirtualKToolBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnHideEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_HideEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_NativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKToolBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KToolBar_QBaseNativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_NativeEvent_IsBase(true);
        return vktoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKToolBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnNativeEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_NativeEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBar_Metric(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKToolBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KToolBar_QBaseMetric(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Metric_IsBase(true);
        return vktoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKToolBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnMetric(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Metric_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_InitPainter(const KToolBar* self, QPainter* painter) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->initPainter(painter);
    } else {
        ((VirtualKToolBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KToolBar_QBaseInitPainter(const KToolBar* self, QPainter* painter) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InitPainter_IsBase(true);
        vktoolbar->initPainter(painter);
    } else {
        ((VirtualKToolBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInitPainter(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InitPainter_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KToolBar_Redirected(const KToolBar* self, QPoint* offset) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->redirected(offset);
    } else {
        return ((VirtualKToolBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KToolBar_QBaseRedirected(const KToolBar* self, QPoint* offset) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Redirected_IsBase(true);
        return vktoolbar->redirected(offset);
    } else {
        return ((VirtualKToolBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnRedirected(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Redirected_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KToolBar_SharedPainter(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->sharedPainter();
    } else {
        return ((VirtualKToolBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KToolBar_QBaseSharedPainter(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SharedPainter_IsBase(true);
        return vktoolbar->sharedPainter();
    } else {
        return ((VirtualKToolBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSharedPainter(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SharedPainter_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_InputMethodEvent(KToolBar* self, QInputMethodEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->inputMethodEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KToolBar_QBaseInputMethodEvent(KToolBar* self, QInputMethodEvent* param1) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InputMethodEvent_IsBase(true);
        vktoolbar->inputMethodEvent(param1);
    } else {
        ((VirtualKToolBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInputMethodEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InputMethodEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KToolBar_InputMethodQuery(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return new QVariant(vktoolbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKToolBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KToolBar_QBaseInputMethodQuery(const KToolBar* self, int param1) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InputMethodQuery_IsBase(true);
        return new QVariant(vktoolbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKToolBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnInputMethodQuery(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_InputMethodQuery_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_FocusNextPrevChild(KToolBar* self, bool next) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKToolBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KToolBar_QBaseFocusNextPrevChild(KToolBar* self, bool next) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusNextPrevChild_IsBase(true);
        return vktoolbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKToolBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusNextPrevChild(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_TimerEvent(KToolBar* self, QTimerEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->timerEvent(event);
    } else {
        ((VirtualKToolBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseTimerEvent(KToolBar* self, QTimerEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_TimerEvent_IsBase(true);
        vktoolbar->timerEvent(event);
    } else {
        ((VirtualKToolBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnTimerEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_TimerEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_ChildEvent(KToolBar* self, QChildEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->childEvent(event);
    } else {
        ((VirtualKToolBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseChildEvent(KToolBar* self, QChildEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ChildEvent_IsBase(true);
        vktoolbar->childEvent(event);
    } else {
        ((VirtualKToolBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnChildEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ChildEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_CustomEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->customEvent(event);
    } else {
        ((VirtualKToolBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToolBar_QBaseCustomEvent(KToolBar* self, QEvent* event) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_CustomEvent_IsBase(true);
        vktoolbar->customEvent(event);
    } else {
        ((VirtualKToolBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnCustomEvent(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_CustomEvent_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_ConnectNotify(KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->connectNotify(*signal);
    } else {
        ((VirtualKToolBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBar_QBaseConnectNotify(KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ConnectNotify_IsBase(true);
        vktoolbar->connectNotify(*signal);
    } else {
        ((VirtualKToolBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnConnectNotify(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_ConnectNotify_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_DisconnectNotify(KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBar_QBaseDisconnectNotify(KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DisconnectNotify_IsBase(true);
        vktoolbar->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDisconnectNotify(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_DisconnectNotify_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_UpdateMicroFocus(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->updateMicroFocus();
    } else {
        ((VirtualKToolBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KToolBar_QBaseUpdateMicroFocus(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_UpdateMicroFocus_IsBase(true);
        vktoolbar->updateMicroFocus();
    } else {
        ((VirtualKToolBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnUpdateMicroFocus(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_Create(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->create();
    } else {
        ((VirtualKToolBar*)self)->create();
    }
}

// Base class handler implementation
void KToolBar_QBaseCreate(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Create_IsBase(true);
        vktoolbar->create();
    } else {
        ((VirtualKToolBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnCreate(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Create_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBar_Destroy(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->destroy();
    } else {
        ((VirtualKToolBar*)self)->destroy();
    }
}

// Base class handler implementation
void KToolBar_QBaseDestroy(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Destroy_IsBase(true);
        vktoolbar->destroy();
    } else {
        ((VirtualKToolBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnDestroy(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Destroy_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_FocusNextChild(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->focusNextChild();
    } else {
        return ((VirtualKToolBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KToolBar_QBaseFocusNextChild(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusNextChild_IsBase(true);
        return vktoolbar->focusNextChild();
    } else {
        return ((VirtualKToolBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusNextChild(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusNextChild_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_FocusPreviousChild(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->focusPreviousChild();
    } else {
        return ((VirtualKToolBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KToolBar_QBaseFocusPreviousChild(KToolBar* self) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusPreviousChild_IsBase(true);
        return vktoolbar->focusPreviousChild();
    } else {
        return ((VirtualKToolBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnFocusPreviousChild(KToolBar* self, intptr_t slot) {
    auto* vktoolbar = dynamic_cast<VirtualKToolBar*>(self);
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToolBar_Sender(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->sender();
    } else {
        return ((VirtualKToolBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToolBar_QBaseSender(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Sender_IsBase(true);
        return vktoolbar->sender();
    } else {
        return ((VirtualKToolBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSender(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Sender_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBar_SenderSignalIndex(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->senderSignalIndex();
    } else {
        return ((VirtualKToolBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToolBar_QBaseSenderSignalIndex(const KToolBar* self) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SenderSignalIndex_IsBase(true);
        return vktoolbar->senderSignalIndex();
    } else {
        return ((VirtualKToolBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnSenderSignalIndex(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBar_Receivers(const KToolBar* self, const char* signal) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->receivers(signal);
    } else {
        return ((VirtualKToolBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToolBar_QBaseReceivers(const KToolBar* self, const char* signal) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Receivers_IsBase(true);
        return vktoolbar->receivers(signal);
    } else {
        return ((VirtualKToolBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnReceivers(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_Receivers_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBar_IsSignalConnected(const KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToolBar_QBaseIsSignalConnected(const KToolBar* self, const QMetaMethod* signal) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_IsSignalConnected_IsBase(true);
        return vktoolbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnIsSignalConnected(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_IsSignalConnected_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KToolBar_GetDecodedMetricF(const KToolBar* self, int metricA, int metricB) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        return vktoolbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKToolBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KToolBar_QBaseGetDecodedMetricF(const KToolBar* self, int metricA, int metricB) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_GetDecodedMetricF_IsBase(true);
        return vktoolbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKToolBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBar_OnGetDecodedMetricF(const KToolBar* self, intptr_t slot) {
    auto* vktoolbar = const_cast<VirtualKToolBar*>(dynamic_cast<const VirtualKToolBar*>(self));
    if (vktoolbar && vktoolbar->isVirtualKToolBar) {
        vktoolbar->setKToolBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKToolBar::KToolBar_GetDecodedMetricF_Callback>(slot));
    }
}

void KToolBar_Delete(KToolBar* self) {
    delete self;
}
