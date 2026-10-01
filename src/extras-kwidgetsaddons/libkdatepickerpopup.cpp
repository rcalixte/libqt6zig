#include <KDatePicker>
#include <KDatePickerPopup>
#include <QAction>
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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMap>
#include <QMenu>
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
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kdatepickerpopup.h>
#include "libkdatepickerpopup.h"
#include "libkdatepickerpopup.hxx"

KDatePickerPopup* KDatePickerPopup_new() {
    return new VirtualKDatePickerPopup();
}

KDatePickerPopup* KDatePickerPopup_new2(int modes) {
    return new VirtualKDatePickerPopup(static_cast<KDatePickerPopup::Modes>(modes));
}

KDatePickerPopup* KDatePickerPopup_new3(int modes, QDate* date) {
    return new VirtualKDatePickerPopup(static_cast<KDatePickerPopup::Modes>(modes), *date);
}

KDatePickerPopup* KDatePickerPopup_new4(int modes, QDate* date, QWidget* parent) {
    return new VirtualKDatePickerPopup(static_cast<KDatePickerPopup::Modes>(modes), *date, parent);
}

QMetaObject* KDatePickerPopup_MetaObject(const KDatePickerPopup* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDatePickerPopup_Metacast(KDatePickerPopup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDatePickerPopup_Metacall(KDatePickerPopup* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDatePickerPopup_Tr(const char* s) {
    auto _ret = KDatePickerPopup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KDatePickerPopup_Modes(const KDatePickerPopup* self) {
    return static_cast<int>(self->modes());
}

void KDatePickerPopup_SetModes(KDatePickerPopup* self, int modes) {
    self->setModes(static_cast<KDatePickerPopup::Modes>(modes));
}

void KDatePickerPopup_SetDateRange(KDatePickerPopup* self, const QDate* minDate, const QDate* maxDate) {
    self->setDateRange(*minDate, *maxDate);
}

libqt_map /* of QDate* to libqt_string */ KDatePickerPopup_DateMap(const KDatePickerPopup* self) {
    QMap<QDate, QString> _ret = self->dateMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    QDate** _karr = static_cast<QDate**>(malloc(sizeof(QDate*) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = new QDate(_itr->first);
        auto _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void KDatePickerPopup_SetDateMap(KDatePickerPopup* self, const libqt_map /* of QDate* to libqt_string */ dateMap) {
    QMap<QDate, QString> dateMap_QMap;
    QDate** dateMap_karr = static_cast<QDate**>(dateMap.keys);
    libqt_string* dateMap_varr = static_cast<libqt_string*>(dateMap.values);
    for (size_t i = 0; i < dateMap.len; ++i) {
        QString dateMap_varr_i_QString = QString::fromUtf8(dateMap_varr[i].data, dateMap_varr[i].len);
        dateMap_QMap.insert(*(dateMap_karr[i]), dateMap_varr_i_QString);
    }
    self->setDateMap(dateMap_QMap);
}

KDatePicker* KDatePickerPopup_DatePicker(const KDatePickerPopup* self) {
    return self->datePicker();
}

void KDatePickerPopup_SetDate(KDatePickerPopup* self, QDate* date) {
    self->setDate(*date);
}

void KDatePickerPopup_DateChanged(KDatePickerPopup* self, const QDate* date) {
    self->dateChanged(*date);
}

void KDatePickerPopup_Connect_DateChanged(KDatePickerPopup* self, intptr_t slot) {
    void (*slotFunc)(KDatePickerPopup*, QDate*) = reinterpret_cast<void (*)(KDatePickerPopup*, QDate*)>(slot);
    KDatePickerPopup::connect(self,
                              static_cast<void (KDatePickerPopup::*)(const QDate&)>(&KDatePickerPopup::dateChanged),
                              [self, slotFunc](const QDate& date) {
                                  const QDate& date_ret = date;
                                  // Cast returned reference into pointer
                                  QDate* sigval1 = const_cast<QDate*>(&date_ret);
                                  slotFunc(self, sigval1);
                              });
}

libqt_string KDatePickerPopup_Tr2(const char* s, const char* c) {
    auto _ret = KDatePickerPopup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDatePickerPopup_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDatePickerPopup::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDatePickerPopup_SuperMetaObject(const KDatePickerPopup* self) {
    return (QMetaObject*)self->KDatePickerPopup::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMetaObject(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_metaobject_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDatePickerPopup_SuperMetacast(KDatePickerPopup* self, const char* param1) {
    return self->KDatePickerPopup::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMetacast(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_metacast_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDatePickerPopup_SuperMetacall(KDatePickerPopup* self, int param1, int param2, void** param3) {
    return self->KDatePickerPopup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMetacall(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_metacall_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* KDatePickerPopup_SizeHint(const KDatePickerPopup* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KDatePickerPopup_SuperSizeHint(const KDatePickerPopup* self) {
    return new QSize(self->KDatePickerPopup::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSizeHint(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_sizehint_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ChangeEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperChangeEvent(KDatePickerPopup* self, QEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnChangeEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_changeevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_KeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperKeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnKeyPressEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_keypressevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_MouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperMouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMouseReleaseEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_mousereleaseevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_MousePressEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperMousePressEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMousePressEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_mousepressevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_MouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperMouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMouseMoveEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_mousemoveevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_WheelEvent(KDatePickerPopup* self, QWheelEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperWheelEvent(KDatePickerPopup* self, QWheelEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnWheelEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_wheelevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_EnterEvent(KDatePickerPopup* self, QEnterEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->enterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperEnterEvent(KDatePickerPopup* self, QEnterEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnEnterEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_enterevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_LeaveEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->leaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperLeaveEvent(KDatePickerPopup* self, QEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnLeaveEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_leaveevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_HideEvent(KDatePickerPopup* self, QHideEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperHideEvent(KDatePickerPopup* self, QHideEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnHideEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_hideevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_PaintEvent(KDatePickerPopup* self, QPaintEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperPaintEvent(KDatePickerPopup* self, QPaintEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnPaintEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_paintevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ActionEvent(KDatePickerPopup* self, QActionEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->actionEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperActionEvent(KDatePickerPopup* self, QActionEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnActionEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_actionevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_TimerEvent(KDatePickerPopup* self, QTimerEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperTimerEvent(KDatePickerPopup* self, QTimerEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnTimerEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_timerevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDatePickerPopup_Event(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        return vkdatepickerpopup->event(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDatePickerPopup_SuperEvent(KDatePickerPopup* self, QEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        return vkdatepickerpopup->KDatePickerPopup::event(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_event_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDatePickerPopup_FocusNextPrevChild(KDatePickerPopup* self, bool next) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        return vkdatepickerpopup->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDatePickerPopup_SuperFocusNextPrevChild(KDatePickerPopup* self, bool next) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        return vkdatepickerpopup->KDatePickerPopup::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusNextPrevChild(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_focusnextprevchild_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_InitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup) {
        vkdatepickerpopup->initStyleOption(option, action);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperInitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        vkdatepickerpopup->KDatePickerPopup::initStyleOption(option, action);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInitStyleOption(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_initstyleoption_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KDatePickerPopup_DevType(const KDatePickerPopup* self) {
    return self->devType();
}

// Base class handler implementation
int KDatePickerPopup_SuperDevType(const KDatePickerPopup* self) {
    return self->KDatePickerPopup::devType();
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDevType(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_devtype_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DevType_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_SetVisible(KDatePickerPopup* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KDatePickerPopup_SuperSetVisible(KDatePickerPopup* self, bool visible) {
    self->KDatePickerPopup::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSetVisible(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_setvisible_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KDatePickerPopup_MinimumSizeHint(const KDatePickerPopup* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KDatePickerPopup_SuperMinimumSizeHint(const KDatePickerPopup* self) {
    return new QSize(self->KDatePickerPopup::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMinimumSizeHint(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_minimumsizehint_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KDatePickerPopup_HeightForWidth(const KDatePickerPopup* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KDatePickerPopup_SuperHeightForWidth(const KDatePickerPopup* self, int param1) {
    return self->KDatePickerPopup::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnHeightForWidth(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_heightforwidth_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KDatePickerPopup_HasHeightForWidth(const KDatePickerPopup* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KDatePickerPopup_SuperHasHeightForWidth(const KDatePickerPopup* self) {
    return self->KDatePickerPopup::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnHasHeightForWidth(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_hasheightforwidth_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KDatePickerPopup_PaintEngine(const KDatePickerPopup* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KDatePickerPopup_SuperPaintEngine(const KDatePickerPopup* self) {
    return self->KDatePickerPopup::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnPaintEngine(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_paintengine_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_MouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperMouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMouseDoubleClickEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_mousedoubleclickevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_KeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperKeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnKeyReleaseEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_keyreleaseevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_FocusInEvent(KDatePickerPopup* self, QFocusEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperFocusInEvent(KDatePickerPopup* self, QFocusEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusInEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_focusinevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_FocusOutEvent(KDatePickerPopup* self, QFocusEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperFocusOutEvent(KDatePickerPopup* self, QFocusEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusOutEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_focusoutevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_MoveEvent(KDatePickerPopup* self, QMoveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperMoveEvent(KDatePickerPopup* self, QMoveEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMoveEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_moveevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ResizeEvent(KDatePickerPopup* self, QResizeEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperResizeEvent(KDatePickerPopup* self, QResizeEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnResizeEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_resizeevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_CloseEvent(KDatePickerPopup* self, QCloseEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperCloseEvent(KDatePickerPopup* self, QCloseEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnCloseEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_closeevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnContextMenuEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_contextmenuevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_TabletEvent(KDatePickerPopup* self, QTabletEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperTabletEvent(KDatePickerPopup* self, QTabletEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnTabletEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_tabletevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_DragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperDragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDragEnterEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_dragenterevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_DragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperDragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDragMoveEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_dragmoveevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_DragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperDragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDragLeaveEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_dragleaveevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_DropEvent(KDatePickerPopup* self, QDropEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperDropEvent(KDatePickerPopup* self, QDropEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDropEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_dropevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ShowEvent(KDatePickerPopup* self, QShowEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperShowEvent(KDatePickerPopup* self, QShowEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnShowEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_showevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDatePickerPopup_NativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        return vkdatepickerpopup->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDatePickerPopup_SuperNativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        return vkdatepickerpopup->KDatePickerPopup::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnNativeEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_nativeevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KDatePickerPopup_Metric(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup) {
        return vkdatepickerpopup->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KDatePickerPopup_SuperMetric(const KDatePickerPopup* self, int param1) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->KDatePickerPopup::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMetric(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_metric_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Metric_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_InitPainter(const KDatePickerPopup* self, QPainter* painter) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup) {
        vkdatepickerpopup->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperInitPainter(const KDatePickerPopup* self, QPainter* painter) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        vkdatepickerpopup->KDatePickerPopup::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInitPainter(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_initpainter_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KDatePickerPopup_Redirected(const KDatePickerPopup* self, QPoint* offset) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup) {
        return vkdatepickerpopup->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KDatePickerPopup_SuperRedirected(const KDatePickerPopup* self, QPoint* offset) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->KDatePickerPopup::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnRedirected(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_redirected_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KDatePickerPopup_SharedPainter(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup) {
        return vkdatepickerpopup->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KDatePickerPopup_SuperSharedPainter(const KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->KDatePickerPopup::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSharedPainter(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_sharedpainter_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_InputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperInputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInputMethodEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_inputmethodevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDatePickerPopup_InputMethodQuery(const KDatePickerPopup* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KDatePickerPopup_SuperInputMethodQuery(const KDatePickerPopup* self, int param1) {
    return new QVariant(self->KDatePickerPopup::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInputMethodQuery(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self)))
        vkdatepickerpopup->kdatepickerpopup_inputmethodquery_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KDatePickerPopup_EventFilter(KDatePickerPopup* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDatePickerPopup_SuperEventFilter(KDatePickerPopup* self, QObject* watched, QEvent* event) {
    return self->KDatePickerPopup::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnEventFilter(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_eventfilter_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ChildEvent(KDatePickerPopup* self, QChildEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperChildEvent(KDatePickerPopup* self, QChildEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnChildEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_childevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_CustomEvent(KDatePickerPopup* self, QEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperCustomEvent(KDatePickerPopup* self, QEvent* event) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnCustomEvent(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_customevent_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_ConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnConnectNotify(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_connectnotify_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDatePickerPopup_DisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup) {
        vkdatepickerpopup->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDatePickerPopup::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDatePickerPopup_SuperDisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->KDatePickerPopup::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDatePickerPopup::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDisconnectNotify(KDatePickerPopup* self, intptr_t slot) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self))
        vkdatepickerpopup->kdatepickerpopup_disconnectnotify_callback = reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int KDatePickerPopup_ColumnCount(const KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::columnCount();
    } else
        qFatal("Error: Protected method KDatePickerPopup::columnCount called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePickerPopup_UpdateMicroFocus(KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->VirtualKDatePickerPopup::updateMicroFocus();
    } else
        qFatal("Error: Protected method KDatePickerPopup::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePickerPopup_Create(KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->VirtualKDatePickerPopup::create();
    } else
        qFatal("Error: Protected method KDatePickerPopup::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KDatePickerPopup_Destroy(KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        vkdatepickerpopup->VirtualKDatePickerPopup::destroy();
    } else
        qFatal("Error: Protected method KDatePickerPopup::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDatePickerPopup_FocusNextChild(KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::focusNextChild();
    } else
        qFatal("Error: Protected method KDatePickerPopup::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDatePickerPopup_FocusPreviousChild(KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self)) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::focusPreviousChild();
    } else
        qFatal("Error: Protected method KDatePickerPopup::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDatePickerPopup_Sender(const KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::sender();
    } else
        qFatal("Error: Protected method KDatePickerPopup::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDatePickerPopup_SenderSignalIndex(const KDatePickerPopup* self) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDatePickerPopup::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDatePickerPopup_Receivers(const KDatePickerPopup* self, const char* signal) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::receivers(signal);
    } else
        qFatal("Error: Protected method KDatePickerPopup::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDatePickerPopup_IsSignalConnected(const KDatePickerPopup* self, const QMetaMethod* signal) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDatePickerPopup::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KDatePickerPopup_GetDecodedMetricF(const KDatePickerPopup* self, int metricA, int metricB) {
    if (auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self))) {
        return vkdatepickerpopup->VirtualKDatePickerPopup::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KDatePickerPopup::getDecodedMetricF called without a directly constructed type");
}

void KDatePickerPopup_Delete(KDatePickerPopup* self) {
    delete self;
}
