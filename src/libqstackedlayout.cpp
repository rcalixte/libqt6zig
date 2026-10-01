#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QStackedLayout>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <qstackedlayout.h>
#include "libqstackedlayout.h"
#include "libqstackedlayout.hxx"

QStackedLayout* QStackedLayout_new(QWidget* parent) {
    return new VirtualQStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new2() {
    return new VirtualQStackedLayout();
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
    return new VirtualQStackedLayout(parentLayout);
}

QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStackedLayout_Metacall(QStackedLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStackedLayout_Tr(const char* s) {
    auto _ret = QStackedLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w) {
    return self->addWidget(w);
}

int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w) {
    return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self) {
    return self->currentWidget();
}

int QStackedLayout_CurrentIndex(const QStackedLayout* self) {
    return self->currentIndex();
}

QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1) {
    return self->widget(static_cast<int>(param1));
}

int QStackedLayout_Count(const QStackedLayout* self) {
    return self->count();
}

int QStackedLayout_StackingMode(const QStackedLayout* self) {
    return static_cast<int>(self->stackingMode());
}

void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode) {
    self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item) {
    self->addItem(item);
}

QSize* QStackedLayout_SizeHint(const QStackedLayout* self) {
    return new QSize(self->sizeHint());
}

QSize* QStackedLayout_MinimumSize(const QStackedLayout* self) {
    return new QSize(self->minimumSize());
}

QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1) {
    return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1) {
    return self->takeAt(static_cast<int>(param1));
}

void QStackedLayout_SetGeometry(QStackedLayout* self, const QRect* rect) {
    self->setGeometry(*rect);
}

bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self) {
    return self->hasHeightForWidth();
}

int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width) {
    return self->heightForWidth(static_cast<int>(width));
}

void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index) {
    self->widgetRemoved(static_cast<int>(index));
}

void QStackedLayout_Connect_WidgetRemoved(QStackedLayout* self, intptr_t slot) {
    void (*slotFunc)(QStackedLayout*, int) = reinterpret_cast<void (*)(QStackedLayout*, int)>(slot);
    QStackedLayout::connect(self,
                            static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::widgetRemoved),
                            [self, slotFunc](int index) {
                                int sigval1 = index;
                                slotFunc(self, sigval1);
                            });
}

void QStackedLayout_CurrentChanged(QStackedLayout* self, int index) {
    self->currentChanged(static_cast<int>(index));
}

void QStackedLayout_Connect_CurrentChanged(QStackedLayout* self, intptr_t slot) {
    void (*slotFunc)(QStackedLayout*, int) = reinterpret_cast<void (*)(QStackedLayout*, int)>(slot);
    QStackedLayout::connect(self,
                            static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::currentChanged),
                            [self, slotFunc](int index) {
                                int sigval1 = index;
                                slotFunc(self, sigval1);
                            });
}

void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w) {
    self->setCurrentWidget(w);
}

libqt_string QStackedLayout_Tr2(const char* s, const char* c) {
    auto _ret = QStackedLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStackedLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStackedLayout::tr(s, c, static_cast<int>(n));
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
QMetaObject* QStackedLayout_SuperMetaObject(const QStackedLayout* self) {
    return (QMetaObject*)self->QStackedLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMetaObject(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_metaobject_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStackedLayout_SuperMetacast(QStackedLayout* self, const char* param1) {
    return self->QStackedLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMetacast(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_metacast_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStackedLayout_SuperMetacall(QStackedLayout* self, int param1, int param2, void** param3) {
    return self->QStackedLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMetacall(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_metacall_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Metacall_Callback>(slot);
}

// Base class handler implementation
int QStackedLayout_SuperCount(const QStackedLayout* self) {
    return self->QStackedLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnCount(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_count_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Count_Callback>(slot);
}

// Base class handler implementation
void QStackedLayout_SuperAddItem(QStackedLayout* self, QLayoutItem* item) {
    self->QStackedLayout::addItem(item);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAddItem(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_additem_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AddItem_Callback>(slot);
}

// Base class handler implementation
QSize* QStackedLayout_SuperSizeHint(const QStackedLayout* self) {
    return new QSize(self->QStackedLayout::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSizeHint(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_sizehint_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QStackedLayout_SuperMinimumSize(const QStackedLayout* self) {
    return new QSize(self->QStackedLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMinimumSize(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_minimumsize_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QStackedLayout_SuperItemAt(const QStackedLayout* self, int param1) {
    return self->QStackedLayout::itemAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnItemAt(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_itemat_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ItemAt_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QStackedLayout_SuperTakeAt(QStackedLayout* self, int param1) {
    return self->QStackedLayout::takeAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnTakeAt(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_takeat_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_TakeAt_Callback>(slot);
}

// Base class handler implementation
void QStackedLayout_SuperSetGeometry(QStackedLayout* self, const QRect* rect) {
    self->QStackedLayout::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSetGeometry(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_setgeometry_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SetGeometry_Callback>(slot);
}

// Base class handler implementation
bool QStackedLayout_SuperHasHeightForWidth(const QStackedLayout* self) {
    return self->QStackedLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnHasHeightForWidth(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QStackedLayout_SuperHeightForWidth(const QStackedLayout* self, int width) {
    return self->QStackedLayout::heightForWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnHeightForWidth(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_heightforwidth_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QStackedLayout_Spacing(const QStackedLayout* self) {
    return self->spacing();
}

// Base class handler implementation
int QStackedLayout_SuperSpacing(const QStackedLayout* self) {
    return self->QStackedLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSpacing(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_spacing_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Spacing_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_SetSpacing(QStackedLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

// Base class handler implementation
void QStackedLayout_SuperSetSpacing(QStackedLayout* self, int spacing) {
    self->QStackedLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSetSpacing(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_setspacing_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SetSpacing_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_Invalidate(QStackedLayout* self) {
    self->invalidate();
}

// Base class handler implementation
void QStackedLayout_SuperInvalidate(QStackedLayout* self) {
    self->QStackedLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnInvalidate(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_invalidate_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Invalidate_Callback>(slot);
}

// Derived class handler implementation
QRect* QStackedLayout_Geometry(const QStackedLayout* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QStackedLayout_SuperGeometry(const QStackedLayout* self) {
    return new QRect(self->QStackedLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnGeometry(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_geometry_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Geometry_Callback>(slot);
}

// Derived class handler implementation
int QStackedLayout_ExpandingDirections(const QStackedLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

// Base class handler implementation
int QStackedLayout_SuperExpandingDirections(const QStackedLayout* self) {
    return static_cast<int>(self->QStackedLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnExpandingDirections(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_expandingdirections_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ExpandingDirections_Callback>(slot);
}

// Derived class handler implementation
QSize* QStackedLayout_MaximumSize(const QStackedLayout* self) {
    return new QSize(self->maximumSize());
}

// Base class handler implementation
QSize* QStackedLayout_SuperMaximumSize(const QStackedLayout* self) {
    return new QSize(self->QStackedLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMaximumSize(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_maximumsize_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MaximumSize_Callback>(slot);
}

// Derived class handler implementation
int QStackedLayout_IndexOf(const QStackedLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

// Base class handler implementation
int QStackedLayout_SuperIndexOf(const QStackedLayout* self, const QWidget* param1) {
    return self->QStackedLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnIndexOf(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_indexof_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_IndexOf_Callback>(slot);
}

// Derived class handler implementation
bool QStackedLayout_IsEmpty(const QStackedLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QStackedLayout_SuperIsEmpty(const QStackedLayout* self) {
    return self->QStackedLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnIsEmpty(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_isempty_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
int QStackedLayout_ControlTypes(const QStackedLayout* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QStackedLayout_SuperControlTypes(const QStackedLayout* self) {
    return static_cast<int>(self->QStackedLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnControlTypes(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_controltypes_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QStackedLayout_ReplaceWidget(QStackedLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Base class handler implementation
QLayoutItem* QStackedLayout_SuperReplaceWidget(QStackedLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QStackedLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnReplaceWidget(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_replacewidget_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ReplaceWidget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QStackedLayout_Layout(QStackedLayout* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QStackedLayout_SuperLayout(QStackedLayout* self) {
    return self->QStackedLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnLayout(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_layout_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Layout_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_ChildEvent(QStackedLayout* self, QChildEvent* e) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout) {
        vqstackedlayout->childEvent(e);
    } else {
        qFatal("Error: Protected virtual method QStackedLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedLayout_SuperChildEvent(QStackedLayout* self, QChildEvent* e) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->QStackedLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QStackedLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnChildEvent(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_childevent_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QStackedLayout_Event(QStackedLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStackedLayout_SuperEvent(QStackedLayout* self, QEvent* event) {
    return self->QStackedLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnEvent(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_event_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QStackedLayout_EventFilter(QStackedLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStackedLayout_SuperEventFilter(QStackedLayout* self, QObject* watched, QEvent* event) {
    return self->QStackedLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnEventFilter(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_eventfilter_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_TimerEvent(QStackedLayout* self, QTimerEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout) {
        vqstackedlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedLayout_SuperTimerEvent(QStackedLayout* self, QTimerEvent* event) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->QStackedLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnTimerEvent(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_timerevent_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_CustomEvent(QStackedLayout* self, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout) {
        vqstackedlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedLayout_SuperCustomEvent(QStackedLayout* self, QEvent* event) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->QStackedLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnCustomEvent(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_customevent_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_ConnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout) {
        vqstackedlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStackedLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedLayout_SuperConnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->QStackedLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStackedLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnConnectNotify(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_connectnotify_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStackedLayout_DisconnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout) {
        vqstackedlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStackedLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedLayout_SuperDisconnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->QStackedLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStackedLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnDisconnectNotify(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_disconnectnotify_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
int QStackedLayout_MinimumHeightForWidth(const QStackedLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QStackedLayout_SuperMinimumHeightForWidth(const QStackedLayout* self, int param1) {
    return self->QStackedLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMinimumHeightForWidth(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        vqstackedlayout->qstackedlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QStackedLayout_SpacerItem(QStackedLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QStackedLayout_SuperSpacerItem(QStackedLayout* self) {
    return self->QStackedLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSpacerItem(QStackedLayout* self, intptr_t slot) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self))
        vqstackedlayout->qstackedlayout_spaceritem_callback = reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QStackedLayout_WidgetEvent(QStackedLayout* self, QEvent* param1) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->VirtualQStackedLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QStackedLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QStackedLayout_AddChildLayout(QStackedLayout* self, QLayout* l) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->VirtualQStackedLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QStackedLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QStackedLayout_AddChildWidget(QStackedLayout* self, QWidget* w) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        vqstackedlayout->VirtualQStackedLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QStackedLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStackedLayout_AdoptLayout(QStackedLayout* self, QLayout* layout) {
    if (auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self)) {
        return vqstackedlayout->VirtualQStackedLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QStackedLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QStackedLayout_AlignmentRect(const QStackedLayout* self, const QRect* param1) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self)))
        return new QRect(vqstackedlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QStackedLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QStackedLayout_Sender(const QStackedLayout* self) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self))) {
        return vqstackedlayout->VirtualQStackedLayout::sender();
    } else
        qFatal("Error: Protected method QStackedLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStackedLayout_SenderSignalIndex(const QStackedLayout* self) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self))) {
        return vqstackedlayout->VirtualQStackedLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStackedLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStackedLayout_Receivers(const QStackedLayout* self, const char* signal) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self))) {
        return vqstackedlayout->VirtualQStackedLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QStackedLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStackedLayout_IsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal) {
    if (auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self))) {
        return vqstackedlayout->VirtualQStackedLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStackedLayout::isSignalConnected called without a directly constructed type");
}

void QStackedLayout_Delete(QStackedLayout* self) {
    delete self;
}
