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
#include <QByteArray>
#include <cstring>
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
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTimeComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTimeComboBox_OnMetacall(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Metacall_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KTimeComboBox_QBaseMetacall(KTimeComboBox* self, int param1, int param2, void** param3) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Metacall_IsBase(true);
        return vktimecombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTimeComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTimeComboBox_Tr(const char* s) {
    QString _ret = KTimeComboBox::tr(s);
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
    QTime** _arr = static_cast<QTime**>(malloc(sizeof(QTime*) * (_ret.size() + 1)));
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
    KTimeComboBox::connect(self, &KTimeComboBox::timeEntered, [self, slotFunc](const QTime& time) {
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
    KTimeComboBox::connect(self, &KTimeComboBox::timeChanged, [self, slotFunc](const QTime& time) {
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
    KTimeComboBox::connect(self, &KTimeComboBox::timeEdited, [self, slotFunc](const QTime& time) {
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

libqt_string KTimeComboBox_Tr2(const char* s, const char* c) {
    QString _ret = KTimeComboBox::tr(s, c);
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
    QString _ret = KTimeComboBox::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
bool KTimeComboBox_EventFilter(KTimeComboBox* self, QObject* object, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->eventFilter(object, event);
    } else {
        return ((VirtualKTimeComboBox*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseEventFilter(KTimeComboBox* self, QObject* object, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_EventFilter_IsBase(true);
        return vktimecombobox->eventFilter(object, event);
    } else {
        return ((VirtualKTimeComboBox*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnEventFilter(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_EventFilter_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ShowPopup(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->showPopup();
    } else {
        ((VirtualKTimeComboBox*)self)->showPopup();
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseShowPopup(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ShowPopup_IsBase(true);
        vktimecombobox->showPopup();
    } else {
        ((VirtualKTimeComboBox*)self)->showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnShowPopup(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ShowPopup_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_HidePopup(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->hidePopup();
    } else {
        ((VirtualKTimeComboBox*)self)->hidePopup();
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseHidePopup(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HidePopup_IsBase(true);
        vktimecombobox->hidePopup();
    } else {
        ((VirtualKTimeComboBox*)self)->hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHidePopup(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HidePopup_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_MousePressEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->mousePressEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseMousePressEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MousePressEvent_IsBase(true);
        vktimecombobox->mousePressEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMousePressEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_WheelEvent(KTimeComboBox* self, QWheelEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->wheelEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseWheelEvent(KTimeComboBox* self, QWheelEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_WheelEvent_IsBase(true);
        vktimecombobox->wheelEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnWheelEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_WheelEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_KeyPressEvent(KTimeComboBox* self, QKeyEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->keyPressEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseKeyPressEvent(KTimeComboBox* self, QKeyEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_KeyPressEvent_IsBase(true);
        vktimecombobox->keyPressEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnKeyPressEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_FocusInEvent(KTimeComboBox* self, QFocusEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->focusInEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseFocusInEvent(KTimeComboBox* self, QFocusEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusInEvent_IsBase(true);
        vktimecombobox->focusInEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusInEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_FocusOutEvent(KTimeComboBox* self, QFocusEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->focusOutEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseFocusOutEvent(KTimeComboBox* self, QFocusEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusOutEvent_IsBase(true);
        vktimecombobox->focusOutEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusOutEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ResizeEvent(KTimeComboBox* self, QResizeEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->resizeEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseResizeEvent(KTimeComboBox* self, QResizeEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ResizeEvent_IsBase(true);
        vktimecombobox->resizeEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnResizeEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_AssignTime(KTimeComboBox* self, const QTime* time) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->assignTime(*time);
    } else {
        ((VirtualKTimeComboBox*)self)->assignTime(*time);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseAssignTime(KTimeComboBox* self, const QTime* time) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_AssignTime_IsBase(true);
        vktimecombobox->assignTime(*time);
    } else {
        ((VirtualKTimeComboBox*)self)->assignTime(*time);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnAssignTime(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_AssignTime_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_AssignTime_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_SetModel(KTimeComboBox* self, QAbstractItemModel* model) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setModel(model);
    } else {
        self->KTimeComboBox::setModel(model);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseSetModel(KTimeComboBox* self, QAbstractItemModel* model) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SetModel_IsBase(true);
        vktimecombobox->setModel(model);
    } else {
        self->KTimeComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSetModel(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SetModel_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTimeComboBox_SizeHint(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return new QSize(vktimecombobox->sizeHint());
    } else {
        return new QSize(((VirtualKTimeComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KTimeComboBox_QBaseSizeHint(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SizeHint_IsBase(true);
        return new QSize(vktimecombobox->sizeHint());
    } else {
        return new QSize(((VirtualKTimeComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSizeHint(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SizeHint_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTimeComboBox_MinimumSizeHint(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return new QSize(vktimecombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTimeComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KTimeComboBox_QBaseMinimumSizeHint(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vktimecombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTimeComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMinimumSizeHint(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_Event(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->event(event);
    } else {
        return self->KTimeComboBox::event(event);
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Event_IsBase(true);
        return vktimecombobox->event(event);
    } else {
        return self->KTimeComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Event_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTimeComboBox_InputMethodQuery(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return new QVariant(vktimecombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTimeComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KTimeComboBox_QBaseInputMethodQuery(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vktimecombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTimeComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInputMethodQuery(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ChangeEvent(KTimeComboBox* self, QEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->changeEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseChangeEvent(KTimeComboBox* self, QEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ChangeEvent_IsBase(true);
        vktimecombobox->changeEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnChangeEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_PaintEvent(KTimeComboBox* self, QPaintEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->paintEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBasePaintEvent(KTimeComboBox* self, QPaintEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_PaintEvent_IsBase(true);
        vktimecombobox->paintEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnPaintEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_PaintEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ShowEvent(KTimeComboBox* self, QShowEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->showEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseShowEvent(KTimeComboBox* self, QShowEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ShowEvent_IsBase(true);
        vktimecombobox->showEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnShowEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ShowEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_HideEvent(KTimeComboBox* self, QHideEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->hideEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseHideEvent(KTimeComboBox* self, QHideEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HideEvent_IsBase(true);
        vktimecombobox->hideEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHideEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HideEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_MouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseMouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MouseReleaseEvent_IsBase(true);
        vktimecombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMouseReleaseEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_KeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseKeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_KeyReleaseEvent_IsBase(true);
        vktimecombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnKeyReleaseEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->contextMenuEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ContextMenuEvent_IsBase(true);
        vktimecombobox->contextMenuEvent(e);
    } else {
        ((VirtualKTimeComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnContextMenuEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_InputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKTimeComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseInputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InputMethodEvent_IsBase(true);
        vktimecombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKTimeComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInputMethodEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_InitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->initStyleOption(option);
    } else {
        ((VirtualKTimeComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseInitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InitStyleOption_IsBase(true);
        vktimecombobox->initStyleOption(option);
    } else {
        ((VirtualKTimeComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInitStyleOption(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KTimeComboBox_DevType(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->devType();
    } else {
        return self->KTimeComboBox::devType();
    }
}

// Base class handler implementation
int KTimeComboBox_QBaseDevType(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DevType_IsBase(true);
        return vktimecombobox->devType();
    } else {
        return self->KTimeComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDevType(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DevType_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_SetVisible(KTimeComboBox* self, bool visible) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setVisible(visible);
    } else {
        self->KTimeComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseSetVisible(KTimeComboBox* self, bool visible) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SetVisible_IsBase(true);
        vktimecombobox->setVisible(visible);
    } else {
        self->KTimeComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSetVisible(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SetVisible_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KTimeComboBox_HeightForWidth(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTimeComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KTimeComboBox_QBaseHeightForWidth(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HeightForWidth_IsBase(true);
        return vktimecombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTimeComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHeightForWidth(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_HasHeightForWidth(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->hasHeightForWidth();
    } else {
        return self->KTimeComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseHasHeightForWidth(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HasHeightForWidth_IsBase(true);
        return vktimecombobox->hasHeightForWidth();
    } else {
        return self->KTimeComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnHasHeightForWidth(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KTimeComboBox_PaintEngine(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->paintEngine();
    } else {
        return self->KTimeComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KTimeComboBox_QBasePaintEngine(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_PaintEngine_IsBase(true);
        return vktimecombobox->paintEngine();
    } else {
        return self->KTimeComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnPaintEngine(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_PaintEngine_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_MouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseMouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MouseDoubleClickEvent_IsBase(true);
        vktimecombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMouseDoubleClickEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_MouseMoveEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseMouseMoveEvent(KTimeComboBox* self, QMouseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MouseMoveEvent_IsBase(true);
        vktimecombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMouseMoveEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_EnterEvent(KTimeComboBox* self, QEnterEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->enterEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseEnterEvent(KTimeComboBox* self, QEnterEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_EnterEvent_IsBase(true);
        vktimecombobox->enterEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnEnterEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_EnterEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_LeaveEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->leaveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseLeaveEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_LeaveEvent_IsBase(true);
        vktimecombobox->leaveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnLeaveEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_MoveEvent(KTimeComboBox* self, QMoveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->moveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseMoveEvent(KTimeComboBox* self, QMoveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MoveEvent_IsBase(true);
        vktimecombobox->moveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMoveEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_MoveEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_CloseEvent(KTimeComboBox* self, QCloseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->closeEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseCloseEvent(KTimeComboBox* self, QCloseEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_CloseEvent_IsBase(true);
        vktimecombobox->closeEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnCloseEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_CloseEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_TabletEvent(KTimeComboBox* self, QTabletEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->tabletEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseTabletEvent(KTimeComboBox* self, QTabletEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_TabletEvent_IsBase(true);
        vktimecombobox->tabletEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnTabletEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_TabletEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ActionEvent(KTimeComboBox* self, QActionEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->actionEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseActionEvent(KTimeComboBox* self, QActionEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ActionEvent_IsBase(true);
        vktimecombobox->actionEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnActionEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ActionEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_DragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->dragEnterEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseDragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DragEnterEvent_IsBase(true);
        vktimecombobox->dragEnterEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDragEnterEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_DragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->dragMoveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseDragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DragMoveEvent_IsBase(true);
        vktimecombobox->dragMoveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDragMoveEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_DragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseDragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DragLeaveEvent_IsBase(true);
        vktimecombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDragLeaveEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_DropEvent(KTimeComboBox* self, QDropEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->dropEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseDropEvent(KTimeComboBox* self, QDropEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DropEvent_IsBase(true);
        vktimecombobox->dropEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDropEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DropEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_NativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTimeComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseNativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_NativeEvent_IsBase(true);
        return vktimecombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTimeComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnNativeEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_NativeEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTimeComboBox_Metric(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTimeComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KTimeComboBox_QBaseMetric(const KTimeComboBox* self, int param1) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Metric_IsBase(true);
        return vktimecombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTimeComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnMetric(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Metric_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_InitPainter(const KTimeComboBox* self, QPainter* painter) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->initPainter(painter);
    } else {
        ((VirtualKTimeComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseInitPainter(const KTimeComboBox* self, QPainter* painter) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InitPainter_IsBase(true);
        vktimecombobox->initPainter(painter);
    } else {
        ((VirtualKTimeComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnInitPainter(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_InitPainter_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KTimeComboBox_Redirected(const KTimeComboBox* self, QPoint* offset) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->redirected(offset);
    } else {
        return ((VirtualKTimeComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KTimeComboBox_QBaseRedirected(const KTimeComboBox* self, QPoint* offset) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Redirected_IsBase(true);
        return vktimecombobox->redirected(offset);
    } else {
        return ((VirtualKTimeComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnRedirected(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Redirected_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KTimeComboBox_SharedPainter(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->sharedPainter();
    } else {
        return ((VirtualKTimeComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KTimeComboBox_QBaseSharedPainter(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SharedPainter_IsBase(true);
        return vktimecombobox->sharedPainter();
    } else {
        return ((VirtualKTimeComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSharedPainter(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SharedPainter_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_FocusNextPrevChild(KTimeComboBox* self, bool next) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKTimeComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseFocusNextPrevChild(KTimeComboBox* self, bool next) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusNextPrevChild_IsBase(true);
        return vktimecombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKTimeComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusNextPrevChild(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_TimerEvent(KTimeComboBox* self, QTimerEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->timerEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseTimerEvent(KTimeComboBox* self, QTimerEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_TimerEvent_IsBase(true);
        vktimecombobox->timerEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnTimerEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_TimerEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ChildEvent(KTimeComboBox* self, QChildEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->childEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseChildEvent(KTimeComboBox* self, QChildEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ChildEvent_IsBase(true);
        vktimecombobox->childEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnChildEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ChildEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_CustomEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->customEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseCustomEvent(KTimeComboBox* self, QEvent* event) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_CustomEvent_IsBase(true);
        vktimecombobox->customEvent(event);
    } else {
        ((VirtualKTimeComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnCustomEvent(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_CustomEvent_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_ConnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->connectNotify(*signal);
    } else {
        ((VirtualKTimeComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseConnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ConnectNotify_IsBase(true);
        vktimecombobox->connectNotify(*signal);
    } else {
        ((VirtualKTimeComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnConnectNotify(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_DisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKTimeComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseDisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DisconnectNotify_IsBase(true);
        vktimecombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKTimeComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDisconnectNotify(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_UpdateMicroFocus(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->updateMicroFocus();
    } else {
        ((VirtualKTimeComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseUpdateMicroFocus(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_UpdateMicroFocus_IsBase(true);
        vktimecombobox->updateMicroFocus();
    } else {
        ((VirtualKTimeComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnUpdateMicroFocus(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_Create(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->create();
    } else {
        ((VirtualKTimeComboBox*)self)->create();
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseCreate(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Create_IsBase(true);
        vktimecombobox->create();
    } else {
        ((VirtualKTimeComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnCreate(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Create_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KTimeComboBox_Destroy(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->destroy();
    } else {
        ((VirtualKTimeComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void KTimeComboBox_QBaseDestroy(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Destroy_IsBase(true);
        vktimecombobox->destroy();
    } else {
        ((VirtualKTimeComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnDestroy(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Destroy_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_FocusNextChild(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->focusNextChild();
    } else {
        return ((VirtualKTimeComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseFocusNextChild(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusNextChild_IsBase(true);
        return vktimecombobox->focusNextChild();
    } else {
        return ((VirtualKTimeComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusNextChild(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_FocusPreviousChild(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->focusPreviousChild();
    } else {
        return ((VirtualKTimeComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseFocusPreviousChild(KTimeComboBox* self) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusPreviousChild_IsBase(true);
        return vktimecombobox->focusPreviousChild();
    } else {
        return ((VirtualKTimeComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnFocusPreviousChild(KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = dynamic_cast<VirtualKTimeComboBox*>(self);
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTimeComboBox_Sender(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->sender();
    } else {
        return ((VirtualKTimeComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTimeComboBox_QBaseSender(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Sender_IsBase(true);
        return vktimecombobox->sender();
    } else {
        return ((VirtualKTimeComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSender(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Sender_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTimeComboBox_SenderSignalIndex(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->senderSignalIndex();
    } else {
        return ((VirtualKTimeComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTimeComboBox_QBaseSenderSignalIndex(const KTimeComboBox* self) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SenderSignalIndex_IsBase(true);
        return vktimecombobox->senderSignalIndex();
    } else {
        return ((VirtualKTimeComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnSenderSignalIndex(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTimeComboBox_Receivers(const KTimeComboBox* self, const char* signal) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->receivers(signal);
    } else {
        return ((VirtualKTimeComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTimeComboBox_QBaseReceivers(const KTimeComboBox* self, const char* signal) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Receivers_IsBase(true);
        return vktimecombobox->receivers(signal);
    } else {
        return ((VirtualKTimeComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnReceivers(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_Receivers_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTimeComboBox_IsSignalConnected(const KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKTimeComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTimeComboBox_QBaseIsSignalConnected(const KTimeComboBox* self, const QMetaMethod* signal) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_IsSignalConnected_IsBase(true);
        return vktimecombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKTimeComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnIsSignalConnected(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KTimeComboBox_GetDecodedMetricF(const KTimeComboBox* self, int metricA, int metricB) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        return vktimecombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTimeComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KTimeComboBox_QBaseGetDecodedMetricF(const KTimeComboBox* self, int metricA, int metricB) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_GetDecodedMetricF_IsBase(true);
        return vktimecombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTimeComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KTimeComboBox_OnGetDecodedMetricF(const KTimeComboBox* self, intptr_t slot) {
    auto* vktimecombobox = const_cast<VirtualKTimeComboBox*>(dynamic_cast<const VirtualKTimeComboBox*>(self));
    if (vktimecombobox && vktimecombobox->isVirtualKTimeComboBox) {
        vktimecombobox->setKTimeComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKTimeComboBox::KTimeComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

void KTimeComboBox_Delete(KTimeComboBox* self) {
    delete self;
}
