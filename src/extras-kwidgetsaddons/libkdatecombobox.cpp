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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDateComboBox_Tr(const char* s) {
    auto _ret = KDateComboBox::tr(s);
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

void KDateComboBox_DateEntered(KDateComboBox* self, const QDate* date) {
    self->dateEntered(*date);
}

void KDateComboBox_Connect_DateEntered(KDateComboBox* self, intptr_t slot) {
    void (*slotFunc)(KDateComboBox*, QDate*) = reinterpret_cast<void (*)(KDateComboBox*, QDate*)>(slot);
    KDateComboBox::connect(self,
                           static_cast<void (KDateComboBox::*)(const QDate&)>(&KDateComboBox::dateEntered),
                           [self, slotFunc](const QDate& date) {
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
    KDateComboBox::connect(self,
                           static_cast<void (KDateComboBox::*)(const QDate&)>(&KDateComboBox::dateChanged),
                           [self, slotFunc](const QDate& date) {
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
    KDateComboBox::connect(self,
                           static_cast<void (KDateComboBox::*)(const QDate&)>(&KDateComboBox::dateEdited),
                           [self, slotFunc](const QDate& date) {
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
        dateMap_QMap.insert(*(dateMap_karr[i]), dateMap_varr_i_QString);
    }
    self->setDateMap(dateMap_QMap);
}

bool KDateComboBox_EventFilter(KDateComboBox* self, QObject* object, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        return vkdatecombobox->eventFilter(object, event);
    }
    qFatal("Error: Protected method KDateComboBox::eventFilter called without a directly constructed type");
}

void KDateComboBox_ShowPopup(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->showPopup();
    }
}

void KDateComboBox_HidePopup(KDateComboBox* self) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->hidePopup();
    }
}

void KDateComboBox_MousePressEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->mousePressEvent(event);
    }
}

void KDateComboBox_WheelEvent(KDateComboBox* self, QWheelEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->wheelEvent(event);
    }
}

void KDateComboBox_KeyPressEvent(KDateComboBox* self, QKeyEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->keyPressEvent(event);
    }
}

void KDateComboBox_FocusInEvent(KDateComboBox* self, QFocusEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->focusInEvent(event);
    }
}

void KDateComboBox_FocusOutEvent(KDateComboBox* self, QFocusEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->focusOutEvent(event);
    }
}

void KDateComboBox_ResizeEvent(KDateComboBox* self, QResizeEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->resizeEvent(event);
    }
}

void KDateComboBox_AssignDate(KDateComboBox* self, const QDate* date) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->assignDate(*date);
    }
}

libqt_string KDateComboBox_Tr2(const char* s, const char* c) {
    auto _ret = KDateComboBox::tr(s, c);
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
    auto _ret = KDateComboBox::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KDateComboBox_SuperMetaObject(const KDateComboBox* self) {
    return (QMetaObject*)self->KDateComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMetaObject(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_metaobject_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDateComboBox_SuperMetacast(KDateComboBox* self, const char* param1) {
    return self->KDateComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMetacast(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_metacast_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDateComboBox_SuperMetacall(KDateComboBox* self, int param1, int param2, void** param3) {
    return self->KDateComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMetacall(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_metacall_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KDateComboBox_SuperEventFilter(KDateComboBox* self, QObject* object, QEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        return vkdatecombobox->KDateComboBox::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnEventFilter(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_eventfilter_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperShowPopup(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::showPopup();
    } else
        qFatal("Error: Protected virtual method KDateComboBox::showPopup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnShowPopup(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_showpopup_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ShowPopup_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperHidePopup(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::hidePopup();
    } else
        qFatal("Error: Protected virtual method KDateComboBox::hidePopup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHidePopup(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_hidepopup_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HidePopup_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperMousePressEvent(KDateComboBox* self, QMouseEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMousePressEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_mousepressevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperWheelEvent(KDateComboBox* self, QWheelEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnWheelEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_wheelevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperKeyPressEvent(KDateComboBox* self, QKeyEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnKeyPressEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_keypressevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperFocusInEvent(KDateComboBox* self, QFocusEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnFocusInEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_focusinevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperFocusOutEvent(KDateComboBox* self, QFocusEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnFocusOutEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_focusoutevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperResizeEvent(KDateComboBox* self, QResizeEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnResizeEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_resizeevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KDateComboBox_SuperAssignDate(KDateComboBox* self, const QDate* date) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::assignDate(*date);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::assignDate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnAssignDate(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_assigndate_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_AssignDate_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_SetModel(KDateComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KDateComboBox_SuperSetModel(KDateComboBox* self, QAbstractItemModel* model) {
    self->KDateComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSetModel(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_setmodel_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KDateComboBox_SizeHint(const KDateComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KDateComboBox_SuperSizeHint(const KDateComboBox* self) {
    return new QSize(self->KDateComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSizeHint(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_sizehint_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KDateComboBox_MinimumSizeHint(const KDateComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KDateComboBox_SuperMinimumSizeHint(const KDateComboBox* self) {
    return new QSize(self->KDateComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMinimumSizeHint(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_minimumsizehint_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KDateComboBox_Event(KDateComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KDateComboBox_SuperEvent(KDateComboBox* self, QEvent* event) {
    return self->KDateComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_event_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDateComboBox_InputMethodQuery(const KDateComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KDateComboBox_SuperInputMethodQuery(const KDateComboBox* self, int param1) {
    return new QVariant(self->KDateComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInputMethodQuery(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_inputmethodquery_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_ChangeEvent(KDateComboBox* self, QEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperChangeEvent(KDateComboBox* self, QEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnChangeEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_changeevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_PaintEvent(KDateComboBox* self, QPaintEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperPaintEvent(KDateComboBox* self, QPaintEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnPaintEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_paintevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_ShowEvent(KDateComboBox* self, QShowEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperShowEvent(KDateComboBox* self, QShowEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnShowEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_showevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_HideEvent(KDateComboBox* self, QHideEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperHideEvent(KDateComboBox* self, QHideEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHideEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_hideevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_MouseReleaseEvent(KDateComboBox* self, QMouseEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperMouseReleaseEvent(KDateComboBox* self, QMouseEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMouseReleaseEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_mousereleaseevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_KeyReleaseEvent(KDateComboBox* self, QKeyEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperKeyReleaseEvent(KDateComboBox* self, QKeyEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnKeyReleaseEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_keyreleaseevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_ContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnContextMenuEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_contextmenuevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_InputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperInputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInputMethodEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_inputmethodevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_InitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox) {
        vkdatecombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperInitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        vkdatecombobox->KDateComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInitStyleOption(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_initstyleoption_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KDateComboBox_DevType(const KDateComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int KDateComboBox_SuperDevType(const KDateComboBox* self) {
    return self->KDateComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDevType(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_devtype_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_SetVisible(KDateComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KDateComboBox_SuperSetVisible(KDateComboBox* self, bool visible) {
    self->KDateComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSetVisible(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_setvisible_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KDateComboBox_HeightForWidth(const KDateComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KDateComboBox_SuperHeightForWidth(const KDateComboBox* self, int param1) {
    return self->KDateComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHeightForWidth(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_heightforwidth_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KDateComboBox_HasHeightForWidth(const KDateComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KDateComboBox_SuperHasHeightForWidth(const KDateComboBox* self) {
    return self->KDateComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnHasHeightForWidth(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_hasheightforwidth_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KDateComboBox_PaintEngine(const KDateComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KDateComboBox_SuperPaintEngine(const KDateComboBox* self) {
    return self->KDateComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnPaintEngine(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_paintengine_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_MouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperMouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMouseDoubleClickEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_MouseMoveEvent(KDateComboBox* self, QMouseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperMouseMoveEvent(KDateComboBox* self, QMouseEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMouseMoveEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_mousemoveevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_EnterEvent(KDateComboBox* self, QEnterEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperEnterEvent(KDateComboBox* self, QEnterEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnEnterEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_enterevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_LeaveEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperLeaveEvent(KDateComboBox* self, QEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnLeaveEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_leaveevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_MoveEvent(KDateComboBox* self, QMoveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperMoveEvent(KDateComboBox* self, QMoveEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMoveEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_moveevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_CloseEvent(KDateComboBox* self, QCloseEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperCloseEvent(KDateComboBox* self, QCloseEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnCloseEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_closeevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_TabletEvent(KDateComboBox* self, QTabletEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperTabletEvent(KDateComboBox* self, QTabletEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnTabletEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_tabletevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_ActionEvent(KDateComboBox* self, QActionEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperActionEvent(KDateComboBox* self, QActionEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnActionEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_actionevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_DragEnterEvent(KDateComboBox* self, QDragEnterEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperDragEnterEvent(KDateComboBox* self, QDragEnterEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDragEnterEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_dragenterevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_DragMoveEvent(KDateComboBox* self, QDragMoveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperDragMoveEvent(KDateComboBox* self, QDragMoveEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDragMoveEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_dragmoveevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_DragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperDragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDragLeaveEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_dragleaveevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_DropEvent(KDateComboBox* self, QDropEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperDropEvent(KDateComboBox* self, QDropEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDropEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_dropevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDateComboBox_NativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        return vkdatecombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDateComboBox_SuperNativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        return vkdatecombobox->KDateComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KDateComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnNativeEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_nativeevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KDateComboBox_Metric(const KDateComboBox* self, int param1) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox) {
        return vkdatecombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KDateComboBox_SuperMetric(const KDateComboBox* self, int param1) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->KDateComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KDateComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnMetric(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_metric_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_InitPainter(const KDateComboBox* self, QPainter* painter) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox) {
        vkdatecombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperInitPainter(const KDateComboBox* self, QPainter* painter) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        vkdatecombobox->KDateComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnInitPainter(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_initpainter_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KDateComboBox_Redirected(const KDateComboBox* self, QPoint* offset) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox) {
        return vkdatecombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KDateComboBox_SuperRedirected(const KDateComboBox* self, QPoint* offset) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->KDateComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnRedirected(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_redirected_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KDateComboBox_SharedPainter(const KDateComboBox* self) {
    auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self));
    if (vkdatecombobox) {
        return vkdatecombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KDateComboBox_SuperSharedPainter(const KDateComboBox* self) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->KDateComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KDateComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnSharedPainter(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self)))
        vkdatecombobox->kdatecombobox_sharedpainter_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KDateComboBox_FocusNextPrevChild(KDateComboBox* self, bool next) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        return vkdatecombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDateComboBox_SuperFocusNextPrevChild(KDateComboBox* self, bool next) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        return vkdatecombobox->KDateComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnFocusNextPrevChild(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_focusnextprevchild_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_TimerEvent(KDateComboBox* self, QTimerEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperTimerEvent(KDateComboBox* self, QTimerEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnTimerEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_timerevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_ChildEvent(KDateComboBox* self, QChildEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperChildEvent(KDateComboBox* self, QChildEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnChildEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_childevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_CustomEvent(KDateComboBox* self, QEvent* event) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperCustomEvent(KDateComboBox* self, QEvent* event) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnCustomEvent(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_customevent_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_ConnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperConnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnConnectNotify(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_connectnotify_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDateComboBox_DisconnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self);
    if (vkdatecombobox) {
        vkdatecombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDateComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateComboBox_SuperDisconnectNotify(KDateComboBox* self, const QMetaMethod* signal) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->KDateComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDateComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateComboBox_OnDisconnectNotify(KDateComboBox* self, intptr_t slot) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self))
        vkdatecombobox->kdatecombobox_disconnectnotify_callback = reinterpret_cast<VirtualKDateComboBox::KDateComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KDateComboBox_UpdateMicroFocus(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->VirtualKDateComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KDateComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KDateComboBox_Create(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->VirtualKDateComboBox::create();
    } else
        qFatal("Error: Protected method KDateComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KDateComboBox_Destroy(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        vkdatecombobox->VirtualKDateComboBox::destroy();
    } else
        qFatal("Error: Protected method KDateComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDateComboBox_FocusNextChild(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        return vkdatecombobox->VirtualKDateComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method KDateComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDateComboBox_FocusPreviousChild(KDateComboBox* self) {
    if (auto* vkdatecombobox = dynamic_cast<VirtualKDateComboBox*>(self)) {
        return vkdatecombobox->VirtualKDateComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KDateComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDateComboBox_Sender(const KDateComboBox* self) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->VirtualKDateComboBox::sender();
    } else
        qFatal("Error: Protected method KDateComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDateComboBox_SenderSignalIndex(const KDateComboBox* self) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->VirtualKDateComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDateComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDateComboBox_Receivers(const KDateComboBox* self, const char* signal) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->VirtualKDateComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method KDateComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDateComboBox_IsSignalConnected(const KDateComboBox* self, const QMetaMethod* signal) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->VirtualKDateComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDateComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KDateComboBox_GetDecodedMetricF(const KDateComboBox* self, int metricA, int metricB) {
    if (auto* vkdatecombobox = const_cast<VirtualKDateComboBox*>(dynamic_cast<const VirtualKDateComboBox*>(self))) {
        return vkdatecombobox->VirtualKDateComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KDateComboBox::getDecodedMetricF called without a directly constructed type");
}

void KDateComboBox_Delete(KDateComboBox* self) {
    delete self;
}
