#include <KDateTimeEdit>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
#include <QDateTime>
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
#include <QLocale>
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
#include <QTabletEvent>
#include <QTime>
#include <QTimeZone>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kdatetimeedit.h>
#include "libkdatetimeedit.h"
#include "libkdatetimeedit.hxx"

KDateTimeEdit* KDateTimeEdit_new(QWidget* parent) {
    return new VirtualKDateTimeEdit(parent);
}

KDateTimeEdit* KDateTimeEdit_new2() {
    return new VirtualKDateTimeEdit();
}

QMetaObject* KDateTimeEdit_MetaObject(const KDateTimeEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDateTimeEdit_Metacast(KDateTimeEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDateTimeEdit_Metacall(KDateTimeEdit* self, int param1, int param2, void** param3) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDateTimeEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnMetacall(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Metacall_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KDateTimeEdit_QBaseMetacall(KDateTimeEdit* self, int param1, int param2, void** param3) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Metacall_IsBase(true);
        return vkdatetimeedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDateTimeEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDateTimeEdit_Tr(const char* s) {
    QString _ret = KDateTimeEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KDateTimeEdit_Options(const KDateTimeEdit* self) {
    return static_cast<int>(self->options());
}

QDateTime* KDateTimeEdit_DateTime(const KDateTimeEdit* self) {
    return new QDateTime(self->dateTime());
}

QDate* KDateTimeEdit_Date(const KDateTimeEdit* self) {
    return new QDate(self->date());
}

QTime* KDateTimeEdit_Time(const KDateTimeEdit* self) {
    return new QTime(self->time());
}

QTimeZone* KDateTimeEdit_TimeZone(const KDateTimeEdit* self) {
    return new QTimeZone(self->timeZone());
}

libqt_list /* of QLocale* */ KDateTimeEdit_CalendarLocalesList(const KDateTimeEdit* self) {
    QList<QLocale> _ret = self->calendarLocalesList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLocale(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QDateTime* KDateTimeEdit_MinimumDateTime(const KDateTimeEdit* self) {
    return new QDateTime(self->minimumDateTime());
}

QDateTime* KDateTimeEdit_MaximumDateTime(const KDateTimeEdit* self) {
    return new QDateTime(self->maximumDateTime());
}

int KDateTimeEdit_DateDisplayFormat(const KDateTimeEdit* self) {
    return static_cast<int>(self->dateDisplayFormat());
}

libqt_map /* of QDate* to libqt_string */ KDateTimeEdit_DateMap(const KDateTimeEdit* self) {
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

int KDateTimeEdit_TimeDisplayFormat(const KDateTimeEdit* self) {
    return static_cast<int>(self->timeDisplayFormat());
}

int KDateTimeEdit_TimeListInterval(const KDateTimeEdit* self) {
    return self->timeListInterval();
}

libqt_list /* of QTime* */ KDateTimeEdit_TimeList(const KDateTimeEdit* self) {
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

libqt_list /* of QTimeZone* */ KDateTimeEdit_TimeZones(const KDateTimeEdit* self) {
    QList<QTimeZone> _ret = self->timeZones();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTimeZone** _arr = static_cast<QTimeZone**>(malloc(sizeof(QTimeZone*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTimeZone(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KDateTimeEdit_IsValid(const KDateTimeEdit* self) {
    return self->isValid();
}

bool KDateTimeEdit_IsNull(const KDateTimeEdit* self) {
    return self->isNull();
}

bool KDateTimeEdit_IsValidDate(const KDateTimeEdit* self) {
    return self->isValidDate();
}

bool KDateTimeEdit_IsNullDate(const KDateTimeEdit* self) {
    return self->isNullDate();
}

bool KDateTimeEdit_IsValidTime(const KDateTimeEdit* self) {
    return self->isValidTime();
}

bool KDateTimeEdit_IsNullTime(const KDateTimeEdit* self) {
    return self->isNullTime();
}

void KDateTimeEdit_DateTimeEntered(KDateTimeEdit* self, const QDateTime* dateTime) {
    self->dateTimeEntered(*dateTime);
}

void KDateTimeEdit_Connect_DateTimeEntered(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QDateTime*) = reinterpret_cast<void (*)(KDateTimeEdit*, QDateTime*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::dateTimeEntered, [self, slotFunc](const QDateTime& dateTime) {
        const QDateTime& dateTime_ret = dateTime;
        // Cast returned reference into pointer
        QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_DateTimeChanged(KDateTimeEdit* self, const QDateTime* dateTime) {
    self->dateTimeChanged(*dateTime);
}

void KDateTimeEdit_Connect_DateTimeChanged(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QDateTime*) = reinterpret_cast<void (*)(KDateTimeEdit*, QDateTime*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::dateTimeChanged, [self, slotFunc](const QDateTime& dateTime) {
        const QDateTime& dateTime_ret = dateTime;
        // Cast returned reference into pointer
        QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_DateTimeEdited(KDateTimeEdit* self, const QDateTime* dateTime) {
    self->dateTimeEdited(*dateTime);
}

void KDateTimeEdit_Connect_DateTimeEdited(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QDateTime*) = reinterpret_cast<void (*)(KDateTimeEdit*, QDateTime*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::dateTimeEdited, [self, slotFunc](const QDateTime& dateTime) {
        const QDateTime& dateTime_ret = dateTime;
        // Cast returned reference into pointer
        QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_CalendarEntered(KDateTimeEdit* self, const QLocale* calendarLocale) {
    self->calendarEntered(*calendarLocale);
}

void KDateTimeEdit_Connect_CalendarEntered(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QLocale*) = reinterpret_cast<void (*)(KDateTimeEdit*, QLocale*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::calendarEntered, [self, slotFunc](const QLocale& calendarLocale) {
        const QLocale& calendarLocale_ret = calendarLocale;
        // Cast returned reference into pointer
        QLocale* sigval1 = const_cast<QLocale*>(&calendarLocale_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_CalendarChanged(KDateTimeEdit* self, const QLocale* calendarLocale) {
    self->calendarChanged(*calendarLocale);
}

void KDateTimeEdit_Connect_CalendarChanged(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QLocale*) = reinterpret_cast<void (*)(KDateTimeEdit*, QLocale*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::calendarChanged, [self, slotFunc](const QLocale& calendarLocale) {
        const QLocale& calendarLocale_ret = calendarLocale;
        // Cast returned reference into pointer
        QLocale* sigval1 = const_cast<QLocale*>(&calendarLocale_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_DateEntered(KDateTimeEdit* self, const QDate* date) {
    self->dateEntered(*date);
}

void KDateTimeEdit_Connect_DateEntered(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(KDateTimeEdit*, QDate*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::dateEntered, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_DateChanged(KDateTimeEdit* self, const QDate* date) {
    self->dateChanged(*date);
}

void KDateTimeEdit_Connect_DateChanged(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(KDateTimeEdit*, QDate*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::dateChanged, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_DateEdited(KDateTimeEdit* self, const QDate* date) {
    self->dateEdited(*date);
}

void KDateTimeEdit_Connect_DateEdited(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(KDateTimeEdit*, QDate*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::dateEdited, [self, slotFunc](const QDate& date) {
        const QDate& date_ret = date;
        // Cast returned reference into pointer
        QDate* sigval1 = const_cast<QDate*>(&date_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_TimeEntered(KDateTimeEdit* self, const QTime* time) {
    self->timeEntered(*time);
}

void KDateTimeEdit_Connect_TimeEntered(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QTime*) = reinterpret_cast<void (*)(KDateTimeEdit*, QTime*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::timeEntered, [self, slotFunc](const QTime& time) {
        const QTime& time_ret = time;
        // Cast returned reference into pointer
        QTime* sigval1 = const_cast<QTime*>(&time_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_TimeChanged(KDateTimeEdit* self, const QTime* time) {
    self->timeChanged(*time);
}

void KDateTimeEdit_Connect_TimeChanged(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QTime*) = reinterpret_cast<void (*)(KDateTimeEdit*, QTime*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::timeChanged, [self, slotFunc](const QTime& time) {
        const QTime& time_ret = time;
        // Cast returned reference into pointer
        QTime* sigval1 = const_cast<QTime*>(&time_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_TimeEdited(KDateTimeEdit* self, const QTime* time) {
    self->timeEdited(*time);
}

void KDateTimeEdit_Connect_TimeEdited(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QTime*) = reinterpret_cast<void (*)(KDateTimeEdit*, QTime*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::timeEdited, [self, slotFunc](const QTime& time) {
        const QTime& time_ret = time;
        // Cast returned reference into pointer
        QTime* sigval1 = const_cast<QTime*>(&time_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_TimeZoneEntered(KDateTimeEdit* self, const QTimeZone* zone) {
    self->timeZoneEntered(*zone);
}

void KDateTimeEdit_Connect_TimeZoneEntered(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QTimeZone*) = reinterpret_cast<void (*)(KDateTimeEdit*, QTimeZone*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::timeZoneEntered, [self, slotFunc](const QTimeZone& zone) {
        const QTimeZone& zone_ret = zone;
        // Cast returned reference into pointer
        QTimeZone* sigval1 = const_cast<QTimeZone*>(&zone_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_TimeZoneChanged(KDateTimeEdit* self, const QTimeZone* zone) {
    self->timeZoneChanged(*zone);
}

void KDateTimeEdit_Connect_TimeZoneChanged(KDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(KDateTimeEdit*, QTimeZone*) = reinterpret_cast<void (*)(KDateTimeEdit*, QTimeZone*)>(slot);
    KDateTimeEdit::connect(self, &KDateTimeEdit::timeZoneChanged, [self, slotFunc](const QTimeZone& zone) {
        const QTimeZone& zone_ret = zone;
        // Cast returned reference into pointer
        QTimeZone* sigval1 = const_cast<QTimeZone*>(&zone_ret);
        slotFunc(self, sigval1);
    });
}

void KDateTimeEdit_SetOptions(KDateTimeEdit* self, int options) {
    self->setOptions(static_cast<KDateTimeEdit::Options>(options));
}

void KDateTimeEdit_SetDateTime(KDateTimeEdit* self, const QDateTime* dateTime) {
    self->setDateTime(*dateTime);
}

void KDateTimeEdit_SetDate(KDateTimeEdit* self, const QDate* date) {
    self->setDate(*date);
}

void KDateTimeEdit_SetTime(KDateTimeEdit* self, const QTime* time) {
    self->setTime(*time);
}

void KDateTimeEdit_SetTimeZone(KDateTimeEdit* self, const QTimeZone* zone) {
    self->setTimeZone(*zone);
}

void KDateTimeEdit_SetDateTimeRange(KDateTimeEdit* self, const QDateTime* minDateTime, const QDateTime* maxDateTime) {
    self->setDateTimeRange(*minDateTime, *maxDateTime);
}

void KDateTimeEdit_ResetDateTimeRange(KDateTimeEdit* self) {
    self->resetDateTimeRange();
}

void KDateTimeEdit_SetMinimumDateTime(KDateTimeEdit* self, const QDateTime* minDateTime) {
    self->setMinimumDateTime(*minDateTime);
}

void KDateTimeEdit_ResetMinimumDateTime(KDateTimeEdit* self) {
    self->resetMinimumDateTime();
}

void KDateTimeEdit_SetMaximumDateTime(KDateTimeEdit* self, const QDateTime* maxDateTime) {
    self->setMaximumDateTime(*maxDateTime);
}

void KDateTimeEdit_ResetMaximumDateTime(KDateTimeEdit* self) {
    self->resetMaximumDateTime();
}

void KDateTimeEdit_SetDateDisplayFormat(KDateTimeEdit* self, int format) {
    self->setDateDisplayFormat(static_cast<QLocale::FormatType>(format));
}

void KDateTimeEdit_SetCalendarLocalesList(KDateTimeEdit* self, const libqt_list /* of QLocale* */ calendarLocales) {
    QList<QLocale> calendarLocales_QList;
    calendarLocales_QList.reserve(calendarLocales.len);
    QLocale** calendarLocales_arr = static_cast<QLocale**>(calendarLocales.data);
    for (size_t i = 0; i < calendarLocales.len; ++i) {
        calendarLocales_QList.push_back(*(calendarLocales_arr[i]));
    }
    self->setCalendarLocalesList(calendarLocales_QList);
}

void KDateTimeEdit_SetDateMap(KDateTimeEdit* self, libqt_map /* of QDate* to libqt_string */ dateMap) {
    QMap<QDate, QString> dateMap_QMap;
    QDate** dateMap_karr = static_cast<QDate**>(dateMap.keys);
    libqt_string* dateMap_varr = static_cast<libqt_string*>(dateMap.values);
    for (size_t i = 0; i < dateMap.len; ++i) {
        QString dateMap_varr_i_QString = QString::fromUtf8(dateMap_varr[i].data, dateMap_varr[i].len);
        dateMap_QMap[*(dateMap_karr[i])] = dateMap_varr_i_QString;
    }
    self->setDateMap(dateMap_QMap);
}

void KDateTimeEdit_SetTimeDisplayFormat(KDateTimeEdit* self, int format) {
    self->setTimeDisplayFormat(static_cast<QLocale::FormatType>(format));
}

void KDateTimeEdit_SetTimeListInterval(KDateTimeEdit* self, int minutes) {
    self->setTimeListInterval(static_cast<int>(minutes));
}

void KDateTimeEdit_SetTimeList(KDateTimeEdit* self, libqt_list /* of QTime* */ timeList) {
    QList<QTime> timeList_QList;
    timeList_QList.reserve(timeList.len);
    QTime** timeList_arr = static_cast<QTime**>(timeList.data);
    for (size_t i = 0; i < timeList.len; ++i) {
        timeList_QList.push_back(*(timeList_arr[i]));
    }
    self->setTimeList(timeList_QList);
}

void KDateTimeEdit_SetTimeZones(KDateTimeEdit* self, const libqt_list /* of QTimeZone* */ zones) {
    QList<QTimeZone> zones_QList;
    zones_QList.reserve(zones.len);
    QTimeZone** zones_arr = static_cast<QTimeZone**>(zones.data);
    for (size_t i = 0; i < zones.len; ++i) {
        zones_QList.push_back(*(zones_arr[i]));
    }
    self->setTimeZones(zones_QList);
}

bool KDateTimeEdit_EventFilter(KDateTimeEdit* self, QObject* object, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->eventFilter(object, event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnEventFilter(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_EventFilter_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KDateTimeEdit_QBaseEventFilter(KDateTimeEdit* self, QObject* object, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_EventFilter_IsBase(true);
        return vkdatetimeedit->eventFilter(object, event);
    }
    return {};
}

void KDateTimeEdit_FocusInEvent(KDateTimeEdit* self, QFocusEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->focusInEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnFocusInEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusInEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusInEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateTimeEdit_QBaseFocusInEvent(KDateTimeEdit* self, QFocusEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusInEvent_IsBase(true);
        vkdatetimeedit->focusInEvent(event);
    }
}

void KDateTimeEdit_FocusOutEvent(KDateTimeEdit* self, QFocusEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->focusOutEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnFocusOutEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusOutEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateTimeEdit_QBaseFocusOutEvent(KDateTimeEdit* self, QFocusEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusOutEvent_IsBase(true);
        vkdatetimeedit->focusOutEvent(event);
    }
}

void KDateTimeEdit_ResizeEvent(KDateTimeEdit* self, QResizeEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->resizeEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnResizeEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ResizeEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateTimeEdit_QBaseResizeEvent(KDateTimeEdit* self, QResizeEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ResizeEvent_IsBase(true);
        vkdatetimeedit->resizeEvent(event);
    }
}

void KDateTimeEdit_AssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->assignDateTime(*dateTime);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnAssignDateTime(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignDateTime_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignDateTime_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateTimeEdit_QBaseAssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignDateTime_IsBase(true);
        vkdatetimeedit->assignDateTime(*dateTime);
    }
}

void KDateTimeEdit_AssignDate(KDateTimeEdit* self, const QDate* date) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->assignDate(*date);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnAssignDate(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignDate_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignDate_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateTimeEdit_QBaseAssignDate(KDateTimeEdit* self, const QDate* date) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignDate_IsBase(true);
        vkdatetimeedit->assignDate(*date);
    }
}

void KDateTimeEdit_AssignTime(KDateTimeEdit* self, const QTime* time) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->assignTime(*time);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KDateTimeEdit_OnAssignTime(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignTime_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignTime_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KDateTimeEdit_QBaseAssignTime(KDateTimeEdit* self, const QTime* time) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignTime_IsBase(true);
        vkdatetimeedit->assignTime(*time);
    }
}

libqt_string KDateTimeEdit_Tr2(const char* s, const char* c) {
    QString _ret = KDateTimeEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDateTimeEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDateTimeEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDateTimeEdit_SetDateTimeRange3(KDateTimeEdit* self, const QDateTime* minDateTime, const QDateTime* maxDateTime, const libqt_string minWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setDateTimeRange(*minDateTime, *maxDateTime, minWarnMsg_QString);
}

void KDateTimeEdit_SetDateTimeRange4(KDateTimeEdit* self, const QDateTime* minDateTime, const QDateTime* maxDateTime, const libqt_string minWarnMsg, const libqt_string maxWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setDateTimeRange(*minDateTime, *maxDateTime, minWarnMsg_QString, maxWarnMsg_QString);
}

void KDateTimeEdit_SetMinimumDateTime2(KDateTimeEdit* self, const QDateTime* minDateTime, const libqt_string minWarnMsg) {
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setMinimumDateTime(*minDateTime, minWarnMsg_QString);
}

void KDateTimeEdit_SetMaximumDateTime2(KDateTimeEdit* self, const QDateTime* maxDateTime, const libqt_string maxWarnMsg) {
    QString maxWarnMsg_QString = QString::fromUtf8(maxWarnMsg.data, maxWarnMsg.len);
    self->setMaximumDateTime(*maxDateTime, maxWarnMsg_QString);
}

void KDateTimeEdit_SetTimeList2(KDateTimeEdit* self, libqt_list /* of QTime* */ timeList, const libqt_string minWarnMsg) {
    QList<QTime> timeList_QList;
    timeList_QList.reserve(timeList.len);
    QTime** timeList_arr = static_cast<QTime**>(timeList.data);
    for (size_t i = 0; i < timeList.len; ++i) {
        timeList_QList.push_back(*(timeList_arr[i]));
    }
    QString minWarnMsg_QString = QString::fromUtf8(minWarnMsg.data, minWarnMsg.len);
    self->setTimeList(timeList_QList, minWarnMsg_QString);
}

void KDateTimeEdit_SetTimeList3(KDateTimeEdit* self, libqt_list /* of QTime* */ timeList, const libqt_string minWarnMsg, const libqt_string maxWarnMsg) {
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
int KDateTimeEdit_DevType(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->devType();
    } else {
        return self->KDateTimeEdit::devType();
    }
}

// Base class handler implementation
int KDateTimeEdit_QBaseDevType(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DevType_IsBase(true);
        return vkdatetimeedit->devType();
    } else {
        return self->KDateTimeEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDevType(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DevType_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_SetVisible(KDateTimeEdit* self, bool visible) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setVisible(visible);
    } else {
        self->KDateTimeEdit::setVisible(visible);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseSetVisible(KDateTimeEdit* self, bool visible) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SetVisible_IsBase(true);
        vkdatetimeedit->setVisible(visible);
    } else {
        self->KDateTimeEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSetVisible(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SetVisible_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDateTimeEdit_SizeHint(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return new QSize(vkdatetimeedit->sizeHint());
    } else {
        return new QSize(((VirtualKDateTimeEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KDateTimeEdit_QBaseSizeHint(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SizeHint_IsBase(true);
        return new QSize(vkdatetimeedit->sizeHint());
    } else {
        return new QSize(((VirtualKDateTimeEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSizeHint(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SizeHint_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDateTimeEdit_MinimumSizeHint(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return new QSize(vkdatetimeedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDateTimeEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KDateTimeEdit_QBaseMinimumSizeHint(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vkdatetimeedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDateTimeEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMinimumSizeHint(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateTimeEdit_HeightForWidth(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDateTimeEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KDateTimeEdit_QBaseHeightForWidth(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_HeightForWidth_IsBase(true);
        return vkdatetimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDateTimeEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnHeightForWidth(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_HeightForWidth_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_HasHeightForWidth(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->hasHeightForWidth();
    } else {
        return self->KDateTimeEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseHasHeightForWidth(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_HasHeightForWidth_IsBase(true);
        return vkdatetimeedit->hasHeightForWidth();
    } else {
        return self->KDateTimeEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnHasHeightForWidth(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KDateTimeEdit_PaintEngine(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->paintEngine();
    } else {
        return self->KDateTimeEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KDateTimeEdit_QBasePaintEngine(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_PaintEngine_IsBase(true);
        return vkdatetimeedit->paintEngine();
    } else {
        return self->KDateTimeEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnPaintEngine(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_PaintEngine_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_Event(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->event(event);
    } else {
        return ((VirtualKDateTimeEdit*)self)->event(event);
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Event_IsBase(true);
        return vkdatetimeedit->event(event);
    } else {
        return ((VirtualKDateTimeEdit*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Event_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_MousePressEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->mousePressEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseMousePressEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MousePressEvent_IsBase(true);
        vkdatetimeedit->mousePressEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMousePressEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MousePressEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_MouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->mouseReleaseEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseMouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MouseReleaseEvent_IsBase(true);
        vkdatetimeedit->mouseReleaseEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMouseReleaseEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_MouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseMouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MouseDoubleClickEvent_IsBase(true);
        vkdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMouseDoubleClickEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_MouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->mouseMoveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseMouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MouseMoveEvent_IsBase(true);
        vkdatetimeedit->mouseMoveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMouseMoveEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_WheelEvent(KDateTimeEdit* self, QWheelEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->wheelEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseWheelEvent(KDateTimeEdit* self, QWheelEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_WheelEvent_IsBase(true);
        vkdatetimeedit->wheelEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnWheelEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_WheelEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_KeyPressEvent(KDateTimeEdit* self, QKeyEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->keyPressEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseKeyPressEvent(KDateTimeEdit* self, QKeyEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_KeyPressEvent_IsBase(true);
        vkdatetimeedit->keyPressEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnKeyPressEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_KeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->keyReleaseEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseKeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_KeyReleaseEvent_IsBase(true);
        vkdatetimeedit->keyReleaseEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnKeyReleaseEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_EnterEvent(KDateTimeEdit* self, QEnterEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->enterEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseEnterEvent(KDateTimeEdit* self, QEnterEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_EnterEvent_IsBase(true);
        vkdatetimeedit->enterEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnEnterEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_EnterEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_LeaveEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->leaveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseLeaveEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_LeaveEvent_IsBase(true);
        vkdatetimeedit->leaveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnLeaveEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_LeaveEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_PaintEvent(KDateTimeEdit* self, QPaintEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->paintEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBasePaintEvent(KDateTimeEdit* self, QPaintEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_PaintEvent_IsBase(true);
        vkdatetimeedit->paintEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnPaintEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_PaintEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_MoveEvent(KDateTimeEdit* self, QMoveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->moveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseMoveEvent(KDateTimeEdit* self, QMoveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MoveEvent_IsBase(true);
        vkdatetimeedit->moveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMoveEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_MoveEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_CloseEvent(KDateTimeEdit* self, QCloseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->closeEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseCloseEvent(KDateTimeEdit* self, QCloseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_CloseEvent_IsBase(true);
        vkdatetimeedit->closeEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnCloseEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_CloseEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_ContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->contextMenuEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ContextMenuEvent_IsBase(true);
        vkdatetimeedit->contextMenuEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnContextMenuEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_TabletEvent(KDateTimeEdit* self, QTabletEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->tabletEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseTabletEvent(KDateTimeEdit* self, QTabletEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_TabletEvent_IsBase(true);
        vkdatetimeedit->tabletEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnTabletEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_TabletEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_ActionEvent(KDateTimeEdit* self, QActionEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->actionEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseActionEvent(KDateTimeEdit* self, QActionEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ActionEvent_IsBase(true);
        vkdatetimeedit->actionEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnActionEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ActionEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_DragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->dragEnterEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseDragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DragEnterEvent_IsBase(true);
        vkdatetimeedit->dragEnterEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDragEnterEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_DragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->dragMoveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseDragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DragMoveEvent_IsBase(true);
        vkdatetimeedit->dragMoveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDragMoveEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_DragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->dragLeaveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseDragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DragLeaveEvent_IsBase(true);
        vkdatetimeedit->dragLeaveEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDragLeaveEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_DropEvent(KDateTimeEdit* self, QDropEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->dropEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseDropEvent(KDateTimeEdit* self, QDropEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DropEvent_IsBase(true);
        vkdatetimeedit->dropEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDropEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DropEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_ShowEvent(KDateTimeEdit* self, QShowEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->showEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseShowEvent(KDateTimeEdit* self, QShowEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ShowEvent_IsBase(true);
        vkdatetimeedit->showEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnShowEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ShowEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_HideEvent(KDateTimeEdit* self, QHideEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->hideEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseHideEvent(KDateTimeEdit* self, QHideEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_HideEvent_IsBase(true);
        vkdatetimeedit->hideEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnHideEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_HideEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_NativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDateTimeEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseNativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_NativeEvent_IsBase(true);
        return vkdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDateTimeEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnNativeEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_NativeEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_ChangeEvent(KDateTimeEdit* self, QEvent* param1) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->changeEvent(param1);
    } else {
        ((VirtualKDateTimeEdit*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseChangeEvent(KDateTimeEdit* self, QEvent* param1) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ChangeEvent_IsBase(true);
        vkdatetimeedit->changeEvent(param1);
    } else {
        ((VirtualKDateTimeEdit*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnChangeEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ChangeEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateTimeEdit_Metric(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDateTimeEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KDateTimeEdit_QBaseMetric(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Metric_IsBase(true);
        return vkdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDateTimeEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMetric(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Metric_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_InitPainter(const KDateTimeEdit* self, QPainter* painter) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->initPainter(painter);
    } else {
        ((VirtualKDateTimeEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseInitPainter(const KDateTimeEdit* self, QPainter* painter) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_InitPainter_IsBase(true);
        vkdatetimeedit->initPainter(painter);
    } else {
        ((VirtualKDateTimeEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnInitPainter(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_InitPainter_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KDateTimeEdit_Redirected(const KDateTimeEdit* self, QPoint* offset) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->redirected(offset);
    } else {
        return ((VirtualKDateTimeEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KDateTimeEdit_QBaseRedirected(const KDateTimeEdit* self, QPoint* offset) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Redirected_IsBase(true);
        return vkdatetimeedit->redirected(offset);
    } else {
        return ((VirtualKDateTimeEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnRedirected(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Redirected_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KDateTimeEdit_SharedPainter(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->sharedPainter();
    } else {
        return ((VirtualKDateTimeEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KDateTimeEdit_QBaseSharedPainter(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SharedPainter_IsBase(true);
        return vkdatetimeedit->sharedPainter();
    } else {
        return ((VirtualKDateTimeEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSharedPainter(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SharedPainter_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_InputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->inputMethodEvent(param1);
    } else {
        ((VirtualKDateTimeEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseInputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_InputMethodEvent_IsBase(true);
        vkdatetimeedit->inputMethodEvent(param1);
    } else {
        ((VirtualKDateTimeEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnInputMethodEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDateTimeEdit_InputMethodQuery(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return new QVariant(vkdatetimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDateTimeEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KDateTimeEdit_QBaseInputMethodQuery(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vkdatetimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDateTimeEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnInputMethodQuery(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_FocusNextPrevChild(KDateTimeEdit* self, bool next) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKDateTimeEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseFocusNextPrevChild(KDateTimeEdit* self, bool next) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusNextPrevChild_IsBase(true);
        return vkdatetimeedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKDateTimeEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnFocusNextPrevChild(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_TimerEvent(KDateTimeEdit* self, QTimerEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->timerEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseTimerEvent(KDateTimeEdit* self, QTimerEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_TimerEvent_IsBase(true);
        vkdatetimeedit->timerEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnTimerEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_TimerEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_ChildEvent(KDateTimeEdit* self, QChildEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->childEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseChildEvent(KDateTimeEdit* self, QChildEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ChildEvent_IsBase(true);
        vkdatetimeedit->childEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnChildEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ChildEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_CustomEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->customEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseCustomEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_CustomEvent_IsBase(true);
        vkdatetimeedit->customEvent(event);
    } else {
        ((VirtualKDateTimeEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnCustomEvent(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_CustomEvent_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_ConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->connectNotify(*signal);
    } else {
        ((VirtualKDateTimeEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ConnectNotify_IsBase(true);
        vkdatetimeedit->connectNotify(*signal);
    } else {
        ((VirtualKDateTimeEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnConnectNotify(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_ConnectNotify_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_DisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->disconnectNotify(*signal);
    } else {
        ((VirtualKDateTimeEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseDisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DisconnectNotify_IsBase(true);
        vkdatetimeedit->disconnectNotify(*signal);
    } else {
        ((VirtualKDateTimeEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDisconnectNotify(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_AssignTimeZone(KDateTimeEdit* self, const QTimeZone* zone) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->assignTimeZone(*zone);
    } else {
        ((VirtualKDateTimeEdit*)self)->assignTimeZone(*zone);
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseAssignTimeZone(KDateTimeEdit* self, const QTimeZone* zone) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignTimeZone_IsBase(true);
        vkdatetimeedit->assignTimeZone(*zone);
    } else {
        ((VirtualKDateTimeEdit*)self)->assignTimeZone(*zone);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnAssignTimeZone(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_AssignTimeZone_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignTimeZone_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_UpdateMicroFocus(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->updateMicroFocus();
    } else {
        ((VirtualKDateTimeEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseUpdateMicroFocus(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_UpdateMicroFocus_IsBase(true);
        vkdatetimeedit->updateMicroFocus();
    } else {
        ((VirtualKDateTimeEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnUpdateMicroFocus(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_Create(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->create();
    } else {
        ((VirtualKDateTimeEdit*)self)->create();
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseCreate(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Create_IsBase(true);
        vkdatetimeedit->create();
    } else {
        ((VirtualKDateTimeEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnCreate(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Create_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KDateTimeEdit_Destroy(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->destroy();
    } else {
        ((VirtualKDateTimeEdit*)self)->destroy();
    }
}

// Base class handler implementation
void KDateTimeEdit_QBaseDestroy(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Destroy_IsBase(true);
        vkdatetimeedit->destroy();
    } else {
        ((VirtualKDateTimeEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDestroy(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Destroy_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_FocusNextChild(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->focusNextChild();
    } else {
        return ((VirtualKDateTimeEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseFocusNextChild(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusNextChild_IsBase(true);
        return vkdatetimeedit->focusNextChild();
    } else {
        return ((VirtualKDateTimeEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnFocusNextChild(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusNextChild_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_FocusPreviousChild(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->focusPreviousChild();
    } else {
        return ((VirtualKDateTimeEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseFocusPreviousChild(KDateTimeEdit* self) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusPreviousChild_IsBase(true);
        return vkdatetimeedit->focusPreviousChild();
    } else {
        return ((VirtualKDateTimeEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnFocusPreviousChild(KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDateTimeEdit_Sender(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->sender();
    } else {
        return ((VirtualKDateTimeEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDateTimeEdit_QBaseSender(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Sender_IsBase(true);
        return vkdatetimeedit->sender();
    } else {
        return ((VirtualKDateTimeEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSender(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Sender_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateTimeEdit_SenderSignalIndex(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->senderSignalIndex();
    } else {
        return ((VirtualKDateTimeEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDateTimeEdit_QBaseSenderSignalIndex(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SenderSignalIndex_IsBase(true);
        return vkdatetimeedit->senderSignalIndex();
    } else {
        return ((VirtualKDateTimeEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSenderSignalIndex(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDateTimeEdit_Receivers(const KDateTimeEdit* self, const char* signal) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->receivers(signal);
    } else {
        return ((VirtualKDateTimeEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDateTimeEdit_QBaseReceivers(const KDateTimeEdit* self, const char* signal) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Receivers_IsBase(true);
        return vkdatetimeedit->receivers(signal);
    } else {
        return ((VirtualKDateTimeEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnReceivers(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_Receivers_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDateTimeEdit_IsSignalConnected(const KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKDateTimeEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDateTimeEdit_QBaseIsSignalConnected(const KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_IsSignalConnected_IsBase(true);
        return vkdatetimeedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKDateTimeEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnIsSignalConnected(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KDateTimeEdit_GetDecodedMetricF(const KDateTimeEdit* self, int metricA, int metricB) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        return vkdatetimeedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDateTimeEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KDateTimeEdit_QBaseGetDecodedMetricF(const KDateTimeEdit* self, int metricA, int metricB) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_GetDecodedMetricF_IsBase(true);
        return vkdatetimeedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDateTimeEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnGetDecodedMetricF(const KDateTimeEdit* self, intptr_t slot) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit && vkdatetimeedit->isVirtualKDateTimeEdit) {
        vkdatetimeedit->setKDateTimeEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void KDateTimeEdit_Delete(KDateTimeEdit* self) {
    delete self;
}
