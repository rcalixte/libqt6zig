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
#include <QByteArray>
#include <cstring>
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
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDatePickerPopup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDatePickerPopup_Tr(const char* s) {
    QString _ret = KDatePickerPopup::tr(s);
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
        QString _mapval_ret = _itr->second;
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
        dateMap_QMap[*(dateMap_karr[i])] = dateMap_varr_i_QString;
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
    KDatePickerPopup::connect(self, &KDatePickerPopup::dateChanged, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KDatePickerPopup_Tr2(const char* s, const char* c) {
    QString _ret = KDatePickerPopup::tr(s, c);
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
    QString _ret = KDatePickerPopup::tr(s, c, static_cast<int>(n));
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
int KDatePickerPopup_QBaseMetacall(KDatePickerPopup* self, int param1, int param2, void** param3) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Metacall_IsBase(true);
        return vkdatepickerpopup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDatePickerPopup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMetacall(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Metacall_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDatePickerPopup_SizeHint(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return new QSize(vkdatepickerpopup->sizeHint());
    } else {
        return new QSize(((VirtualKDatePickerPopup*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KDatePickerPopup_QBaseSizeHint(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SizeHint_IsBase(true);
        return new QSize(vkdatepickerpopup->sizeHint());
    } else {
        return new QSize(((VirtualKDatePickerPopup*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSizeHint(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SizeHint_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ChangeEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->changeEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseChangeEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ChangeEvent_IsBase(true);
        vkdatepickerpopup->changeEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnChangeEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ChangeEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_KeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->keyPressEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseKeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_KeyPressEvent_IsBase(true);
        vkdatepickerpopup->keyPressEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnKeyPressEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_KeyPressEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_MouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->mouseReleaseEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseMouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MouseReleaseEvent_IsBase(true);
        vkdatepickerpopup->mouseReleaseEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMouseReleaseEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_MousePressEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->mousePressEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseMousePressEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MousePressEvent_IsBase(true);
        vkdatepickerpopup->mousePressEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMousePressEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MousePressEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_MouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->mouseMoveEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseMouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MouseMoveEvent_IsBase(true);
        vkdatepickerpopup->mouseMoveEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMouseMoveEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MouseMoveEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_WheelEvent(KDatePickerPopup* self, QWheelEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->wheelEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseWheelEvent(KDatePickerPopup* self, QWheelEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_WheelEvent_IsBase(true);
        vkdatepickerpopup->wheelEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnWheelEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_WheelEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_EnterEvent(KDatePickerPopup* self, QEnterEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->enterEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseEnterEvent(KDatePickerPopup* self, QEnterEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_EnterEvent_IsBase(true);
        vkdatepickerpopup->enterEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnEnterEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_EnterEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_LeaveEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->leaveEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseLeaveEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_LeaveEvent_IsBase(true);
        vkdatepickerpopup->leaveEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnLeaveEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_LeaveEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_HideEvent(KDatePickerPopup* self, QHideEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->hideEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseHideEvent(KDatePickerPopup* self, QHideEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_HideEvent_IsBase(true);
        vkdatepickerpopup->hideEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnHideEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_HideEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_PaintEvent(KDatePickerPopup* self, QPaintEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->paintEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBasePaintEvent(KDatePickerPopup* self, QPaintEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_PaintEvent_IsBase(true);
        vkdatepickerpopup->paintEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnPaintEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_PaintEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ActionEvent(KDatePickerPopup* self, QActionEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->actionEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseActionEvent(KDatePickerPopup* self, QActionEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ActionEvent_IsBase(true);
        vkdatepickerpopup->actionEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnActionEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ActionEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_TimerEvent(KDatePickerPopup* self, QTimerEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->timerEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseTimerEvent(KDatePickerPopup* self, QTimerEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_TimerEvent_IsBase(true);
        vkdatepickerpopup->timerEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnTimerEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_TimerEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_Event(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->event(param1);
    } else {
        return ((VirtualKDatePickerPopup*)self)->event(param1);
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseEvent(KDatePickerPopup* self, QEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Event_IsBase(true);
        return vkdatepickerpopup->event(param1);
    } else {
        return ((VirtualKDatePickerPopup*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Event_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_FocusNextPrevChild(KDatePickerPopup* self, bool next) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->focusNextPrevChild(next);
    } else {
        return ((VirtualKDatePickerPopup*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseFocusNextPrevChild(KDatePickerPopup* self, bool next) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusNextPrevChild_IsBase(true);
        return vkdatepickerpopup->focusNextPrevChild(next);
    } else {
        return ((VirtualKDatePickerPopup*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusNextPrevChild(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_InitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->initStyleOption(option, action);
    } else {
        ((VirtualKDatePickerPopup*)self)->initStyleOption(option, action);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseInitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InitStyleOption_IsBase(true);
        vkdatepickerpopup->initStyleOption(option, action);
    } else {
        ((VirtualKDatePickerPopup*)self)->initStyleOption(option, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInitStyleOption(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InitStyleOption_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePickerPopup_DevType(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->devType();
    } else {
        return self->KDatePickerPopup::devType();
    }
}

// Base class handler implementation
int KDatePickerPopup_QBaseDevType(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DevType_IsBase(true);
        return vkdatepickerpopup->devType();
    } else {
        return self->KDatePickerPopup::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDevType(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DevType_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_SetVisible(KDatePickerPopup* self, bool visible) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setVisible(visible);
    } else {
        self->KDatePickerPopup::setVisible(visible);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseSetVisible(KDatePickerPopup* self, bool visible) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SetVisible_IsBase(true);
        vkdatepickerpopup->setVisible(visible);
    } else {
        self->KDatePickerPopup::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSetVisible(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SetVisible_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDatePickerPopup_MinimumSizeHint(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return new QSize(vkdatepickerpopup->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDatePickerPopup*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KDatePickerPopup_QBaseMinimumSizeHint(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MinimumSizeHint_IsBase(true);
        return new QSize(vkdatepickerpopup->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDatePickerPopup*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMinimumSizeHint(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MinimumSizeHint_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePickerPopup_HeightForWidth(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDatePickerPopup::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KDatePickerPopup_QBaseHeightForWidth(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_HeightForWidth_IsBase(true);
        return vkdatepickerpopup->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDatePickerPopup::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnHeightForWidth(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_HeightForWidth_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_HasHeightForWidth(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->hasHeightForWidth();
    } else {
        return self->KDatePickerPopup::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseHasHeightForWidth(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_HasHeightForWidth_IsBase(true);
        return vkdatepickerpopup->hasHeightForWidth();
    } else {
        return self->KDatePickerPopup::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnHasHeightForWidth(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_HasHeightForWidth_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KDatePickerPopup_PaintEngine(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->paintEngine();
    } else {
        return self->KDatePickerPopup::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KDatePickerPopup_QBasePaintEngine(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_PaintEngine_IsBase(true);
        return vkdatepickerpopup->paintEngine();
    } else {
        return self->KDatePickerPopup::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnPaintEngine(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_PaintEngine_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_MouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseMouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MouseDoubleClickEvent_IsBase(true);
        vkdatepickerpopup->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMouseDoubleClickEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_KeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->keyReleaseEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseKeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_KeyReleaseEvent_IsBase(true);
        vkdatepickerpopup->keyReleaseEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnKeyReleaseEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_FocusInEvent(KDatePickerPopup* self, QFocusEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->focusInEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseFocusInEvent(KDatePickerPopup* self, QFocusEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusInEvent_IsBase(true);
        vkdatepickerpopup->focusInEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusInEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusInEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_FocusOutEvent(KDatePickerPopup* self, QFocusEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->focusOutEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseFocusOutEvent(KDatePickerPopup* self, QFocusEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusOutEvent_IsBase(true);
        vkdatepickerpopup->focusOutEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusOutEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusOutEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_MoveEvent(KDatePickerPopup* self, QMoveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->moveEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseMoveEvent(KDatePickerPopup* self, QMoveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MoveEvent_IsBase(true);
        vkdatepickerpopup->moveEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMoveEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_MoveEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ResizeEvent(KDatePickerPopup* self, QResizeEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->resizeEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseResizeEvent(KDatePickerPopup* self, QResizeEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ResizeEvent_IsBase(true);
        vkdatepickerpopup->resizeEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnResizeEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ResizeEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_CloseEvent(KDatePickerPopup* self, QCloseEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->closeEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseCloseEvent(KDatePickerPopup* self, QCloseEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_CloseEvent_IsBase(true);
        vkdatepickerpopup->closeEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnCloseEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_CloseEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->contextMenuEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ContextMenuEvent_IsBase(true);
        vkdatepickerpopup->contextMenuEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnContextMenuEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ContextMenuEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_TabletEvent(KDatePickerPopup* self, QTabletEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->tabletEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseTabletEvent(KDatePickerPopup* self, QTabletEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_TabletEvent_IsBase(true);
        vkdatepickerpopup->tabletEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnTabletEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_TabletEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_DragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->dragEnterEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseDragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DragEnterEvent_IsBase(true);
        vkdatepickerpopup->dragEnterEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDragEnterEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DragEnterEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_DragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->dragMoveEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseDragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DragMoveEvent_IsBase(true);
        vkdatepickerpopup->dragMoveEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDragMoveEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DragMoveEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_DragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->dragLeaveEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseDragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DragLeaveEvent_IsBase(true);
        vkdatepickerpopup->dragLeaveEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDragLeaveEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DragLeaveEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_DropEvent(KDatePickerPopup* self, QDropEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->dropEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseDropEvent(KDatePickerPopup* self, QDropEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DropEvent_IsBase(true);
        vkdatepickerpopup->dropEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDropEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DropEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ShowEvent(KDatePickerPopup* self, QShowEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->showEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseShowEvent(KDatePickerPopup* self, QShowEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ShowEvent_IsBase(true);
        vkdatepickerpopup->showEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnShowEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ShowEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_NativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDatePickerPopup*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseNativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_NativeEvent_IsBase(true);
        return vkdatepickerpopup->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDatePickerPopup*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnNativeEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_NativeEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePickerPopup_Metric(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDatePickerPopup*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KDatePickerPopup_QBaseMetric(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Metric_IsBase(true);
        return vkdatepickerpopup->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDatePickerPopup*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnMetric(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Metric_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_InitPainter(const KDatePickerPopup* self, QPainter* painter) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->initPainter(painter);
    } else {
        ((VirtualKDatePickerPopup*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseInitPainter(const KDatePickerPopup* self, QPainter* painter) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InitPainter_IsBase(true);
        vkdatepickerpopup->initPainter(painter);
    } else {
        ((VirtualKDatePickerPopup*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInitPainter(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InitPainter_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KDatePickerPopup_Redirected(const KDatePickerPopup* self, QPoint* offset) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->redirected(offset);
    } else {
        return ((VirtualKDatePickerPopup*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KDatePickerPopup_QBaseRedirected(const KDatePickerPopup* self, QPoint* offset) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Redirected_IsBase(true);
        return vkdatepickerpopup->redirected(offset);
    } else {
        return ((VirtualKDatePickerPopup*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnRedirected(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Redirected_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KDatePickerPopup_SharedPainter(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->sharedPainter();
    } else {
        return ((VirtualKDatePickerPopup*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KDatePickerPopup_QBaseSharedPainter(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SharedPainter_IsBase(true);
        return vkdatepickerpopup->sharedPainter();
    } else {
        return ((VirtualKDatePickerPopup*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSharedPainter(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SharedPainter_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_InputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->inputMethodEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseInputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InputMethodEvent_IsBase(true);
        vkdatepickerpopup->inputMethodEvent(param1);
    } else {
        ((VirtualKDatePickerPopup*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInputMethodEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InputMethodEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDatePickerPopup_InputMethodQuery(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return new QVariant(vkdatepickerpopup->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDatePickerPopup*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KDatePickerPopup_QBaseInputMethodQuery(const KDatePickerPopup* self, int param1) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InputMethodQuery_IsBase(true);
        return new QVariant(vkdatepickerpopup->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDatePickerPopup*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnInputMethodQuery(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_InputMethodQuery_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_EventFilter(KDatePickerPopup* self, QObject* watched, QEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->eventFilter(watched, event);
    } else {
        return self->KDatePickerPopup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseEventFilter(KDatePickerPopup* self, QObject* watched, QEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_EventFilter_IsBase(true);
        return vkdatepickerpopup->eventFilter(watched, event);
    } else {
        return self->KDatePickerPopup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnEventFilter(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_EventFilter_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ChildEvent(KDatePickerPopup* self, QChildEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->childEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseChildEvent(KDatePickerPopup* self, QChildEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ChildEvent_IsBase(true);
        vkdatepickerpopup->childEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnChildEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ChildEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_CustomEvent(KDatePickerPopup* self, QEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->customEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseCustomEvent(KDatePickerPopup* self, QEvent* event) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_CustomEvent_IsBase(true);
        vkdatepickerpopup->customEvent(event);
    } else {
        ((VirtualKDatePickerPopup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnCustomEvent(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_CustomEvent_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_ConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->connectNotify(*signal);
    } else {
        ((VirtualKDatePickerPopup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ConnectNotify_IsBase(true);
        vkdatepickerpopup->connectNotify(*signal);
    } else {
        ((VirtualKDatePickerPopup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnConnectNotify(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ConnectNotify_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_DisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->disconnectNotify(*signal);
    } else {
        ((VirtualKDatePickerPopup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseDisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DisconnectNotify_IsBase(true);
        vkdatepickerpopup->disconnectNotify(*signal);
    } else {
        ((VirtualKDatePickerPopup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDisconnectNotify(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_DisconnectNotify_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePickerPopup_ColumnCount(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->columnCount();
    } else {
        return ((VirtualKDatePickerPopup*)self)->columnCount();
    }
}

// Base class handler implementation
int KDatePickerPopup_QBaseColumnCount(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ColumnCount_IsBase(true);
        return vkdatepickerpopup->columnCount();
    } else {
        return ((VirtualKDatePickerPopup*)self)->columnCount();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnColumnCount(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_ColumnCount_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_UpdateMicroFocus(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->updateMicroFocus();
    } else {
        ((VirtualKDatePickerPopup*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseUpdateMicroFocus(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_UpdateMicroFocus_IsBase(true);
        vkdatepickerpopup->updateMicroFocus();
    } else {
        ((VirtualKDatePickerPopup*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnUpdateMicroFocus(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_Create(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->create();
    } else {
        ((VirtualKDatePickerPopup*)self)->create();
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseCreate(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Create_IsBase(true);
        vkdatepickerpopup->create();
    } else {
        ((VirtualKDatePickerPopup*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnCreate(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Create_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KDatePickerPopup_Destroy(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->destroy();
    } else {
        ((VirtualKDatePickerPopup*)self)->destroy();
    }
}

// Base class handler implementation
void KDatePickerPopup_QBaseDestroy(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Destroy_IsBase(true);
        vkdatepickerpopup->destroy();
    } else {
        ((VirtualKDatePickerPopup*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnDestroy(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Destroy_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_FocusNextChild(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->focusNextChild();
    } else {
        return ((VirtualKDatePickerPopup*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseFocusNextChild(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusNextChild_IsBase(true);
        return vkdatepickerpopup->focusNextChild();
    } else {
        return ((VirtualKDatePickerPopup*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusNextChild(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusNextChild_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_FocusPreviousChild(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->focusPreviousChild();
    } else {
        return ((VirtualKDatePickerPopup*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseFocusPreviousChild(KDatePickerPopup* self) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusPreviousChild_IsBase(true);
        return vkdatepickerpopup->focusPreviousChild();
    } else {
        return ((VirtualKDatePickerPopup*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnFocusPreviousChild(KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = dynamic_cast<VirtualKDatePickerPopup*>(self);
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_FocusPreviousChild_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDatePickerPopup_Sender(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->sender();
    } else {
        return ((VirtualKDatePickerPopup*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDatePickerPopup_QBaseSender(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Sender_IsBase(true);
        return vkdatepickerpopup->sender();
    } else {
        return ((VirtualKDatePickerPopup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSender(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Sender_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePickerPopup_SenderSignalIndex(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->senderSignalIndex();
    } else {
        return ((VirtualKDatePickerPopup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDatePickerPopup_QBaseSenderSignalIndex(const KDatePickerPopup* self) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SenderSignalIndex_IsBase(true);
        return vkdatepickerpopup->senderSignalIndex();
    } else {
        return ((VirtualKDatePickerPopup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnSenderSignalIndex(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDatePickerPopup_Receivers(const KDatePickerPopup* self, const char* signal) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->receivers(signal);
    } else {
        return ((VirtualKDatePickerPopup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDatePickerPopup_QBaseReceivers(const KDatePickerPopup* self, const char* signal) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Receivers_IsBase(true);
        return vkdatepickerpopup->receivers(signal);
    } else {
        return ((VirtualKDatePickerPopup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnReceivers(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_Receivers_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDatePickerPopup_IsSignalConnected(const KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->isSignalConnected(*signal);
    } else {
        return ((VirtualKDatePickerPopup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDatePickerPopup_QBaseIsSignalConnected(const KDatePickerPopup* self, const QMetaMethod* signal) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_IsSignalConnected_IsBase(true);
        return vkdatepickerpopup->isSignalConnected(*signal);
    } else {
        return ((VirtualKDatePickerPopup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnIsSignalConnected(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_IsSignalConnected_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KDatePickerPopup_GetDecodedMetricF(const KDatePickerPopup* self, int metricA, int metricB) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        return vkdatepickerpopup->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDatePickerPopup*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KDatePickerPopup_QBaseGetDecodedMetricF(const KDatePickerPopup* self, int metricA, int metricB) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_GetDecodedMetricF_IsBase(true);
        return vkdatepickerpopup->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDatePickerPopup*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KDatePickerPopup_OnGetDecodedMetricF(const KDatePickerPopup* self, intptr_t slot) {
    auto* vkdatepickerpopup = const_cast<VirtualKDatePickerPopup*>(dynamic_cast<const VirtualKDatePickerPopup*>(self));
    if (vkdatepickerpopup && vkdatepickerpopup->isVirtualKDatePickerPopup) {
        vkdatepickerpopup->setKDatePickerPopup_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKDatePickerPopup::KDatePickerPopup_GetDecodedMetricF_Callback>(slot));
    }
}

void KDatePickerPopup_Delete(KDatePickerPopup* self) {
    delete self;
}
