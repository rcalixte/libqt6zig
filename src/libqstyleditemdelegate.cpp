#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QItemEditorFactory>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qstyleditemdelegate.h>
#include "libqstyleditemdelegate.h"
#include "libqstyleditemdelegate.hxx"

QStyledItemDelegate* QStyledItemDelegate_new() {
    return new VirtualQStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
    return new VirtualQStyledItemDelegate(parent);
}

QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStyledItemDelegate_Metacast(QStyledItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStyledItemDelegate_Metacall(QStyledItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStyledItemDelegate_Tr(const char* s) {
    auto _ret = QStyledItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->sizeHint(*option, *index));
}

QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->setEditorData(editor, *index);
}

void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->setModelData(editor, model, *index);
}

void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self) {
    return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
    self->setItemEditorFactory(factory);
}

libqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto _ret = self->displayText(*value, *locale);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        vqstyleditemdelegate->initStyleOption(option, *index);
    }
}

bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        return vqstyleditemdelegate->eventFilter(object, event);
    }
    qFatal("Error: Protected method QStyledItemDelegate::eventFilter called without a directly constructed type");
}

bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    }
    qFatal("Error: Protected method QStyledItemDelegate::editorEvent called without a directly constructed type");
}

libqt_string QStyledItemDelegate_Tr2(const char* s, const char* c) {
    auto _ret = QStyledItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
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
QMetaObject* QStyledItemDelegate_SuperMetaObject(const QStyledItemDelegate* self) {
    return (QMetaObject*)self->QStyledItemDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnMetaObject(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_metaobject_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStyledItemDelegate_SuperMetacast(QStyledItemDelegate* self, const char* param1) {
    return self->QStyledItemDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnMetacast(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_metacast_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStyledItemDelegate_SuperMetacall(QStyledItemDelegate* self, int param1, int param2, void** param3) {
    return self->QStyledItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnMetacall(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_metacall_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Metacall_Callback>(slot);
}

// Base class handler implementation
void QStyledItemDelegate_SuperPaint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->QStyledItemDelegate::paint(painter, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnPaint(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_paint_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Paint_Callback>(slot);
}

// Base class handler implementation
QSize* QStyledItemDelegate_SuperSizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->QStyledItemDelegate::sizeHint(*option, *index));
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSizeHint(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_sizehint_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SizeHint_Callback>(slot);
}

// Base class handler implementation
QWidget* QStyledItemDelegate_SuperCreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QStyledItemDelegate::createEditor(parent, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnCreateEditor(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_createeditor_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CreateEditor_Callback>(slot);
}

// Base class handler implementation
void QStyledItemDelegate_SuperSetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->QStyledItemDelegate::setEditorData(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSetEditorData(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_seteditordata_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetEditorData_Callback>(slot);
}

// Base class handler implementation
void QStyledItemDelegate_SuperSetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->QStyledItemDelegate::setModelData(editor, model, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSetModelData(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_setmodeldata_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetModelData_Callback>(slot);
}

// Base class handler implementation
void QStyledItemDelegate_SuperUpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->QStyledItemDelegate::updateEditorGeometry(editor, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnUpdateEditorGeometry(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_updateeditorgeometry_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_UpdateEditorGeometry_Callback>(slot);
}

// Base class handler implementation
libqt_string QStyledItemDelegate_SuperDisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto _ret = self->QStyledItemDelegate::displayText(*value, *locale);
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
void QStyledItemDelegate_OnDisplayText(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_displaytext_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisplayText_Callback>(slot);
}

// Base class handler implementation
void QStyledItemDelegate_SuperInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->QStyledItemDelegate::initStyleOption(option, *index);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnInitStyleOption(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_initstyleoption_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_InitStyleOption_Callback>(slot);
}

// Base class handler implementation
bool QStyledItemDelegate_SuperEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return vqstyleditemdelegate->QStyledItemDelegate::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEventFilter(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_eventfilter_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QStyledItemDelegate_SuperEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return vqstyleditemdelegate->QStyledItemDelegate::editorEvent(event, model, *option, *index);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::editorEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEditorEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_editorevent_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EditorEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyledItemDelegate_DestroyEditor(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->destroyEditor(editor, *index);
}

// Base class handler implementation
void QStyledItemDelegate_SuperDestroyEditor(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->QStyledItemDelegate::destroyEditor(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDestroyEditor(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_destroyeditor_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DestroyEditor_Callback>(slot);
}

// Derived class handler implementation
bool QStyledItemDelegate_HelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->helpEvent(event, view, *option, *index);
}

// Base class handler implementation
bool QStyledItemDelegate_SuperHelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QStyledItemDelegate::helpEvent(event, view, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnHelpEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_helpevent_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_HelpEvent_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of int */ QStyledItemDelegate_PaintingRoles(const QStyledItemDelegate* self) {
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
libqt_list /* of int */ QStyledItemDelegate_SuperPaintingRoles(const QStyledItemDelegate* self) {
    QList<int> _ret = self->QStyledItemDelegate::paintingRoles();
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
void QStyledItemDelegate_OnPaintingRoles(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self)))
        vqstyleditemdelegate->qstyleditemdelegate_paintingroles_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_PaintingRoles_Callback>(slot);
}

// Derived class handler implementation
bool QStyledItemDelegate_Event(QStyledItemDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStyledItemDelegate_SuperEvent(QStyledItemDelegate* self, QEvent* event) {
    return self->QStyledItemDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_event_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
void QStyledItemDelegate_TimerEvent(QStyledItemDelegate* self, QTimerEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        vqstyleditemdelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStyledItemDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyledItemDelegate_SuperTimerEvent(QStyledItemDelegate* self, QTimerEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->QStyledItemDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnTimerEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_timerevent_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyledItemDelegate_ChildEvent(QStyledItemDelegate* self, QChildEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        vqstyleditemdelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStyledItemDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyledItemDelegate_SuperChildEvent(QStyledItemDelegate* self, QChildEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->QStyledItemDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnChildEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_childevent_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyledItemDelegate_CustomEvent(QStyledItemDelegate* self, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        vqstyleditemdelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStyledItemDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyledItemDelegate_SuperCustomEvent(QStyledItemDelegate* self, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->QStyledItemDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnCustomEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_customevent_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStyledItemDelegate_ConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        vqstyleditemdelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStyledItemDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyledItemDelegate_SuperConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->QStyledItemDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnConnectNotify(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_connectnotify_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStyledItemDelegate_DisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate) {
        vqstyleditemdelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStyledItemDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStyledItemDelegate_SuperDisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->QStyledItemDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStyledItemDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDisconnectNotify(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self))
        vqstyleditemdelegate->qstyleditemdelegate_disconnectnotify_callback = reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QStyledItemDelegate_Sender(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->VirtualQStyledItemDelegate::sender();
    } else
        qFatal("Error: Protected method QStyledItemDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStyledItemDelegate_SenderSignalIndex(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->VirtualQStyledItemDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStyledItemDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStyledItemDelegate_Receivers(const QStyledItemDelegate* self, const char* signal) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->VirtualQStyledItemDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method QStyledItemDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStyledItemDelegate_IsSignalConnected(const QStyledItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->VirtualQStyledItemDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStyledItemDelegate::isSignalConnected called without a directly constructed type");
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
    delete self;
}
