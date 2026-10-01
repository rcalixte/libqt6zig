#include <KDatePicker>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kdatepicker.h>
#include "libkdatepicker.h"
#include "libkdatepicker.hxx"

KDatePicker* KDatePicker_new(QWidget* parent) {
    return new VirtualKDatePicker(parent);
}

KDatePicker* KDatePicker_new2() {
    return new VirtualKDatePicker();
}

KDatePicker* KDatePicker_new3(const QDate* dt) {
    return new VirtualKDatePicker(*dt);
}

KDatePicker* KDatePicker_new4(const QDate* dt, QWidget* parent) {
    return new VirtualKDatePicker(*dt, parent);
}

QMetaObject* KDatePicker_MetaObject(const KDatePicker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDatePicker_Metacast(KDatePicker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDatePicker_Metacall(KDatePicker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDatePicker_Tr(const char* s) {
    auto _ret = KDatePicker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KDatePicker_SizeHint(const KDatePicker* self) {
    return new QSize(self->sizeHint());
}

bool KDatePicker_SetDate(KDatePicker* self, const QDate* date) {
    return self->setDate(*date);
}

QDate* KDatePicker_Date(const KDatePicker* self) {
    const QDate& _ret = self->date();
    // Cast returned reference into pointer
    return const_cast<QDate*>(&_ret);
}

void KDatePicker_SetFontSize(KDatePicker* self, int fontSize) {
    self->setFontSize(static_cast<int>(fontSize));
}

int KDatePicker_FontSize(const KDatePicker* self) {
    return self->fontSize();
}

void KDatePicker_SetCloseButton(KDatePicker* self, bool enable) {
    self->setCloseButton(enable);
}

bool KDatePicker_HasCloseButton(const KDatePicker* self) {
    return self->hasCloseButton();
}

void KDatePicker_SetDateRange(KDatePicker* self, const QDate* minDate) {
    self->setDateRange(*minDate);
}

bool KDatePicker_EventFilter(KDatePicker* self, QObject* o, QEvent* e) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        return vkdatepicker->eventFilter(o, e);
    }
    qFatal("Error: Protected method KDatePicker::eventFilter called without a directly constructed type");
}

void KDatePicker_ResizeEvent(KDatePicker* self, QResizeEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->resizeEvent(param1);
    }
}

void KDatePicker_ChangeEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->changeEvent(event);
    }
}

void KDatePicker_DateChanged(KDatePicker* self, const QDate* date) {
    self->dateChanged(*date);
}

void KDatePicker_Connect_DateChanged(KDatePicker* self, intptr_t slot) {
    void (*slotFunc)(KDatePicker*, QDate*) = reinterpret_cast<void (*)(KDatePicker*, QDate*)>(slot);
    KDatePicker::connect(self,
                         static_cast<void (KDatePicker::*)(const QDate&)>(&KDatePicker::dateChanged),
                         [self, slotFunc](const QDate& date) {
                             const QDate& date_ret = date;
                             // Cast returned reference into pointer
                             QDate* sigval1 = const_cast<QDate*>(&date_ret);
                             slotFunc(self, sigval1);
                         });
}

void KDatePicker_DateSelected(KDatePicker* self, const QDate* date) {
    self->dateSelected(*date);
}

void KDatePicker_Connect_DateSelected(KDatePicker* self, intptr_t slot) {
    void (*slotFunc)(KDatePicker*, QDate*) = reinterpret_cast<void (*)(KDatePicker*, QDate*)>(slot);
    KDatePicker::connect(self,
                         static_cast<void (KDatePicker::*)(const QDate&)>(&KDatePicker::dateSelected),
                         [self, slotFunc](const QDate& date) {
                             const QDate& date_ret = date;
                             // Cast returned reference into pointer
                             QDate* sigval1 = const_cast<QDate*>(&date_ret);
                             slotFunc(self, sigval1);
                         });
}

void KDatePicker_DateEntered(KDatePicker* self, const QDate* date) {
    self->dateEntered(*date);
}

void KDatePicker_Connect_DateEntered(KDatePicker* self, intptr_t slot) {
    void (*slotFunc)(KDatePicker*, QDate*) = reinterpret_cast<void (*)(KDatePicker*, QDate*)>(slot);
    KDatePicker::connect(self,
                         static_cast<void (KDatePicker::*)(const QDate&)>(&KDatePicker::dateEntered),
                         [self, slotFunc](const QDate& date) {
                             const QDate& date_ret = date;
                             // Cast returned reference into pointer
                             QDate* sigval1 = const_cast<QDate*>(&date_ret);
                             slotFunc(self, sigval1);
                         });
}

void KDatePicker_TableClicked(KDatePicker* self) {
    self->tableClicked();
}

void KDatePicker_Connect_TableClicked(KDatePicker* self, intptr_t slot) {
    void (*slotFunc)(KDatePicker*) = reinterpret_cast<void (*)(KDatePicker*)>(slot);
    KDatePicker::connect(self,
                         static_cast<void (KDatePicker::*)()>(&KDatePicker::tableClicked),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

libqt_string KDatePicker_Tr2(const char* s, const char* c) {
    auto _ret = KDatePicker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDatePicker_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDatePicker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDatePicker_SetDateRange2(KDatePicker* self, const QDate* minDate, const QDate* maxDate) {
    self->setDateRange(*minDate, *maxDate);
}

// Base class handler implementation
QMetaObject* KDatePicker_SuperMetaObject(const KDatePicker* self) {
    return (QMetaObject*)self->KDatePicker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMetaObject(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_metaobject_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDatePicker_SuperMetacast(KDatePicker* self, const char* param1) {
    return self->KDatePicker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMetacast(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_metacast_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDatePicker_SuperMetacall(KDatePicker* self, int param1, int param2, void** param3) {
    return self->KDatePicker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMetacall(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_metacall_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KDatePicker_SuperSizeHint(const KDatePicker* self) {
    return new QSize(self->KDatePicker::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSizeHint(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_sizehint_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool KDatePicker_SuperEventFilter(KDatePicker* self, QObject* o, QEvent* e) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        return vkdatepicker->KDatePicker::eventFilter(o, e);
    } else
        qFatal("Error: Protected virtual method KDatePicker::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnEventFilter(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_eventfilter_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KDatePicker_SuperResizeEvent(KDatePicker* self, QResizeEvent* param1) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePicker::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnResizeEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_resizeevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KDatePicker_SuperChangeEvent(KDatePicker* self, QEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnChangeEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_changeevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDatePicker_Event(KDatePicker* self, QEvent* e) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        return vkdatepicker->event(e);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDatePicker_SuperEvent(KDatePicker* self, QEvent* e) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        return vkdatepicker->KDatePicker::event(e);
    } else
        qFatal("Error: Protected virtual method KDatePicker::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_event_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_Event_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_PaintEvent(KDatePicker* self, QPaintEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperPaintEvent(KDatePicker* self, QPaintEvent* param1) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePicker::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnPaintEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_paintevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_InitStyleOption(const KDatePicker* self, QStyleOptionFrame* option) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker) {
        vkdatepicker->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperInitStyleOption(const KDatePicker* self, QStyleOptionFrame* option) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        vkdatepicker->KDatePicker::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KDatePicker::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInitStyleOption(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_initstyleoption_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KDatePicker_DevType(const KDatePicker* self) {
    return self->devType();
}

// Base class handler implementation
int KDatePicker_SuperDevType(const KDatePicker* self) {
    return self->KDatePicker::devType();
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDevType(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_devtype_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_DevType_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_SetVisible(KDatePicker* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KDatePicker_SuperSetVisible(KDatePicker* self, bool visible) {
    self->KDatePicker::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSetVisible(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_setvisible_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KDatePicker_MinimumSizeHint(const KDatePicker* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KDatePicker_SuperMinimumSizeHint(const KDatePicker* self) {
    return new QSize(self->KDatePicker::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMinimumSizeHint(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_minimumsizehint_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KDatePicker_HeightForWidth(const KDatePicker* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KDatePicker_SuperHeightForWidth(const KDatePicker* self, int param1) {
    return self->KDatePicker::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnHeightForWidth(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_heightforwidth_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KDatePicker_HasHeightForWidth(const KDatePicker* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KDatePicker_SuperHasHeightForWidth(const KDatePicker* self) {
    return self->KDatePicker::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnHasHeightForWidth(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_hasheightforwidth_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KDatePicker_PaintEngine(const KDatePicker* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KDatePicker_SuperPaintEngine(const KDatePicker* self) {
    return self->KDatePicker::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnPaintEngine(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_paintengine_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_MousePressEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperMousePressEvent(KDatePicker* self, QMouseEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMousePressEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_mousepressevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_MouseReleaseEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperMouseReleaseEvent(KDatePicker* self, QMouseEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMouseReleaseEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_mousereleaseevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_MouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperMouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMouseDoubleClickEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_mousedoubleclickevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_MouseMoveEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperMouseMoveEvent(KDatePicker* self, QMouseEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMouseMoveEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_mousemoveevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_WheelEvent(KDatePicker* self, QWheelEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperWheelEvent(KDatePicker* self, QWheelEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnWheelEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_wheelevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_KeyPressEvent(KDatePicker* self, QKeyEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperKeyPressEvent(KDatePicker* self, QKeyEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnKeyPressEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_keypressevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_KeyReleaseEvent(KDatePicker* self, QKeyEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperKeyReleaseEvent(KDatePicker* self, QKeyEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnKeyReleaseEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_keyreleaseevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_FocusInEvent(KDatePicker* self, QFocusEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperFocusInEvent(KDatePicker* self, QFocusEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusInEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_focusinevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_FocusOutEvent(KDatePicker* self, QFocusEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperFocusOutEvent(KDatePicker* self, QFocusEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusOutEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_focusoutevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_EnterEvent(KDatePicker* self, QEnterEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperEnterEvent(KDatePicker* self, QEnterEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnEnterEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_enterevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_LeaveEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperLeaveEvent(KDatePicker* self, QEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnLeaveEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_leaveevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_MoveEvent(KDatePicker* self, QMoveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperMoveEvent(KDatePicker* self, QMoveEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMoveEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_moveevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_CloseEvent(KDatePicker* self, QCloseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperCloseEvent(KDatePicker* self, QCloseEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnCloseEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_closeevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_ContextMenuEvent(KDatePicker* self, QContextMenuEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperContextMenuEvent(KDatePicker* self, QContextMenuEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnContextMenuEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_contextmenuevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_TabletEvent(KDatePicker* self, QTabletEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperTabletEvent(KDatePicker* self, QTabletEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnTabletEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_tabletevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_ActionEvent(KDatePicker* self, QActionEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperActionEvent(KDatePicker* self, QActionEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnActionEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_actionevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_DragEnterEvent(KDatePicker* self, QDragEnterEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperDragEnterEvent(KDatePicker* self, QDragEnterEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDragEnterEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_dragenterevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_DragMoveEvent(KDatePicker* self, QDragMoveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperDragMoveEvent(KDatePicker* self, QDragMoveEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDragMoveEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_dragmoveevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_DragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperDragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDragLeaveEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_dragleaveevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_DropEvent(KDatePicker* self, QDropEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperDropEvent(KDatePicker* self, QDropEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDropEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_dropevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_ShowEvent(KDatePicker* self, QShowEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperShowEvent(KDatePicker* self, QShowEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnShowEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_showevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_HideEvent(KDatePicker* self, QHideEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperHideEvent(KDatePicker* self, QHideEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnHideEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_hideevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDatePicker_NativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        return vkdatepicker->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KDatePicker::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDatePicker_SuperNativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        return vkdatepicker->KDatePicker::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KDatePicker::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnNativeEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_nativeevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KDatePicker_Metric(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker) {
        return vkdatepicker->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KDatePicker::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KDatePicker_SuperMetric(const KDatePicker* self, int param1) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->KDatePicker::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KDatePicker::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMetric(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_metric_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_Metric_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_InitPainter(const KDatePicker* self, QPainter* painter) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker) {
        vkdatepicker->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperInitPainter(const KDatePicker* self, QPainter* painter) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        vkdatepicker->KDatePicker::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KDatePicker::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInitPainter(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_initpainter_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KDatePicker_Redirected(const KDatePicker* self, QPoint* offset) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker) {
        return vkdatepicker->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KDatePicker_SuperRedirected(const KDatePicker* self, QPoint* offset) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->KDatePicker::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KDatePicker::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnRedirected(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_redirected_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KDatePicker_SharedPainter(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker) {
        return vkdatepicker->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KDatePicker::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KDatePicker_SuperSharedPainter(const KDatePicker* self) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->KDatePicker::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KDatePicker::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSharedPainter(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_sharedpainter_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_InputMethodEvent(KDatePicker* self, QInputMethodEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperInputMethodEvent(KDatePicker* self, QInputMethodEvent* param1) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePicker::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInputMethodEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_inputmethodevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDatePicker_InputMethodQuery(const KDatePicker* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KDatePicker_SuperInputMethodQuery(const KDatePicker* self, int param1) {
    return new QVariant(self->KDatePicker::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInputMethodQuery(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self)))
        vkdatepicker->kdatepicker_inputmethodquery_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KDatePicker_FocusNextPrevChild(KDatePicker* self, bool next) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        return vkdatepicker->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDatePicker_SuperFocusNextPrevChild(KDatePicker* self, bool next) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        return vkdatepicker->KDatePicker::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KDatePicker::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusNextPrevChild(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_focusnextprevchild_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_TimerEvent(KDatePicker* self, QTimerEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperTimerEvent(KDatePicker* self, QTimerEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnTimerEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_timerevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_ChildEvent(KDatePicker* self, QChildEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperChildEvent(KDatePicker* self, QChildEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnChildEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_childevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_CustomEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperCustomEvent(KDatePicker* self, QEvent* event) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePicker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnCustomEvent(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_customevent_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_ConnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperConnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDatePicker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnConnectNotify(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_connectnotify_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDatePicker_DisconnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker) {
        vkdatepicker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDatePicker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePicker_SuperDisconnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->KDatePicker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDatePicker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDisconnectNotify(KDatePicker* self, intptr_t slot) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self))
        vkdatepicker->kdatepicker_disconnectnotify_callback = reinterpret_cast<VirtualKDatePicker::KDatePicker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KDatePicker_DateChangedSlot(KDatePicker* self, const QDate* date) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::dateChangedSlot(*date);
    } else
        qFatal("Error: Protected method KDatePicker::dateChangedSlot called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_TableClickedSlot(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::tableClickedSlot();
    } else
        qFatal("Error: Protected method KDatePicker::tableClickedSlot called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_MonthForwardClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::monthForwardClicked();
    } else
        qFatal("Error: Protected method KDatePicker::monthForwardClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_MonthBackwardClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::monthBackwardClicked();
    } else
        qFatal("Error: Protected method KDatePicker::monthBackwardClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_YearForwardClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::yearForwardClicked();
    } else
        qFatal("Error: Protected method KDatePicker::yearForwardClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_YearBackwardClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::yearBackwardClicked();
    } else
        qFatal("Error: Protected method KDatePicker::yearBackwardClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_SelectMonthClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::selectMonthClicked();
    } else
        qFatal("Error: Protected method KDatePicker::selectMonthClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_SelectYearClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::selectYearClicked();
    } else
        qFatal("Error: Protected method KDatePicker::selectYearClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_UncheckYearSelector(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::uncheckYearSelector();
    } else
        qFatal("Error: Protected method KDatePicker::uncheckYearSelector called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_LineEnterPressed(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::lineEnterPressed();
    } else
        qFatal("Error: Protected method KDatePicker::lineEnterPressed called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_TodayButtonClicked(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::todayButtonClicked();
    } else
        qFatal("Error: Protected method KDatePicker::todayButtonClicked called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_WeekSelected(KDatePicker* self, int param1) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::weekSelected(static_cast<int>(param1));
    } else
        qFatal("Error: Protected method KDatePicker::weekSelected called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_DrawFrame(KDatePicker* self, QPainter* param1) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::drawFrame(param1);
    } else
        qFatal("Error: Protected method KDatePicker::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_UpdateMicroFocus(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::updateMicroFocus();
    } else
        qFatal("Error: Protected method KDatePicker::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_Create(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::create();
    } else
        qFatal("Error: Protected method KDatePicker::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePicker_Destroy(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        vkdatepicker->VirtualKDatePicker::destroy();
    } else
        qFatal("Error: Protected method KDatePicker::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDatePicker_FocusNextChild(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        return vkdatepicker->VirtualKDatePicker::focusNextChild();
    } else
        qFatal("Error: Protected method KDatePicker::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDatePicker_FocusPreviousChild(KDatePicker* self) {
    if (auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self)) {
        return vkdatepicker->VirtualKDatePicker::focusPreviousChild();
    } else
        qFatal("Error: Protected method KDatePicker::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDatePicker_Sender(const KDatePicker* self) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->VirtualKDatePicker::sender();
    } else
        qFatal("Error: Protected method KDatePicker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDatePicker_SenderSignalIndex(const KDatePicker* self) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->VirtualKDatePicker::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDatePicker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDatePicker_Receivers(const KDatePicker* self, const char* signal) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->VirtualKDatePicker::receivers(signal);
    } else
        qFatal("Error: Protected method KDatePicker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDatePicker_IsSignalConnected(const KDatePicker* self, const QMetaMethod* signal) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->VirtualKDatePicker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDatePicker::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KDatePicker_GetDecodedMetricF(const KDatePicker* self, int metricA, int metricB) {
    if (auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self))) {
        return vkdatepicker->VirtualKDatePicker::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KDatePicker::getDecodedMetricF called without a directly constructed type");
}

void KDatePicker_Delete(KDatePicker* self) {
    delete self;
}
