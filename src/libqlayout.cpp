#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <qlayout.h>
#include "libqlayout.h"
#include "libqlayout.hxx"

QLayout* QLayout_new(QWidget* parent) {
    return new VirtualQLayout(parent);
}

QLayout* QLayout_new2() {
    return new VirtualQLayout();
}

QLayoutItem* QLayout_AsQLayoutItem(QLayout* self) {
    return static_cast<QLayoutItem*>(self);
}

QLayout* QLayout_FromQLayoutItem(QLayoutItem* _qlayoutitem) {
    return dynamic_cast<QLayout*>(static_cast<QLayoutItem*>(_qlayoutitem));
}

QMetaObject* QLayout_MetaObject(const QLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLayout_Metacast(QLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLayout_Metacall(QLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLayout_Tr(const char* s) {
    auto _ret = QLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLayout_Spacing(const QLayout* self) {
    return self->spacing();
}

void QLayout_SetSpacing(QLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
    self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLayout_SetContentsMargins2(QLayout* self, const QMargins* margins) {
    self->setContentsMargins(*margins);
}

void QLayout_UnsetContentsMargins(QLayout* self) {
    self->unsetContentsMargins();
}

void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom) {
    self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLayout_ContentsMargins(const QLayout* self) {
    return new QMargins(self->contentsMargins());
}

QRect* QLayout_ContentsRect(const QLayout* self) {
    return new QRect(self->contentsRect());
}

bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment) {
    return self->setAlignment(w, static_cast<Qt::Alignment>(alignment));
}

bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment) {
    return self->setAlignment(l, static_cast<Qt::Alignment>(alignment));
}

void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint) {
    self->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

int QLayout_SizeConstraint(const QLayout* self) {
    return static_cast<int>(self->sizeConstraint());
}

void QLayout_SetMenuBar(QLayout* self, QWidget* w) {
    self->setMenuBar(w);
}

QWidget* QLayout_MenuBar(const QLayout* self) {
    return self->menuBar();
}

QWidget* QLayout_ParentWidget(const QLayout* self) {
    return self->parentWidget();
}

void QLayout_Invalidate(QLayout* self) {
    self->invalidate();
}

QRect* QLayout_Geometry(const QLayout* self) {
    return new QRect(self->geometry());
}

bool QLayout_Activate(QLayout* self) {
    return self->activate();
}

void QLayout_Update(QLayout* self) {
    self->update();
}

void QLayout_AddWidget(QLayout* self, QWidget* w) {
    self->addWidget(w);
}

void QLayout_AddItem(QLayout* self, QLayoutItem* param1) {
    self->addItem(param1);
}

void QLayout_RemoveWidget(QLayout* self, QWidget* w) {
    self->removeWidget(w);
}

void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1) {
    self->removeItem(param1);
}

int QLayout_ExpandingDirections(const QLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

QSize* QLayout_MinimumSize(const QLayout* self) {
    return new QSize(self->minimumSize());
}

QSize* QLayout_MaximumSize(const QLayout* self) {
    return new QSize(self->maximumSize());
}

void QLayout_SetGeometry(QLayout* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

QLayoutItem* QLayout_ItemAt(const QLayout* self, int index) {
    return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QLayout_TakeAt(QLayout* self, int index) {
    return self->takeAt(static_cast<int>(index));
}

int QLayout_IndexOf(const QLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

int QLayout_IndexOf2(const QLayout* self, const QLayoutItem* param1) {
    return self->indexOf(param1);
}

int QLayout_Count(const QLayout* self) {
    return self->count();
}

bool QLayout_IsEmpty(const QLayout* self) {
    return self->isEmpty();
}

int QLayout_ControlTypes(const QLayout* self) {
    return static_cast<int>(self->controlTypes());
}

QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w) {
    return self->totalMinimumHeightForWidth(static_cast<int>(w));
}

int QLayout_TotalHeightForWidth(const QLayout* self, int w) {
    return self->totalHeightForWidth(static_cast<int>(w));
}

QSize* QLayout_TotalMinimumSize(const QLayout* self) {
    return new QSize(self->totalMinimumSize());
}

QSize* QLayout_TotalMaximumSize(const QLayout* self) {
    return new QSize(self->totalMaximumSize());
}

QSize* QLayout_TotalSizeHint(const QLayout* self) {
    return new QSize(self->totalSizeHint());
}

QLayout* QLayout_Layout(QLayout* self) {
    return self->layout();
}

void QLayout_SetEnabled(QLayout* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QLayout_IsEnabled(const QLayout* self) {
    return self->isEnabled();
}

QSize* QLayout_ClosestAcceptableSize(const QWidget* w, const QSize* s) {
    return new QSize(QLayout::closestAcceptableSize(w, *s));
}

void QLayout_ChildEvent(QLayout* self, QChildEvent* e) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout) {
        vqlayout->childEvent(e);
    }
}

libqt_string QLayout_Tr2(const char* s, const char* c) {
    auto _ret = QLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLayout::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLayout_SuperMetaObject(const QLayout* self) {
    return (QMetaObject*)self->QLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMetaObject(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_metaobject_callback = reinterpret_cast<VirtualQLayout::QLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLayout_SuperMetacast(QLayout* self, const char* param1) {
    return self->QLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMetacast(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_metacast_callback = reinterpret_cast<VirtualQLayout::QLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLayout_SuperMetacall(QLayout* self, int param1, int param2, void** param3) {
    return self->QLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMetacall(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_metacall_callback = reinterpret_cast<VirtualQLayout::QLayout_Metacall_Callback>(slot);
}

// Base class handler implementation
int QLayout_SuperSpacing(const QLayout* self) {
    return self->QLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSpacing(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_spacing_callback = reinterpret_cast<VirtualQLayout::QLayout_Spacing_Callback>(slot);
}

// Base class handler implementation
void QLayout_SuperSetSpacing(QLayout* self, int spacing) {
    self->QLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSetSpacing(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_setspacing_callback = reinterpret_cast<VirtualQLayout::QLayout_SetSpacing_Callback>(slot);
}

// Base class handler implementation
void QLayout_SuperInvalidate(QLayout* self) {
    self->QLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnInvalidate(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_invalidate_callback = reinterpret_cast<VirtualQLayout::QLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
QRect* QLayout_SuperGeometry(const QLayout* self) {
    return new QRect(self->QLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnGeometry(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_geometry_callback = reinterpret_cast<VirtualQLayout::QLayout_Geometry_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddItem(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_additem_callback = reinterpret_cast<VirtualQLayout::QLayout_AddItem_Callback>(slot);
}

// Base class handler implementation
int QLayout_SuperExpandingDirections(const QLayout* self) {
    return static_cast<int>(self->QLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnExpandingDirections(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_expandingdirections_callback = reinterpret_cast<VirtualQLayout::QLayout_ExpandingDirections_Callback>(slot);
}

// Base class handler implementation
QSize* QLayout_SuperMinimumSize(const QLayout* self) {
    return new QSize(self->QLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMinimumSize(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_minimumsize_callback = reinterpret_cast<VirtualQLayout::QLayout_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QLayout_SuperMaximumSize(const QLayout* self) {
    return new QSize(self->QLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMaximumSize(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_maximumsize_callback = reinterpret_cast<VirtualQLayout::QLayout_MaximumSize_Callback>(slot);
}

// Base class handler implementation
void QLayout_SuperSetGeometry(QLayout* self, const QRect* geometry) {
    self->QLayout::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSetGeometry(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_setgeometry_callback = reinterpret_cast<VirtualQLayout::QLayout_SetGeometry_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnItemAt(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_itemat_callback = reinterpret_cast<VirtualQLayout::QLayout_ItemAt_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnTakeAt(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_takeat_callback = reinterpret_cast<VirtualQLayout::QLayout_TakeAt_Callback>(slot);
}

// Base class handler implementation
int QLayout_SuperIndexOf(const QLayout* self, const QWidget* param1) {
    return self->QLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIndexOf(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_indexof_callback = reinterpret_cast<VirtualQLayout::QLayout_IndexOf_Callback>(slot);
}

// Base class handler implementation
int QLayout_SuperIndexOf2(const QLayout* self, const QLayoutItem* param1) {
    return self->QLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIndexOf2(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_indexof2_callback = reinterpret_cast<VirtualQLayout::QLayout_IndexOf2_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnCount(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_count_callback = reinterpret_cast<VirtualQLayout::QLayout_Count_Callback>(slot);
}

// Base class handler implementation
bool QLayout_SuperIsEmpty(const QLayout* self) {
    return self->QLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIsEmpty(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_isempty_callback = reinterpret_cast<VirtualQLayout::QLayout_IsEmpty_Callback>(slot);
}

// Base class handler implementation
int QLayout_SuperControlTypes(const QLayout* self) {
    return static_cast<int>(self->QLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnControlTypes(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_controltypes_callback = reinterpret_cast<VirtualQLayout::QLayout_ControlTypes_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QLayout_SuperReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnReplaceWidget(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_replacewidget_callback = reinterpret_cast<VirtualQLayout::QLayout_ReplaceWidget_Callback>(slot);
}

// Base class handler implementation
QLayout* QLayout_SuperLayout(QLayout* self) {
    return self->QLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnLayout(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_layout_callback = reinterpret_cast<VirtualQLayout::QLayout_Layout_Callback>(slot);
}

// Base class handler implementation
void QLayout_SuperChildEvent(QLayout* self, QChildEvent* e) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->QLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnChildEvent(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_childevent_callback = reinterpret_cast<VirtualQLayout::QLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QLayout_Event(QLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLayout_SuperEvent(QLayout* self, QEvent* event) {
    return self->QLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnEvent(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_event_callback = reinterpret_cast<VirtualQLayout::QLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLayout_EventFilter(QLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLayout_SuperEventFilter(QLayout* self, QObject* watched, QEvent* event) {
    return self->QLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnEventFilter(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_eventfilter_callback = reinterpret_cast<VirtualQLayout::QLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLayout_TimerEvent(QLayout* self, QTimerEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout) {
        vqlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLayout_SuperTimerEvent(QLayout* self, QTimerEvent* event) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->QLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnTimerEvent(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_timerevent_callback = reinterpret_cast<VirtualQLayout::QLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLayout_CustomEvent(QLayout* self, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout) {
        vqlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLayout_SuperCustomEvent(QLayout* self, QEvent* event) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->QLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnCustomEvent(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_customevent_callback = reinterpret_cast<VirtualQLayout::QLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLayout_ConnectNotify(QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout) {
        vqlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLayout_SuperConnectNotify(QLayout* self, const QMetaMethod* signal) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->QLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnConnectNotify(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_connectnotify_callback = reinterpret_cast<VirtualQLayout::QLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLayout_DisconnectNotify(QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout) {
        vqlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLayout_SuperDisconnectNotify(QLayout* self, const QMetaMethod* signal) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->QLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnDisconnectNotify(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_disconnectnotify_callback = reinterpret_cast<VirtualQLayout::QLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QSize* QLayout_SizeHint(const QLayout* self) {
    return new QSize(self->sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSizeHint(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_sizehint_callback = reinterpret_cast<VirtualQLayout::QLayout_SizeHint_Callback>(slot);
}

// Derived class handler implementation
bool QLayout_HasHeightForWidth(const QLayout* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QLayout_SuperHasHeightForWidth(const QLayout* self) {
    return self->QLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnHasHeightForWidth(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQLayout::QLayout_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QLayout_HeightForWidth(const QLayout* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QLayout_SuperHeightForWidth(const QLayout* self, int param1) {
    return self->QLayout::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnHeightForWidth(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_heightforwidth_callback = reinterpret_cast<VirtualQLayout::QLayout_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QLayout_MinimumHeightForWidth(const QLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QLayout_SuperMinimumHeightForWidth(const QLayout* self, int param1) {
    return self->QLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMinimumHeightForWidth(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQLayout::QLayout_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QWidget* QLayout_Widget(const QLayout* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QLayout_SuperWidget(const QLayout* self) {
    return self->QLayout::widget();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnWidget(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        vqlayout->qlayout_widget_callback = reinterpret_cast<VirtualQLayout::QLayout_Widget_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QLayout_SpacerItem(QLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QLayout_SuperSpacerItem(QLayout* self) {
    return self->QLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSpacerItem(QLayout* self, intptr_t slot) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self))
        vqlayout->qlayout_spaceritem_callback = reinterpret_cast<VirtualQLayout::QLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QLayout_WidgetEvent(QLayout* self, QEvent* param1) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->VirtualQLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QLayout_AddChildLayout(QLayout* self, QLayout* l) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->VirtualQLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QLayout_AddChildWidget(QLayout* self, QWidget* w) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        vqlayout->VirtualQLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLayout_AdoptLayout(QLayout* self, QLayout* layout) {
    if (auto* vqlayout = dynamic_cast<VirtualQLayout*>(self)) {
        return vqlayout->VirtualQLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self)))
        return new QRect(vqlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLayout_Sender(const QLayout* self) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self))) {
        return vqlayout->VirtualQLayout::sender();
    } else
        qFatal("Error: Protected method QLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLayout_SenderSignalIndex(const QLayout* self) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self))) {
        return vqlayout->VirtualQLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLayout_Receivers(const QLayout* self, const char* signal) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self))) {
        return vqlayout->VirtualQLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLayout_IsSignalConnected(const QLayout* self, const QMetaMethod* signal) {
    if (auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self))) {
        return vqlayout->VirtualQLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLayout::isSignalConnected called without a directly constructed type");
}

void QLayout_Delete(QLayout* self) {
    delete self;
}
