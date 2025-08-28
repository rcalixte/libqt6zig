#include <KDateComboBox>
#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
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
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kdatecombobox.h>
#include "libkdatecombobox.h"
#include "libkdatecombobox.hxx"

KDateComboBox* KDateComboBox_new(QWidget* parent) {
    return new VirtualKDateComboBox(parent);
}

KDateComboBox* KDateComboBox_new2() {
    return new VirtualKDateComboBox();
}

QMetaObject* KDateComboBox_MetaObject(const KDateComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDateComboBox_Metacast(KDateComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDateComboBox_Metacall(KDateComboBox* self, int param1, int param2, void** param3) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDateComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnMetacall(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Metacall_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KDateComboBox_QBaseMetacall(KDateComboBox* self, int param1, int param2, void** param3) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Metacall_IsBase(true);
        return vkdatecombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDateComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDateComboBox_Tr(const char* s) {
    QString _ret = KDateComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDate* KDateComboBox_Date(const KDateComboBox* self) {
    return new QDate(self->date());
}

bool KDateComboBox_IsValid(const KDateComboBox* self) {
    return self->isValid();
}

bool KDateComboBox_IsNull(const KDateComboBox* self) {
    return self->isNull();
}

int KDateComboBox_Options(const KDateComboBox* self) {
    return static_cast<int>(self->options());
}

int KDateComboBox_DisplayFormat(const KDateComboBox* self) {
    return static_cast<int>(self->displayFormat());
}

QDate* KDateComboBox_MinimumDate(const KDateComboBox* self) {
    return new QDate(self->minimumDate());
}

QDate* KDateComboBox_MaximumDate(const KDateComboBox* self) {
    return new QDate(self->maximumDate());
}

libqt_map /* of QDate* to libqt_string */ KDateComboBox_DateMap(const KDateComboBox* self) {
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

void KDateComboBox_DateEntered(KDateComboBox* self, const QDate* date) {
    self->dateEntered(*date);
}

void KDateComboBox_Connect_DateEntered(KDateComboBox* self, intptr_t slot) {
    void (*slotFunc)(KDateComboBox*, QDate*) = reinterpret_cast<void (*)(KDateComboBox*, QDate*)>(slot);
    KDateComboBox::connect(self, &KDateComboBox::dateEntered, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

void KDateComboBox_DateChanged(KDateComboBox* self, const QDate* date) {
    self->dateChanged(*date);
}

void KDateComboBox_Connect_DateChanged(KDateComboBox* self, intptr_t slot) {
    void (*slotFunc)(KDateComboBox*, QDate*) = reinterpret_cast<void (*)(KDateComboBox*, QDate*)>(slot);
    KDateComboBox::connect(self, &KDateComboBox::dateChanged, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

void KDateComboBox_DateEdited(KDateComboBox* self, const QDate* date) {
    self->dateEdited(*date);
}

void KDateComboBox_Connect_DateEdited(KDateComboBox* self, intptr_t slot) {
    void (*slotFunc)(KDateComboBox*, QDate*) = reinterpret_cast<void (*)(KDateComboBox*, QDate*)>(slot);
    KDateComboBox::connect(self, &KDateComboBox::dateEdited, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

void KDateComboBox_SetDate(KDateComboBox* self, const QDate* date) {
    self->setDate(*date);
}

void KDateComboBox_SetOptions(KDateComboBox* self, int options) {
    self->setOptions(static_cast<KDateComboBox::Options>(options));
}

void KDateComboBox_SetDisplayFormat(KDateComboBox* self, int format) {
    self->setDisplayFormat(static_cast<QLocale::FormatType>(format));
}

void KDateComboBox_SetDateRange(KDateComboBox* self, const QDate* minDate, const QDate* maxDate) {
    self->setDateRange(*minDate, *maxDate);
}

void KDateComboBox_ResetDateRange(KDateComboBox* self) {
    self->resetDateRange();
}

void KDateComboBox_SetMinimumDate(KDateComboBox* self, const QDate* minDate) {
    self->setMinimumDate(*minDate);
}

void KDateComboBox_ResetMinimumDate(KDateComboBox* self) {
    self->resetMinimumDate();
}

void KDateComboBox_SetMaximumDate(KDateComboBox* self, const QDate* maxDate) {
    self->setMaximumDate(*maxDate);
}

void KDateComboBox_ResetMaximumDate(KDateComboBox* self) {
    self->resetMaximumDate();
}

void KDateComboBox_SetDateMap(KDateComboBox* self, libqt_map /* of QDate* to libqt_string */ dateMap) {
    QMap<QDate, QString> dateMap_QMap;
    QDate** dateMap_karr = static_cast<QDate**>(dateMap.keys);
    libqt_string* dateMap_varr = static_cast<libqt_string*>(dateMap.values);
    for (size_t i = 0; i < dateMap.len; ++i) {
        QString dateMap_varr_i_QString = QString::fromUtf8(dateMap_varr[i].data, dateMap_varr[i].len);
        dateMap_QMap[*(dateMap_karr[i])] = dateMap_varr_i_QString;
    }
    self->setDateMap(dateMap_QMap);
}

bool KDateComboBox_EventFilter(KDateComboBox* self, QObject* object, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->eventFilter(object, event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnEventFilter(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_EventFilter_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KDateComboBox_QBaseEventFilter(KDateComboBox* self, QObject* object, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_EventFilter_IsBase(true);
        return vkdatecombobox->eventFilter(object, event);
    }
    return {};
}

void KDateComboBox_ShowPopup(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->showPopup();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnShowPopup(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ShowPopup_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ShowPopup_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseShowPopup(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ShowPopup_IsBase(true);
        vkdatecombobox->showPopup();
    }
}

void KDateComboBox_HidePopup(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->hidePopup();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnHidePopup(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HidePopup_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HidePopup_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseHidePopup(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HidePopup_IsBase(true);
        vkdatecombobox->hidePopup();
    }
}

void KDateComboBox_MousePressEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->mousePressEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnMousePressEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseMousePressEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MousePressEvent_IsBase(true);
        vkdatecombobox->mousePressEvent(event);
    }
}

void KDateComboBox_WheelEvent(KDateComboBox* self, QWheelEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->wheelEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnWheelEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_WheelEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_WheelEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseWheelEvent(KDateComboBox* self, QWheelEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_WheelEvent_IsBase(true);
        vkdatecombobox->wheelEvent(event);
    }
}

void KDateComboBox_KeyPressEvent(KDateComboBox* self, QKeyEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->keyPressEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnKeyPressEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseKeyPressEvent(KDateComboBox* self, QKeyEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_KeyPressEvent_IsBase(true);
        vkdatecombobox->keyPressEvent(event);
    }
}

void KDateComboBox_FocusInEvent(KDateComboBox* self, QFocusEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->focusInEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnFocusInEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusInEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseFocusInEvent(KDateComboBox* self, QFocusEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusInEvent_IsBase(true);
        vkdatecombobox->focusInEvent(event);
    }
}

void KDateComboBox_FocusOutEvent(KDateComboBox* self, QFocusEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->focusOutEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnFocusOutEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseFocusOutEvent(KDateComboBox* self, QFocusEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusOutEvent_IsBase(true);
        vkdatecombobox->focusOutEvent(event);
    }
}

void KDateComboBox_ResizeEvent(KDateComboBox* self, QResizeEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->resizeEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnResizeEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseResizeEvent(KDateComboBox* self, QResizeEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ResizeEvent_IsBase(true);
        vkdatecombobox->resizeEvent(event);
    }
}

void KDateComboBox_AssignDate(KDateComboBox* self, const QDate* date) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->assignDate(*date);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateComboBox_OnAssignDate(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_AssignDate_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_AssignDate_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateComboBox_QBaseAssignDate(KDateComboBox* self, const QDate* date) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_AssignDate_IsBase(true);
        vkdatecombobox->assignDate(*date);
    }
}

libqt_string KDateComboBox_Tr2(const char* s, const char* c) {
    QString _ret = KDateComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDateComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDateComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDateComboBox_SetDateRange3(KDateComboBox* self, const QDate* minDate, const QDate* maxDate, const libqt_string minWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setDateRange(*minDate, *maxDate, minWarnMsg_QString);
}

void KDateComboBox_SetDateRange4(KDateComboBox* self, const QDate* minDate, const QDate* maxDate, const libqt_string minWarnMsg, const libqt_string maxWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setDateRange(*minDate, *maxDate, minWarnMsg_QString, maxWarnMsg_QString);
}

void KDateComboBox_SetMinimumDate2(KDateComboBox* self, const QDate* minDate, const libqt_string minWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setMinimumDate(*minDate, minWarnMsg_QString);
}

void KDateComboBox_SetMaximumDate2(KDateComboBox* self, const QDate* maxDate, const libqt_string maxWarnMsg) {
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setMaximumDate(*maxDate, maxWarnMsg_QString);
}

// Derived class handler implementation
void KDateComboBox_SetModel(KDateComboBox* self, QAbstractItemModel* model) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setModel(model);
    } else {
        self->KDateComboBox::setModel(model);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseSetModel(KDateComboBox* self, QAbstractItemModel* model) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SetModel_IsBase(true);
        vkdatecombobox->setModel(model);
    } else {
        self->KDateComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSetModel(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SetModel_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDateComboBox_SizeHint(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return new QSize(vkdatecombobox->sizeHint());
    } else {
        return new QSize(((VirtualKDateComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KDateComboBox_QBaseSizeHint(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SizeHint_IsBase(true);
        return new QSize(vkdatecombobox->sizeHint());
    } else {
        return new QSize(((VirtualKDateComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSizeHint(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SizeHint_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDateComboBox_MinimumSizeHint(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return new QSize(vkdatecombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDateComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KDateComboBox_QBaseMinimumSizeHint(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkdatecombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDateComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMinimumSizeHint(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_Event(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->event(event);
    } else {
        return self->KDateComboBox::event(event);
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Event_IsBase(true);
        return vkdatecombobox->event(event);
    } else {
        return self->KDateComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Event_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDateComboBox_InputMethodQuery(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return new QVariant(vkdatecombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDateComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KDateComboBox_QBaseInputMethodQuery(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkdatecombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDateComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInputMethodQuery(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_ChangeEvent(KDateComboBox* self, QEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->changeEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseChangeEvent(KDateComboBox* self, QEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ChangeEvent_IsBase(true);
        vkdatecombobox->changeEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnChangeEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_PaintEvent(KDateComboBox* self, QPaintEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->paintEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBasePaintEvent(KDateComboBox* self, QPaintEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_PaintEvent_IsBase(true);
        vkdatecombobox->paintEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnPaintEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_PaintEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_ShowEvent(KDateComboBox* self, QShowEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->showEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseShowEvent(KDateComboBox* self, QShowEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ShowEvent_IsBase(true);
        vkdatecombobox->showEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnShowEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ShowEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_HideEvent(KDateComboBox* self, QHideEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->hideEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseHideEvent(KDateComboBox* self, QHideEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HideEvent_IsBase(true);
        vkdatecombobox->hideEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHideEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HideEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_MouseReleaseEvent(KDateComboBox* self, QMouseEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseMouseReleaseEvent(KDateComboBox* self, QMouseEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MouseReleaseEvent_IsBase(true);
        vkdatecombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMouseReleaseEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_KeyReleaseEvent(KDateComboBox* self, QKeyEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseKeyReleaseEvent(KDateComboBox* self, QKeyEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_KeyReleaseEvent_IsBase(true);
        vkdatecombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnKeyReleaseEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_ContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->contextMenuEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ContextMenuEvent_IsBase(true);
        vkdatecombobox->contextMenuEvent(e);
    } else {
        ((VirtualKDateComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnContextMenuEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_InputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKDateComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseInputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InputMethodEvent_IsBase(true);
        vkdatecombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKDateComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInputMethodEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_InitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->initStyleOption(option);
    } else {
        ((VirtualKDateComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseInitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InitStyleOption_IsBase(true);
        vkdatecombobox->initStyleOption(option);
    } else {
        ((VirtualKDateComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInitStyleOption(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateComboBox_DevType(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->devType();
    } else {
        return self->KDateComboBox::devType();
    }
}

// Base class handler implementation
int KDateComboBox_QBaseDevType(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DevType_IsBase(true);
        return vkdatecombobox->devType();
    } else {
        return self->KDateComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDevType(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DevType_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_SetVisible(KDateComboBox* self, bool visible) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setVisible(visible);
    } else {
        self->KDateComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseSetVisible(KDateComboBox* self, bool visible) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SetVisible_IsBase(true);
        vkdatecombobox->setVisible(visible);
    } else {
        self->KDateComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSetVisible(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SetVisible_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateComboBox_HeightForWidth(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDateComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KDateComboBox_QBaseHeightForWidth(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HeightForWidth_IsBase(true);
        return vkdatecombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDateComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHeightForWidth(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_HasHeightForWidth(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->hasHeightForWidth();
    } else {
        return self->KDateComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseHasHeightForWidth(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HasHeightForWidth_IsBase(true);
        return vkdatecombobox->hasHeightForWidth();
    } else {
        return self->KDateComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHasHeightForWidth(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KDateComboBox_PaintEngine(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->paintEngine();
    } else {
        return self->KDateComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KDateComboBox_QBasePaintEngine(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_PaintEngine_IsBase(true);
        return vkdatecombobox->paintEngine();
    } else {
        return self->KDateComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnPaintEngine(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_PaintEngine_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_MouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseMouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MouseDoubleClickEvent_IsBase(true);
        vkdatecombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMouseDoubleClickEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_MouseMoveEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseMouseMoveEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MouseMoveEvent_IsBase(true);
        vkdatecombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMouseMoveEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_EnterEvent(KDateComboBox* self, QEnterEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->enterEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseEnterEvent(KDateComboBox* self, QEnterEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_EnterEvent_IsBase(true);
        vkdatecombobox->enterEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnEnterEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_EnterEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_LeaveEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->leaveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseLeaveEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_LeaveEvent_IsBase(true);
        vkdatecombobox->leaveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnLeaveEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_MoveEvent(KDateComboBox* self, QMoveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->moveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseMoveEvent(KDateComboBox* self, QMoveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MoveEvent_IsBase(true);
        vkdatecombobox->moveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMoveEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_MoveEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_CloseEvent(KDateComboBox* self, QCloseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->closeEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseCloseEvent(KDateComboBox* self, QCloseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_CloseEvent_IsBase(true);
        vkdatecombobox->closeEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnCloseEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_CloseEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_TabletEvent(KDateComboBox* self, QTabletEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->tabletEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseTabletEvent(KDateComboBox* self, QTabletEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_TabletEvent_IsBase(true);
        vkdatecombobox->tabletEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnTabletEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_TabletEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_ActionEvent(KDateComboBox* self, QActionEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->actionEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseActionEvent(KDateComboBox* self, QActionEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ActionEvent_IsBase(true);
        vkdatecombobox->actionEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnActionEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ActionEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_DragEnterEvent(KDateComboBox* self, QDragEnterEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->dragEnterEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseDragEnterEvent(KDateComboBox* self, QDragEnterEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DragEnterEvent_IsBase(true);
        vkdatecombobox->dragEnterEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDragEnterEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_DragMoveEvent(KDateComboBox* self, QDragMoveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->dragMoveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseDragMoveEvent(KDateComboBox* self, QDragMoveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DragMoveEvent_IsBase(true);
        vkdatecombobox->dragMoveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDragMoveEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_DragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseDragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DragLeaveEvent_IsBase(true);
        vkdatecombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDragLeaveEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_DropEvent(KDateComboBox* self, QDropEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->dropEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseDropEvent(KDateComboBox* self, QDropEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DropEvent_IsBase(true);
        vkdatecombobox->dropEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDropEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DropEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_NativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDateComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseNativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_NativeEvent_IsBase(true);
        return vkdatecombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDateComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnNativeEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_NativeEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateComboBox_Metric(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDateComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KDateComboBox_QBaseMetric(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Metric_IsBase(true);
        return vkdatecombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDateComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMetric(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Metric_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_InitPainter(const KDateComboBox* self, QPainter* painter) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->initPainter(painter);
    } else {
        ((VirtualKDateComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseInitPainter(const KDateComboBox* self, QPainter* painter) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InitPainter_IsBase(true);
        vkdatecombobox->initPainter(painter);
    } else {
        ((VirtualKDateComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInitPainter(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_InitPainter_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KDateComboBox_Redirected(const KDateComboBox* self, QPoint* offset) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->redirected(offset);
    } else {
        return ((VirtualKDateComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KDateComboBox_QBaseRedirected(const KDateComboBox* self, QPoint* offset) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Redirected_IsBase(true);
        return vkdatecombobox->redirected(offset);
    } else {
        return ((VirtualKDateComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnRedirected(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Redirected_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KDateComboBox_SharedPainter(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->sharedPainter();
    } else {
        return ((VirtualKDateComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KDateComboBox_QBaseSharedPainter(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SharedPainter_IsBase(true);
        return vkdatecombobox->sharedPainter();
    } else {
        return ((VirtualKDateComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSharedPainter(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SharedPainter_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_FocusNextPrevChild(KDateComboBox* self, bool next) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKDateComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseFocusNextPrevChild(KDateComboBox* self, bool next) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusNextPrevChild_IsBase(true);
        return vkdatecombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKDateComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnFocusNextPrevChild(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_TimerEvent(KDateComboBox* self, QTimerEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->timerEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseTimerEvent(KDateComboBox* self, QTimerEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_TimerEvent_IsBase(true);
        vkdatecombobox->timerEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnTimerEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_TimerEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_ChildEvent(KDateComboBox* self, QChildEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->childEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseChildEvent(KDateComboBox* self, QChildEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ChildEvent_IsBase(true);
        vkdatecombobox->childEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnChildEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ChildEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_CustomEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->customEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseCustomEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_CustomEvent_IsBase(true);
        vkdatecombobox->customEvent(event);
    } else {
        ((VirtualKDateComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnCustomEvent(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_CustomEvent_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_ConnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->connectNotify(*signal);
    } else {
        ((VirtualKDateComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseConnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ConnectNotify_IsBase(true);
        vkdatecombobox->connectNotify(*signal);
    } else {
        ((VirtualKDateComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnConnectNotify(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_DisconnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKDateComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDateComboBox_QBaseDisconnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DisconnectNotify_IsBase(true);
        vkdatecombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKDateComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDisconnectNotify(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_UpdateMicroFocus(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->updateMicroFocus();
    } else {
        ((VirtualKDateComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KDateComboBox_QBaseUpdateMicroFocus(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_UpdateMicroFocus_IsBase(true);
        vkdatecombobox->updateMicroFocus();
    } else {
        ((VirtualKDateComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnUpdateMicroFocus(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_Create(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->create();
    } else {
        ((VirtualKDateComboBox*)self)->create();
    }
}

// Base class handler implementation
void KDateComboBox_QBaseCreate(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Create_IsBase(true);
        vkdatecombobox->create();
    } else {
        ((VirtualKDateComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnCreate(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Create_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateComboBox_Destroy(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->destroy();
    } else {
        ((VirtualKDateComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void KDateComboBox_QBaseDestroy(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Destroy_IsBase(true);
        vkdatecombobox->destroy();
    } else {
        ((VirtualKDateComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDestroy(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Destroy_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_FocusNextChild(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->focusNextChild();
    } else {
        return ((VirtualKDateComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseFocusNextChild(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusNextChild_IsBase(true);
        return vkdatecombobox->focusNextChild();
    } else {
        return ((VirtualKDateComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnFocusNextChild(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_FocusPreviousChild(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->focusPreviousChild();
    } else {
        return ((VirtualKDateComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseFocusPreviousChild(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusPreviousChild_IsBase(true);
        return vkdatecombobox->focusPreviousChild();
    } else {
        return ((VirtualKDateComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnFocusPreviousChild(KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDateComboBox_Sender(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->sender();
    } else {
        return ((VirtualKDateComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDateComboBox_QBaseSender(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Sender_IsBase(true);
        return vkdatecombobox->sender();
    } else {
        return ((VirtualKDateComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSender(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Sender_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateComboBox_SenderSignalIndex(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->senderSignalIndex();
    } else {
        return ((VirtualKDateComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDateComboBox_QBaseSenderSignalIndex(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SenderSignalIndex_IsBase(true);
        return vkdatecombobox->senderSignalIndex();
    } else {
        return ((VirtualKDateComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSenderSignalIndex(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateComboBox_Receivers(const KDateComboBox* self, const char* signal) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->receivers(signal);
    } else {
        return ((VirtualKDateComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDateComboBox_QBaseReceivers(const KDateComboBox* self, const char* signal) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Receivers_IsBase(true);
        return vkdatecombobox->receivers(signal);
    } else {
        return ((VirtualKDateComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnReceivers(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_Receivers_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateComboBox_IsSignalConnected(const KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKDateComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDateComboBox_QBaseIsSignalConnected(const KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_IsSignalConnected_IsBase(true);
        return vkdatecombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKDateComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnIsSignalConnected(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KDateComboBox_GetDecodedMetricF(const KDateComboBox* self, int metricA, int metricB) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        return vkdatecombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDateComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KDateComboBox_QBaseGetDecodedMetricF(const KDateComboBox* self, int metricA, int metricB) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_GetDecodedMetricF_IsBase(true);
        return vkdatecombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDateComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnGetDecodedMetricF(const KDateComboBox* self, intptr_t slot) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox && vkdatecombobox->isVirtualKDateComboBox) {
        vkdatecombobox->setKDateComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKDateComboBox::KDateComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

void KDateComboBox_Delete(KDateComboBox* self) {
    delete self;
}
