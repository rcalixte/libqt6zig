#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QAccessibleWidget>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPair>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWindow>
#include <qaccessiblewidget.h>
#include "libqaccessiblewidget.h"
#include "libqaccessiblewidget.hxx"

QAccessibleWidget* QAccessibleWidget_new(QWidget* o) {
    return new VirtualQAccessibleWidget(o);
}

QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r) {
    return new VirtualQAccessibleWidget(o, static_cast<QAccessible::Role>(r));
}

QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQAccessibleWidget(o, static_cast<QAccessible::Role>(r), name_QString);
}

// Derived class handler implementation
bool QAccessibleWidget_IsValid(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->isValid();
    } else {
        return self->QAccessibleWidget::isValid();
    }
}

// Base class handler implementation
bool QAccessibleWidget_QBaseIsValid(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_IsValid_IsBase(true);
        return vqaccessiblewidget->isValid();
    } else {
        return self->QAccessibleWidget::isValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnIsValid(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_IsValid_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_IsValid_Callback>(slot));
    }
}

// Derived class handler implementation
QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->window();
    } else {
        return self->QAccessibleWidget::window();
    }
}

// Base class handler implementation
QWindow* QAccessibleWidget_QBaseWindow(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Window_IsBase(true);
        return vqaccessiblewidget->window();
    } else {
        return self->QAccessibleWidget::window();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnWindow(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Window_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Window_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleWidget_ChildCount(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->childCount();
    } else {
        return self->QAccessibleWidget::childCount();
    }
}

// Base class handler implementation
int QAccessibleWidget_QBaseChildCount(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ChildCount_IsBase(true);
        return vqaccessiblewidget->childCount();
    } else {
        return self->QAccessibleWidget::childCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChildCount(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ChildCount_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ChildCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->indexOfChild(child);
    } else {
        return self->QAccessibleWidget::indexOfChild(child);
    }
}

// Base class handler implementation
int QAccessibleWidget_QBaseIndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_IndexOfChild_IsBase(true);
        return vqaccessiblewidget->indexOfChild(child);
    } else {
        return self->QAccessibleWidget::indexOfChild(child);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnIndexOfChild(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_IndexOfChild_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_IndexOfChild_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleWidget_Relations(const QAccessibleWidget* self, int match) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = vqaccessiblewidget->relations(static_cast<QAccessible::Relation>(match));
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
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = self->QAccessibleWidget::relations(static_cast<QAccessible::Relation>(match));
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
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleWidget_QBaseRelations(const QAccessibleWidget* self, int match) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Relations_IsBase(true);
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = vqaccessiblewidget->relations(static_cast<QAccessible::Relation>(match));
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
        QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = self->QAccessibleWidget::relations(static_cast<QAccessible::Relation>(match));
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
void QAccessibleWidget_OnRelations(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Relations_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Relations_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->focusChild();
    } else {
        return self->QAccessibleWidget::focusChild();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseFocusChild(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_FocusChild_IsBase(true);
        return vqaccessiblewidget->focusChild();
    } else {
        return self->QAccessibleWidget::focusChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnFocusChild(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_FocusChild_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_FocusChild_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return new QRect(vqaccessiblewidget->rect());
    } else {
        return new QRect(((VirtualQAccessibleWidget*)self)->rect());
    }
}

// Base class handler implementation
QRect* QAccessibleWidget_QBaseRect(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Rect_IsBase(true);
        return new QRect(vqaccessiblewidget->rect());
    } else {
        return new QRect(((VirtualQAccessibleWidget*)self)->rect());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRect(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Rect_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Rect_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->parent();
    } else {
        return self->QAccessibleWidget::parent();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseParent(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Parent_IsBase(true);
        return vqaccessiblewidget->parent();
    } else {
        return self->QAccessibleWidget::parent();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnParent(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Parent_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->child(static_cast<int>(index));
    } else {
        return self->QAccessibleWidget::child(static_cast<int>(index));
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseChild(const QAccessibleWidget* self, int index) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Child_IsBase(true);
        return vqaccessiblewidget->child(static_cast<int>(index));
    } else {
        return self->QAccessibleWidget::child(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChild(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Child_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Child_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QAccessibleWidget_Text(const QAccessibleWidget* self, int t) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        QString _ret = vqaccessiblewidget->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleWidget::text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QAccessibleWidget_QBaseText(const QAccessibleWidget* self, int t) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Text_IsBase(true);
        QString _ret = vqaccessiblewidget->text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleWidget::text(static_cast<QAccessible::Text>(t));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnText(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Text_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Text_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleWidget_Role(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return static_cast<int>(vqaccessiblewidget->role());
    } else {
        return static_cast<int>(self->QAccessibleWidget::role());
    }
}

// Base class handler implementation
int QAccessibleWidget_QBaseRole(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Role_IsBase(true);
        return static_cast<int>(vqaccessiblewidget->role());
    } else {
        return static_cast<int>(self->QAccessibleWidget::role());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRole(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Role_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Role_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return new QAccessible::State(vqaccessiblewidget->state());
    } else {
        return new QAccessible::State(((VirtualQAccessibleWidget*)self)->state());
    }
}

// Base class handler implementation
QAccessible__State* QAccessibleWidget_QBaseState(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_State_IsBase(true);
        return new QAccessible::State(vqaccessiblewidget->state());
    } else {
        return new QAccessible::State(((VirtualQAccessibleWidget*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnState(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_State_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_State_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return new QColor(vqaccessiblewidget->foregroundColor());
    } else {
        return new QColor(((VirtualQAccessibleWidget*)self)->foregroundColor());
    }
}

// Base class handler implementation
QColor* QAccessibleWidget_QBaseForegroundColor(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ForegroundColor_IsBase(true);
        return new QColor(vqaccessiblewidget->foregroundColor());
    } else {
        return new QColor(((VirtualQAccessibleWidget*)self)->foregroundColor());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnForegroundColor(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ForegroundColor_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return new QColor(vqaccessiblewidget->backgroundColor());
    } else {
        return new QColor(((VirtualQAccessibleWidget*)self)->backgroundColor());
    }
}

// Base class handler implementation
QColor* QAccessibleWidget_QBaseBackgroundColor(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_BackgroundColor_IsBase(true);
        return new QColor(vqaccessiblewidget->backgroundColor());
    } else {
        return new QColor(((VirtualQAccessibleWidget*)self)->backgroundColor());
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnBackgroundColor(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_BackgroundColor_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_BackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void* QAccessibleWidget_InterfaceCast(QAccessibleWidget* self, int t) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->interface_cast(static_cast<QAccessible::InterfaceType>(t));
    } else {
        return self->QAccessibleWidget::interface_cast(static_cast<QAccessible::InterfaceType>(t));
    }
}

// Base class handler implementation
void* QAccessibleWidget_QBaseInterfaceCast(QAccessibleWidget* self, int t) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_InterfaceCast_IsBase(true);
        return vqaccessiblewidget->interface_cast(static_cast<QAccessible::InterfaceType>(t));
    } else {
        return self->QAccessibleWidget::interface_cast(static_cast<QAccessible::InterfaceType>(t));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnInterfaceCast(QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_InterfaceCast_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_InterfaceCast_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAccessibleWidget_ActionNames(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        QStringList _ret = vqaccessiblewidget->actionNames();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QAccessibleWidget::actionNames();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAccessibleWidget_QBaseActionNames(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ActionNames_IsBase(true);
        QStringList _ret = vqaccessiblewidget->actionNames();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QAccessibleWidget::actionNames();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnActionNames(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ActionNames_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ActionNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleWidget_DoAction(QAccessibleWidget* self, const libqt_string actionName) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->doAction(actionName_QString);
    } else {
        self->QAccessibleWidget::doAction(actionName_QString);
    }
}

// Base class handler implementation
void QAccessibleWidget_QBaseDoAction(QAccessibleWidget* self, const libqt_string actionName) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_DoAction_IsBase(true);
        vqaccessiblewidget->doAction(actionName_QString);
    } else {
        self->QAccessibleWidget::doAction(actionName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnDoAction(QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_DoAction_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_DoAction_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        QStringList _ret = vqaccessiblewidget->keyBindingsForAction(actionName_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QAccessibleWidget::keyBindingsForAction(actionName_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAccessibleWidget_QBaseKeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_KeyBindingsForAction_IsBase(true);
        QStringList _ret = vqaccessiblewidget->keyBindingsForAction(actionName_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = self->QAccessibleWidget::keyBindingsForAction(actionName_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnKeyBindingsForAction(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_KeyBindingsForAction_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_KeyBindingsForAction_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessibleWidget_Object(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->object();
    } else {
        return self->QAccessibleWidget::object();
    }
}

// Base class handler implementation
QObject* QAccessibleWidget_QBaseObject(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Object_IsBase(true);
        return vqaccessiblewidget->object();
    } else {
        return self->QAccessibleWidget::object();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnObject(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Object_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Object_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleWidget_SetText(QAccessibleWidget* self, int t, const libqt_string text) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setText(static_cast<QAccessible::Text>(t), text_QString);
    } else {
        self->QAccessibleWidget::setText(static_cast<QAccessible::Text>(t), text_QString);
    }
}

// Base class handler implementation
void QAccessibleWidget_QBaseSetText(QAccessibleWidget* self, int t, const libqt_string text) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_SetText_IsBase(true);
        vqaccessiblewidget->setText(static_cast<QAccessible::Text>(t), text_QString);
    } else {
        self->QAccessibleWidget::setText(static_cast<QAccessible::Text>(t), text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnSetText(QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_SetText_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_SetText_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleWidget_ChildAt(const QAccessibleWidget* self, int x, int y) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->childAt(static_cast<int>(x), static_cast<int>(y));
    } else {
        return self->QAccessibleWidget::childAt(static_cast<int>(x), static_cast<int>(y));
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_QBaseChildAt(const QAccessibleWidget* self, int x, int y) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ChildAt_IsBase(true);
        return vqaccessiblewidget->childAt(static_cast<int>(x), static_cast<int>(y));
    } else {
        return self->QAccessibleWidget::childAt(static_cast<int>(x), static_cast<int>(y));
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChildAt(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ChildAt_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ChildAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleWidget_VirtualHook(QAccessibleWidget* self, int id, void* data) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QAccessibleWidget::virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void QAccessibleWidget_QBaseVirtualHook(QAccessibleWidget* self, int id, void* data) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_VirtualHook_IsBase(true);
        vqaccessiblewidget->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QAccessibleWidget::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnVirtualHook(QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_VirtualHook_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QAccessibleWidget_LocalizedActionName(const QAccessibleWidget* self, const libqt_string name) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        QString _ret = vqaccessiblewidget->localizedActionName(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleWidget::localizedActionName(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QAccessibleWidget_QBaseLocalizedActionName(const QAccessibleWidget* self, const libqt_string name) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_LocalizedActionName_IsBase(true);
        QString _ret = vqaccessiblewidget->localizedActionName(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleWidget::localizedActionName(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnLocalizedActionName(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_LocalizedActionName_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_LocalizedActionName_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QAccessibleWidget_LocalizedActionDescription(const QAccessibleWidget* self, const libqt_string name) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        QString _ret = vqaccessiblewidget->localizedActionDescription(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleWidget::localizedActionDescription(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QAccessibleWidget_QBaseLocalizedActionDescription(const QAccessibleWidget* self, const libqt_string name) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_LocalizedActionDescription_IsBase(true);
        QString _ret = vqaccessiblewidget->localizedActionDescription(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QAccessibleWidget::localizedActionDescription(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnLocalizedActionDescription(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_LocalizedActionDescription_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_LocalizedActionDescription_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QAccessibleWidget_Widget(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->widget();
    } else {
        return ((VirtualQAccessibleWidget*)self)->widget();
    }
}

// Base class handler implementation
QWidget* QAccessibleWidget_QBaseWidget(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Widget_IsBase(true);
        return vqaccessiblewidget->widget();
    } else {
        return ((VirtualQAccessibleWidget*)self)->widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnWidget(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_Widget_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessibleWidget_ParentObject(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        return vqaccessiblewidget->parentObject();
    } else {
        return ((VirtualQAccessibleWidget*)self)->parentObject();
    }
}

// Base class handler implementation
QObject* QAccessibleWidget_QBaseParentObject(const QAccessibleWidget* self) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ParentObject_IsBase(true);
        return vqaccessiblewidget->parentObject();
    } else {
        return ((VirtualQAccessibleWidget*)self)->parentObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnParentObject(const QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self));
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_ParentObject_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ParentObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleWidget_AddControllingSignal(QAccessibleWidget* self, const libqt_string signal) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    QString signal_QString = QString::fromUtf8(signal.data, signal.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->addControllingSignal(signal_QString);
    } else {
        ((VirtualQAccessibleWidget*)self)->addControllingSignal(signal_QString);
    }
}

// Base class handler implementation
void QAccessibleWidget_QBaseAddControllingSignal(QAccessibleWidget* self, const libqt_string signal) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    QString signal_QString = QString::fromUtf8(signal.data, signal.len);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_AddControllingSignal_IsBase(true);
        vqaccessiblewidget->addControllingSignal(signal_QString);
    } else {
        ((VirtualQAccessibleWidget*)self)->addControllingSignal(signal_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnAddControllingSignal(QAccessibleWidget* self, intptr_t slot) {
    auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self);
    if (vqaccessiblewidget && vqaccessiblewidget->isVirtualQAccessibleWidget) {
        vqaccessiblewidget->setQAccessibleWidget_AddControllingSignal_Callback(reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_AddControllingSignal_Callback>(slot));
    }
}
