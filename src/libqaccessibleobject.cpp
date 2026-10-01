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
#include <QWindow>
#include <qaccessibleobject.h>
#include "libqaccessibleobject.h"
#include "libqaccessibleobject.hxx"

QAccessibleObject* QAccessibleObject_new(QObject* object) {
    return new VirtualQAccessibleObject(object);
}

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

// Base class handler implementation
bool QAccessibleObject_SuperIsValid(const QAccessibleObject* self) {
    return self->QAccessibleObject::isValid();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnIsValid(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_isvalid_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_IsValid_Callback>(slot);
}

// Base class handler implementation
QObject* QAccessibleObject_SuperObject(const QAccessibleObject* self) {
    return self->QAccessibleObject::object();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnObject(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_object_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Object_Callback>(slot);
}

// Base class handler implementation
QRect* QAccessibleObject_SuperRect(const QAccessibleObject* self) {
    return new QRect(self->QAccessibleObject::rect());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRect(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_rect_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Rect_Callback>(slot);
}

// Base class handler implementation
void QAccessibleObject_SuperSetText(QAccessibleObject* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QAccessibleObject::setText(static_cast<QAccessible::Text>(t), text_QString);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnSetText(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self))
        vqaccessibleobject->qaccessibleobject_settext_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_SetText_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_SuperChildAt(const QAccessibleObject* self, int x, int y) {
    return self->QAccessibleObject::childAt(static_cast<int>(x), static_cast<int>(y));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChildAt(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_childat_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ChildAt_Callback>(slot);
}

// Derived class handler implementation
QWindow* QAccessibleObject_Window(const QAccessibleObject* self) {
    return self->window();
}

// Base class handler implementation
QWindow* QAccessibleObject_SuperWindow(const QAccessibleObject* self) {
    return self->QAccessibleObject::window();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnWindow(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_window_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Window_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleObject_Relations(const QAccessibleObject* self, int match) {
    QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->relations(static_cast<QAccessible::Relation>(match));
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */* _arr = static_cast<pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = _lv_ret.second;
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleObject_SuperRelations(const QAccessibleObject* self, int match) {
    QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleObject::relations(static_cast<QAccessible::Relation>(match));
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */* _arr = static_cast<pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = _lv_ret.second;
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRelations(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_relations_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Relations_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_FocusChild(const QAccessibleObject* self) {
    return self->focusChild();
}

// Base class handler implementation
QAccessibleInterface* QAccessibleObject_SuperFocusChild(const QAccessibleObject* self) {
    return self->QAccessibleObject::focusChild();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnFocusChild(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_focuschild_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_FocusChild_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_Parent(const QAccessibleObject* self) {
    return self->parent();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnParent(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_parent_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Parent_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleObject_Child(const QAccessibleObject* self, int index) {
    return self->child(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChild(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_child_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Child_Callback>(slot);
}

// Derived class handler implementation
int QAccessibleObject_ChildCount(const QAccessibleObject* self) {
    return self->childCount();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnChildCount(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_childcount_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ChildCount_Callback>(slot);
}

// Derived class handler implementation
int QAccessibleObject_IndexOfChild(const QAccessibleObject* self, const QAccessibleInterface* param1) {
    return self->indexOfChild(param1);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnIndexOfChild(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_indexofchild_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_IndexOfChild_Callback>(slot);
}

// Derived class handler implementation
libqt_string QAccessibleObject_Text(const QAccessibleObject* self, int t) {
    auto _ret = self->text(static_cast<QAccessible::Text>(t));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnText(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_text_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Text_Callback>(slot);
}

// Derived class handler implementation
int QAccessibleObject_Role(const QAccessibleObject* self) {
    return static_cast<int>(self->role());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnRole(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_role_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_Role_Callback>(slot);
}

// Derived class handler implementation
QAccessible__State* QAccessibleObject_State(const QAccessibleObject* self) {
    return new QAccessible::State(self->state());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnState(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_state_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_State_Callback>(slot);
}

// Derived class handler implementation
QColor* QAccessibleObject_ForegroundColor(const QAccessibleObject* self) {
    return new QColor(self->foregroundColor());
}

// Base class handler implementation
QColor* QAccessibleObject_SuperForegroundColor(const QAccessibleObject* self) {
    return new QColor(self->QAccessibleObject::foregroundColor());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnForegroundColor(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_foregroundcolor_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_ForegroundColor_Callback>(slot);
}

// Derived class handler implementation
QColor* QAccessibleObject_BackgroundColor(const QAccessibleObject* self) {
    return new QColor(self->backgroundColor());
}

// Base class handler implementation
QColor* QAccessibleObject_SuperBackgroundColor(const QAccessibleObject* self) {
    return new QColor(self->QAccessibleObject::backgroundColor());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnBackgroundColor(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = const_cast<VirtualQAccessibleObject*>(dynamic_cast<const VirtualQAccessibleObject*>(self)))
        vqaccessibleobject->qaccessibleobject_backgroundcolor_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_BackgroundColor_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleObject_VirtualHook(QAccessibleObject* self, int id, void* data) {
    self->virtual_hook(static_cast<int>(id), data);
}

// Base class handler implementation
void QAccessibleObject_SuperVirtualHook(QAccessibleObject* self, int id, void* data) {
    self->QAccessibleObject::virtual_hook(static_cast<int>(id), data);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnVirtualHook(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self))
        vqaccessibleobject->qaccessibleobject_virtualhook_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
void* QAccessibleObject_InterfaceCast(QAccessibleObject* self, int param1) {
    return self->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

// Base class handler implementation
void* QAccessibleObject_SuperInterfaceCast(QAccessibleObject* self, int param1) {
    return self->QAccessibleObject::interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleObject_OnInterfaceCast(QAccessibleObject* self, intptr_t slot) {
    if (auto* vqaccessibleobject = dynamic_cast<VirtualQAccessibleObject*>(self))
        vqaccessibleobject->qaccessibleobject_interfacecast_callback = reinterpret_cast<VirtualQAccessibleObject::QAccessibleObject_InterfaceCast_Callback>(slot);
}

QAccessibleApplication* QAccessibleApplication_new() {
    return new VirtualQAccessibleApplication();
}

QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self) {
    return self->window();
}

int QAccessibleApplication_ChildCount(const QAccessibleApplication* self) {
    return self->childCount();
}

int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1) {
    return self->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self) {
    return self->focusChild();
}

QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self) {
    return self->parent();
}

QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index) {
    return self->child(static_cast<int>(index));
}

libqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t) {
    auto _ret = self->text(static_cast<QAccessible::Text>(t));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAccessibleApplication_Role(const QAccessibleApplication* self) {
    return static_cast<int>(self->role());
}

QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self) {
    return new QAccessible::State(self->state());
}

// Base class handler implementation
QWindow* QAccessibleApplication_SuperWindow(const QAccessibleApplication* self) {
    return self->QAccessibleApplication::window();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnWindow(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_window_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Window_Callback>(slot);
}

// Base class handler implementation
int QAccessibleApplication_SuperChildCount(const QAccessibleApplication* self) {
    return self->QAccessibleApplication::childCount();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChildCount(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_childcount_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ChildCount_Callback>(slot);
}

// Base class handler implementation
int QAccessibleApplication_SuperIndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1) {
    return self->QAccessibleApplication::indexOfChild(param1);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnIndexOfChild(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_indexofchild_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_IndexOfChild_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_SuperFocusChild(const QAccessibleApplication* self) {
    return self->QAccessibleApplication::focusChild();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnFocusChild(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_focuschild_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_FocusChild_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_SuperParent(const QAccessibleApplication* self) {
    return self->QAccessibleApplication::parent();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnParent(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_parent_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Parent_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_SuperChild(const QAccessibleApplication* self, int index) {
    return self->QAccessibleApplication::child(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChild(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_child_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Child_Callback>(slot);
}

// Base class handler implementation
libqt_string QAccessibleApplication_SuperText(const QAccessibleApplication* self, int t) {
    auto _ret = self->QAccessibleApplication::text(static_cast<QAccessible::Text>(t));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnText(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_text_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Text_Callback>(slot);
}

// Base class handler implementation
int QAccessibleApplication_SuperRole(const QAccessibleApplication* self) {
    return static_cast<int>(self->QAccessibleApplication::role());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRole(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_role_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Role_Callback>(slot);
}

// Base class handler implementation
QAccessible__State* QAccessibleApplication_SuperState(const QAccessibleApplication* self) {
    return new QAccessible::State(self->QAccessibleApplication::state());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnState(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_state_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_State_Callback>(slot);
}

// Derived class handler implementation
bool QAccessibleApplication_IsValid(const QAccessibleApplication* self) {
    return self->isValid();
}

// Base class handler implementation
bool QAccessibleApplication_SuperIsValid(const QAccessibleApplication* self) {
    return self->QAccessibleApplication::isValid();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnIsValid(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_isvalid_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_IsValid_Callback>(slot);
}

// Derived class handler implementation
QObject* QAccessibleApplication_Object(const QAccessibleApplication* self) {
    return self->object();
}

// Base class handler implementation
QObject* QAccessibleApplication_SuperObject(const QAccessibleApplication* self) {
    return self->QAccessibleApplication::object();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnObject(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_object_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Object_Callback>(slot);
}

// Derived class handler implementation
QRect* QAccessibleApplication_Rect(const QAccessibleApplication* self) {
    return new QRect(self->rect());
}

// Base class handler implementation
QRect* QAccessibleApplication_SuperRect(const QAccessibleApplication* self) {
    return new QRect(self->QAccessibleApplication::rect());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRect(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_rect_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Rect_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleApplication_SetText(QAccessibleApplication* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

// Base class handler implementation
void QAccessibleApplication_SuperSetText(QAccessibleApplication* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QAccessibleApplication::setText(static_cast<QAccessible::Text>(t), text_QString);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnSetText(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self))
        vqaccessibleapplication->qaccessibleapplication_settext_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_SetText_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleApplication_ChildAt(const QAccessibleApplication* self, int x, int y) {
    return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

// Base class handler implementation
QAccessibleInterface* QAccessibleApplication_SuperChildAt(const QAccessibleApplication* self, int x, int y) {
    return self->QAccessibleApplication::childAt(static_cast<int>(x), static_cast<int>(y));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnChildAt(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_childat_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ChildAt_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleApplication_Relations(const QAccessibleApplication* self, int match) {
    QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->relations(static_cast<QAccessible::Relation>(match));
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */* _arr = static_cast<pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = _lv_ret.second;
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleApplication_SuperRelations(const QAccessibleApplication* self, int match) {
    QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleApplication::relations(static_cast<QAccessible::Relation>(match));
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */* _arr = static_cast<pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = _lv_ret.second;
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnRelations(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_relations_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_Relations_Callback>(slot);
}

// Derived class handler implementation
QColor* QAccessibleApplication_ForegroundColor(const QAccessibleApplication* self) {
    return new QColor(self->foregroundColor());
}

// Base class handler implementation
QColor* QAccessibleApplication_SuperForegroundColor(const QAccessibleApplication* self) {
    return new QColor(self->QAccessibleApplication::foregroundColor());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnForegroundColor(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_foregroundcolor_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_ForegroundColor_Callback>(slot);
}

// Derived class handler implementation
QColor* QAccessibleApplication_BackgroundColor(const QAccessibleApplication* self) {
    return new QColor(self->backgroundColor());
}

// Base class handler implementation
QColor* QAccessibleApplication_SuperBackgroundColor(const QAccessibleApplication* self) {
    return new QColor(self->QAccessibleApplication::backgroundColor());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnBackgroundColor(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = const_cast<VirtualQAccessibleApplication*>(dynamic_cast<const VirtualQAccessibleApplication*>(self)))
        vqaccessibleapplication->qaccessibleapplication_backgroundcolor_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_BackgroundColor_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleApplication_VirtualHook(QAccessibleApplication* self, int id, void* data) {
    self->virtual_hook(static_cast<int>(id), data);
}

// Base class handler implementation
void QAccessibleApplication_SuperVirtualHook(QAccessibleApplication* self, int id, void* data) {
    self->QAccessibleApplication::virtual_hook(static_cast<int>(id), data);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnVirtualHook(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self))
        vqaccessibleapplication->qaccessibleapplication_virtualhook_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
void* QAccessibleApplication_InterfaceCast(QAccessibleApplication* self, int param1) {
    return self->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

// Base class handler implementation
void* QAccessibleApplication_SuperInterfaceCast(QAccessibleApplication* self, int param1) {
    return self->QAccessibleApplication::interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleApplication_OnInterfaceCast(QAccessibleApplication* self, intptr_t slot) {
    if (auto* vqaccessibleapplication = dynamic_cast<VirtualQAccessibleApplication*>(self))
        vqaccessibleapplication->qaccessibleapplication_interfacecast_callback = reinterpret_cast<VirtualQAccessibleApplication::QAccessibleApplication_InterfaceCast_Callback>(slot);
}

void QAccessibleApplication_Delete(QAccessibleApplication* self) {
    delete self;
}
