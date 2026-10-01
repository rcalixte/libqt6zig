#include <KListWidgetSearchLine>
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
#include <QLineEdit>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <klistwidgetsearchline.h>
#include "libklistwidgetsearchline.h"
#include "libklistwidgetsearchline.hxx"

KListWidgetSearchLine* KListWidgetSearchLine_new(QWidget* parent) {
    return new VirtualKListWidgetSearchLine(parent);
}

KListWidgetSearchLine* KListWidgetSearchLine_new2() {
    return new VirtualKListWidgetSearchLine();
}

KListWidgetSearchLine* KListWidgetSearchLine_new3(QWidget* parent, QListWidget* listWidget) {
    return new VirtualKListWidgetSearchLine(parent, listWidget);
}

QMetaObject* KListWidgetSearchLine_MetaObject(const KListWidgetSearchLine* self) {
    return (QMetaObject*)self->metaObject();
}

void* KListWidgetSearchLine_Metacast(KListWidgetSearchLine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KListWidgetSearchLine_Metacall(KListWidgetSearchLine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KListWidgetSearchLine_Tr(const char* s) {
    auto _ret = KListWidgetSearchLine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KListWidgetSearchLine_CaseSensitive(const KListWidgetSearchLine* self) {
    return static_cast<int>(self->caseSensitive());
}

QListWidget* KListWidgetSearchLine_ListWidget(const KListWidgetSearchLine* self) {
    return self->listWidget();
}

void KListWidgetSearchLine_UpdateSearch(KListWidgetSearchLine* self, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    self->updateSearch(s_QString);
}

void KListWidgetSearchLine_SetCaseSensitivity(KListWidgetSearchLine* self, int cs) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

void KListWidgetSearchLine_SetListWidget(KListWidgetSearchLine* self, QListWidget* lv) {
    self->setListWidget(lv);
}

void KListWidgetSearchLine_Clear(KListWidgetSearchLine* self) {
    self->clear();
}

bool KListWidgetSearchLine_ItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    auto* vklistwidgetsearchline = dynamic_cast<const VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->itemMatches(item, s_QString);
    }
    qFatal("Error: Protected method KListWidgetSearchLine::itemMatches called without a directly constructed type");
}

bool KListWidgetSearchLine_Event(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->event(event);
    }
    qFatal("Error: Protected method KListWidgetSearchLine::event called without a directly constructed type");
}

libqt_string KListWidgetSearchLine_Tr2(const char* s, const char* c) {
    auto _ret = KListWidgetSearchLine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KListWidgetSearchLine_Tr3(const char* s, const char* c, int n) {
    auto _ret = KListWidgetSearchLine::tr(s, c, static_cast<int>(n));
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
QMetaObject* KListWidgetSearchLine_SuperMetaObject(const KListWidgetSearchLine* self) {
    return (QMetaObject*)self->KListWidgetSearchLine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMetaObject(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_metaobject_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KListWidgetSearchLine_SuperMetacast(KListWidgetSearchLine* self, const char* param1) {
    return self->KListWidgetSearchLine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMetacast(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_metacast_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Metacast_Callback>(slot);
}

// Base class handler implementation
int KListWidgetSearchLine_SuperMetacall(KListWidgetSearchLine* self, int param1, int param2, void** param3) {
    return self->KListWidgetSearchLine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMetacall(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_metacall_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Metacall_Callback>(slot);
}

// Base class handler implementation
void KListWidgetSearchLine_SuperUpdateSearch(KListWidgetSearchLine* self, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    self->KListWidgetSearchLine::updateSearch(s_QString);
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnUpdateSearch(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_updatesearch_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_UpdateSearch_Callback>(slot);
}

// Base class handler implementation
bool KListWidgetSearchLine_SuperItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->KListWidgetSearchLine::itemMatches(item, s_QString);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::itemMatches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnItemMatches(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_itemmatches_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ItemMatches_Callback>(slot);
}

// Base class handler implementation
bool KListWidgetSearchLine_SuperEvent(KListWidgetSearchLine* self, QEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        return vklistwidgetsearchline->KListWidgetSearchLine::event(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_event_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Event_Callback>(slot);
}

// Derived class handler implementation
QSize* KListWidgetSearchLine_SizeHint(const KListWidgetSearchLine* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KListWidgetSearchLine_SuperSizeHint(const KListWidgetSearchLine* self) {
    return new QSize(self->KListWidgetSearchLine::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSizeHint(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_sizehint_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KListWidgetSearchLine_MinimumSizeHint(const KListWidgetSearchLine* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KListWidgetSearchLine_SuperMinimumSizeHint(const KListWidgetSearchLine* self) {
    return new QSize(self->KListWidgetSearchLine::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMinimumSizeHint(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_minimumsizehint_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_MousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperMousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMousePressEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_mousepressevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_MouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperMouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMouseMoveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_mousemoveevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_MouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperMouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMouseReleaseEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_mousereleaseevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_MouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperMouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMouseDoubleClickEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_mousedoubleclickevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_KeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperKeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnKeyPressEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_keypressevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_KeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperKeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnKeyReleaseEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_keyreleaseevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_FocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperFocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusInEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_focusinevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_FocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperFocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusOutEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_focusoutevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_PaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperPaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnPaintEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_paintevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_DragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperDragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDragEnterEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_dragenterevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_DragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperDragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDragMoveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_dragmoveevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_DragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperDragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDragLeaveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_dragleaveevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_DropEvent(KListWidgetSearchLine* self, QDropEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperDropEvent(KListWidgetSearchLine* self, QDropEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDropEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_dropevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ChangeEvent(KListWidgetSearchLine* self, QEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperChangeEvent(KListWidgetSearchLine* self, QEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnChangeEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_changeevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnContextMenuEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_contextmenuevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_InputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperInputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInputMethodEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_inputmethodevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_InitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperInitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        vklistwidgetsearchline->KListWidgetSearchLine::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInitStyleOption(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_initstyleoption_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QVariant* KListWidgetSearchLine_InputMethodQuery(const KListWidgetSearchLine* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KListWidgetSearchLine_SuperInputMethodQuery(const KListWidgetSearchLine* self, int param1) {
    return new QVariant(self->KListWidgetSearchLine::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInputMethodQuery(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_inputmethodquery_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_TimerEvent(KListWidgetSearchLine* self, QTimerEvent* param1) {
    self->timerEvent(param1);
}

// Base class handler implementation
void KListWidgetSearchLine_SuperTimerEvent(KListWidgetSearchLine* self, QTimerEvent* param1) {
    self->KListWidgetSearchLine::timerEvent(param1);
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnTimerEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_timerevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int KListWidgetSearchLine_DevType(const KListWidgetSearchLine* self) {
    return self->devType();
}

// Base class handler implementation
int KListWidgetSearchLine_SuperDevType(const KListWidgetSearchLine* self) {
    return self->KListWidgetSearchLine::devType();
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDevType(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_devtype_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DevType_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_SetVisible(KListWidgetSearchLine* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KListWidgetSearchLine_SuperSetVisible(KListWidgetSearchLine* self, bool visible) {
    self->KListWidgetSearchLine::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSetVisible(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_setvisible_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KListWidgetSearchLine_HeightForWidth(const KListWidgetSearchLine* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KListWidgetSearchLine_SuperHeightForWidth(const KListWidgetSearchLine* self, int param1) {
    return self->KListWidgetSearchLine::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnHeightForWidth(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_heightforwidth_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KListWidgetSearchLine_HasHeightForWidth(const KListWidgetSearchLine* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KListWidgetSearchLine_SuperHasHeightForWidth(const KListWidgetSearchLine* self) {
    return self->KListWidgetSearchLine::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnHasHeightForWidth(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_hasheightforwidth_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KListWidgetSearchLine_PaintEngine(const KListWidgetSearchLine* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KListWidgetSearchLine_SuperPaintEngine(const KListWidgetSearchLine* self) {
    return self->KListWidgetSearchLine::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnPaintEngine(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_paintengine_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_WheelEvent(KListWidgetSearchLine* self, QWheelEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperWheelEvent(KListWidgetSearchLine* self, QWheelEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnWheelEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_wheelevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_EnterEvent(KListWidgetSearchLine* self, QEnterEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperEnterEvent(KListWidgetSearchLine* self, QEnterEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnEnterEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_enterevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_LeaveEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperLeaveEvent(KListWidgetSearchLine* self, QEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnLeaveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_leaveevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_MoveEvent(KListWidgetSearchLine* self, QMoveEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperMoveEvent(KListWidgetSearchLine* self, QMoveEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMoveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_moveevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnResizeEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_resizeevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_CloseEvent(KListWidgetSearchLine* self, QCloseEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperCloseEvent(KListWidgetSearchLine* self, QCloseEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnCloseEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_closeevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_TabletEvent(KListWidgetSearchLine* self, QTabletEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperTabletEvent(KListWidgetSearchLine* self, QTabletEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnTabletEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_tabletevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ActionEvent(KListWidgetSearchLine* self, QActionEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperActionEvent(KListWidgetSearchLine* self, QActionEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnActionEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_actionevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ShowEvent(KListWidgetSearchLine* self, QShowEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperShowEvent(KListWidgetSearchLine* self, QShowEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnShowEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_showevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_HideEvent(KListWidgetSearchLine* self, QHideEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperHideEvent(KListWidgetSearchLine* self, QHideEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnHideEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_hideevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KListWidgetSearchLine_NativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_SuperNativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        return vklistwidgetsearchline->KListWidgetSearchLine::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnNativeEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_nativeevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KListWidgetSearchLine_Metric(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KListWidgetSearchLine_SuperMetric(const KListWidgetSearchLine* self, int param1) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->KListWidgetSearchLine::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMetric(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_metric_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Metric_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_InitPainter(const KListWidgetSearchLine* self, QPainter* painter) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperInitPainter(const KListWidgetSearchLine* self, QPainter* painter) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        vklistwidgetsearchline->KListWidgetSearchLine::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInitPainter(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_initpainter_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KListWidgetSearchLine_Redirected(const KListWidgetSearchLine* self, QPoint* offset) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KListWidgetSearchLine_SuperRedirected(const KListWidgetSearchLine* self, QPoint* offset) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->KListWidgetSearchLine::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnRedirected(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_redirected_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KListWidgetSearchLine_SharedPainter(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KListWidgetSearchLine_SuperSharedPainter(const KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->KListWidgetSearchLine::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSharedPainter(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        vklistwidgetsearchline->klistwidgetsearchline_sharedpainter_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KListWidgetSearchLine_FocusNextPrevChild(KListWidgetSearchLine* self, bool next) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        return vklistwidgetsearchline->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_SuperFocusNextPrevChild(KListWidgetSearchLine* self, bool next) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        return vklistwidgetsearchline->KListWidgetSearchLine::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusNextPrevChild(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_focusnextprevchild_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KListWidgetSearchLine_EventFilter(KListWidgetSearchLine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KListWidgetSearchLine_SuperEventFilter(KListWidgetSearchLine* self, QObject* watched, QEvent* event) {
    return self->KListWidgetSearchLine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnEventFilter(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_eventfilter_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ChildEvent(KListWidgetSearchLine* self, QChildEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperChildEvent(KListWidgetSearchLine* self, QChildEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnChildEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_childevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_CustomEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperCustomEvent(KListWidgetSearchLine* self, QEvent* event) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnCustomEvent(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_customevent_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_ConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnConnectNotify(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_connectnotify_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KListWidgetSearchLine_DisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline) {
        vklistwidgetsearchline->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KListWidgetSearchLine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KListWidgetSearchLine_SuperDisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->KListWidgetSearchLine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KListWidgetSearchLine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDisconnectNotify(KListWidgetSearchLine* self, intptr_t slot) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self))
        vklistwidgetsearchline->klistwidgetsearchline_disconnectnotify_callback = reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QRect* KListWidgetSearchLine_CursorRect(const KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self)))
        return new QRect(vklistwidgetsearchline->cursorRect());
    qFatal("Error: Protected method KListWidgetSearchLine::cursorRect called without a directly constructed type");
}

// Derived class protected handler implementation
void KListWidgetSearchLine_UpdateMicroFocus(KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->VirtualKListWidgetSearchLine::updateMicroFocus();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KListWidgetSearchLine_Create(KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->VirtualKListWidgetSearchLine::create();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KListWidgetSearchLine_Destroy(KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        vklistwidgetsearchline->VirtualKListWidgetSearchLine::destroy();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KListWidgetSearchLine_FocusNextChild(KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::focusNextChild();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KListWidgetSearchLine_FocusPreviousChild(KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self)) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::focusPreviousChild();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KListWidgetSearchLine_Sender(const KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::sender();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KListWidgetSearchLine_SenderSignalIndex(const KListWidgetSearchLine* self) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::senderSignalIndex();
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KListWidgetSearchLine_Receivers(const KListWidgetSearchLine* self, const char* signal) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::receivers(signal);
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KListWidgetSearchLine_IsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KListWidgetSearchLine_GetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB) {
    if (auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self))) {
        return vklistwidgetsearchline->VirtualKListWidgetSearchLine::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KListWidgetSearchLine::getDecodedMetricF called without a directly constructed type");
}

void KListWidgetSearchLine_Delete(KListWidgetSearchLine* self) {
    delete self;
}
