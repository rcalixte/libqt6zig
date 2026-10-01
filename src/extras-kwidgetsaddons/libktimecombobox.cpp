#include <KTimeComboBox>
#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QContextMenuEvent>
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
#include <QList>
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
#include <QTime>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ktimecombobox.h>
#include "libktimecombobox.h"
#include "libktimecombobox.hxx"

KTimeComboBox* KTimeComboBox_new(QWidget* parent) {
    return new VirtualKTimeComboBox(parent);
}

KTimeComboBox* KTimeComboBox_new2() {
    return new VirtualKTimeComboBox();
}

QMetaObject* KTimeComboBox_MetaObject(const KTimeComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTimeComboBox_Metacast(KTimeComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTimeComboBox_Metacall(KTimeComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTimeComboBox_Tr(const char* s) {
    auto _ret = KTimeComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTime* KTimeComboBox_Time(const KTimeComboBox* self) {
    return new QTime(self->time());
}

bool KTimeComboBox_IsValid(const KTimeComboBox* self) {
    return self->isValid();
}

bool KTimeComboBox_IsNull(const KTimeComboBox* self) {
    return self->isNull();
}

int KTimeComboBox_Options(const KTimeComboBox* self) {
    return static_cast<int>(self->options());
}

int KTimeComboBox_DisplayFormat(const KTimeComboBox* self) {
    return static_cast<int>(self->displayFormat());
}

QTime* KTimeComboBox_MinimumTime(const KTimeComboBox* self) {
    return new QTime(self->minimumTime());
}

void KTimeComboBox_ResetMinimumTime(KTimeComboBox* self) {
    self->resetMinimumTime();
}

QTime* KTimeComboBox_MaximumTime(const KTimeComboBox* self) {
    return new QTime(self->maximumTime());
}

void KTimeComboBox_ResetMaximumTime(KTimeComboBox* self) {
    self->resetMaximumTime();
}

void KTimeComboBox_SetTimeRange(KTimeComboBox* self, const QTime* minTime, const QTime* maxTime) {
    self->setTimeRange(*minTime, *maxTime);
}

void KTimeComboBox_ResetTimeRange(KTimeComboBox* self) {
    self->resetTimeRange();
}

int KTimeComboBox_TimeListInterval(const KTimeComboBox* self) {
    return self->timeListInterval();
}

libqt_list /* of QTime* */ KTimeComboBox_TimeList(const KTimeComboBox* self) {
    QList<QTime> _ret = self->timeList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTime** _arr = static_cast<QTime**>(malloc(sizeof(QTime*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTime(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTimeComboBox_TimeEntered(KTimeComboBox* self, const QTime* time) {
    self->timeEntered(*time);
}

void KTimeComboBox_Connect_TimeEntered(KTimeComboBox* self, intptr_t slot) {
    void (*slotFunc)(KTimeComboBox*, QTime*) = reinterpret_cast<void (*)(KTimeComboBox*, QTime*)>(slot);
    KTimeComboBox::connect(self,
                           static_cast<void (KTimeComboBox::*)(const QTime&)>(&KTimeComboBox::timeEntered),
                           [self, slotFunc](const QTime& time) {
                               const QTime& time_ret = time;
                               // Cast returned reference into pointer
                               QTime* sigval1 = const_cast<QTime*>(&time_ret);
                               slotFunc(self, sigval1);
                           });
}

void KTimeComboBox_TimeChanged(KTimeComboBox* self, const QTime* time) {
    self->timeChanged(*time);
}

void KTimeComboBox_Connect_TimeChanged(KTimeComboBox* self, intptr_t slot) {
    void (*slotFunc)(KTimeComboBox*, QTime*) = reinterpret_cast<void (*)(KTimeComboBox*, QTime*)>(slot);
    KTimeComboBox::connect(self,
                           static_cast<void (KTimeComboBox::*)(const QTime&)>(&KTimeComboBox::timeChanged),
                           [self, slotFunc](const QTime& time) {
                               const QTime& time_ret = time;
                               // Cast returned reference into pointer
                               QTime* sigval1 = const_cast<QTime*>(&time_ret);
                               slotFunc(self, sigval1);
                           });
}

void KTimeComboBox_TimeEdited(KTimeComboBox* self, const QTime* time) {
    self->timeEdited(*time);
}

void KTimeComboBox_Connect_TimeEdited(KTimeComboBox* self, intptr_t slot) {
    void (*slotFunc)(KTimeComboBox*, QTime*) = reinterpret_cast<void (*)(KTimeComboBox*, QTime*)>(slot);
    KTimeComboBox::connect(self,
                           static_cast<void (KTimeComboBox::*)(const QTime&)>(&KTimeComboBox::timeEdited),
                           [self, slotFunc](const QTime& time) {
                               const QTime& time_ret = time;
                               // Cast returned reference into pointer
                               QTime* sigval1 = const_cast<QTime*>(&time_ret);
                               slotFunc(self, sigval1);
                           });
}

void KTimeComboBox_SetTime(KTimeComboBox* self, const QTime* time) {
    self->setTime(*time);
}

void KTimeComboBox_SetOptions(KTimeComboBox* self, int options) {
    self->setOptions(static_cast<KTimeComboBox::Options>(options));
}

void KTimeComboBox_SetDisplayFormat(KTimeComboBox* self, int format) {
    self->setDisplayFormat(static_cast<QLocale::FormatType>(format));
}

void KTimeComboBox_SetMinimumTime(KTimeComboBox* self, const QTime* minTime) {
    self->setMinimumTime(*minTime);
}

void KTimeComboBox_SetMaximumTime(KTimeComboBox* self, const QTime* maxTime) {
    self->setMaximumTime(*maxTime);
}

void KTimeComboBox_SetTimeListInterval(KTimeComboBox* self, int minutes) {
    self->setTimeListInterval(static_cast<int>(minutes));
}

void KTimeComboBox_SetTimeList(KTimeComboBox* self, libqt_list /* of QTime* */ timeList) {
    QList<QTime> timeList_QList;
    timeList_QList.reserve(timeList.len);
    QTime** timeList_arr = static_cast<QTime**>(timeList.data);
    for (size_t i = 0; i < timeList.len; ++i) {
        timeList_QList.push_back(*(timeList_arr[i]));
    }
    self->setTimeList(timeList_QList);
}

bool KTimeComboBox_EventFilter(KTimeComboBox* self, QObject* object, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        return vktimecombobox->eventFilter(object, event);
    }
    qFatal("Error: Protected method KTimeComboBox::eventFilter called without a directly constructed type");
}

void KTimeComboBox_ShowPopup(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->showPopup();
    }
}

void KTimeComboBox_HidePopup(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->hidePopup();
    }
}

void KTimeComboBox_MousePressEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->mousePressEvent(event);
    }
}

void KTimeComboBox_WheelEvent(KTimeComboBox* self, QWheelEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->wheelEvent(event);
    }
}

void KTimeComboBox_KeyPressEvent(KTimeComboBox* self, QKeyEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->keyPressEvent(event);
    }
}

void KTimeComboBox_FocusInEvent(KTimeComboBox* self, QFocusEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->focusInEvent(event);
    }
}

void KTimeComboBox_FocusOutEvent(KTimeComboBox* self, QFocusEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->focusOutEvent(event);
    }
}

void KTimeComboBox_ResizeEvent(KTimeComboBox* self, QResizeEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->resizeEvent(event);
    }
}

void KTimeComboBox_AssignTime(KTimeComboBox* self, const QTime* time) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->assignTime(*time);
    }
}

libqt_string KTimeComboBox_Tr2(const char* s, const char* c) {
    auto _ret = KTimeComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTimeComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = KTimeComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTimeComboBox_SetTimeRange3(KTimeComboBox* self, const QTime* minTime, const QTime* maxTime, const libqt_string minWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setTimeRange(*minTime, *maxTime, minWarnMsg_QString);
}

void KTimeComboBox_SetTimeRange4(KTimeComboBox* self, const QTime* minTime, const QTime* maxTime, const libqt_string minWarnMsg, const libqt_string maxWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setTimeRange(*minTime, *maxTime, minWarnMsg_QString, maxWarnMsg_QString);
}

void KTimeComboBox_SetMinimumTime2(KTimeComboBox* self, const QTime* minTime, const libqt_string minWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setMinimumTime(*minTime, minWarnMsg_QString);
}

void KTimeComboBox_SetMaximumTime2(KTimeComboBox* self, const QTime* maxTime, const libqt_string maxWarnMsg) {
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setMaximumTime(*maxTime, maxWarnMsg_QString);
}

void KTimeComboBox_SetTimeList2(KTimeComboBox* self, libqt_list /* of QTime* */ timeList, const libqt_string minWarnMsg) {
    QList<QTime> timeList_QList;
    timeList_QList.reserve(timeList.len);
    QTime** timeList_arr = static_cast<QTime**>(timeList.data);
    for (size_t i = 0; i < timeList.len; ++i) {
        timeList_QList.push_back(*(timeList_arr[i]));
    }
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setTimeList(timeList_QList, minWarnMsg_QString);
}

void KTimeComboBox_SetTimeList3(KTimeComboBox* self, libqt_list /* of QTime* */ timeList, const libqt_string minWarnMsg, const libqt_string maxWarnMsg) {
    QList<QTime> timeList_QList;
    timeList_QList.reserve(timeList.len);
    QTime** timeList_arr = static_cast<QTime**>(timeList.data);
    for (size_t i = 0; i < timeList.len; ++i) {
        timeList_QList.push_back(*(timeList_arr[i]));
    }
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setTimeList(timeList_QList, minWarnMsg_QString, maxWarnMsg_QString);
}

// Base class handler implementation
QMetaObject* KTimeComboBox_SuperMetaObject(const KTimeComboBox* self) {
    return (QMetaObject*)self->KTimeComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMetaObject(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_metaobject_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTimeComboBox_SuperMetacast(KTimeComboBox* self, const char* param1) {
    return self->KTimeComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMetacast(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_metacast_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTimeComboBox_SuperMetacall(KTimeComboBox* self, int param1, int param2, void** param3) {
    return self->KTimeComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMetacall(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_metacall_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KTimeComboBox_SuperEventFilter(KTimeComboBox* self, QObject* object, QEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        return vktimecombobox->KTimeComboBox::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnEventFilter(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_eventfilter_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperShowPopup(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::showPopup();
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::showPopup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnShowPopup(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_showpopup_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ShowPopup_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperHidePopup(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::hidePopup();
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::hidePopup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHidePopup(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_hidepopup_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HidePopup_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperMousePressEvent(KTimeComboBox* self, QMouseEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMousePressEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_mousepressevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperWheelEvent(KTimeComboBox* self, QWheelEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnWheelEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_wheelevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperKeyPressEvent(KTimeComboBox* self, QKeyEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnKeyPressEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_keypressevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperFocusInEvent(KTimeComboBox* self, QFocusEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusInEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_focusinevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperFocusOutEvent(KTimeComboBox* self, QFocusEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusOutEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_focusoutevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperResizeEvent(KTimeComboBox* self, QResizeEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnResizeEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_resizeevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KTimeComboBox_SuperAssignTime(KTimeComboBox* self, const QTime* time) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::assignTime(*time);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::assignTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnAssignTime(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_assigntime_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_AssignTime_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_SetModel(KTimeComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KTimeComboBox_SuperSetModel(KTimeComboBox* self, QAbstractItemModel* model) {
    self->KTimeComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSetModel(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_setmodel_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KTimeComboBox_SizeHint(const KTimeComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KTimeComboBox_SuperSizeHint(const KTimeComboBox* self) {
    return new QSize(self->KTimeComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSizeHint(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_sizehint_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KTimeComboBox_MinimumSizeHint(const KTimeComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KTimeComboBox_SuperMinimumSizeHint(const KTimeComboBox* self) {
    return new QSize(self->KTimeComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMinimumSizeHint(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_minimumsizehint_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KTimeComboBox_Event(KTimeComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTimeComboBox_SuperEvent(KTimeComboBox* self, QEvent* event) {
    return self->KTimeComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_event_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTimeComboBox_InputMethodQuery(const KTimeComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KTimeComboBox_SuperInputMethodQuery(const KTimeComboBox* self, int param1) {
    return new QVariant(self->KTimeComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInputMethodQuery(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_inputmethodquery_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_ChangeEvent(KTimeComboBox* self, QEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperChangeEvent(KTimeComboBox* self, QEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnChangeEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_changeevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_PaintEvent(KTimeComboBox* self, QPaintEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperPaintEvent(KTimeComboBox* self, QPaintEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnPaintEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_paintevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_ShowEvent(KTimeComboBox* self, QShowEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperShowEvent(KTimeComboBox* self, QShowEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnShowEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_showevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_HideEvent(KTimeComboBox* self, QHideEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperHideEvent(KTimeComboBox* self, QHideEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHideEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_hideevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_MouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperMouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMouseReleaseEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_mousereleaseevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_KeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperKeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnKeyReleaseEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_keyreleaseevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_ContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnContextMenuEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_contextmenuevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_InputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperInputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInputMethodEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_inputmethodevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_InitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox) {
        vktimecombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperInitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        vktimecombobox->KTimeComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInitStyleOption(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_initstyleoption_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KTimeComboBox_DevType(const KTimeComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int KTimeComboBox_SuperDevType(const KTimeComboBox* self) {
    return self->KTimeComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDevType(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_devtype_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_SetVisible(KTimeComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KTimeComboBox_SuperSetVisible(KTimeComboBox* self, bool visible) {
    self->KTimeComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSetVisible(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_setvisible_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KTimeComboBox_HeightForWidth(const KTimeComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KTimeComboBox_SuperHeightForWidth(const KTimeComboBox* self, int param1) {
    return self->KTimeComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHeightForWidth(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_heightforwidth_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KTimeComboBox_HasHeightForWidth(const KTimeComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KTimeComboBox_SuperHasHeightForWidth(const KTimeComboBox* self) {
    return self->KTimeComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHasHeightForWidth(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_hasheightforwidth_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KTimeComboBox_PaintEngine(const KTimeComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KTimeComboBox_SuperPaintEngine(const KTimeComboBox* self) {
    return self->KTimeComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnPaintEngine(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_paintengine_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_MouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperMouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMouseDoubleClickEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_MouseMoveEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperMouseMoveEvent(KTimeComboBox* self, QMouseEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMouseMoveEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_mousemoveevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_EnterEvent(KTimeComboBox* self, QEnterEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperEnterEvent(KTimeComboBox* self, QEnterEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnEnterEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_enterevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_LeaveEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperLeaveEvent(KTimeComboBox* self, QEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnLeaveEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_leaveevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_MoveEvent(KTimeComboBox* self, QMoveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperMoveEvent(KTimeComboBox* self, QMoveEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMoveEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_moveevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_CloseEvent(KTimeComboBox* self, QCloseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperCloseEvent(KTimeComboBox* self, QCloseEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnCloseEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_closeevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_TabletEvent(KTimeComboBox* self, QTabletEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperTabletEvent(KTimeComboBox* self, QTabletEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnTabletEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_tabletevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_ActionEvent(KTimeComboBox* self, QActionEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperActionEvent(KTimeComboBox* self, QActionEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnActionEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_actionevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_DragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperDragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDragEnterEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_dragenterevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_DragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperDragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDragMoveEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_dragmoveevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_DragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperDragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDragLeaveEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_dragleaveevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_DropEvent(KTimeComboBox* self, QDropEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperDropEvent(KTimeComboBox* self, QDropEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDropEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_dropevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTimeComboBox_NativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        return vktimecombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTimeComboBox_SuperNativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        return vktimecombobox->KTimeComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnNativeEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_nativeevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KTimeComboBox_Metric(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox) {
        return vktimecombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KTimeComboBox_SuperMetric(const KTimeComboBox* self, int param1) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->KTimeComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMetric(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_metric_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_InitPainter(const KTimeComboBox* self, QPainter* painter) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox) {
        vktimecombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperInitPainter(const KTimeComboBox* self, QPainter* painter) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        vktimecombobox->KTimeComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInitPainter(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_initpainter_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KTimeComboBox_Redirected(const KTimeComboBox* self, QPoint* offset) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox) {
        return vktimecombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KTimeComboBox_SuperRedirected(const KTimeComboBox* self, QPoint* offset) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->KTimeComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnRedirected(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_redirected_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KTimeComboBox_SharedPainter(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox) {
        return vktimecombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KTimeComboBox_SuperSharedPainter(const KTimeComboBox* self) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->KTimeComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSharedPainter(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self)))
        vktimecombobox->ktimecombobox_sharedpainter_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KTimeComboBox_FocusNextPrevChild(KTimeComboBox* self, bool next) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        return vktimecombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTimeComboBox_SuperFocusNextPrevChild(KTimeComboBox* self, bool next) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        return vktimecombobox->KTimeComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusNextPrevChild(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_focusnextprevchild_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_TimerEvent(KTimeComboBox* self, QTimerEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperTimerEvent(KTimeComboBox* self, QTimerEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnTimerEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_timerevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_ChildEvent(KTimeComboBox* self, QChildEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperChildEvent(KTimeComboBox* self, QChildEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnChildEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_childevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_CustomEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperCustomEvent(KTimeComboBox* self, QEvent* event) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnCustomEvent(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_customevent_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_ConnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperConnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnConnectNotify(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_connectnotify_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTimeComboBox_DisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox) {
        vktimecombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTimeComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTimeComboBox_SuperDisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->KTimeComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTimeComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDisconnectNotify(KTimeComboBox* self, intptr_t slot) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self))
        vktimecombobox->ktimecombobox_disconnectnotify_callback = reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTimeComboBox_UpdateMicroFocus(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->VirtualKTimeComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KTimeComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KTimeComboBox_Create(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->VirtualKTimeComboBox::create();
    } else
        qFatal("Error: Protected method KTimeComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KTimeComboBox_Destroy(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        vktimecombobox->VirtualKTimeComboBox::destroy();
    } else
        qFatal("Error: Protected method KTimeComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTimeComboBox_FocusNextChild(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        return vktimecombobox->VirtualKTimeComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method KTimeComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTimeComboBox_FocusPreviousChild(KTimeComboBox* self) {
    if (auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self)) {
        return vktimecombobox->VirtualKTimeComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KTimeComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTimeComboBox_Sender(const KTimeComboBox* self) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->VirtualKTimeComboBox::sender();
    } else
        qFatal("Error: Protected method KTimeComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTimeComboBox_SenderSignalIndex(const KTimeComboBox* self) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->VirtualKTimeComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTimeComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTimeComboBox_Receivers(const KTimeComboBox* self, const char* signal) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->VirtualKTimeComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method KTimeComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTimeComboBox_IsSignalConnected(const KTimeComboBox* self, const QMetaMethod* signal) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->VirtualKTimeComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTimeComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KTimeComboBox_GetDecodedMetricF(const KTimeComboBox* self, int metricA, int metricB) {
    if (auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self))) {
        return vktimecombobox->VirtualKTimeComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KTimeComboBox::getDecodedMetricF called without a directly constructed type");
}

void KTimeComboBox_Delete(KTimeComboBox* self) {
    delete self;
}
