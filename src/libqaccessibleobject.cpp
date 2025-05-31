#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleApplication>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPair>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <qaccessibleobject.h>
#include "libqaccessibleobject.h"
#include "libqaccessibleobject.hxx"

bool QAccessibleObject_IsValid(const QAccessibleObject* self) {
    return self->isValid();
}

QObject* QAccessibleObject_Object(const QAccessibleObject* self) {
    return self->object();
}

QRect* QAccessibleObject_Rect(const QAccessibleObject* self) {
    return new QRect(self->rect());
}

void QAccessibleObject_SetText(QAccessibleObject* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y) {
    return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleApplication* QAccessibleApplication_new() {
    return new VirtualQAccessibleApplication();
}

// Derived class handler implementation
QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->window();
    } else {
        return self->QAccessibleApplication::window();
    }
}

// Base class handler implementation
QWindow* QAccessibleApplication_QBaseWindow(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Window_IsBase(true);
        return vqaccessibleapplication->window();
    } else {
        return self->QAccessibleApplication::window();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnWindow(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Window_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Window_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleApplication_ChildCount(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->childCount();
    } else {
        return self->QAccessibleApplication::childCount();
    }
}

// Base class handler implementation
int QAccessibleApplication_QBaseChildCount(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_ChildCount_IsBase(true);
        return vqaccessibleapplication->childCount();
    } else {
        return self->QAccessibleApplication::childCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChildCount(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_ChildCount_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ChildCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->indexOfChild(param1);
    } else {
        return self->QAccessibleApplication::indexOfChild(param1);
    }
}

// Base class handler implementation
int QAccessibleApplication_QBaseIndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_IndexOfChild_IsBase(true);
        return vqaccessibleapplication->indexOfChild(param1);
    } else {
        return self->QAccessibleApplication::indexOfChild(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnIndexOfChild(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_IndexOfChild_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_IndexOfChild_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->focusChild();
    } else {
        return self->QAccessibleApplication::focusChild();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseFocusChild(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_FocusChild_IsBase(true);
        return vqaccessibleapplication->focusChild();
    } else {
        return self->QAccessibleApplication::focusChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnFocusChild(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_FocusChild_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_FocusChild_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->parent();
    } else {
        return self->QAccessibleApplication::parent();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseParent(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Parent_IsBase(true);
        return vqaccessibleapplication->parent();
    } else {
        return self->QAccessibleApplication::parent();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnParent(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Parent_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->child(static_cast<int>(index));
    } else {
        return self->QAccessibleApplication::child(static_cast<int>(index));
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseChild(const QAccessibleApplication* self, int index) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Child_IsBase(true);
        return vqaccessibleapplication->child(static_cast<int>(index));
    } else {
        return self->QAccessibleApplication::child(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChild(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Child_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Child_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        QString _ret = vqaccessibleapplication->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleApplication::text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QAccessibleApplication_QBaseText(const QAccessibleApplication* self, int t) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Text_IsBase(true);
        QString _ret = vqaccessibleapplication->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleApplication::text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnText(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Text_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Text_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleApplication_Role(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return static_cast<int>(vqaccessibleapplication->role());
    } else {
        return static_cast<int>(self->QAccessibleApplication::role());
    }
}

// Base class handler implementation
int QAccessibleApplication_QBaseRole(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Role_IsBase(true);
        return static_cast<int>(vqaccessibleapplication->role());
    } else {
        return static_cast<int>(self->QAccessibleApplication::role());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRole(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Role_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Role_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return new QAccessible::State(vqaccessibleapplication->state());
    } else {
        return new QAccessible::State(((VirtualQAccessibleApplication*)self)->state());
    }
}

// Base class handler implementation
QAccessible__State* QAccessibleApplication_QBaseState(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_State_IsBase(true);
        return new QAccessible::State(vqaccessibleapplication->state());
    } else {
        return new QAccessible::State(((VirtualQAccessibleApplication*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnState(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_State_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_State_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessibleApplication_IsValid(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->isValid();
    } else {
        return self->QAccessibleApplication::isValid();
    }
}

// Base class handler implementation
bool QAccessibleApplication_QBaseIsValid(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_IsValid_IsBase(true);
        return vqaccessibleapplication->isValid();
    } else {
        return self->QAccessibleApplication::isValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnIsValid(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_IsValid_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_IsValid_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessibleApplication_Object(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->object();
    } else {
        return self->QAccessibleApplication::object();
    }
}

// Base class handler implementation
QObject* QAccessibleApplication_QBaseObject(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Object_IsBase(true);
        return vqaccessibleapplication->object();
    } else {
        return self->QAccessibleApplication::object();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnObject(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Object_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Object_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QAccessibleApplication_Rect(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return new QRect(vqaccessibleapplication->rect());
    } else {
        return new QRect(((VirtualQAccessibleApplication*)self)->rect());
    }
}

// Base class handler implementation
QRect* QAccessibleApplication_QBaseRect(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Rect_IsBase(true);
        return new QRect(vqaccessibleapplication->rect());
    } else {
        return new QRect(((VirtualQAccessibleApplication*)self)->rect());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRect(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Rect_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Rect_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleApplication_SetText(QAccessibleApplication* self, int t, const libqt_string text) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setText(static_cast<QAccessible::Text>(t), text_QString);
    } else {
        self->QAccessibleApplication::setText(static_cast<QAccessible::Text>(t), text_QString);
    }
}

// Base class handler implementation
void QAccessibleApplication_QBaseSetText(QAccessibleApplication* self, int t, const libqt_string text) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_SetText_IsBase(true);
        vqaccessibleapplication->setText(static_cast<QAccessible::Text>(t), text_QString);
    } else {
        self->QAccessibleApplication::setText(static_cast<QAccessible::Text>(t), text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnSetText(QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_SetText_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_SetText_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleApplication_ChildAt(const QAccessibleApplication* self, int x, int y) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->childAt(static_cast<int>(x), static_cast<int>(y));
    } else {
        return self->QAccessibleApplication::childAt(static_cast<int>(x), static_cast<int>(y));
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_QBaseChildAt(const QAccessibleApplication* self, int x, int y) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_ChildAt_IsBase(true);
        return vqaccessibleapplication->childAt(static_cast<int>(x), static_cast<int>(y));
    } else {
        return self->QAccessibleApplication::childAt(static_cast<int>(x), static_cast<int>(y));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChildAt(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_ChildAt_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ChildAt_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleApplication_Relations(const QAccessibleApplication* self, int match) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = vqaccessibleapplication->relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
            // Convert QPair<> from C++ memory to manually-managed C memory
            QAccessibleInterface** _lv_first = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
            int* _lv_second = static_cast<int*>(malloc(sizeof(int)));
            *_lv_first = _lv_ret.first;
            *_lv_second = static_cast<int>(_lv_ret.second);
            libqt_pair _lv_out;
            _lv_out.first = static_cast<void*>(_lv_first);
            _lv_out.second = static_cast<void*>(_lv_second);
            _arr[i] = _lv_out;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = self->QAccessibleApplication::relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
            // Convert QPair<> from C++ memory to manually-managed C memory
            QAccessibleInterface** _lv_first = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
            int* _lv_second = static_cast<int*>(malloc(sizeof(int)));
            *_lv_first = _lv_ret.first;
            *_lv_second = static_cast<int>(_lv_ret.second);
            libqt_pair _lv_out;
            _lv_out.first = static_cast<void*>(_lv_first);
            _lv_out.second = static_cast<void*>(_lv_second);
            _arr[i] = _lv_out;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleApplication_QBaseRelations(const QAccessibleApplication* self, int match) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Relations_IsBase(true);
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = vqaccessibleapplication->relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
            // Convert QPair<> from C++ memory to manually-managed C memory
            QAccessibleInterface** _lv_first = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
            int* _lv_second = static_cast<int*>(malloc(sizeof(int)));
            *_lv_first = _lv_ret.first;
            *_lv_second = static_cast<int>(_lv_ret.second);
            libqt_pair _lv_out;
            _lv_out.first = static_cast<void*>(_lv_first);
            _lv_out.second = static_cast<void*>(_lv_second);
            _arr[i] = _lv_out;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = self->QAccessibleApplication::relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
            // Convert QPair<> from C++ memory to manually-managed C memory
            QAccessibleInterface** _lv_first = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
            int* _lv_second = static_cast<int*>(malloc(sizeof(int)));
            *_lv_first = _lv_ret.first;
            *_lv_second = static_cast<int>(_lv_ret.second);
            libqt_pair _lv_out;
            _lv_out.first = static_cast<void*>(_lv_first);
            _lv_out.second = static_cast<void*>(_lv_second);
            _arr[i] = _lv_out;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRelations(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Relations_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Relations_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QAccessibleApplication_ForegroundColor(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return new QColor(vqaccessibleapplication->foregroundColor());
    } else {
        return new QColor(((VirtualQAccessibleApplication*)self)->foregroundColor());
    }
}

// Base class handler implementation
QColor* QAccessibleApplication_QBaseForegroundColor(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_ForegroundColor_IsBase(true);
        return new QColor(vqaccessibleapplication->foregroundColor());
    } else {
        return new QColor(((VirtualQAccessibleApplication*)self)->foregroundColor());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnForegroundColor(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_ForegroundColor_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QAccessibleApplication_BackgroundColor(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return new QColor(vqaccessibleapplication->backgroundColor());
    } else {
        return new QColor(((VirtualQAccessibleApplication*)self)->backgroundColor());
    }
}

// Base class handler implementation
QColor* QAccessibleApplication_QBaseBackgroundColor(const QAccessibleApplication* self) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_BackgroundColor_IsBase(true);
        return new QColor(vqaccessibleapplication->backgroundColor());
    } else {
        return new QColor(((VirtualQAccessibleApplication*)self)->backgroundColor());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnBackgroundColor(const QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_BackgroundColor_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_BackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleApplication_VirtualHook(QAccessibleApplication* self, int id, void* data) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QAccessibleApplication::virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void QAccessibleApplication_QBaseVirtualHook(QAccessibleApplication* self, int id, void* data) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_VirtualHook_IsBase(true);
        vqaccessibleapplication->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QAccessibleApplication::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnVirtualHook(QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_VirtualHook_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void* QAccessibleApplication_InterfaceCast(QAccessibleApplication* self, int param1) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        return vqaccessibleapplication->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    } else {
        return self->QAccessibleApplication::interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    }
}

// Base class handler implementation
void* QAccessibleApplication_QBaseInterfaceCast(QAccessibleApplication* self, int param1) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_InterfaceCast_IsBase(true);
        return vqaccessibleapplication->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    } else {
        return self->QAccessibleApplication::interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnInterfaceCast(QAccessibleApplication* self, intptr_t slot) {
    auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self);
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_InterfaceCast_Callback(reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_InterfaceCast_Callback>(slot));
    }
}

void QAccessibleApplication_Delete(QAccessibleApplication* self) {
    delete self;
}
