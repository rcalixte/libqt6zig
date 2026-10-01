#include <QBoxLayout>
#include <QChildEvent>
#include <QEvent>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QTimerEvent>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include "libqboxlayout.h"
#include "libqboxlayout.hxx"

QBoxLayout* QBoxLayout_new(int param1) {
    return new VirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1));
}

QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent) {
    return new VirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1), parent);
}

QMetaObject* QBoxLayout_MetaObject(const QBoxLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBoxLayout_Metacast(QBoxLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBoxLayout_Metacall(QBoxLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBoxLayout_Tr(const char* s) {
    auto _ret = QBoxLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QBoxLayout_Direction(const QBoxLayout* self) {
    return static_cast<int>(self->direction());
}

void QBoxLayout_SetDirection(QBoxLayout* self, int direction) {
    self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_AddSpacing(QBoxLayout* self, int size) {
    self->addSpacing(static_cast<int>(size));
}

void QBoxLayout_AddStretch(QBoxLayout* self) {
    self->addStretch();
}

void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
    self->addSpacerItem(spacerItem);
}

void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1) {
    self->addWidget(param1);
}

void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout) {
    self->addLayout(layout);
}

void QBoxLayout_AddStrut(QBoxLayout* self, int param1) {
    self->addStrut(static_cast<int>(param1));
}

void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1) {
    self->addItem(param1);
}

void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size) {
    self->insertSpacing(static_cast<int>(index), static_cast<int>(size));
}

void QBoxLayout_InsertStretch(QBoxLayout* self, int index) {
    self->insertStretch(static_cast<int>(index));
}

void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
    self->insertSpacerItem(static_cast<int>(index), spacerItem);
}

void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget) {
    self->insertWidget(static_cast<int>(index), widget);
}

void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout) {
    self->insertLayout(static_cast<int>(index), layout);
}

void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
    self->insertItem(static_cast<int>(index), param2);
}

int QBoxLayout_Spacing(const QBoxLayout* self) {
    return self->spacing();
}

void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
    return self->setStretchFactor(w, static_cast<int>(stretch));
}

bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
    return self->setStretchFactor(l, static_cast<int>(stretch));
}

void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch) {
    self->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

int QBoxLayout_Stretch(const QBoxLayout* self, int index) {
    return self->stretch(static_cast<int>(index));
}

QSize* QBoxLayout_SizeHint(const QBoxLayout* self) {
    return new QSize(self->sizeHint());
}

QSize* QBoxLayout_MinimumSize(const QBoxLayout* self) {
    return new QSize(self->minimumSize());
}

QSize* QBoxLayout_MaximumSize(const QBoxLayout* self) {
    return new QSize(self->maximumSize());
}

bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self) {
    return self->hasHeightForWidth();
}

int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QBoxLayout_ExpandingDirections(const QBoxLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

void QBoxLayout_Invalidate(QBoxLayout* self) {
    self->invalidate();
}

QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1) {
    return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1) {
    return self->takeAt(static_cast<int>(param1));
}

int QBoxLayout_Count(const QBoxLayout* self) {
    return self->count();
}

void QBoxLayout_SetGeometry(QBoxLayout* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

libqt_string QBoxLayout_Tr2(const char* s, const char* c) {
    auto _ret = QBoxLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBoxLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBoxLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch) {
    self->addStretch(static_cast<int>(stretch));
}

void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
    self->addWidget(param1, static_cast<int>(stretch));
}

void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
    self->addWidget(param1, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
    self->addLayout(layout, static_cast<int>(stretch));
}

void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch) {
    self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
    self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
    self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
    self->insertLayout(static_cast<int>(index), layout, static_cast<int>(stretch));
}

// Base class handler implementation
QMetaObject* QBoxLayout_SuperMetaObject(const QBoxLayout* self) {
    return (QMetaObject*)self->QBoxLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMetaObject(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_metaobject_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBoxLayout_SuperMetacast(QBoxLayout* self, const char* param1) {
    return self->QBoxLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMetacast(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_metacast_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBoxLayout_SuperMetacall(QBoxLayout* self, int param1, int param2, void** param3) {
    return self->QBoxLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMetacall(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_metacall_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Metacall_Callback>(slot);
}

// Base class handler implementation
void QBoxLayout_SuperAddItem(QBoxLayout* self, QLayoutItem* param1) {
    self->QBoxLayout::addItem(param1);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAddItem(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_additem_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AddItem_Callback>(slot);
}

// Base class handler implementation
int QBoxLayout_SuperSpacing(const QBoxLayout* self) {
    return self->QBoxLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSpacing(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_spacing_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Spacing_Callback>(slot);
}

// Base class handler implementation
void QBoxLayout_SuperSetSpacing(QBoxLayout* self, int spacing) {
    self->QBoxLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSetSpacing(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_setspacing_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SetSpacing_Callback>(slot);
}

// Base class handler implementation
QSize* QBoxLayout_SuperSizeHint(const QBoxLayout* self) {
    return new QSize(self->QBoxLayout::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSizeHint(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_sizehint_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QBoxLayout_SuperMinimumSize(const QBoxLayout* self) {
    return new QSize(self->QBoxLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMinimumSize(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_minimumsize_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QBoxLayout_SuperMaximumSize(const QBoxLayout* self) {
    return new QSize(self->QBoxLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMaximumSize(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_maximumsize_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MaximumSize_Callback>(slot);
}

// Base class handler implementation
bool QBoxLayout_SuperHasHeightForWidth(const QBoxLayout* self) {
    return self->QBoxLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnHasHeightForWidth(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QBoxLayout_SuperHeightForWidth(const QBoxLayout* self, int param1) {
    return self->QBoxLayout::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnHeightForWidth(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_heightforwidth_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QBoxLayout_SuperMinimumHeightForWidth(const QBoxLayout* self, int param1) {
    return self->QBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMinimumHeightForWidth(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MinimumHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QBoxLayout_SuperExpandingDirections(const QBoxLayout* self) {
    return static_cast<int>(self->QBoxLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnExpandingDirections(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_expandingdirections_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ExpandingDirections_Callback>(slot);
}

// Base class handler implementation
void QBoxLayout_SuperInvalidate(QBoxLayout* self) {
    self->QBoxLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnInvalidate(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_invalidate_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QBoxLayout_SuperItemAt(const QBoxLayout* self, int param1) {
    return self->QBoxLayout::itemAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnItemAt(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_itemat_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ItemAt_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QBoxLayout_SuperTakeAt(QBoxLayout* self, int param1) {
    return self->QBoxLayout::takeAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnTakeAt(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_takeat_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_TakeAt_Callback>(slot);
}

// Base class handler implementation
int QBoxLayout_SuperCount(const QBoxLayout* self) {
    return self->QBoxLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnCount(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_count_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Count_Callback>(slot);
}

// Base class handler implementation
void QBoxLayout_SuperSetGeometry(QBoxLayout* self, const QRect* geometry) {
    self->QBoxLayout::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSetGeometry(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_setgeometry_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
QRect* QBoxLayout_Geometry(const QBoxLayout* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QBoxLayout_SuperGeometry(const QBoxLayout* self) {
    return new QRect(self->QBoxLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnGeometry(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_geometry_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Geometry_Callback>(slot);
}

// Derived class handler implementation
int QBoxLayout_IndexOf(const QBoxLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

// Base class handler implementation
int QBoxLayout_SuperIndexOf(const QBoxLayout* self, const QWidget* param1) {
    return self->QBoxLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnIndexOf(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_indexof_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_IndexOf_Callback>(slot);
}

// Derived class handler implementation
bool QBoxLayout_IsEmpty(const QBoxLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QBoxLayout_SuperIsEmpty(const QBoxLayout* self) {
    return self->QBoxLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnIsEmpty(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_isempty_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
int QBoxLayout_ControlTypes(const QBoxLayout* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QBoxLayout_SuperControlTypes(const QBoxLayout* self) {
    return static_cast<int>(self->QBoxLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnControlTypes(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_controltypes_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QBoxLayout_ReplaceWidget(QBoxLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Base class handler implementation
QLayoutItem* QBoxLayout_SuperReplaceWidget(QBoxLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnReplaceWidget(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_replacewidget_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ReplaceWidget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QBoxLayout_Layout(QBoxLayout* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QBoxLayout_SuperLayout(QBoxLayout* self) {
    return self->QBoxLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnLayout(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_layout_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Layout_Callback>(slot);
}

// Derived class handler implementation
void QBoxLayout_ChildEvent(QBoxLayout* self, QChildEvent* e) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout) {
        vqboxlayout->childEvent(e);
    } else {
        qFatal("Error: Protected virtual method QBoxLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxLayout_SuperChildEvent(QBoxLayout* self, QChildEvent* e) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->QBoxLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QBoxLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnChildEvent(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_childevent_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QBoxLayout_Event(QBoxLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBoxLayout_SuperEvent(QBoxLayout* self, QEvent* event) {
    return self->QBoxLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnEvent(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_event_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBoxLayout_EventFilter(QBoxLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBoxLayout_SuperEventFilter(QBoxLayout* self, QObject* watched, QEvent* event) {
    return self->QBoxLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnEventFilter(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_eventfilter_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBoxLayout_TimerEvent(QBoxLayout* self, QTimerEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout) {
        vqboxlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBoxLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxLayout_SuperTimerEvent(QBoxLayout* self, QTimerEvent* event) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->QBoxLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBoxLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnTimerEvent(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_timerevent_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBoxLayout_CustomEvent(QBoxLayout* self, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout) {
        vqboxlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBoxLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxLayout_SuperCustomEvent(QBoxLayout* self, QEvent* event) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->QBoxLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBoxLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnCustomEvent(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_customevent_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBoxLayout_ConnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout) {
        vqboxlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBoxLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxLayout_SuperConnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->QBoxLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBoxLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnConnectNotify(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_connectnotify_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBoxLayout_DisconnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout) {
        vqboxlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBoxLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxLayout_SuperDisconnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->QBoxLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBoxLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnDisconnectNotify(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_disconnectnotify_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QWidget* QBoxLayout_Widget(const QBoxLayout* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QBoxLayout_SuperWidget(const QBoxLayout* self) {
    return self->QBoxLayout::widget();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnWidget(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        vqboxlayout->qboxlayout_widget_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Widget_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QBoxLayout_SpacerItem(QBoxLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QBoxLayout_SuperSpacerItem(QBoxLayout* self) {
    return self->QBoxLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSpacerItem(QBoxLayout* self, intptr_t slot) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self))
        vqboxlayout->qboxlayout_spaceritem_callback = reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QBoxLayout_WidgetEvent(QBoxLayout* self, QEvent* param1) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->VirtualQBoxLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QBoxLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QBoxLayout_AddChildLayout(QBoxLayout* self, QLayout* l) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->VirtualQBoxLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QBoxLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QBoxLayout_AddChildWidget(QBoxLayout* self, QWidget* w) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        vqboxlayout->VirtualQBoxLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QBoxLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBoxLayout_AdoptLayout(QBoxLayout* self, QLayout* layout) {
    if (auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self)) {
        return vqboxlayout->VirtualQBoxLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QBoxLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QBoxLayout_AlignmentRect(const QBoxLayout* self, const QRect* param1) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self)))
        return new QRect(vqboxlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QBoxLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QBoxLayout_Sender(const QBoxLayout* self) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self))) {
        return vqboxlayout->VirtualQBoxLayout::sender();
    } else
        qFatal("Error: Protected method QBoxLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBoxLayout_SenderSignalIndex(const QBoxLayout* self) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self))) {
        return vqboxlayout->VirtualQBoxLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBoxLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBoxLayout_Receivers(const QBoxLayout* self, const char* signal) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self))) {
        return vqboxlayout->VirtualQBoxLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QBoxLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBoxLayout_IsSignalConnected(const QBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self))) {
        return vqboxlayout->VirtualQBoxLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBoxLayout::isSignalConnected called without a directly constructed type");
}

void QBoxLayout_Delete(QBoxLayout* self) {
    delete self;
}

QHBoxLayout* QHBoxLayout_new(QWidget* parent) {
    return new VirtualQHBoxLayout(parent);
}

QHBoxLayout* QHBoxLayout_new2() {
    return new VirtualQHBoxLayout();
}

QMetaObject* QHBoxLayout_MetaObject(const QHBoxLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHBoxLayout_Metacast(QHBoxLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHBoxLayout_Metacall(QHBoxLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHBoxLayout_Tr(const char* s) {
    auto _ret = QHBoxLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBoxLayout_Tr2(const char* s, const char* c) {
    auto _ret = QHBoxLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHBoxLayout::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHBoxLayout_SuperMetaObject(const QHBoxLayout* self) {
    return (QMetaObject*)self->QHBoxLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMetaObject(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_metaobject_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHBoxLayout_SuperMetacast(QHBoxLayout* self, const char* param1) {
    return self->QHBoxLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMetacast(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_metacast_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHBoxLayout_SuperMetacall(QHBoxLayout* self, int param1, int param2, void** param3) {
    return self->QHBoxLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMetacall(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_metacall_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_AddItem(QHBoxLayout* self, QLayoutItem* param1) {
    self->addItem(param1);
}

// Base class handler implementation
void QHBoxLayout_SuperAddItem(QHBoxLayout* self, QLayoutItem* param1) {
    self->QHBoxLayout::addItem(param1);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnAddItem(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_additem_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_AddItem_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_Spacing(const QHBoxLayout* self) {
    return self->spacing();
}

// Base class handler implementation
int QHBoxLayout_SuperSpacing(const QHBoxLayout* self) {
    return self->QHBoxLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSpacing(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_spacing_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Spacing_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_SetSpacing(QHBoxLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

// Base class handler implementation
void QHBoxLayout_SuperSetSpacing(QHBoxLayout* self, int spacing) {
    self->QHBoxLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSetSpacing(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_setspacing_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SetSpacing_Callback>(slot);
}

// Derived class handler implementation
QSize* QHBoxLayout_SizeHint(const QHBoxLayout* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QHBoxLayout_SuperSizeHint(const QHBoxLayout* self) {
    return new QSize(self->QHBoxLayout::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSizeHint(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_sizehint_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QHBoxLayout_MinimumSize(const QHBoxLayout* self) {
    return new QSize(self->minimumSize());
}

// Base class handler implementation
QSize* QHBoxLayout_SuperMinimumSize(const QHBoxLayout* self) {
    return new QSize(self->QHBoxLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMinimumSize(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_minimumsize_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MinimumSize_Callback>(slot);
}

// Derived class handler implementation
QSize* QHBoxLayout_MaximumSize(const QHBoxLayout* self) {
    return new QSize(self->maximumSize());
}

// Base class handler implementation
QSize* QHBoxLayout_SuperMaximumSize(const QHBoxLayout* self) {
    return new QSize(self->QHBoxLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMaximumSize(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_maximumsize_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MaximumSize_Callback>(slot);
}

// Derived class handler implementation
bool QHBoxLayout_HasHeightForWidth(const QHBoxLayout* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QHBoxLayout_SuperHasHeightForWidth(const QHBoxLayout* self) {
    return self->QHBoxLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnHasHeightForWidth(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_HeightForWidth(const QHBoxLayout* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QHBoxLayout_SuperHeightForWidth(const QHBoxLayout* self, int param1) {
    return self->QHBoxLayout::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnHeightForWidth(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_heightforwidth_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_MinimumHeightForWidth(const QHBoxLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QHBoxLayout_SuperMinimumHeightForWidth(const QHBoxLayout* self, int param1) {
    return self->QHBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMinimumHeightForWidth(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_ExpandingDirections(const QHBoxLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

// Base class handler implementation
int QHBoxLayout_SuperExpandingDirections(const QHBoxLayout* self) {
    return static_cast<int>(self->QHBoxLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnExpandingDirections(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_expandingdirections_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ExpandingDirections_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_Invalidate(QHBoxLayout* self) {
    self->invalidate();
}

// Base class handler implementation
void QHBoxLayout_SuperInvalidate(QHBoxLayout* self) {
    self->QHBoxLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnInvalidate(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_invalidate_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Invalidate_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QHBoxLayout_ItemAt(const QHBoxLayout* self, int param1) {
    return self->itemAt(static_cast<int>(param1));
}

// Base class handler implementation
QLayoutItem* QHBoxLayout_SuperItemAt(const QHBoxLayout* self, int param1) {
    return self->QHBoxLayout::itemAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnItemAt(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_itemat_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ItemAt_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QHBoxLayout_TakeAt(QHBoxLayout* self, int param1) {
    return self->takeAt(static_cast<int>(param1));
}

// Base class handler implementation
QLayoutItem* QHBoxLayout_SuperTakeAt(QHBoxLayout* self, int param1) {
    return self->QHBoxLayout::takeAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnTakeAt(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_takeat_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_TakeAt_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_Count(const QHBoxLayout* self) {
    return self->count();
}

// Base class handler implementation
int QHBoxLayout_SuperCount(const QHBoxLayout* self) {
    return self->QHBoxLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnCount(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_count_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Count_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_SetGeometry(QHBoxLayout* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

// Base class handler implementation
void QHBoxLayout_SuperSetGeometry(QHBoxLayout* self, const QRect* geometry) {
    self->QHBoxLayout::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSetGeometry(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_setgeometry_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
QRect* QHBoxLayout_Geometry(const QHBoxLayout* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QHBoxLayout_SuperGeometry(const QHBoxLayout* self) {
    return new QRect(self->QHBoxLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnGeometry(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_geometry_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Geometry_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_IndexOf(const QHBoxLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

// Base class handler implementation
int QHBoxLayout_SuperIndexOf(const QHBoxLayout* self, const QWidget* param1) {
    return self->QHBoxLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnIndexOf(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_indexof_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_IndexOf_Callback>(slot);
}

// Derived class handler implementation
bool QHBoxLayout_IsEmpty(const QHBoxLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QHBoxLayout_SuperIsEmpty(const QHBoxLayout* self) {
    return self->QHBoxLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnIsEmpty(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_isempty_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
int QHBoxLayout_ControlTypes(const QHBoxLayout* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QHBoxLayout_SuperControlTypes(const QHBoxLayout* self) {
    return static_cast<int>(self->QHBoxLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnControlTypes(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_controltypes_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QHBoxLayout_ReplaceWidget(QHBoxLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Base class handler implementation
QLayoutItem* QHBoxLayout_SuperReplaceWidget(QHBoxLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QHBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnReplaceWidget(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_replacewidget_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ReplaceWidget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QHBoxLayout_Layout(QHBoxLayout* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QHBoxLayout_SuperLayout(QHBoxLayout* self) {
    return self->QHBoxLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnLayout(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_layout_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Layout_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_ChildEvent(QHBoxLayout* self, QChildEvent* e) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout) {
        vqhboxlayout->childEvent(e);
    } else {
        qFatal("Error: Protected virtual method QHBoxLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxLayout_SuperChildEvent(QHBoxLayout* self, QChildEvent* e) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->QHBoxLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QHBoxLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnChildEvent(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_childevent_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QHBoxLayout_Event(QHBoxLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHBoxLayout_SuperEvent(QHBoxLayout* self, QEvent* event) {
    return self->QHBoxLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnEvent(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_event_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHBoxLayout_EventFilter(QHBoxLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHBoxLayout_SuperEventFilter(QHBoxLayout* self, QObject* watched, QEvent* event) {
    return self->QHBoxLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnEventFilter(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_eventfilter_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_TimerEvent(QHBoxLayout* self, QTimerEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout) {
        vqhboxlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBoxLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxLayout_SuperTimerEvent(QHBoxLayout* self, QTimerEvent* event) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->QHBoxLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBoxLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnTimerEvent(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_timerevent_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_CustomEvent(QHBoxLayout* self, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout) {
        vqhboxlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHBoxLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxLayout_SuperCustomEvent(QHBoxLayout* self, QEvent* event) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->QHBoxLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHBoxLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnCustomEvent(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_customevent_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_ConnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout) {
        vqhboxlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHBoxLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxLayout_SuperConnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->QHBoxLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHBoxLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnConnectNotify(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_connectnotify_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHBoxLayout_DisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout) {
        vqhboxlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHBoxLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHBoxLayout_SuperDisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->QHBoxLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHBoxLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnDisconnectNotify(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_disconnectnotify_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QWidget* QHBoxLayout_Widget(const QHBoxLayout* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QHBoxLayout_SuperWidget(const QHBoxLayout* self) {
    return self->QHBoxLayout::widget();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnWidget(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        vqhboxlayout->qhboxlayout_widget_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Widget_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QHBoxLayout_SpacerItem(QHBoxLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QHBoxLayout_SuperSpacerItem(QHBoxLayout* self) {
    return self->QHBoxLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSpacerItem(QHBoxLayout* self, intptr_t slot) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self))
        vqhboxlayout->qhboxlayout_spaceritem_callback = reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QHBoxLayout_WidgetEvent(QHBoxLayout* self, QEvent* param1) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->VirtualQHBoxLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QHBoxLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxLayout_AddChildLayout(QHBoxLayout* self, QLayout* l) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->VirtualQHBoxLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QHBoxLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QHBoxLayout_AddChildWidget(QHBoxLayout* self, QWidget* w) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        vqhboxlayout->VirtualQHBoxLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QHBoxLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHBoxLayout_AdoptLayout(QHBoxLayout* self, QLayout* layout) {
    if (auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self)) {
        return vqhboxlayout->VirtualQHBoxLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QHBoxLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QHBoxLayout_AlignmentRect(const QHBoxLayout* self, const QRect* param1) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self)))
        return new QRect(vqhboxlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QHBoxLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QHBoxLayout_Sender(const QHBoxLayout* self) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self))) {
        return vqhboxlayout->VirtualQHBoxLayout::sender();
    } else
        qFatal("Error: Protected method QHBoxLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxLayout_SenderSignalIndex(const QHBoxLayout* self) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self))) {
        return vqhboxlayout->VirtualQHBoxLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHBoxLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHBoxLayout_Receivers(const QHBoxLayout* self, const char* signal) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self))) {
        return vqhboxlayout->VirtualQHBoxLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QHBoxLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHBoxLayout_IsSignalConnected(const QHBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self))) {
        return vqhboxlayout->VirtualQHBoxLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHBoxLayout::isSignalConnected called without a directly constructed type");
}

void QHBoxLayout_Delete(QHBoxLayout* self) {
    delete self;
}

QVBoxLayout* QVBoxLayout_new(QWidget* parent) {
    return new VirtualQVBoxLayout(parent);
}

QVBoxLayout* QVBoxLayout_new2() {
    return new VirtualQVBoxLayout();
}

QMetaObject* QVBoxLayout_MetaObject(const QVBoxLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVBoxLayout_Metacast(QVBoxLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVBoxLayout_Metacall(QVBoxLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVBoxLayout_Tr(const char* s) {
    auto _ret = QVBoxLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBoxLayout_Tr2(const char* s, const char* c) {
    auto _ret = QVBoxLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVBoxLayout::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVBoxLayout_SuperMetaObject(const QVBoxLayout* self) {
    return (QMetaObject*)self->QVBoxLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMetaObject(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_metaobject_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVBoxLayout_SuperMetacast(QVBoxLayout* self, const char* param1) {
    return self->QVBoxLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMetacast(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_metacast_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVBoxLayout_SuperMetacall(QVBoxLayout* self, int param1, int param2, void** param3) {
    return self->QVBoxLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMetacall(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_metacall_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_AddItem(QVBoxLayout* self, QLayoutItem* param1) {
    self->addItem(param1);
}

// Base class handler implementation
void QVBoxLayout_SuperAddItem(QVBoxLayout* self, QLayoutItem* param1) {
    self->QVBoxLayout::addItem(param1);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnAddItem(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_additem_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_AddItem_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_Spacing(const QVBoxLayout* self) {
    return self->spacing();
}

// Base class handler implementation
int QVBoxLayout_SuperSpacing(const QVBoxLayout* self) {
    return self->QVBoxLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSpacing(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_spacing_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Spacing_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_SetSpacing(QVBoxLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

// Base class handler implementation
void QVBoxLayout_SuperSetSpacing(QVBoxLayout* self, int spacing) {
    self->QVBoxLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSetSpacing(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_setspacing_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SetSpacing_Callback>(slot);
}

// Derived class handler implementation
QSize* QVBoxLayout_SizeHint(const QVBoxLayout* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QVBoxLayout_SuperSizeHint(const QVBoxLayout* self) {
    return new QSize(self->QVBoxLayout::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSizeHint(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_sizehint_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QVBoxLayout_MinimumSize(const QVBoxLayout* self) {
    return new QSize(self->minimumSize());
}

// Base class handler implementation
QSize* QVBoxLayout_SuperMinimumSize(const QVBoxLayout* self) {
    return new QSize(self->QVBoxLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMinimumSize(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_minimumsize_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MinimumSize_Callback>(slot);
}

// Derived class handler implementation
QSize* QVBoxLayout_MaximumSize(const QVBoxLayout* self) {
    return new QSize(self->maximumSize());
}

// Base class handler implementation
QSize* QVBoxLayout_SuperMaximumSize(const QVBoxLayout* self) {
    return new QSize(self->QVBoxLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMaximumSize(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_maximumsize_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MaximumSize_Callback>(slot);
}

// Derived class handler implementation
bool QVBoxLayout_HasHeightForWidth(const QVBoxLayout* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QVBoxLayout_SuperHasHeightForWidth(const QVBoxLayout* self) {
    return self->QVBoxLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnHasHeightForWidth(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_HeightForWidth(const QVBoxLayout* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QVBoxLayout_SuperHeightForWidth(const QVBoxLayout* self, int param1) {
    return self->QVBoxLayout::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnHeightForWidth(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_heightforwidth_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_MinimumHeightForWidth(const QVBoxLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QVBoxLayout_SuperMinimumHeightForWidth(const QVBoxLayout* self, int param1) {
    return self->QVBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMinimumHeightForWidth(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_ExpandingDirections(const QVBoxLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

// Base class handler implementation
int QVBoxLayout_SuperExpandingDirections(const QVBoxLayout* self) {
    return static_cast<int>(self->QVBoxLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnExpandingDirections(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_expandingdirections_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ExpandingDirections_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_Invalidate(QVBoxLayout* self) {
    self->invalidate();
}

// Base class handler implementation
void QVBoxLayout_SuperInvalidate(QVBoxLayout* self) {
    self->QVBoxLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnInvalidate(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_invalidate_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Invalidate_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QVBoxLayout_ItemAt(const QVBoxLayout* self, int param1) {
    return self->itemAt(static_cast<int>(param1));
}

// Base class handler implementation
QLayoutItem* QVBoxLayout_SuperItemAt(const QVBoxLayout* self, int param1) {
    return self->QVBoxLayout::itemAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnItemAt(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_itemat_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ItemAt_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QVBoxLayout_TakeAt(QVBoxLayout* self, int param1) {
    return self->takeAt(static_cast<int>(param1));
}

// Base class handler implementation
QLayoutItem* QVBoxLayout_SuperTakeAt(QVBoxLayout* self, int param1) {
    return self->QVBoxLayout::takeAt(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnTakeAt(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_takeat_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_TakeAt_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_Count(const QVBoxLayout* self) {
    return self->count();
}

// Base class handler implementation
int QVBoxLayout_SuperCount(const QVBoxLayout* self) {
    return self->QVBoxLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnCount(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_count_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Count_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_SetGeometry(QVBoxLayout* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

// Base class handler implementation
void QVBoxLayout_SuperSetGeometry(QVBoxLayout* self, const QRect* geometry) {
    self->QVBoxLayout::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSetGeometry(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_setgeometry_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
QRect* QVBoxLayout_Geometry(const QVBoxLayout* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QVBoxLayout_SuperGeometry(const QVBoxLayout* self) {
    return new QRect(self->QVBoxLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnGeometry(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_geometry_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Geometry_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_IndexOf(const QVBoxLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

// Base class handler implementation
int QVBoxLayout_SuperIndexOf(const QVBoxLayout* self, const QWidget* param1) {
    return self->QVBoxLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnIndexOf(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_indexof_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_IndexOf_Callback>(slot);
}

// Derived class handler implementation
bool QVBoxLayout_IsEmpty(const QVBoxLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QVBoxLayout_SuperIsEmpty(const QVBoxLayout* self) {
    return self->QVBoxLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnIsEmpty(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_isempty_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
int QVBoxLayout_ControlTypes(const QVBoxLayout* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QVBoxLayout_SuperControlTypes(const QVBoxLayout* self) {
    return static_cast<int>(self->QVBoxLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnControlTypes(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_controltypes_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QVBoxLayout_ReplaceWidget(QVBoxLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Base class handler implementation
QLayoutItem* QVBoxLayout_SuperReplaceWidget(QVBoxLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QVBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnReplaceWidget(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_replacewidget_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ReplaceWidget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QVBoxLayout_Layout(QVBoxLayout* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QVBoxLayout_SuperLayout(QVBoxLayout* self) {
    return self->QVBoxLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnLayout(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_layout_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Layout_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_ChildEvent(QVBoxLayout* self, QChildEvent* e) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout) {
        vqvboxlayout->childEvent(e);
    } else {
        qFatal("Error: Protected virtual method QVBoxLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxLayout_SuperChildEvent(QVBoxLayout* self, QChildEvent* e) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->QVBoxLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QVBoxLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnChildEvent(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_childevent_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QVBoxLayout_Event(QVBoxLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVBoxLayout_SuperEvent(QVBoxLayout* self, QEvent* event) {
    return self->QVBoxLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnEvent(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_event_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVBoxLayout_EventFilter(QVBoxLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVBoxLayout_SuperEventFilter(QVBoxLayout* self, QObject* watched, QEvent* event) {
    return self->QVBoxLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnEventFilter(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_eventfilter_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_TimerEvent(QVBoxLayout* self, QTimerEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout) {
        vqvboxlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBoxLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxLayout_SuperTimerEvent(QVBoxLayout* self, QTimerEvent* event) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->QVBoxLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBoxLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnTimerEvent(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_timerevent_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_CustomEvent(QVBoxLayout* self, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout) {
        vqvboxlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVBoxLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxLayout_SuperCustomEvent(QVBoxLayout* self, QEvent* event) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->QVBoxLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVBoxLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnCustomEvent(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_customevent_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_ConnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout) {
        vqvboxlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVBoxLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxLayout_SuperConnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->QVBoxLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVBoxLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnConnectNotify(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_connectnotify_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVBoxLayout_DisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout) {
        vqvboxlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVBoxLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVBoxLayout_SuperDisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->QVBoxLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVBoxLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnDisconnectNotify(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_disconnectnotify_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QWidget* QVBoxLayout_Widget(const QVBoxLayout* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QVBoxLayout_SuperWidget(const QVBoxLayout* self) {
    return self->QVBoxLayout::widget();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnWidget(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        vqvboxlayout->qvboxlayout_widget_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Widget_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QVBoxLayout_SpacerItem(QVBoxLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QVBoxLayout_SuperSpacerItem(QVBoxLayout* self) {
    return self->QVBoxLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSpacerItem(QVBoxLayout* self, intptr_t slot) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self))
        vqvboxlayout->qvboxlayout_spaceritem_callback = reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QVBoxLayout_WidgetEvent(QVBoxLayout* self, QEvent* param1) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->VirtualQVBoxLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QVBoxLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxLayout_AddChildLayout(QVBoxLayout* self, QLayout* l) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->VirtualQVBoxLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QVBoxLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QVBoxLayout_AddChildWidget(QVBoxLayout* self, QWidget* w) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        vqvboxlayout->VirtualQVBoxLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QVBoxLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVBoxLayout_AdoptLayout(QVBoxLayout* self, QLayout* layout) {
    if (auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self)) {
        return vqvboxlayout->VirtualQVBoxLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QVBoxLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QVBoxLayout_AlignmentRect(const QVBoxLayout* self, const QRect* param1) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self)))
        return new QRect(vqvboxlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QVBoxLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVBoxLayout_Sender(const QVBoxLayout* self) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self))) {
        return vqvboxlayout->VirtualQVBoxLayout::sender();
    } else
        qFatal("Error: Protected method QVBoxLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxLayout_SenderSignalIndex(const QVBoxLayout* self) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self))) {
        return vqvboxlayout->VirtualQVBoxLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVBoxLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVBoxLayout_Receivers(const QVBoxLayout* self, const char* signal) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self))) {
        return vqvboxlayout->VirtualQVBoxLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QVBoxLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVBoxLayout_IsSignalConnected(const QVBoxLayout* self, const QMetaMethod* signal) {
    if (auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self))) {
        return vqvboxlayout->VirtualQVBoxLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVBoxLayout::isSignalConnected called without a directly constructed type");
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
    delete self;
}
