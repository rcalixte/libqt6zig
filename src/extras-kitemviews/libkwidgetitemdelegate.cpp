#include <KWidgetItemDelegate>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWidget>
#include <kwidgetitemdelegate.h>
#include "libkwidgetitemdelegate.h"
#include "libkwidgetitemdelegate.hxx"

KWidgetItemDelegate* KWidgetItemDelegate_new(QAbstractItemView* itemView) {
    return new VirtualKWidgetItemDelegate(itemView);
}

KWidgetItemDelegate* KWidgetItemDelegate_new2(QAbstractItemView* itemView, QObject* parent) {
    return new VirtualKWidgetItemDelegate(itemView, parent);
}

QMetaObject* KWidgetItemDelegate_MetaObject(const KWidgetItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWidgetItemDelegate_Metacast(KWidgetItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWidgetItemDelegate_Metacall(KWidgetItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KWidgetItemDelegate_Tr(const char* s) {
    auto _ret = KWidgetItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemView* KWidgetItemDelegate_ItemView(const KWidgetItemDelegate* self) {
    return self->itemView();
}

QPersistentModelIndex* KWidgetItemDelegate_FocusedIndex(const KWidgetItemDelegate* self) {
    return new QPersistentModelIndex(self->focusedIndex());
}

void KWidgetItemDelegate_ResetModel(KWidgetItemDelegate* self) {
    self->resetModel();
}

libqt_list /* of QWidget* */ KWidgetItemDelegate_CreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<const VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        QList<QWidget*> _ret = vkwidgetitemdelegate->createItemWidgets(*index);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
    qFatal("Error: Protected method KWidgetItemDelegate::createItemWidgets called without a directly constructed type");
}

void KWidgetItemDelegate_UpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index) {
    QList<QWidget*> widgets_QList;
    widgets_QList.reserve(widgets.len);
    QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
    for (size_t i = 0; i < widgets.len; ++i) {
        widgets_QList.push_back(widgets_arr[i]);
    }
    auto* vkwidgetitemdelegate = dynamic_cast<const VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        vkwidgetitemdelegate->updateItemWidgets(widgets_QList, *option, *index);
    }
}

libqt_string KWidgetItemDelegate_Tr2(const char* s, const char* c) {
    auto _ret = KWidgetItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWidgetItemDelegate_Tr3(const char* s, const char* c, int n) {
    auto _ret = KWidgetItemDelegate::tr(s, c, static_cast<int>(n));
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
QMetaObject* KWidgetItemDelegate_SuperMetaObject(const KWidgetItemDelegate* self) {
    return (QMetaObject*)self->KWidgetItemDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnMetaObject(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_metaobject_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KWidgetItemDelegate_SuperMetacast(KWidgetItemDelegate* self, const char* param1) {
    return self->KWidgetItemDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnMetacast(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_metacast_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int KWidgetItemDelegate_SuperMetacall(KWidgetItemDelegate* self, int param1, int param2, void** param3) {
    return self->KWidgetItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnMetacall(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_metacall_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnCreateItemWidgets(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_createitemwidgets_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_CreateItemWidgets_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnUpdateItemWidgets(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_updateitemwidgets_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_UpdateItemWidgets_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_Paint(const KWidgetItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->paint(painter, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnPaint(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_paint_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Paint_Callback>(slot);
}

// Derived class handler implementation
QSize* KWidgetItemDelegate_SizeHint(const KWidgetItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->sizeHint(*option, *index));
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSizeHint(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_sizehint_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QWidget* KWidgetItemDelegate_CreateEditor(const KWidgetItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->createEditor(parent, *option, *index);
}

// Base class handler implementation
QWidget* KWidgetItemDelegate_SuperCreateEditor(const KWidgetItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KWidgetItemDelegate::createEditor(parent, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnCreateEditor(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_createeditor_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_CreateEditor_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_DestroyEditor(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->destroyEditor(editor, *index);
}

// Base class handler implementation
void KWidgetItemDelegate_SuperDestroyEditor(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->KWidgetItemDelegate::destroyEditor(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnDestroyEditor(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_destroyeditor_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_DestroyEditor_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_SetEditorData(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->setEditorData(editor, *index);
}

// Base class handler implementation
void KWidgetItemDelegate_SuperSetEditorData(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->KWidgetItemDelegate::setEditorData(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSetEditorData(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_seteditordata_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SetEditorData_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_SetModelData(const KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->setModelData(editor, model, *index);
}

// Base class handler implementation
void KWidgetItemDelegate_SuperSetModelData(const KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->KWidgetItemDelegate::setModelData(editor, model, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSetModelData(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_setmodeldata_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SetModelData_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_UpdateEditorGeometry(const KWidgetItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateEditorGeometry(editor, *option, *index);
}

// Base class handler implementation
void KWidgetItemDelegate_SuperUpdateEditorGeometry(const KWidgetItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->KWidgetItemDelegate::updateEditorGeometry(editor, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnUpdateEditorGeometry(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_updateeditorgeometry_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_UpdateEditorGeometry_Callback>(slot);
}

// Derived class handler implementation
bool KWidgetItemDelegate_EditorEvent(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->editorEvent(event, model, *option, *index);
}

// Base class handler implementation
bool KWidgetItemDelegate_SuperEditorEvent(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KWidgetItemDelegate::editorEvent(event, model, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnEditorEvent(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_editorevent_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_EditorEvent_Callback>(slot);
}

// Derived class handler implementation
bool KWidgetItemDelegate_HelpEvent(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->helpEvent(event, view, *option, *index);
}

// Base class handler implementation
bool KWidgetItemDelegate_SuperHelpEvent(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KWidgetItemDelegate::helpEvent(event, view, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnHelpEvent(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_helpevent_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_HelpEvent_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of int */ KWidgetItemDelegate_PaintingRoles(const KWidgetItemDelegate* self) {
    QList<int> _ret = self->paintingRoles();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of int */ KWidgetItemDelegate_SuperPaintingRoles(const KWidgetItemDelegate* self) {
    QList<int> _ret = self->KWidgetItemDelegate::paintingRoles();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnPaintingRoles(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self)))
        vkwidgetitemdelegate->kwidgetitemdelegate_paintingroles_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_PaintingRoles_Callback>(slot);
}

// Derived class handler implementation
bool KWidgetItemDelegate_Event(KWidgetItemDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KWidgetItemDelegate_SuperEvent(KWidgetItemDelegate* self, QEvent* event) {
    return self->KWidgetItemDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnEvent(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_event_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
bool KWidgetItemDelegate_EventFilter(KWidgetItemDelegate* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KWidgetItemDelegate_SuperEventFilter(KWidgetItemDelegate* self, QObject* watched, QEvent* event) {
    return self->KWidgetItemDelegate::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnEventFilter(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_eventfilter_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_TimerEvent(KWidgetItemDelegate* self, QTimerEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        vkwidgetitemdelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWidgetItemDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWidgetItemDelegate_SuperTimerEvent(KWidgetItemDelegate* self, QTimerEvent* event) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self)) {
        vkwidgetitemdelegate->KWidgetItemDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KWidgetItemDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnTimerEvent(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_timerevent_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_ChildEvent(KWidgetItemDelegate* self, QChildEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        vkwidgetitemdelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWidgetItemDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWidgetItemDelegate_SuperChildEvent(KWidgetItemDelegate* self, QChildEvent* event) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self)) {
        vkwidgetitemdelegate->KWidgetItemDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KWidgetItemDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnChildEvent(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_childevent_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_CustomEvent(KWidgetItemDelegate* self, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        vkwidgetitemdelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KWidgetItemDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KWidgetItemDelegate_SuperCustomEvent(KWidgetItemDelegate* self, QEvent* event) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self)) {
        vkwidgetitemdelegate->KWidgetItemDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KWidgetItemDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnCustomEvent(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_customevent_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_ConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        vkwidgetitemdelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWidgetItemDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWidgetItemDelegate_SuperConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self)) {
        vkwidgetitemdelegate->KWidgetItemDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWidgetItemDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnConnectNotify(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_connectnotify_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KWidgetItemDelegate_DisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate) {
        vkwidgetitemdelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KWidgetItemDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KWidgetItemDelegate_SuperDisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self)) {
        vkwidgetitemdelegate->KWidgetItemDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KWidgetItemDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnDisconnectNotify(KWidgetItemDelegate* self, intptr_t slot) {
    if (auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self))
        vkwidgetitemdelegate->kwidgetitemdelegate_disconnectnotify_callback = reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KWidgetItemDelegate_SetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self))) {
        QList<QEvent::Type> types_QList;
        types_QList.reserve(types.len);
        int* types_arr = static_cast<int*>(types.data);
        for (size_t i = 0; i < types.len; ++i) {
            types_QList.push_back(static_cast<QEvent::Type>(types_arr[i]));
        }
        vkwidgetitemdelegate->VirtualKWidgetItemDelegate::setBlockedEventTypes(widget, types_QList);
    } else
        qFatal("Error: Protected method KWidgetItemDelegate::setBlockedEventTypes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of int */ KWidgetItemDelegate_BlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self))) {
        QList<QEvent::Type> _ret = vkwidgetitemdelegate->VirtualKWidgetItemDelegate::blockedEventTypes(widget);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KWidgetItemDelegate::blockedEventTypes called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KWidgetItemDelegate_Sender(const KWidgetItemDelegate* self) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self))) {
        return vkwidgetitemdelegate->VirtualKWidgetItemDelegate::sender();
    } else
        qFatal("Error: Protected method KWidgetItemDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KWidgetItemDelegate_SenderSignalIndex(const KWidgetItemDelegate* self) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self))) {
        return vkwidgetitemdelegate->VirtualKWidgetItemDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method KWidgetItemDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KWidgetItemDelegate_Receivers(const KWidgetItemDelegate* self, const char* signal) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self))) {
        return vkwidgetitemdelegate->VirtualKWidgetItemDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method KWidgetItemDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KWidgetItemDelegate_IsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self))) {
        return vkwidgetitemdelegate->VirtualKWidgetItemDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KWidgetItemDelegate::isSignalConnected called without a directly constructed type");
}

void KWidgetItemDelegate_Delete(KWidgetItemDelegate* self) {
    delete self;
}
