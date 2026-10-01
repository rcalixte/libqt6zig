#include <KPageModel>
#include <KPageWidgetItem>
#include <KPageWidgetModel>
#include <QAbstractItemModel>
#include <QAction>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kpagewidgetmodel.h>
#include "libkpagewidgetmodel.h"
#include "libkpagewidgetmodel.hxx"

KPageWidgetItem* KPageWidgetItem_new(QWidget* widget) {
    return new VirtualKPageWidgetItem(widget);
}

KPageWidgetItem* KPageWidgetItem_new2(QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualKPageWidgetItem(widget, name_QString);
}

QMetaObject* KPageWidgetItem_MetaObject(const KPageWidgetItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageWidgetItem_Metacast(KPageWidgetItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageWidgetItem_Metacall(KPageWidgetItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPageWidgetItem_Tr(const char* s) {
    auto _ret = KPageWidgetItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KPageWidgetItem_Widget(const KPageWidgetItem* self) {
    return self->widget();
}

void KPageWidgetItem_SetName(KPageWidgetItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string KPageWidgetItem_Name(const KPageWidgetItem* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageWidgetItem_SetHeader(KPageWidgetItem* self, const libqt_string header) {
    QString header_QString = QString::fromUtf8(header.data, header.len);
    self->setHeader(header_QString);
}

libqt_string KPageWidgetItem_Header(const KPageWidgetItem* self) {
    auto _ret = self->header();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageWidgetItem_SetIcon(KPageWidgetItem* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* KPageWidgetItem_Icon(const KPageWidgetItem* self) {
    return new QIcon(self->icon());
}

void KPageWidgetItem_SetCheckable(KPageWidgetItem* self, bool checkable) {
    self->setCheckable(checkable);
}

bool KPageWidgetItem_IsCheckable(const KPageWidgetItem* self) {
    return self->isCheckable();
}

bool KPageWidgetItem_IsChecked(const KPageWidgetItem* self) {
    return self->isChecked();
}

bool KPageWidgetItem_IsEnabled(const KPageWidgetItem* self) {
    return self->isEnabled();
}

bool KPageWidgetItem_IsHeaderVisible(const KPageWidgetItem* self) {
    return self->isHeaderVisible();
}

void KPageWidgetItem_SetHeaderVisible(KPageWidgetItem* self, bool visible) {
    self->setHeaderVisible(visible);
}

libqt_list /* of QAction* */ KPageWidgetItem_Actions(const KPageWidgetItem* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KPageWidgetItem_SetActions(KPageWidgetItem* self, libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->setActions(actions_QList);
}

void KPageWidgetItem_SetEnabled(KPageWidgetItem* self, bool enabled) {
    self->setEnabled(enabled);
}

void KPageWidgetItem_SetChecked(KPageWidgetItem* self, bool checked) {
    self->setChecked(checked);
}

void KPageWidgetItem_Changed(KPageWidgetItem* self) {
    self->changed();
}

void KPageWidgetItem_Connect_Changed(KPageWidgetItem* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetItem*) = reinterpret_cast<void (*)(KPageWidgetItem*)>(slot);
    KPageWidgetItem::connect(self,
                             static_cast<void (KPageWidgetItem::*)()>(&KPageWidgetItem::changed),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void KPageWidgetItem_Toggled(KPageWidgetItem* self, bool checked) {
    self->toggled(checked);
}

void KPageWidgetItem_Connect_Toggled(KPageWidgetItem* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetItem*, bool) = reinterpret_cast<void (*)(KPageWidgetItem*, bool)>(slot);
    KPageWidgetItem::connect(self,
                             static_cast<void (KPageWidgetItem::*)(bool)>(&KPageWidgetItem::toggled),
                             [self, slotFunc](bool checked) {
                                 bool sigval1 = checked;
                                 slotFunc(self, sigval1);
                             });
}

void KPageWidgetItem_ActionsChanged(KPageWidgetItem* self) {
    self->actionsChanged();
}

void KPageWidgetItem_Connect_ActionsChanged(KPageWidgetItem* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetItem*) = reinterpret_cast<void (*)(KPageWidgetItem*)>(slot);
    KPageWidgetItem::connect(self,
                             static_cast<void (KPageWidgetItem::*)()>(&KPageWidgetItem::actionsChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

libqt_string KPageWidgetItem_Tr2(const char* s, const char* c) {
    auto _ret = KPageWidgetItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageWidgetItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPageWidgetItem::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPageWidgetItem_SuperMetaObject(const KPageWidgetItem* self) {
    return (QMetaObject*)self->KPageWidgetItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnMetaObject(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self)))
        vkpagewidgetitem->kpagewidgetitem_metaobject_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPageWidgetItem_SuperMetacast(KPageWidgetItem* self, const char* param1) {
    return self->KPageWidgetItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnMetacast(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_metacast_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPageWidgetItem_SuperMetacall(KPageWidgetItem* self, int param1, int param2, void** param3) {
    return self->KPageWidgetItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnMetacall(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_metacall_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetItem_Event(KPageWidgetItem* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KPageWidgetItem_SuperEvent(KPageWidgetItem* self, QEvent* event) {
    return self->KPageWidgetItem::event(event);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnEvent(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_event_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Event_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetItem_EventFilter(KPageWidgetItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPageWidgetItem_SuperEventFilter(KPageWidgetItem* self, QObject* watched, QEvent* event) {
    return self->KPageWidgetItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnEventFilter(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_eventfilter_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetItem_TimerEvent(KPageWidgetItem* self, QTimerEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem) {
        vkpagewidgetitem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetItem_SuperTimerEvent(KPageWidgetItem* self, QTimerEvent* event) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self)) {
        vkpagewidgetitem->KPageWidgetItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidgetItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnTimerEvent(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_timerevent_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetItem_ChildEvent(KPageWidgetItem* self, QChildEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem) {
        vkpagewidgetitem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetItem_SuperChildEvent(KPageWidgetItem* self, QChildEvent* event) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self)) {
        vkpagewidgetitem->KPageWidgetItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidgetItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnChildEvent(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_childevent_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetItem_CustomEvent(KPageWidgetItem* self, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem) {
        vkpagewidgetitem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetItem_SuperCustomEvent(KPageWidgetItem* self, QEvent* event) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self)) {
        vkpagewidgetitem->KPageWidgetItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidgetItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnCustomEvent(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_customevent_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetItem_ConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem) {
        vkpagewidgetitem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetItem_SuperConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self)) {
        vkpagewidgetitem->KPageWidgetItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageWidgetItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnConnectNotify(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_connectnotify_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetItem_DisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem) {
        vkpagewidgetitem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetItem_SuperDisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self)) {
        vkpagewidgetitem->KPageWidgetItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageWidgetItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnDisconnectNotify(KPageWidgetItem* self, intptr_t slot) {
    if (auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self))
        vkpagewidgetitem->kpagewidgetitem_disconnectnotify_callback = reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KPageWidgetItem_Sender(const KPageWidgetItem* self) {
    if (auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self))) {
        return vkpagewidgetitem->VirtualKPageWidgetItem::sender();
    } else
        qFatal("Error: Protected method KPageWidgetItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageWidgetItem_SenderSignalIndex(const KPageWidgetItem* self) {
    if (auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self))) {
        return vkpagewidgetitem->VirtualKPageWidgetItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPageWidgetItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageWidgetItem_Receivers(const KPageWidgetItem* self, const char* signal) {
    if (auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self))) {
        return vkpagewidgetitem->VirtualKPageWidgetItem::receivers(signal);
    } else
        qFatal("Error: Protected method KPageWidgetItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidgetItem_IsSignalConnected(const KPageWidgetItem* self, const QMetaMethod* signal) {
    if (auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self))) {
        return vkpagewidgetitem->VirtualKPageWidgetItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPageWidgetItem::isSignalConnected called without a directly constructed type");
}

void KPageWidgetItem_Delete(KPageWidgetItem* self) {
    delete self;
}

KPageWidgetModel* KPageWidgetModel_new() {
    return new VirtualKPageWidgetModel();
}

KPageWidgetModel* KPageWidgetModel_new2(QObject* parent) {
    return new VirtualKPageWidgetModel(parent);
}

QMetaObject* KPageWidgetModel_MetaObject(const KPageWidgetModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageWidgetModel_Metacast(KPageWidgetModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageWidgetModel_Metacall(KPageWidgetModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPageWidgetModel_Tr(const char* s) {
    auto _ret = KPageWidgetModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPageWidgetItem* KPageWidgetModel_AddPage(KPageWidgetModel* self, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addPage(widget, name_QString);
}

void KPageWidgetModel_AddPage2(KPageWidgetModel* self, KPageWidgetItem* item) {
    self->addPage(item);
}

KPageWidgetItem* KPageWidgetModel_InsertPage(KPageWidgetModel* self, KPageWidgetItem* before, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->insertPage(before, widget, name_QString);
}

void KPageWidgetModel_InsertPage2(KPageWidgetModel* self, KPageWidgetItem* before, KPageWidgetItem* item) {
    self->insertPage(before, item);
}

KPageWidgetItem* KPageWidgetModel_AddSubPage(KPageWidgetModel* self, KPageWidgetItem* parent, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addSubPage(parent, widget, name_QString);
}

void KPageWidgetModel_AddSubPage2(KPageWidgetModel* self, KPageWidgetItem* parent, KPageWidgetItem* item) {
    self->addSubPage(parent, item);
}

void KPageWidgetModel_RemovePage(KPageWidgetModel* self, KPageWidgetItem* item) {
    self->removePage(item);
}

int KPageWidgetModel_ColumnCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QVariant* KPageWidgetModel_Data(const KPageWidgetModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool KPageWidgetModel_SetData(KPageWidgetModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

int KPageWidgetModel_Flags(const KPageWidgetModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QModelIndex* KPageWidgetModel_Index(const KPageWidgetModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* KPageWidgetModel_Parent(const KPageWidgetModel* self, const QModelIndex* index) {
    return new QModelIndex(self->parent(*index));
}

int KPageWidgetModel_RowCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

KPageWidgetItem* KPageWidgetModel_Item(const KPageWidgetModel* self, const QModelIndex* index) {
    return self->item(*index);
}

QModelIndex* KPageWidgetModel_Index2(const KPageWidgetModel* self, const KPageWidgetItem* item) {
    return new QModelIndex(self->index(item));
}

void KPageWidgetModel_Toggled(KPageWidgetModel* self, KPageWidgetItem* page, bool checked) {
    self->toggled(page, checked);
}

void KPageWidgetModel_Connect_Toggled(KPageWidgetModel* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetModel*, KPageWidgetItem*, bool) = reinterpret_cast<void (*)(KPageWidgetModel*, KPageWidgetItem*, bool)>(slot);
    KPageWidgetModel::connect(self,
                              static_cast<void (KPageWidgetModel::*)(KPageWidgetItem*, bool)>(&KPageWidgetModel::toggled),
                              [self, slotFunc](KPageWidgetItem* page, bool checked) {
                                  KPageWidgetItem* sigval1 = page;
                                  bool sigval2 = checked;
                                  slotFunc(self, sigval1, sigval2);
                              });
}

libqt_string KPageWidgetModel_Tr2(const char* s, const char* c) {
    auto _ret = KPageWidgetModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageWidgetModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPageWidgetModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPageWidgetModel_SuperMetaObject(const KPageWidgetModel* self) {
    return (QMetaObject*)self->KPageWidgetModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMetaObject(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_metaobject_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPageWidgetModel_SuperMetacast(KPageWidgetModel* self, const char* param1) {
    return self->KPageWidgetModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMetacast(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_metacast_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPageWidgetModel_SuperMetacall(KPageWidgetModel* self, int param1, int param2, void** param3) {
    return self->KPageWidgetModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMetacall(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_metacall_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Metacall_Callback>(slot);
}

// Base class handler implementation
int KPageWidgetModel_SuperColumnCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->KPageWidgetModel::columnCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnColumnCount(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_columncount_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ColumnCount_Callback>(slot);
}

// Base class handler implementation
QVariant* KPageWidgetModel_SuperData(const KPageWidgetModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->KPageWidgetModel::data(*index, static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_data_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Data_Callback>(slot);
}

// Base class handler implementation
bool KPageWidgetModel_SuperSetData(KPageWidgetModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->KPageWidgetModel::setData(*index, *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSetData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_setdata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SetData_Callback>(slot);
}

// Base class handler implementation
int KPageWidgetModel_SuperFlags(const KPageWidgetModel* self, const QModelIndex* index) {
    return static_cast<int>(self->KPageWidgetModel::flags(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnFlags(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_flags_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Flags_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_SuperIndex(const KPageWidgetModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->KPageWidgetModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnIndex(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_index_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Index_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_SuperParent(const KPageWidgetModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KPageWidgetModel::parent(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnParent(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_parent_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Parent_Callback>(slot);
}

// Base class handler implementation
int KPageWidgetModel_SuperRowCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->KPageWidgetModel::rowCount(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRowCount(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_rowcount_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RowCount_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_Sibling(const KPageWidgetModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_SuperSibling(const KPageWidgetModel* self, int row, int column, const QModelIndex* idx) {
    return new QModelIndex(self->KPageWidgetModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSibling(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_sibling_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Sibling_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_HasChildren(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->hasChildren(*parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperHasChildren(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->KPageWidgetModel::hasChildren(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnHasChildren(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_haschildren_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_HasChildren_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPageWidgetModel_HeaderData(const KPageWidgetModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Base class handler implementation
QVariant* KPageWidgetModel_SuperHeaderData(const KPageWidgetModel* self, int section, int orientation, int role) {
    return new QVariant(self->KPageWidgetModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnHeaderData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_headerdata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_HeaderData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_SetHeaderData(KPageWidgetModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Base class handler implementation
bool KPageWidgetModel_SuperSetHeaderData(KPageWidgetModel* self, int section, int orientation, const QVariant* value, int role) {
    return self->KPageWidgetModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSetHeaderData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_setheaderdata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SetHeaderData_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KPageWidgetModel_ItemData(const KPageWidgetModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->itemData(*index);
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KPageWidgetModel_SuperItemData(const KPageWidgetModel* self, const QModelIndex* index) {
    QMap<int, QVariant> _ret = self->KPageWidgetModel::itemData(*index);
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnItemData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_itemdata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ItemData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_SetItemData(KPageWidgetModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->setItemData(*index, roles_QMap);
}

// Base class handler implementation
bool KPageWidgetModel_SuperSetItemData(KPageWidgetModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap.insert(static_cast<int>(roles_karr[i]), *(roles_varr[i]));
    }
    return self->KPageWidgetModel::setItemData(*index, roles_QMap);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSetItemData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_setitemdata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SetItemData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_ClearItemData(KPageWidgetModel* self, const QModelIndex* index) {
    return self->clearItemData(*index);
}

// Base class handler implementation
bool KPageWidgetModel_SuperClearItemData(KPageWidgetModel* self, const QModelIndex* index) {
    return self->KPageWidgetModel::clearItemData(*index);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnClearItemData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_clearitemdata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ClearItemData_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KPageWidgetModel_MimeTypes(const KPageWidgetModel* self) {
    QList<QString> _ret = self->mimeTypes();
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
libqt_list /* of libqt_string */ KPageWidgetModel_SuperMimeTypes(const KPageWidgetModel* self) {
    QList<QString> _ret = self->KPageWidgetModel::mimeTypes();
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
void KPageWidgetModel_OnMimeTypes(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_mimetypes_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KPageWidgetModel_MimeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->mimeData(indexes_QList);
}

// Base class handler implementation
QMimeData* KPageWidgetModel_SuperMimeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    return self->KPageWidgetModel::mimeData(indexes_QList);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMimeData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_mimedata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_CanDropMimeData(const KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperCanDropMimeData(const KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KPageWidgetModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCanDropMimeData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_candropmimedata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CanDropMimeData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_DropMimeData(KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperDropMimeData(KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    return self->KPageWidgetModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnDropMimeData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_dropmimedata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KPageWidgetModel_SupportedDropActions(const KPageWidgetModel* self) {
    return static_cast<int>(self->supportedDropActions());
}

// Base class handler implementation
int KPageWidgetModel_SuperSupportedDropActions(const KPageWidgetModel* self) {
    return static_cast<int>(self->KPageWidgetModel::supportedDropActions());
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSupportedDropActions(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_supporteddropactions_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
int KPageWidgetModel_SupportedDragActions(const KPageWidgetModel* self) {
    return static_cast<int>(self->supportedDragActions());
}

// Base class handler implementation
int KPageWidgetModel_SuperSupportedDragActions(const KPageWidgetModel* self) {
    return static_cast<int>(self->KPageWidgetModel::supportedDragActions());
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSupportedDragActions(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_supporteddragactions_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SupportedDragActions_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_InsertRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperInsertRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    return self->KPageWidgetModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnInsertRows(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_insertrows_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_InsertRows_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_InsertColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperInsertColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    return self->KPageWidgetModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnInsertColumns(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_insertcolumns_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_InsertColumns_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_RemoveRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperRemoveRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    return self->KPageWidgetModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRemoveRows(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_removerows_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RemoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_RemoveColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperRemoveColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    return self->KPageWidgetModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRemoveColumns(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_removecolumns_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RemoveColumns_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_MoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KPageWidgetModel_SuperMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KPageWidgetModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMoveRows(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_moverows_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MoveRows_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_MoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Base class handler implementation
bool KPageWidgetModel_SuperMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    return self->KPageWidgetModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMoveColumns(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_movecolumns_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MoveColumns_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_FetchMore(KPageWidgetModel* self, const QModelIndex* parent) {
    self->fetchMore(*parent);
}

// Base class handler implementation
void KPageWidgetModel_SuperFetchMore(KPageWidgetModel* self, const QModelIndex* parent) {
    self->KPageWidgetModel::fetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnFetchMore(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_fetchmore_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_FetchMore_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_CanFetchMore(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->canFetchMore(*parent);
}

// Base class handler implementation
bool KPageWidgetModel_SuperCanFetchMore(const KPageWidgetModel* self, const QModelIndex* parent) {
    return self->KPageWidgetModel::canFetchMore(*parent);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCanFetchMore(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_canfetchmore_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CanFetchMore_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_Sort(KPageWidgetModel* self, int column, int order) {
    self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Base class handler implementation
void KPageWidgetModel_SuperSort(KPageWidgetModel* self, int column, int order) {
    self->KPageWidgetModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSort(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_sort_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Sort_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_Buddy(const KPageWidgetModel* self, const QModelIndex* index) {
    return new QModelIndex(self->buddy(*index));
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_SuperBuddy(const KPageWidgetModel* self, const QModelIndex* index) {
    return new QModelIndex(self->KPageWidgetModel::buddy(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBuddy(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_buddy_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Buddy_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_Match(const KPageWidgetModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_SuperMatch(const KPageWidgetModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    QList<QModelIndex> _ret = self->KPageWidgetModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMatch(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_match_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Match_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageWidgetModel_Span(const KPageWidgetModel* self, const QModelIndex* index) {
    return new QSize(self->span(*index));
}

// Base class handler implementation
QSize* KPageWidgetModel_SuperSpan(const KPageWidgetModel* self, const QModelIndex* index) {
    return new QSize(self->KPageWidgetModel::span(*index));
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSpan(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_span_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Span_Callback>(slot);
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KPageWidgetModel_RoleNames(const KPageWidgetModel* self) {
    QHash<int, QByteArray> _ret = self->roleNames();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KPageWidgetModel_SuperRoleNames(const KPageWidgetModel* self) {
    QHash<int, QByteArray> _ret = self->KPageWidgetModel::roleNames();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRoleNames(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_rolenames_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RoleNames_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_MultiData(const KPageWidgetModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->multiData(*index, *roleDataSpan);
}

// Base class handler implementation
void KPageWidgetModel_SuperMultiData(const KPageWidgetModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    self->KPageWidgetModel::multiData(*index, *roleDataSpan);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMultiData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        vkpagewidgetmodel->kpagewidgetmodel_multidata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MultiData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_Submit(KPageWidgetModel* self) {
    return self->submit();
}

// Base class handler implementation
bool KPageWidgetModel_SuperSubmit(KPageWidgetModel* self) {
    return self->KPageWidgetModel::submit();
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSubmit(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_submit_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Submit_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_Revert(KPageWidgetModel* self) {
    self->revert();
}

// Base class handler implementation
void KPageWidgetModel_SuperRevert(KPageWidgetModel* self) {
    self->KPageWidgetModel::revert();
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRevert(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_revert_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Revert_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_ResetInternalData(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel) {
        vkpagewidgetmodel->resetInternalData();
    } else {
        qFatal("Error: Protected virtual method KPageWidgetModel::resetInternalData called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetModel_SuperResetInternalData(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->KPageWidgetModel::resetInternalData();
    } else
        qFatal("Error: Protected virtual method KPageWidgetModel::resetInternalData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnResetInternalData(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_resetinternaldata_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ResetInternalData_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_Event(KPageWidgetModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KPageWidgetModel_SuperEvent(KPageWidgetModel* self, QEvent* event) {
    return self->KPageWidgetModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEvent(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_event_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KPageWidgetModel_EventFilter(KPageWidgetModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPageWidgetModel_SuperEventFilter(KPageWidgetModel* self, QObject* watched, QEvent* event) {
    return self->KPageWidgetModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEventFilter(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_eventfilter_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_TimerEvent(KPageWidgetModel* self, QTimerEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel) {
        vkpagewidgetmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetModel_SuperTimerEvent(KPageWidgetModel* self, QTimerEvent* event) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->KPageWidgetModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidgetModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnTimerEvent(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_timerevent_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_ChildEvent(KPageWidgetModel* self, QChildEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel) {
        vkpagewidgetmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetModel_SuperChildEvent(KPageWidgetModel* self, QChildEvent* event) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->KPageWidgetModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidgetModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnChildEvent(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_childevent_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_CustomEvent(KPageWidgetModel* self, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel) {
        vkpagewidgetmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetModel_SuperCustomEvent(KPageWidgetModel* self, QEvent* event) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->KPageWidgetModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageWidgetModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCustomEvent(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_customevent_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_ConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel) {
        vkpagewidgetmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetModel_SuperConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->KPageWidgetModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageWidgetModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnConnectNotify(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_connectnotify_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPageWidgetModel_DisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel) {
        vkpagewidgetmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageWidgetModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageWidgetModel_SuperDisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->KPageWidgetModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageWidgetModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnDisconnectNotify(KPageWidgetModel* self, intptr_t slot) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self))
        vkpagewidgetmodel->kpagewidgetmodel_disconnectnotify_callback = reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_CreateIndex(const KPageWidgetModel* self, int row, int column) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self)))
        return new QModelIndex(vkpagewidgetmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    qFatal("Error: Protected method KPageWidgetModel::createIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EncodeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self))) {
        QList<QModelIndex> indexes_QList;
        indexes_QList.reserve(indexes.len);
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
        for (size_t i = 0; i < indexes.len; ++i) {
            indexes_QList.push_back(*(indexes_arr[i]));
        }
        vkpagewidgetmodel->VirtualKPageWidgetModel::encodeData(indexes_QList, *stream);
    } else
        qFatal("Error: Protected method KPageWidgetModel::encodeData called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidgetModel_DecodeData(KPageWidgetModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else
        qFatal("Error: Protected method KPageWidgetModel::decodeData called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_BeginInsertRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndInsertRows(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endInsertRows();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endInsertRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_BeginRemoveRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndRemoveRows(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endRemoveRows();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endRemoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidgetModel_BeginMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndMoveRows(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endMoveRows();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endMoveRows called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_BeginInsertColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndInsertColumns(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endInsertColumns();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endInsertColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_BeginRemoveColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndRemoveColumns(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endRemoveColumns();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endRemoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidgetModel_BeginMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndMoveColumns(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endMoveColumns();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endMoveColumns called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_BeginResetModel(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::beginResetModel();
    } else
        qFatal("Error: Protected method KPageWidgetModel::beginResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_EndResetModel(KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::endResetModel();
    } else
        qFatal("Error: Protected method KPageWidgetModel::endResetModel called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_ChangePersistentIndex(KPageWidgetModel* self, const QModelIndex* from, const QModelIndex* to) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        vkpagewidgetmodel->VirtualKPageWidgetModel::changePersistentIndex(*from, *to);
    } else
        qFatal("Error: Protected method KPageWidgetModel::changePersistentIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageWidgetModel_ChangePersistentIndexList(KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    if (auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self)) {
        QList<QModelIndex> from_QList;
        from_QList.reserve(from.len);
        QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
        for (size_t i = 0; i < from.len; ++i) {
            from_QList.push_back(*(from_arr[i]));
        }
        QList<QModelIndex> to_QList;
        to_QList.reserve(to.len);
        QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
        for (size_t i = 0; i < to.len; ++i) {
            to_QList.push_back(*(to_arr[i]));
        }
        vkpagewidgetmodel->VirtualKPageWidgetModel::changePersistentIndexList(from_QList, to_QList);
    } else
        qFatal("Error: Protected method KPageWidgetModel::changePersistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_PersistentIndexList(const KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self))) {
        QList<QModelIndex> _ret = vkpagewidgetmodel->VirtualKPageWidgetModel::persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KPageWidgetModel::persistentIndexList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPageWidgetModel_Sender(const KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self))) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::sender();
    } else
        qFatal("Error: Protected method KPageWidgetModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageWidgetModel_SenderSignalIndex(const KPageWidgetModel* self) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self))) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPageWidgetModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageWidgetModel_Receivers(const KPageWidgetModel* self, const char* signal) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self))) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::receivers(signal);
    } else
        qFatal("Error: Protected method KPageWidgetModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageWidgetModel_IsSignalConnected(const KPageWidgetModel* self, const QMetaMethod* signal) {
    if (auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self))) {
        return vkpagewidgetmodel->VirtualKPageWidgetModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPageWidgetModel::isSignalConnected called without a directly constructed type");
}

void KPageWidgetModel_Delete(KPageWidgetModel* self) {
    delete self;
}
