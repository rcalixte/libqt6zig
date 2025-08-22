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

QAccessibleObject* QAccessibleObject_new(QObject* object) {
    return new VirtualQAccessibleObject(object);
}

// Derived class handler implementation
bool QAccessibleObject_IsValid(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->isValid();
    } else {
        return self->QAccessibleObject::isValid();
    }
}

// Base class handler implementation
bool QAccessibleObject_QBaseIsValid(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_IsValid_IsBase(true);
        return vqaccessibleobject->isValid();
    } else {
        return self->QAccessibleObject::isValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnIsValid(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_IsValid_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_IsValid_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessibleObject_Object(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->object();
    } else {
        return self->QAccessibleObject::object();
    }
}

// Base class handler implementation
QObject* QAccessibleObject_QBaseObject(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Object_IsBase(true);
        return vqaccessibleobject->object();
    } else {
        return self->QAccessibleObject::object();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnObject(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Object_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Object_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QAccessibleObject_Rect(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return new QRect(vqaccessibleobject->rect());
    } else {
        return new QRect(((VirtualQAccessibleObject*)self)->rect());
    }
}

// Base class handler implementation
QRect* QAccessibleObject_QBaseRect(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Rect_IsBase(true);
        return new QRect(vqaccessibleobject->rect());
    } else {
        return new QRect(((VirtualQAccessibleObject*)self)->rect());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRect(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Rect_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Rect_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleObject_SetText(QAccessibleObject* self, int t, const libqt_string text) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setText(static_cast<QAccessible::Text>(t), text_QString);
    } else {
        self->QAccessibleObject::setText(static_cast<QAccessible::Text>(t), text_QString);
    }
}

// Base class handler implementation
void QAccessibleObject_QBaseSetText(QAccessibleObject* self, int t, const libqt_string text) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_SetText_IsBase(true);
        vqaccessibleobject->setText(static_cast<QAccessible::Text>(t), text_QString);
    } else {
        self->QAccessibleObject::setText(static_cast<QAccessible::Text>(t), text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnSetText(QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_SetText_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_SetText_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->childAt(static_cast<int>(x), static_cast<int>(y));
    } else {
        return self->QAccessibleObject::childAt(static_cast<int>(x), static_cast<int>(y));
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_QBaseChildAt(const QAccessibleObject* self, int x, int y) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_ChildAt_IsBase(true);
        return vqaccessibleobject->childAt(static_cast<int>(x), static_cast<int>(y));
    } else {
        return self->QAccessibleObject::childAt(static_cast<int>(x), static_cast<int>(y));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChildAt(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_ChildAt_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ChildAt_Callback>(slot));
    }
}

// Derived class handler implementation
QWindow* QAccessibleObject_Window(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->window();
    } else {
        return self->QAccessibleObject::window();
    }
}

// Base class handler implementation
QWindow* QAccessibleObject_QBaseWindow(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Window_IsBase(true);
        return vqaccessibleobject->window();
    } else {
        return self->QAccessibleObject::window();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnWindow(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Window_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Window_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleObject_Relations(const QAccessibleObject* self, int match) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = vqaccessibleobject->relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleObject::relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleObject_QBaseRelations(const QAccessibleObject* self, int match) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Relations_IsBase(true);
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = vqaccessibleobject->relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleObject::relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRelations(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Relations_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Relations_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_FocusChild(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->focusChild();
    } else {
        return self->QAccessibleObject::focusChild();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_QBaseFocusChild(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_FocusChild_IsBase(true);
        return vqaccessibleobject->focusChild();
    } else {
        return self->QAccessibleObject::focusChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnFocusChild(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_FocusChild_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_FocusChild_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_Parent(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->parent();
    } else {
        return ((VirtualQAccessibleObject*)self)->parent();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_QBaseParent(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Parent_IsBase(true);
        return vqaccessibleobject->parent();
    } else {
        return ((VirtualQAccessibleObject*)self)->parent();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnParent(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Parent_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_Child(const QAccessibleObject* self, int index) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->child(static_cast<int>(index));
    } else {
        return ((VirtualQAccessibleObject*)self)->child(static_cast<int>(index));
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_QBaseChild(const QAccessibleObject* self, int index) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Child_IsBase(true);
        return vqaccessibleobject->child(static_cast<int>(index));
    } else {
        return ((VirtualQAccessibleObject*)self)->child(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChild(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Child_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Child_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleObject_ChildCount(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->childCount();
    } else {
        return ((VirtualQAccessibleObject*)self)->childCount();
    }
}

// Base class handler implementation
int QAccessibleObject_QBaseChildCount(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_ChildCount_IsBase(true);
        return vqaccessibleobject->childCount();
    } else {
        return ((VirtualQAccessibleObject*)self)->childCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChildCount(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_ChildCount_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ChildCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleObject_IndexOfChild(const QAccessibleObject* self, const QAccessibleInterface* param1) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->indexOfChild(param1);
    } else {
        return ((VirtualQAccessibleObject*)self)->indexOfChild(param1);
    }
}

// Base class handler implementation
int QAccessibleObject_QBaseIndexOfChild(const QAccessibleObject* self, const QAccessibleInterface* param1) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_IndexOfChild_IsBase(true);
        return vqaccessibleobject->indexOfChild(param1);
    } else {
        return ((VirtualQAccessibleObject*)self)->indexOfChild(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnIndexOfChild(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_IndexOfChild_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_IndexOfChild_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QAccessibleObject_Text(const QAccessibleObject* self, int t) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        QString _ret = vqaccessibleobject->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQAccessibleObject*)self)->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QAccessibleObject_QBaseText(const QAccessibleObject* self, int t) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Text_IsBase(true);
        QString _ret = vqaccessibleobject->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQAccessibleObject*)self)->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnText(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Text_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Text_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleObject_Role(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return static_cast<int>(vqaccessibleobject->role());
    } else {
        return static_cast<int>(((VirtualQAccessibleObject*)self)->role());
    }
}

// Base class handler implementation
int QAccessibleObject_QBaseRole(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Role_IsBase(true);
        return static_cast<int>(vqaccessibleobject->role());
    } else {
        return static_cast<int>(((VirtualQAccessibleObject*)self)->role());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRole(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_Role_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Role_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessible__State* QAccessibleObject_State(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return new QAccessible::State(vqaccessibleobject->state());
    } else {
        return new QAccessible::State(((VirtualQAccessibleObject*)self)->state());
    }
}

// Base class handler implementation
QAccessible__State* QAccessibleObject_QBaseState(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_State_IsBase(true);
        return new QAccessible::State(vqaccessibleobject->state());
    } else {
        return new QAccessible::State(((VirtualQAccessibleObject*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnState(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_State_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_State_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QAccessibleObject_ForegroundColor(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return new QColor(vqaccessibleobject->foregroundColor());
    } else {
        return new QColor(((VirtualQAccessibleObject*)self)->foregroundColor());
    }
}

// Base class handler implementation
QColor* QAccessibleObject_QBaseForegroundColor(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_ForegroundColor_IsBase(true);
        return new QColor(vqaccessibleobject->foregroundColor());
    } else {
        return new QColor(((VirtualQAccessibleObject*)self)->foregroundColor());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnForegroundColor(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_ForegroundColor_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QAccessibleObject_BackgroundColor(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return new QColor(vqaccessibleobject->backgroundColor());
    } else {
        return new QColor(((VirtualQAccessibleObject*)self)->backgroundColor());
    }
}

// Base class handler implementation
QColor* QAccessibleObject_QBaseBackgroundColor(const QAccessibleObject* self) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_BackgroundColor_IsBase(true);
        return new QColor(vqaccessibleobject->backgroundColor());
    } else {
        return new QColor(((VirtualQAccessibleObject*)self)->backgroundColor());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnBackgroundColor(const QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self));
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_BackgroundColor_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_BackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleObject_VirtualHook(QAccessibleObject* self, int id, void* data) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QAccessibleObject::virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void QAccessibleObject_QBaseVirtualHook(QAccessibleObject* self, int id, void* data) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_VirtualHook_IsBase(true);
        vqaccessibleobject->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QAccessibleObject::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnVirtualHook(QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_VirtualHook_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void* QAccessibleObject_InterfaceCast(QAccessibleObject* self, int param1) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        return vqaccessibleobject->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    } else {
        return self->QAccessibleObject::interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    }
}

// Base class handler implementation
void* QAccessibleObject_QBaseInterfaceCast(QAccessibleObject* self, int param1) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_InterfaceCast_IsBase(true);
        return vqaccessibleobject->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    } else {
        return self->QAccessibleObject::interface_cast(static_cast<QAccessible::InterfaceType>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnInterfaceCast(QAccessibleObject* self, intptr_t slot) {
    auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self);
    if (vqaccessibleobject && vqaccessibleobject->isVirtualQAccessibleObject) {
        vqaccessibleobject->setQAccessibleObject_InterfaceCast_Callback(reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_InterfaceCast_Callback>(slot));
    }
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
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleApplication::text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
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
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleApplication::text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
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
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = vqaccessibleapplication->relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleApplication::relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleApplication_QBaseRelations(const QAccessibleApplication* self, int match) {
    auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self));
    if (vqaccessibleapplication && vqaccessibleapplication->isVirtualQAccessibleApplication) {
        vqaccessibleapplication->setQAccessibleApplication_Relations_IsBase(true);
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = vqaccessibleapplication->relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleApplication::relations(static_cast<QAccessible::Relation>(match));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
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
        _out.len = _ret.size();
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
