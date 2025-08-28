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
#include <QByteArray>
#include <cstring>
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
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KListWidgetSearchLine_Tr(const char* s) {
    QString _ret = KListWidgetSearchLine::tr(s);
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
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        self->updateSearch(s_QString);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->updateSearch(s_QString);
    }
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
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->itemMatches(item, s_QString);
    }
    return {};
}

bool KListWidgetSearchLine_Event(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->event(event);
    }
    return {};
}

libqt_string KListWidgetSearchLine_Tr2(const char* s, const char* c) {
    QString _ret = KListWidgetSearchLine::tr(s, c);
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
    QString _ret = KListWidgetSearchLine::tr(s, c, static_cast<int>(n));
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
int KListWidgetSearchLine_QBaseMetacall(KListWidgetSearchLine* self, int param1, int param2, void** param3) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Metacall_IsBase(true);
        return vklistwidgetsearchline->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KListWidgetSearchLine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMetacall(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Metacall_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseUpdateSearch(KListWidgetSearchLine* self, const libqt_string s) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_UpdateSearch_IsBase(true);
        vklistwidgetsearchline->updateSearch(s_QString);
    } else {
        self->KListWidgetSearchLine::updateSearch(s_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnUpdateSearch(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_UpdateSearch_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_UpdateSearch_Callback>(slot));
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ItemMatches_IsBase(true);
        return vklistwidgetsearchline->itemMatches(item, s_QString);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->itemMatches(item, s_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnItemMatches(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ItemMatches_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ItemMatches_Callback>(slot));
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Event_IsBase(true);
        return vklistwidgetsearchline->event(event);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Event_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KListWidgetSearchLine_SizeHint(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return new QSize(vklistwidgetsearchline->sizeHint());
    } else {
        return new QSize(((VirtualKListWidgetSearchLine*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KListWidgetSearchLine_QBaseSizeHint(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SizeHint_IsBase(true);
        return new QSize(vklistwidgetsearchline->sizeHint());
    } else {
        return new QSize(((VirtualKListWidgetSearchLine*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSizeHint(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SizeHint_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KListWidgetSearchLine_MinimumSizeHint(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return new QSize(vklistwidgetsearchline->minimumSizeHint());
    } else {
        return new QSize(((VirtualKListWidgetSearchLine*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KListWidgetSearchLine_QBaseMinimumSizeHint(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MinimumSizeHint_IsBase(true);
        return new QSize(vklistwidgetsearchline->minimumSizeHint());
    } else {
        return new QSize(((VirtualKListWidgetSearchLine*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMinimumSizeHint(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MinimumSizeHint_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_MousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->mousePressEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseMousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MousePressEvent_IsBase(true);
        vklistwidgetsearchline->mousePressEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMousePressEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MousePressEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_MouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->mouseMoveEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseMouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MouseMoveEvent_IsBase(true);
        vklistwidgetsearchline->mouseMoveEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMouseMoveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MouseMoveEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_MouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->mouseReleaseEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseMouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MouseReleaseEvent_IsBase(true);
        vklistwidgetsearchline->mouseReleaseEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMouseReleaseEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_MouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseMouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MouseDoubleClickEvent_IsBase(true);
        vklistwidgetsearchline->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMouseDoubleClickEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_KeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->keyPressEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseKeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_KeyPressEvent_IsBase(true);
        vklistwidgetsearchline->keyPressEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnKeyPressEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_KeyPressEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_KeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->keyReleaseEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseKeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_KeyReleaseEvent_IsBase(true);
        vklistwidgetsearchline->keyReleaseEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnKeyReleaseEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_FocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->focusInEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseFocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusInEvent_IsBase(true);
        vklistwidgetsearchline->focusInEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusInEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusInEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_FocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->focusOutEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseFocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusOutEvent_IsBase(true);
        vklistwidgetsearchline->focusOutEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusOutEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusOutEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_PaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->paintEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBasePaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_PaintEvent_IsBase(true);
        vklistwidgetsearchline->paintEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnPaintEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_PaintEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_DragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->dragEnterEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseDragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DragEnterEvent_IsBase(true);
        vklistwidgetsearchline->dragEnterEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDragEnterEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DragEnterEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_DragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->dragMoveEvent(e);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseDragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DragMoveEvent_IsBase(true);
        vklistwidgetsearchline->dragMoveEvent(e);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDragMoveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DragMoveEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_DragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->dragLeaveEvent(e);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseDragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DragLeaveEvent_IsBase(true);
        vklistwidgetsearchline->dragLeaveEvent(e);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDragLeaveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DragLeaveEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_DropEvent(KListWidgetSearchLine* self, QDropEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->dropEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseDropEvent(KListWidgetSearchLine* self, QDropEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DropEvent_IsBase(true);
        vklistwidgetsearchline->dropEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDropEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DropEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ChangeEvent(KListWidgetSearchLine* self, QEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->changeEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseChangeEvent(KListWidgetSearchLine* self, QEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ChangeEvent_IsBase(true);
        vklistwidgetsearchline->changeEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnChangeEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ChangeEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->contextMenuEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ContextMenuEvent_IsBase(true);
        vklistwidgetsearchline->contextMenuEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnContextMenuEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ContextMenuEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_InputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->inputMethodEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseInputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InputMethodEvent_IsBase(true);
        vklistwidgetsearchline->inputMethodEvent(param1);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInputMethodEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InputMethodEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_InitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->initStyleOption(option);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseInitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InitStyleOption_IsBase(true);
        vklistwidgetsearchline->initStyleOption(option);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInitStyleOption(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InitStyleOption_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KListWidgetSearchLine_InputMethodQuery(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return new QVariant(vklistwidgetsearchline->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKListWidgetSearchLine*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KListWidgetSearchLine_QBaseInputMethodQuery(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InputMethodQuery_IsBase(true);
        return new QVariant(vklistwidgetsearchline->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKListWidgetSearchLine*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInputMethodQuery(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InputMethodQuery_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_TimerEvent(KListWidgetSearchLine* self, QTimerEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->timerEvent(param1);
    } else {
        self->KListWidgetSearchLine::timerEvent(param1);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseTimerEvent(KListWidgetSearchLine* self, QTimerEvent* param1) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_TimerEvent_IsBase(true);
        vklistwidgetsearchline->timerEvent(param1);
    } else {
        self->KListWidgetSearchLine::timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnTimerEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_TimerEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KListWidgetSearchLine_DevType(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->devType();
    } else {
        return self->KListWidgetSearchLine::devType();
    }
}

// Base class handler implementation
int KListWidgetSearchLine_QBaseDevType(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DevType_IsBase(true);
        return vklistwidgetsearchline->devType();
    } else {
        return self->KListWidgetSearchLine::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDevType(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DevType_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_SetVisible(KListWidgetSearchLine* self, bool visible) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setVisible(visible);
    } else {
        self->KListWidgetSearchLine::setVisible(visible);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseSetVisible(KListWidgetSearchLine* self, bool visible) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SetVisible_IsBase(true);
        vklistwidgetsearchline->setVisible(visible);
    } else {
        self->KListWidgetSearchLine::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSetVisible(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SetVisible_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KListWidgetSearchLine_HeightForWidth(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KListWidgetSearchLine::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KListWidgetSearchLine_QBaseHeightForWidth(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_HeightForWidth_IsBase(true);
        return vklistwidgetsearchline->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KListWidgetSearchLine::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnHeightForWidth(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_HeightForWidth_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_HasHeightForWidth(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->hasHeightForWidth();
    } else {
        return self->KListWidgetSearchLine::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseHasHeightForWidth(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_HasHeightForWidth_IsBase(true);
        return vklistwidgetsearchline->hasHeightForWidth();
    } else {
        return self->KListWidgetSearchLine::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnHasHeightForWidth(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_HasHeightForWidth_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KListWidgetSearchLine_PaintEngine(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->paintEngine();
    } else {
        return self->KListWidgetSearchLine::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KListWidgetSearchLine_QBasePaintEngine(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_PaintEngine_IsBase(true);
        return vklistwidgetsearchline->paintEngine();
    } else {
        return self->KListWidgetSearchLine::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnPaintEngine(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_PaintEngine_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_WheelEvent(KListWidgetSearchLine* self, QWheelEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->wheelEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseWheelEvent(KListWidgetSearchLine* self, QWheelEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_WheelEvent_IsBase(true);
        vklistwidgetsearchline->wheelEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnWheelEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_WheelEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_EnterEvent(KListWidgetSearchLine* self, QEnterEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->enterEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseEnterEvent(KListWidgetSearchLine* self, QEnterEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_EnterEvent_IsBase(true);
        vklistwidgetsearchline->enterEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnEnterEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_EnterEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_LeaveEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->leaveEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseLeaveEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_LeaveEvent_IsBase(true);
        vklistwidgetsearchline->leaveEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnLeaveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_LeaveEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_MoveEvent(KListWidgetSearchLine* self, QMoveEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->moveEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseMoveEvent(KListWidgetSearchLine* self, QMoveEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MoveEvent_IsBase(true);
        vklistwidgetsearchline->moveEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMoveEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_MoveEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->resizeEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ResizeEvent_IsBase(true);
        vklistwidgetsearchline->resizeEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnResizeEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ResizeEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_CloseEvent(KListWidgetSearchLine* self, QCloseEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->closeEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseCloseEvent(KListWidgetSearchLine* self, QCloseEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_CloseEvent_IsBase(true);
        vklistwidgetsearchline->closeEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnCloseEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_CloseEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_TabletEvent(KListWidgetSearchLine* self, QTabletEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->tabletEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseTabletEvent(KListWidgetSearchLine* self, QTabletEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_TabletEvent_IsBase(true);
        vklistwidgetsearchline->tabletEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnTabletEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_TabletEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ActionEvent(KListWidgetSearchLine* self, QActionEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->actionEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseActionEvent(KListWidgetSearchLine* self, QActionEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ActionEvent_IsBase(true);
        vklistwidgetsearchline->actionEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnActionEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ActionEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ShowEvent(KListWidgetSearchLine* self, QShowEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->showEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseShowEvent(KListWidgetSearchLine* self, QShowEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ShowEvent_IsBase(true);
        vklistwidgetsearchline->showEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnShowEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ShowEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_HideEvent(KListWidgetSearchLine* self, QHideEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->hideEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseHideEvent(KListWidgetSearchLine* self, QHideEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_HideEvent_IsBase(true);
        vklistwidgetsearchline->hideEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnHideEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_HideEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_NativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseNativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_NativeEvent_IsBase(true);
        return vklistwidgetsearchline->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnNativeEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_NativeEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KListWidgetSearchLine_Metric(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KListWidgetSearchLine_QBaseMetric(const KListWidgetSearchLine* self, int param1) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Metric_IsBase(true);
        return vklistwidgetsearchline->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnMetric(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Metric_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_InitPainter(const KListWidgetSearchLine* self, QPainter* painter) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->initPainter(painter);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseInitPainter(const KListWidgetSearchLine* self, QPainter* painter) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InitPainter_IsBase(true);
        vklistwidgetsearchline->initPainter(painter);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnInitPainter(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_InitPainter_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KListWidgetSearchLine_Redirected(const KListWidgetSearchLine* self, QPoint* offset) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->redirected(offset);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KListWidgetSearchLine_QBaseRedirected(const KListWidgetSearchLine* self, QPoint* offset) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Redirected_IsBase(true);
        return vklistwidgetsearchline->redirected(offset);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnRedirected(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Redirected_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KListWidgetSearchLine_SharedPainter(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->sharedPainter();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KListWidgetSearchLine_QBaseSharedPainter(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SharedPainter_IsBase(true);
        return vklistwidgetsearchline->sharedPainter();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSharedPainter(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SharedPainter_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_FocusNextPrevChild(KListWidgetSearchLine* self, bool next) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->focusNextPrevChild(next);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseFocusNextPrevChild(KListWidgetSearchLine* self, bool next) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusNextPrevChild_IsBase(true);
        return vklistwidgetsearchline->focusNextPrevChild(next);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusNextPrevChild(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_EventFilter(KListWidgetSearchLine* self, QObject* watched, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->eventFilter(watched, event);
    } else {
        return self->KListWidgetSearchLine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseEventFilter(KListWidgetSearchLine* self, QObject* watched, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_EventFilter_IsBase(true);
        return vklistwidgetsearchline->eventFilter(watched, event);
    } else {
        return self->KListWidgetSearchLine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnEventFilter(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_EventFilter_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ChildEvent(KListWidgetSearchLine* self, QChildEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->childEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseChildEvent(KListWidgetSearchLine* self, QChildEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ChildEvent_IsBase(true);
        vklistwidgetsearchline->childEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnChildEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ChildEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_CustomEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->customEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseCustomEvent(KListWidgetSearchLine* self, QEvent* event) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_CustomEvent_IsBase(true);
        vklistwidgetsearchline->customEvent(event);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnCustomEvent(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_CustomEvent_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_ConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->connectNotify(*signal);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ConnectNotify_IsBase(true);
        vklistwidgetsearchline->connectNotify(*signal);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnConnectNotify(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_ConnectNotify_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_DisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->disconnectNotify(*signal);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseDisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DisconnectNotify_IsBase(true);
        vklistwidgetsearchline->disconnectNotify(*signal);
    } else {
        ((VirtualKListWidgetSearchLine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDisconnectNotify(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_DisconnectNotify_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KListWidgetSearchLine_CursorRect(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return new QRect(vklistwidgetsearchline->cursorRect());
    }
    return {};
}

// Base class handler implementation
QRect* KListWidgetSearchLine_QBaseCursorRect(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_CursorRect_IsBase(true);
        return new QRect(vklistwidgetsearchline->cursorRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnCursorRect(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_CursorRect_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_CursorRect_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_UpdateMicroFocus(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->updateMicroFocus();
    } else {
        ((VirtualKListWidgetSearchLine*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseUpdateMicroFocus(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_UpdateMicroFocus_IsBase(true);
        vklistwidgetsearchline->updateMicroFocus();
    } else {
        ((VirtualKListWidgetSearchLine*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnUpdateMicroFocus(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_Create(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->create();
    } else {
        ((VirtualKListWidgetSearchLine*)self)->create();
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseCreate(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Create_IsBase(true);
        vklistwidgetsearchline->create();
    } else {
        ((VirtualKListWidgetSearchLine*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnCreate(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Create_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KListWidgetSearchLine_Destroy(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->destroy();
    } else {
        ((VirtualKListWidgetSearchLine*)self)->destroy();
    }
}

// Base class handler implementation
void KListWidgetSearchLine_QBaseDestroy(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Destroy_IsBase(true);
        vklistwidgetsearchline->destroy();
    } else {
        ((VirtualKListWidgetSearchLine*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnDestroy(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Destroy_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_FocusNextChild(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->focusNextChild();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseFocusNextChild(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusNextChild_IsBase(true);
        return vklistwidgetsearchline->focusNextChild();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusNextChild(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusNextChild_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_FocusPreviousChild(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->focusPreviousChild();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseFocusPreviousChild(KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusPreviousChild_IsBase(true);
        return vklistwidgetsearchline->focusPreviousChild();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnFocusPreviousChild(KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = dynamic_cast<VirtualKListWidgetSearchLine*>(self);
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_FocusPreviousChild_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KListWidgetSearchLine_Sender(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->sender();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->sender();
    }
}

// Base class handler implementation
QObject* KListWidgetSearchLine_QBaseSender(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Sender_IsBase(true);
        return vklistwidgetsearchline->sender();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSender(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Sender_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KListWidgetSearchLine_SenderSignalIndex(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->senderSignalIndex();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KListWidgetSearchLine_QBaseSenderSignalIndex(const KListWidgetSearchLine* self) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SenderSignalIndex_IsBase(true);
        return vklistwidgetsearchline->senderSignalIndex();
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnSenderSignalIndex(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_SenderSignalIndex_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KListWidgetSearchLine_Receivers(const KListWidgetSearchLine* self, const char* signal) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->receivers(signal);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KListWidgetSearchLine_QBaseReceivers(const KListWidgetSearchLine* self, const char* signal) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Receivers_IsBase(true);
        return vklistwidgetsearchline->receivers(signal);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnReceivers(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_Receivers_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListWidgetSearchLine_IsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->isSignalConnected(*signal);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KListWidgetSearchLine_QBaseIsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_IsSignalConnected_IsBase(true);
        return vklistwidgetsearchline->isSignalConnected(*signal);
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnIsSignalConnected(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_IsSignalConnected_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KListWidgetSearchLine_GetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        return vklistwidgetsearchline->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KListWidgetSearchLine_QBaseGetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_GetDecodedMetricF_IsBase(true);
        return vklistwidgetsearchline->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKListWidgetSearchLine*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KListWidgetSearchLine_OnGetDecodedMetricF(const KListWidgetSearchLine* self, intptr_t slot) {
    auto* vklistwidgetsearchline = const_cast<VirtualKListWidgetSearchLine*>(dynamic_cast<const VirtualKListWidgetSearchLine*>(self));
    if (vklistwidgetsearchline && vklistwidgetsearchline->isVirtualKListWidgetSearchLine) {
        vklistwidgetsearchline->setKListWidgetSearchLine_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKListWidgetSearchLine::KListWidgetSearchLine_GetDecodedMetricF_Callback>(slot));
    }
}

void KListWidgetSearchLine_Delete(KListWidgetSearchLine* self) {
    delete self;
}
