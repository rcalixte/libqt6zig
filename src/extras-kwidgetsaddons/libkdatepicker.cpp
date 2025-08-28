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
#include <QByteArray>
#include <cstring>
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
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDatePicker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDatePicker_Tr(const char* s) {
    QString _ret = KDatePicker::tr(s);
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
    auto* vkdatepicker = dynamic_cast<const VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKDatePicker*)self)->sizeHint());
    }
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
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->eventFilter(o, e);
    }
    return {};
}

void KDatePicker_ResizeEvent(KDatePicker* self, QResizeEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->resizeEvent(param1);
    }
}

void KDatePicker_ChangeEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->changeEvent(event);
    }
}

void KDatePicker_DateChanged(KDatePicker* self, const QDate* date) {
    self->dateChanged(*date);
}

void KDatePicker_Connect_DateChanged(KDatePicker* self, intptr_t slot) {
    void (*slotFunc)(KDatePicker*, QDate*) = reinterpret_cast<void (*)(KDatePicker*, QDate*)>(slot);
    KDatePicker::connect(self, &KDatePicker::dateChanged, [self, slotFunc](const QDate& date) {
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
    KDatePicker::connect(self, &KDatePicker::dateSelected, [self, slotFunc](const QDate& date) {
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
    KDatePicker::connect(self, &KDatePicker::dateEntered, [self, slotFunc](const QDate& date) {
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
    KDatePicker::connect(self, &KDatePicker::tableClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KDatePicker_Tr2(const char* s, const char* c) {
    QString _ret = KDatePicker::tr(s, c);
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
    QString _ret = KDatePicker::tr(s, c, static_cast<int>(n));
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
int KDatePicker_QBaseMetacall(KDatePicker* self, int param1, int param2, void** param3) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Metacall_IsBase(true);
        return vkdatepicker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDatePicker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMetacall(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Metacall_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KDatePicker_QBaseSizeHint(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SizeHint_IsBase(true);
        return new QSize(vkdatepicker->sizeHint());
    } else {
        return new QSize(((VirtualKDatePicker*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSizeHint(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SizeHint_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
bool KDatePicker_QBaseEventFilter(KDatePicker* self, QObject* o, QEvent* e) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_EventFilter_IsBase(true);
        return vkdatepicker->eventFilter(o, e);
    } else {
        return ((VirtualKDatePicker*)self)->eventFilter(o, e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnEventFilter(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_EventFilter_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void KDatePicker_QBaseResizeEvent(KDatePicker* self, QResizeEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ResizeEvent_IsBase(true);
        vkdatepicker->resizeEvent(param1);
    } else {
        ((VirtualKDatePicker*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnResizeEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ResizeEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KDatePicker_QBaseChangeEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ChangeEvent_IsBase(true);
        vkdatepicker->changeEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnChangeEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ChangeEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_Event(KDatePicker* self, QEvent* e) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->event(e);
    } else {
        return ((VirtualKDatePicker*)self)->event(e);
    }
}

// Base class handler implementation
bool KDatePicker_QBaseEvent(KDatePicker* self, QEvent* e) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Event_IsBase(true);
        return vkdatepicker->event(e);
    } else {
        return ((VirtualKDatePicker*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Event_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_PaintEvent(KDatePicker* self, QPaintEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->paintEvent(param1);
    } else {
        ((VirtualKDatePicker*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KDatePicker_QBasePaintEvent(KDatePicker* self, QPaintEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_PaintEvent_IsBase(true);
        vkdatepicker->paintEvent(param1);
    } else {
        ((VirtualKDatePicker*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnPaintEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_PaintEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_InitStyleOption(const KDatePicker* self, QStyleOptionFrame* option) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->initStyleOption(option);
    } else {
        ((VirtualKDatePicker*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KDatePicker_QBaseInitStyleOption(const KDatePicker* self, QStyleOptionFrame* option) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InitStyleOption_IsBase(true);
        vkdatepicker->initStyleOption(option);
    } else {
        ((VirtualKDatePicker*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInitStyleOption(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InitStyleOption_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePicker_DevType(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->devType();
    } else {
        return self->KDatePicker::devType();
    }
}

// Base class handler implementation
int KDatePicker_QBaseDevType(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DevType_IsBase(true);
        return vkdatepicker->devType();
    } else {
        return self->KDatePicker::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDevType(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DevType_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_SetVisible(KDatePicker* self, bool visible) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setVisible(visible);
    } else {
        self->KDatePicker::setVisible(visible);
    }
}

// Base class handler implementation
void KDatePicker_QBaseSetVisible(KDatePicker* self, bool visible) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SetVisible_IsBase(true);
        vkdatepicker->setVisible(visible);
    } else {
        self->KDatePicker::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSetVisible(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SetVisible_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDatePicker_MinimumSizeHint(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return new QSize(vkdatepicker->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDatePicker*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KDatePicker_QBaseMinimumSizeHint(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MinimumSizeHint_IsBase(true);
        return new QSize(vkdatepicker->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDatePicker*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMinimumSizeHint(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MinimumSizeHint_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePicker_HeightForWidth(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDatePicker::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KDatePicker_QBaseHeightForWidth(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_HeightForWidth_IsBase(true);
        return vkdatepicker->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDatePicker::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnHeightForWidth(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_HeightForWidth_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_HasHeightForWidth(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->hasHeightForWidth();
    } else {
        return self->KDatePicker::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KDatePicker_QBaseHasHeightForWidth(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_HasHeightForWidth_IsBase(true);
        return vkdatepicker->hasHeightForWidth();
    } else {
        return self->KDatePicker::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnHasHeightForWidth(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_HasHeightForWidth_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KDatePicker_PaintEngine(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->paintEngine();
    } else {
        return self->KDatePicker::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KDatePicker_QBasePaintEngine(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_PaintEngine_IsBase(true);
        return vkdatepicker->paintEngine();
    } else {
        return self->KDatePicker::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnPaintEngine(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_PaintEngine_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MousePressEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->mousePressEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseMousePressEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MousePressEvent_IsBase(true);
        vkdatepicker->mousePressEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMousePressEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MousePressEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MouseReleaseEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->mouseReleaseEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseMouseReleaseEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MouseReleaseEvent_IsBase(true);
        vkdatepicker->mouseReleaseEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMouseReleaseEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseMouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MouseDoubleClickEvent_IsBase(true);
        vkdatepicker->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMouseDoubleClickEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MouseMoveEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->mouseMoveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseMouseMoveEvent(KDatePicker* self, QMouseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MouseMoveEvent_IsBase(true);
        vkdatepicker->mouseMoveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMouseMoveEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MouseMoveEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_WheelEvent(KDatePicker* self, QWheelEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->wheelEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseWheelEvent(KDatePicker* self, QWheelEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_WheelEvent_IsBase(true);
        vkdatepicker->wheelEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnWheelEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_WheelEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_KeyPressEvent(KDatePicker* self, QKeyEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->keyPressEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseKeyPressEvent(KDatePicker* self, QKeyEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_KeyPressEvent_IsBase(true);
        vkdatepicker->keyPressEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnKeyPressEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_KeyPressEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_KeyReleaseEvent(KDatePicker* self, QKeyEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->keyReleaseEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseKeyReleaseEvent(KDatePicker* self, QKeyEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_KeyReleaseEvent_IsBase(true);
        vkdatepicker->keyReleaseEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnKeyReleaseEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_FocusInEvent(KDatePicker* self, QFocusEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->focusInEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseFocusInEvent(KDatePicker* self, QFocusEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusInEvent_IsBase(true);
        vkdatepicker->focusInEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusInEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusInEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_FocusOutEvent(KDatePicker* self, QFocusEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->focusOutEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseFocusOutEvent(KDatePicker* self, QFocusEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusOutEvent_IsBase(true);
        vkdatepicker->focusOutEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusOutEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusOutEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_EnterEvent(KDatePicker* self, QEnterEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->enterEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseEnterEvent(KDatePicker* self, QEnterEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_EnterEvent_IsBase(true);
        vkdatepicker->enterEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnEnterEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_EnterEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_LeaveEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->leaveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseLeaveEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_LeaveEvent_IsBase(true);
        vkdatepicker->leaveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnLeaveEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_LeaveEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MoveEvent(KDatePicker* self, QMoveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->moveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseMoveEvent(KDatePicker* self, QMoveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MoveEvent_IsBase(true);
        vkdatepicker->moveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMoveEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MoveEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_CloseEvent(KDatePicker* self, QCloseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->closeEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseCloseEvent(KDatePicker* self, QCloseEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_CloseEvent_IsBase(true);
        vkdatepicker->closeEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnCloseEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_CloseEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_ContextMenuEvent(KDatePicker* self, QContextMenuEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->contextMenuEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseContextMenuEvent(KDatePicker* self, QContextMenuEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ContextMenuEvent_IsBase(true);
        vkdatepicker->contextMenuEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnContextMenuEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ContextMenuEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_TabletEvent(KDatePicker* self, QTabletEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->tabletEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseTabletEvent(KDatePicker* self, QTabletEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TabletEvent_IsBase(true);
        vkdatepicker->tabletEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnTabletEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TabletEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_ActionEvent(KDatePicker* self, QActionEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->actionEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseActionEvent(KDatePicker* self, QActionEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ActionEvent_IsBase(true);
        vkdatepicker->actionEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnActionEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ActionEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DragEnterEvent(KDatePicker* self, QDragEnterEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->dragEnterEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDragEnterEvent(KDatePicker* self, QDragEnterEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DragEnterEvent_IsBase(true);
        vkdatepicker->dragEnterEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDragEnterEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DragEnterEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DragMoveEvent(KDatePicker* self, QDragMoveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->dragMoveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDragMoveEvent(KDatePicker* self, QDragMoveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DragMoveEvent_IsBase(true);
        vkdatepicker->dragMoveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDragMoveEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DragMoveEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->dragLeaveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DragLeaveEvent_IsBase(true);
        vkdatepicker->dragLeaveEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDragLeaveEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DragLeaveEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DropEvent(KDatePicker* self, QDropEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->dropEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDropEvent(KDatePicker* self, QDropEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DropEvent_IsBase(true);
        vkdatepicker->dropEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDropEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DropEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_ShowEvent(KDatePicker* self, QShowEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->showEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseShowEvent(KDatePicker* self, QShowEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ShowEvent_IsBase(true);
        vkdatepicker->showEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnShowEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ShowEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_HideEvent(KDatePicker* self, QHideEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->hideEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseHideEvent(KDatePicker* self, QHideEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_HideEvent_IsBase(true);
        vkdatepicker->hideEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnHideEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_HideEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_NativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDatePicker*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KDatePicker_QBaseNativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_NativeEvent_IsBase(true);
        return vkdatepicker->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDatePicker*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnNativeEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_NativeEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePicker_Metric(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDatePicker*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KDatePicker_QBaseMetric(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Metric_IsBase(true);
        return vkdatepicker->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDatePicker*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMetric(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Metric_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_InitPainter(const KDatePicker* self, QPainter* painter) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->initPainter(painter);
    } else {
        ((VirtualKDatePicker*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KDatePicker_QBaseInitPainter(const KDatePicker* self, QPainter* painter) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InitPainter_IsBase(true);
        vkdatepicker->initPainter(painter);
    } else {
        ((VirtualKDatePicker*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInitPainter(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InitPainter_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KDatePicker_Redirected(const KDatePicker* self, QPoint* offset) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->redirected(offset);
    } else {
        return ((VirtualKDatePicker*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KDatePicker_QBaseRedirected(const KDatePicker* self, QPoint* offset) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Redirected_IsBase(true);
        return vkdatepicker->redirected(offset);
    } else {
        return ((VirtualKDatePicker*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnRedirected(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Redirected_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KDatePicker_SharedPainter(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->sharedPainter();
    } else {
        return ((VirtualKDatePicker*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KDatePicker_QBaseSharedPainter(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SharedPainter_IsBase(true);
        return vkdatepicker->sharedPainter();
    } else {
        return ((VirtualKDatePicker*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSharedPainter(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SharedPainter_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_InputMethodEvent(KDatePicker* self, QInputMethodEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->inputMethodEvent(param1);
    } else {
        ((VirtualKDatePicker*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KDatePicker_QBaseInputMethodEvent(KDatePicker* self, QInputMethodEvent* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InputMethodEvent_IsBase(true);
        vkdatepicker->inputMethodEvent(param1);
    } else {
        ((VirtualKDatePicker*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInputMethodEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InputMethodEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDatePicker_InputMethodQuery(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return new QVariant(vkdatepicker->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDatePicker*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KDatePicker_QBaseInputMethodQuery(const KDatePicker* self, int param1) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InputMethodQuery_IsBase(true);
        return new QVariant(vkdatepicker->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDatePicker*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnInputMethodQuery(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_InputMethodQuery_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_FocusNextPrevChild(KDatePicker* self, bool next) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->focusNextPrevChild(next);
    } else {
        return ((VirtualKDatePicker*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KDatePicker_QBaseFocusNextPrevChild(KDatePicker* self, bool next) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusNextPrevChild_IsBase(true);
        return vkdatepicker->focusNextPrevChild(next);
    } else {
        return ((VirtualKDatePicker*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusNextPrevChild(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_TimerEvent(KDatePicker* self, QTimerEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->timerEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseTimerEvent(KDatePicker* self, QTimerEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TimerEvent_IsBase(true);
        vkdatepicker->timerEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnTimerEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TimerEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_ChildEvent(KDatePicker* self, QChildEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->childEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseChildEvent(KDatePicker* self, QChildEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ChildEvent_IsBase(true);
        vkdatepicker->childEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnChildEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ChildEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_CustomEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->customEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDatePicker_QBaseCustomEvent(KDatePicker* self, QEvent* event) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_CustomEvent_IsBase(true);
        vkdatepicker->customEvent(event);
    } else {
        ((VirtualKDatePicker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnCustomEvent(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_CustomEvent_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_ConnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->connectNotify(*signal);
    } else {
        ((VirtualKDatePicker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDatePicker_QBaseConnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ConnectNotify_IsBase(true);
        vkdatepicker->connectNotify(*signal);
    } else {
        ((VirtualKDatePicker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnConnectNotify(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_ConnectNotify_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DisconnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->disconnectNotify(*signal);
    } else {
        ((VirtualKDatePicker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDisconnectNotify(KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DisconnectNotify_IsBase(true);
        vkdatepicker->disconnectNotify(*signal);
    } else {
        ((VirtualKDatePicker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDisconnectNotify(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DisconnectNotify_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DateChangedSlot(KDatePicker* self, const QDate* date) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->dateChangedSlot(*date);
    } else {
        ((VirtualKDatePicker*)self)->dateChangedSlot(*date);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDateChangedSlot(KDatePicker* self, const QDate* date) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DateChangedSlot_IsBase(true);
        vkdatepicker->dateChangedSlot(*date);
    } else {
        ((VirtualKDatePicker*)self)->dateChangedSlot(*date);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDateChangedSlot(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DateChangedSlot_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DateChangedSlot_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_TableClickedSlot(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->tableClickedSlot();
    } else {
        ((VirtualKDatePicker*)self)->tableClickedSlot();
    }
}

// Base class handler implementation
void KDatePicker_QBaseTableClickedSlot(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TableClickedSlot_IsBase(true);
        vkdatepicker->tableClickedSlot();
    } else {
        ((VirtualKDatePicker*)self)->tableClickedSlot();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnTableClickedSlot(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TableClickedSlot_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_TableClickedSlot_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MonthForwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->monthForwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->monthForwardClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseMonthForwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MonthForwardClicked_IsBase(true);
        vkdatepicker->monthForwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->monthForwardClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMonthForwardClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MonthForwardClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MonthForwardClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_MonthBackwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->monthBackwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->monthBackwardClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseMonthBackwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MonthBackwardClicked_IsBase(true);
        vkdatepicker->monthBackwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->monthBackwardClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnMonthBackwardClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_MonthBackwardClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_MonthBackwardClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_YearForwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->yearForwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->yearForwardClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseYearForwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_YearForwardClicked_IsBase(true);
        vkdatepicker->yearForwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->yearForwardClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnYearForwardClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_YearForwardClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_YearForwardClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_YearBackwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->yearBackwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->yearBackwardClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseYearBackwardClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_YearBackwardClicked_IsBase(true);
        vkdatepicker->yearBackwardClicked();
    } else {
        ((VirtualKDatePicker*)self)->yearBackwardClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnYearBackwardClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_YearBackwardClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_YearBackwardClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_SelectMonthClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->selectMonthClicked();
    } else {
        ((VirtualKDatePicker*)self)->selectMonthClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseSelectMonthClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SelectMonthClicked_IsBase(true);
        vkdatepicker->selectMonthClicked();
    } else {
        ((VirtualKDatePicker*)self)->selectMonthClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSelectMonthClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SelectMonthClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_SelectMonthClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_SelectYearClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->selectYearClicked();
    } else {
        ((VirtualKDatePicker*)self)->selectYearClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseSelectYearClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SelectYearClicked_IsBase(true);
        vkdatepicker->selectYearClicked();
    } else {
        ((VirtualKDatePicker*)self)->selectYearClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSelectYearClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SelectYearClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_SelectYearClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_UncheckYearSelector(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->uncheckYearSelector();
    } else {
        ((VirtualKDatePicker*)self)->uncheckYearSelector();
    }
}

// Base class handler implementation
void KDatePicker_QBaseUncheckYearSelector(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_UncheckYearSelector_IsBase(true);
        vkdatepicker->uncheckYearSelector();
    } else {
        ((VirtualKDatePicker*)self)->uncheckYearSelector();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnUncheckYearSelector(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_UncheckYearSelector_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_UncheckYearSelector_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_LineEnterPressed(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->lineEnterPressed();
    } else {
        ((VirtualKDatePicker*)self)->lineEnterPressed();
    }
}

// Base class handler implementation
void KDatePicker_QBaseLineEnterPressed(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_LineEnterPressed_IsBase(true);
        vkdatepicker->lineEnterPressed();
    } else {
        ((VirtualKDatePicker*)self)->lineEnterPressed();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnLineEnterPressed(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_LineEnterPressed_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_LineEnterPressed_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_TodayButtonClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->todayButtonClicked();
    } else {
        ((VirtualKDatePicker*)self)->todayButtonClicked();
    }
}

// Base class handler implementation
void KDatePicker_QBaseTodayButtonClicked(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TodayButtonClicked_IsBase(true);
        vkdatepicker->todayButtonClicked();
    } else {
        ((VirtualKDatePicker*)self)->todayButtonClicked();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnTodayButtonClicked(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_TodayButtonClicked_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_TodayButtonClicked_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_WeekSelected(KDatePicker* self, int param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->weekSelected(static_cast<int>(param1));
    } else {
        ((VirtualKDatePicker*)self)->weekSelected(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KDatePicker_QBaseWeekSelected(KDatePicker* self, int param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_WeekSelected_IsBase(true);
        vkdatepicker->weekSelected(static_cast<int>(param1));
    } else {
        ((VirtualKDatePicker*)self)->weekSelected(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnWeekSelected(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_WeekSelected_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_WeekSelected_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_DrawFrame(KDatePicker* self, QPainter* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->drawFrame(param1);
    } else {
        ((VirtualKDatePicker*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KDatePicker_QBaseDrawFrame(KDatePicker* self, QPainter* param1) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DrawFrame_IsBase(true);
        vkdatepicker->drawFrame(param1);
    } else {
        ((VirtualKDatePicker*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDrawFrame(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_DrawFrame_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_UpdateMicroFocus(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->updateMicroFocus();
    } else {
        ((VirtualKDatePicker*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KDatePicker_QBaseUpdateMicroFocus(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_UpdateMicroFocus_IsBase(true);
        vkdatepicker->updateMicroFocus();
    } else {
        ((VirtualKDatePicker*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnUpdateMicroFocus(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_Create(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->create();
    } else {
        ((VirtualKDatePicker*)self)->create();
    }
}

// Base class handler implementation
void KDatePicker_QBaseCreate(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Create_IsBase(true);
        vkdatepicker->create();
    } else {
        ((VirtualKDatePicker*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnCreate(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Create_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePicker_Destroy(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->destroy();
    } else {
        ((VirtualKDatePicker*)self)->destroy();
    }
}

// Base class handler implementation
void KDatePicker_QBaseDestroy(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Destroy_IsBase(true);
        vkdatepicker->destroy();
    } else {
        ((VirtualKDatePicker*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnDestroy(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Destroy_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_FocusNextChild(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->focusNextChild();
    } else {
        return ((VirtualKDatePicker*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KDatePicker_QBaseFocusNextChild(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusNextChild_IsBase(true);
        return vkdatepicker->focusNextChild();
    } else {
        return ((VirtualKDatePicker*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusNextChild(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusNextChild_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_FocusPreviousChild(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->focusPreviousChild();
    } else {
        return ((VirtualKDatePicker*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KDatePicker_QBaseFocusPreviousChild(KDatePicker* self) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusPreviousChild_IsBase(true);
        return vkdatepicker->focusPreviousChild();
    } else {
        return ((VirtualKDatePicker*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnFocusPreviousChild(KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = dynamic_cast<VirtualKDatePicker*>(self);
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_FocusPreviousChild_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDatePicker_Sender(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->sender();
    } else {
        return ((VirtualKDatePicker*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDatePicker_QBaseSender(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Sender_IsBase(true);
        return vkdatepicker->sender();
    } else {
        return ((VirtualKDatePicker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSender(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Sender_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePicker_SenderSignalIndex(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->senderSignalIndex();
    } else {
        return ((VirtualKDatePicker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDatePicker_QBaseSenderSignalIndex(const KDatePicker* self) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SenderSignalIndex_IsBase(true);
        return vkdatepicker->senderSignalIndex();
    } else {
        return ((VirtualKDatePicker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnSenderSignalIndex(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePicker_Receivers(const KDatePicker* self, const char* signal) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->receivers(signal);
    } else {
        return ((VirtualKDatePicker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDatePicker_QBaseReceivers(const KDatePicker* self, const char* signal) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Receivers_IsBase(true);
        return vkdatepicker->receivers(signal);
    } else {
        return ((VirtualKDatePicker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnReceivers(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_Receivers_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePicker_IsSignalConnected(const KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->isSignalConnected(*signal);
    } else {
        return ((VirtualKDatePicker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDatePicker_QBaseIsSignalConnected(const KDatePicker* self, const QMetaMethod* signal) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_IsSignalConnected_IsBase(true);
        return vkdatepicker->isSignalConnected(*signal);
    } else {
        return ((VirtualKDatePicker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnIsSignalConnected(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_IsSignalConnected_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KDatePicker_GetDecodedMetricF(const KDatePicker* self, int metricA, int metricB) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        return vkdatepicker->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDatePicker*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KDatePicker_QBaseGetDecodedMetricF(const KDatePicker* self, int metricA, int metricB) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_GetDecodedMetricF_IsBase(true);
        return vkdatepicker->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDatePicker*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePicker_OnGetDecodedMetricF(const KDatePicker* self, intptr_t slot) {
    auto* vkdatepicker = const_cast<VirtualKDatePicker*>(dynamic_cast<const VirtualKDatePicker*>(self));
    if (vkdatepicker && vkdatepicker->isVirtualKDatePicker) {
        vkdatepicker->setKDatePicker_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKDatePicker::KDatePicker_GetDecodedMetricF_Callback>(slot));
    }
}

void KDatePicker_Delete(KDatePicker* self) {
    delete self;
}
