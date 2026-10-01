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

QAccessibleActionInterface* QAccessibleWidget_AsQAccessibleActionInterface(const QAccessibleWidget* self) {
    return const_cast<QAccessibleWidget*>(self);
}

QAccessibleWidget* QAccessibleWidget_FromQAccessibleActionInterface(const QAccessibleActionInterface* _qaccessibleactioninterface) {
    return dynamic_cast<QAccessibleWidget*>(const_cast<QAccessibleActionInterface*>(_qaccessibleactioninterface));
}

bool QAccessibleWidget_IsValid(const QAccessibleWidget* self) {
    return self->isValid();
}

QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self) {
    return self->window();
}

int QAccessibleWidget_ChildCount(const QAccessibleWidget* self) {
    return self->childCount();
}

int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
    return self->indexOfChild(child);
}

libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleWidget_Relations(const QAccessibleWidget* self, int match) {
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

QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self) {
    return self->focusChild();
}

QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self) {
    return new QRect(self->rect());
}

QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self) {
    return self->parent();
}

QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index) {
    return self->child(static_cast<int>(index));
}

libqt_string QAccessibleWidget_Text(const QAccessibleWidget* self, int t) {
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

int QAccessibleWidget_Role(const QAccessibleWidget* self) {
    return static_cast<int>(self->role());
}

QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self) {
    return new QAccessible::State(self->state());
}

QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self) {
    return new QColor(self->foregroundColor());
}

QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self) {
    return new QColor(self->backgroundColor());
}

void* QAccessibleWidget_InterfaceCast(QAccessibleWidget* self, int t) {
    return self->interface_cast(static_cast<QAccessible::InterfaceType>(t));
}

libqt_list /* of libqt_string */ QAccessibleWidget_ActionNames(const QAccessibleWidget* self) {
    QList<QString> _ret = self->actionNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAccessibleWidget_DoAction(QAccessibleWidget* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    self->doAction(actionName_QString);
}

libqt_list /* of libqt_string */ QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    QList<QString> _ret = self->keyBindingsForAction(actionName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
bool QAccessibleWidget_SuperIsValid(const QAccessibleWidget* self) {
    return self->QAccessibleWidget::isValid();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnIsValid(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_isvalid_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_IsValid_Callback>(slot);
}

// Base class handler implementation
QWindow* QAccessibleWidget_SuperWindow(const QAccessibleWidget* self) {
    return self->QAccessibleWidget::window();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnWindow(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_window_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Window_Callback>(slot);
}

// Base class handler implementation
int QAccessibleWidget_SuperChildCount(const QAccessibleWidget* self) {
    return self->QAccessibleWidget::childCount();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChildCount(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_childcount_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ChildCount_Callback>(slot);
}

// Base class handler implementation
int QAccessibleWidget_SuperIndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child) {
    return self->QAccessibleWidget::indexOfChild(child);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnIndexOfChild(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_indexofchild_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_IndexOfChild_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleWidget_SuperRelations(const QAccessibleWidget* self, int match) {
    QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> _ret = self->QAccessibleWidget::relations(static_cast<QAccessible::Relation>(match));
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
void QAccessibleWidget_OnRelations(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_relations_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Relations_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_SuperFocusChild(const QAccessibleWidget* self) {
    return self->QAccessibleWidget::focusChild();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnFocusChild(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_focuschild_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_FocusChild_Callback>(slot);
}

// Base class handler implementation
QRect* QAccessibleWidget_SuperRect(const QAccessibleWidget* self) {
    return new QRect(self->QAccessibleWidget::rect());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRect(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_rect_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Rect_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_SuperParent(const QAccessibleWidget* self) {
    return self->QAccessibleWidget::parent();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnParent(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_parent_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Parent_Callback>(slot);
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_SuperChild(const QAccessibleWidget* self, int index) {
    return self->QAccessibleWidget::child(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChild(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_child_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Child_Callback>(slot);
}

// Base class handler implementation
libqt_string QAccessibleWidget_SuperText(const QAccessibleWidget* self, int t) {
    auto _ret = self->QAccessibleWidget::text(static_cast<QAccessible::Text>(t));
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
void QAccessibleWidget_OnText(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_text_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Text_Callback>(slot);
}

// Base class handler implementation
int QAccessibleWidget_SuperRole(const QAccessibleWidget* self) {
    return static_cast<int>(self->QAccessibleWidget::role());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnRole(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_role_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Role_Callback>(slot);
}

// Base class handler implementation
QAccessible__State* QAccessibleWidget_SuperState(const QAccessibleWidget* self) {
    return new QAccessible::State(self->QAccessibleWidget::state());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnState(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_state_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_State_Callback>(slot);
}

// Base class handler implementation
QColor* QAccessibleWidget_SuperForegroundColor(const QAccessibleWidget* self) {
    return new QColor(self->QAccessibleWidget::foregroundColor());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnForegroundColor(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_foregroundcolor_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ForegroundColor_Callback>(slot);
}

// Base class handler implementation
QColor* QAccessibleWidget_SuperBackgroundColor(const QAccessibleWidget* self) {
    return new QColor(self->QAccessibleWidget::backgroundColor());
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnBackgroundColor(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_backgroundcolor_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_BackgroundColor_Callback>(slot);
}

// Base class handler implementation
void* QAccessibleWidget_SuperInterfaceCast(QAccessibleWidget* self, int t) {
    return self->QAccessibleWidget::interface_cast(static_cast<QAccessible::InterfaceType>(t));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnInterfaceCast(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self))
        vqaccessiblewidget->qaccessiblewidget_interfacecast_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_InterfaceCast_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAccessibleWidget_SuperActionNames(const QAccessibleWidget* self) {
    QList<QString> _ret = self->QAccessibleWidget::actionNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnActionNames(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_actionnames_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ActionNames_Callback>(slot);
}

// Base class handler implementation
void QAccessibleWidget_SuperDoAction(QAccessibleWidget* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    self->QAccessibleWidget::doAction(actionName_QString);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnDoAction(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self))
        vqaccessiblewidget->qaccessiblewidget_doaction_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_DoAction_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QAccessibleWidget_SuperKeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    QList<QString> _ret = self->QAccessibleWidget::keyBindingsForAction(actionName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnKeyBindingsForAction(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_keybindingsforaction_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_KeyBindingsForAction_Callback>(slot);
}

// Derived class handler implementation
QObject* QAccessibleWidget_Object(const QAccessibleWidget* self) {
    return self->object();
}

// Base class handler implementation
QObject* QAccessibleWidget_SuperObject(const QAccessibleWidget* self) {
    return self->QAccessibleWidget::object();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnObject(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_object_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_Object_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleWidget_SetText(QAccessibleWidget* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

// Base class handler implementation
void QAccessibleWidget_SuperSetText(QAccessibleWidget* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QAccessibleWidget::setText(static_cast<QAccessible::Text>(t), text_QString);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnSetText(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self))
        vqaccessiblewidget->qaccessiblewidget_settext_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_SetText_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleWidget_ChildAt(const QAccessibleWidget* self, int x, int y) {
    return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

// Base class handler implementation
QAccessibleInterface* QAccessibleWidget_SuperChildAt(const QAccessibleWidget* self, int x, int y) {
    return self->QAccessibleWidget::childAt(static_cast<int>(x), static_cast<int>(y));
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnChildAt(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_childat_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_ChildAt_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleWidget_VirtualHook(QAccessibleWidget* self, int id, void* data) {
    self->virtual_hook(static_cast<int>(id), data);
}

// Base class handler implementation
void QAccessibleWidget_SuperVirtualHook(QAccessibleWidget* self, int id, void* data) {
    self->QAccessibleWidget::virtual_hook(static_cast<int>(id), data);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleWidget_OnVirtualHook(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self))
        vqaccessiblewidget->qaccessiblewidget_virtualhook_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
libqt_string QAccessibleWidget_LocalizedActionName(const QAccessibleWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto _ret = self->localizedActionName(name_QString);
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
libqt_string QAccessibleWidget_SuperLocalizedActionName(const QAccessibleWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto _ret = self->QAccessibleWidget::localizedActionName(name_QString);
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
void QAccessibleWidget_OnLocalizedActionName(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_localizedactionname_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_LocalizedActionName_Callback>(slot);
}

// Derived class handler implementation
libqt_string QAccessibleWidget_LocalizedActionDescription(const QAccessibleWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto _ret = self->localizedActionDescription(name_QString);
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
libqt_string QAccessibleWidget_SuperLocalizedActionDescription(const QAccessibleWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto _ret = self->QAccessibleWidget::localizedActionDescription(name_QString);
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
void QAccessibleWidget_OnLocalizedActionDescription(QAccessibleWidget* self, intptr_t slot) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self)))
        vqaccessiblewidget->qaccessiblewidget_localizedactiondescription_callback = reinterpret_cast<VirtualQAccessibleWidget::QAccessibleWidget_LocalizedActionDescription_Callback>(slot);
}

// Derived class protected handler implementation
QWidget* QAccessibleWidget_Widget(const QAccessibleWidget* self) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self))) {
        return vqaccessiblewidget->VirtualQAccessibleWidget::widget();
    } else
        qFatal("Error: Protected method QAccessibleWidget::widget called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAccessibleWidget_ParentObject(const QAccessibleWidget* self) {
    if (auto* vqaccessiblewidget = const_cast<VirtualQAccessibleWidget*>(dynamic_cast<const VirtualQAccessibleWidget*>(self))) {
        return vqaccessiblewidget->VirtualQAccessibleWidget::parentObject();
    } else
        qFatal("Error: Protected method QAccessibleWidget::parentObject called without a directly constructed type");
}

// Derived class protected handler implementation
void QAccessibleWidget_AddControllingSignal(QAccessibleWidget* self, const libqt_string signal) {
    if (auto* vqaccessiblewidget = dynamic_cast<VirtualQAccessibleWidget*>(self)) {
        QString signal_QString = QString::fromUtf8(signal.data, signal.len);
        vqaccessiblewidget->VirtualQAccessibleWidget::addControllingSignal(signal_QString);
    } else
        qFatal("Error: Protected method QAccessibleWidget::addControllingSignal called without a directly constructed type");
}
