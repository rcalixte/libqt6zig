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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDateTimeEdit_Tr(const char* s) {
    auto _ret = KDateTimeEdit::tr(s);
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
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
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

int KDateTimeEdit_TimeDisplayFormat(const KDateTimeEdit* self) {
    return static_cast<int>(self->timeDisplayFormat());
}

int KDateTimeEdit_TimeListInterval(const KDateTimeEdit* self) {
    return self->timeListInterval();
}

libqt_list /* of QTime* */ KDateTimeEdit_TimeList(const KDateTimeEdit* self) {
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

libqt_list /* of QTimeZone* */ KDateTimeEdit_TimeZones(const KDateTimeEdit* self) {
    QList<QTimeZone> _ret = self->timeZones();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTimeZone** _arr = static_cast<QTimeZone**>(malloc(sizeof(QTimeZone*) * (_ret.size())));
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QDateTime&)>(&KDateTimeEdit::dateTimeEntered),
                           [self, slotFunc](const QDateTime& dateTime) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QDateTime&)>(&KDateTimeEdit::dateTimeChanged),
                           [self, slotFunc](const QDateTime& dateTime) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QDateTime&)>(&KDateTimeEdit::dateTimeEdited),
                           [self, slotFunc](const QDateTime& dateTime) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QLocale&)>(&KDateTimeEdit::calendarEntered),
                           [self, slotFunc](const QLocale& calendarLocale) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QLocale&)>(&KDateTimeEdit::calendarChanged),
                           [self, slotFunc](const QLocale& calendarLocale) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QDate&)>(&KDateTimeEdit::dateEntered),
                           [self, slotFunc](const QDate& date) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QDate&)>(&KDateTimeEdit::dateChanged),
                           [self, slotFunc](const QDate& date) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QDate&)>(&KDateTimeEdit::dateEdited),
                           [self, slotFunc](const QDate& date) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QTime&)>(&KDateTimeEdit::timeEntered),
                           [self, slotFunc](const QTime& time) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QTime&)>(&KDateTimeEdit::timeChanged),
                           [self, slotFunc](const QTime& time) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QTime&)>(&KDateTimeEdit::timeEdited),
                           [self, slotFunc](const QTime& time) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QTimeZone&)>(&KDateTimeEdit::timeZoneEntered),
                           [self, slotFunc](const QTimeZone& zone) {
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
    KDateTimeEdit::connect(self,
                           static_cast<void (KDateTimeEdit::*)(const QTimeZone&)>(&KDateTimeEdit::timeZoneChanged),
                           [self, slotFunc](const QTimeZone& zone) {
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
        dateMap_QMap.insert(*(dateMap_karr[i]), dateMap_varr_i_QString);
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
    if (vkdatetimeedit) {
        return vkdatetimeedit->eventFilter(object, event);
    }
    qFatal("Error: Protected method KDateTimeEdit::eventFilter called without a directly constructed type");
}

void KDateTimeEdit_FocusInEvent(KDateTimeEdit* self, QFocusEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->focusInEvent(event);
    }
}

void KDateTimeEdit_FocusOutEvent(KDateTimeEdit* self, QFocusEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->focusOutEvent(event);
    }
}

void KDateTimeEdit_ResizeEvent(KDateTimeEdit* self, QResizeEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->resizeEvent(event);
    }
}

void KDateTimeEdit_AssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->assignDateTime(*dateTime);
    }
}

void KDateTimeEdit_AssignDate(KDateTimeEdit* self, const QDate* date) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->assignDate(*date);
    }
}

void KDateTimeEdit_AssignTime(KDateTimeEdit* self, const QTime* time) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->assignTime(*time);
    }
}

libqt_string KDateTimeEdit_Tr2(const char* s, const char* c) {
    auto _ret = KDateTimeEdit::tr(s, c);
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
    auto _ret = KDateTimeEdit::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KDateTimeEdit_SuperMetaObject(const KDateTimeEdit* self) {
    return (QMetaObject*)self->KDateTimeEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMetaObject(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_metaobject_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDateTimeEdit_SuperMetacast(KDateTimeEdit* self, const char* param1) {
    return self->KDateTimeEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMetacast(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_metacast_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDateTimeEdit_SuperMetacall(KDateTimeEdit* self, int param1, int param2, void** param3) {
    return self->KDateTimeEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMetacall(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_metacall_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KDateTimeEdit_SuperEventFilter(KDateTimeEdit* self, QObject* object, QEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        return vkdatetimeedit->KDateTimeEdit::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnEventFilter(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_eventfilter_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KDateTimeEdit_SuperFocusInEvent(KDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnFocusInEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_focusinevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void KDateTimeEdit_SuperFocusOutEvent(KDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnFocusOutEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_focusoutevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void KDateTimeEdit_SuperResizeEvent(KDateTimeEdit* self, QResizeEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnResizeEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_resizeevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KDateTimeEdit_SuperAssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::assignDateTime(*dateTime);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::assignDateTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnAssignDateTime(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_assigndatetime_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignDateTime_Callback>(slot);
}

// Base class handler implementation
void KDateTimeEdit_SuperAssignDate(KDateTimeEdit* self, const QDate* date) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::assignDate(*date);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::assignDate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnAssignDate(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_assigndate_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignDate_Callback>(slot);
}

// Base class handler implementation
void KDateTimeEdit_SuperAssignTime(KDateTimeEdit* self, const QTime* time) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::assignTime(*time);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::assignTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnAssignTime(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_assigntime_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_AssignTime_Callback>(slot);
}

// Derived class handler implementation
int KDateTimeEdit_DevType(const KDateTimeEdit* self) {
    return self->devType();
}

// Base class handler implementation
int KDateTimeEdit_SuperDevType(const KDateTimeEdit* self) {
    return self->KDateTimeEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDevType(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_devtype_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_SetVisible(KDateTimeEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KDateTimeEdit_SuperSetVisible(KDateTimeEdit* self, bool visible) {
    self->KDateTimeEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSetVisible(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_setvisible_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KDateTimeEdit_SizeHint(const KDateTimeEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KDateTimeEdit_SuperSizeHint(const KDateTimeEdit* self) {
    return new QSize(self->KDateTimeEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSizeHint(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_sizehint_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KDateTimeEdit_MinimumSizeHint(const KDateTimeEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KDateTimeEdit_SuperMinimumSizeHint(const KDateTimeEdit* self) {
    return new QSize(self->KDateTimeEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMinimumSizeHint(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_minimumsizehint_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KDateTimeEdit_HeightForWidth(const KDateTimeEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KDateTimeEdit_SuperHeightForWidth(const KDateTimeEdit* self, int param1) {
    return self->KDateTimeEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnHeightForWidth(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_heightforwidth_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KDateTimeEdit_HasHeightForWidth(const KDateTimeEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KDateTimeEdit_SuperHasHeightForWidth(const KDateTimeEdit* self) {
    return self->KDateTimeEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnHasHeightForWidth(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_hasheightforwidth_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KDateTimeEdit_PaintEngine(const KDateTimeEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KDateTimeEdit_SuperPaintEngine(const KDateTimeEdit* self) {
    return self->KDateTimeEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnPaintEngine(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_paintengine_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KDateTimeEdit_Event(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        return vkdatetimeedit->event(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDateTimeEdit_SuperEvent(KDateTimeEdit* self, QEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        return vkdatetimeedit->KDateTimeEdit::event(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_event_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_MousePressEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperMousePressEvent(KDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMousePressEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_mousepressevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_MouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperMouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMouseReleaseEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_mousereleaseevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_MouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperMouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMouseDoubleClickEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_MouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperMouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMouseMoveEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_mousemoveevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_WheelEvent(KDateTimeEdit* self, QWheelEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperWheelEvent(KDateTimeEdit* self, QWheelEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnWheelEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_wheelevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_KeyPressEvent(KDateTimeEdit* self, QKeyEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperKeyPressEvent(KDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnKeyPressEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_keypressevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_KeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperKeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnKeyReleaseEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_keyreleaseevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_EnterEvent(KDateTimeEdit* self, QEnterEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperEnterEvent(KDateTimeEdit* self, QEnterEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnEnterEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_enterevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_LeaveEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperLeaveEvent(KDateTimeEdit* self, QEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnLeaveEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_leaveevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_PaintEvent(KDateTimeEdit* self, QPaintEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperPaintEvent(KDateTimeEdit* self, QPaintEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnPaintEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_paintevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_MoveEvent(KDateTimeEdit* self, QMoveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperMoveEvent(KDateTimeEdit* self, QMoveEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMoveEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_moveevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_CloseEvent(KDateTimeEdit* self, QCloseEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperCloseEvent(KDateTimeEdit* self, QCloseEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnCloseEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_closeevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_ContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnContextMenuEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_contextmenuevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_TabletEvent(KDateTimeEdit* self, QTabletEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperTabletEvent(KDateTimeEdit* self, QTabletEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnTabletEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_tabletevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_ActionEvent(KDateTimeEdit* self, QActionEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperActionEvent(KDateTimeEdit* self, QActionEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnActionEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_actionevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_DragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperDragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDragEnterEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_dragenterevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_DragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperDragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDragMoveEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_dragmoveevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_DragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperDragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDragLeaveEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_dragleaveevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_DropEvent(KDateTimeEdit* self, QDropEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperDropEvent(KDateTimeEdit* self, QDropEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDropEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_dropevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_ShowEvent(KDateTimeEdit* self, QShowEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperShowEvent(KDateTimeEdit* self, QShowEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnShowEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_showevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_HideEvent(KDateTimeEdit* self, QHideEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperHideEvent(KDateTimeEdit* self, QHideEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnHideEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_hideevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDateTimeEdit_NativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        return vkdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDateTimeEdit_SuperNativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        return vkdatetimeedit->KDateTimeEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnNativeEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_nativeevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_ChangeEvent(KDateTimeEdit* self, QEvent* param1) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperChangeEvent(KDateTimeEdit* self, QEvent* param1) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnChangeEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_changeevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KDateTimeEdit_Metric(const KDateTimeEdit* self, int param1) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit) {
        return vkdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KDateTimeEdit_SuperMetric(const KDateTimeEdit* self, int param1) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->KDateTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnMetric(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_metric_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_InitPainter(const KDateTimeEdit* self, QPainter* painter) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit) {
        vkdatetimeedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperInitPainter(const KDateTimeEdit* self, QPainter* painter) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        vkdatetimeedit->KDateTimeEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnInitPainter(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_initpainter_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KDateTimeEdit_Redirected(const KDateTimeEdit* self, QPoint* offset) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit) {
        return vkdatetimeedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KDateTimeEdit_SuperRedirected(const KDateTimeEdit* self, QPoint* offset) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->KDateTimeEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnRedirected(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_redirected_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KDateTimeEdit_SharedPainter(const KDateTimeEdit* self) {
    auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self));
    if (vkdatetimeedit) {
        return vkdatetimeedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KDateTimeEdit_SuperSharedPainter(const KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->KDateTimeEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnSharedPainter(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_sharedpainter_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_InputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperInputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnInputMethodEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_inputmethodevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDateTimeEdit_InputMethodQuery(const KDateTimeEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KDateTimeEdit_SuperInputMethodQuery(const KDateTimeEdit* self, int param1) {
    return new QVariant(self->KDateTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnInputMethodQuery(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self)))
        vkdatetimeedit->kdatetimeedit_inputmethodquery_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KDateTimeEdit_FocusNextPrevChild(KDateTimeEdit* self, bool next) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        return vkdatetimeedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDateTimeEdit_SuperFocusNextPrevChild(KDateTimeEdit* self, bool next) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        return vkdatetimeedit->KDateTimeEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnFocusNextPrevChild(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_focusnextprevchild_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_TimerEvent(KDateTimeEdit* self, QTimerEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperTimerEvent(KDateTimeEdit* self, QTimerEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnTimerEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_timerevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_ChildEvent(KDateTimeEdit* self, QChildEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperChildEvent(KDateTimeEdit* self, QChildEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnChildEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_childevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_CustomEvent(KDateTimeEdit* self, QEvent* event) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperCustomEvent(KDateTimeEdit* self, QEvent* event) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnCustomEvent(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_customevent_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_ConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnConnectNotify(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_connectnotify_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDateTimeEdit_DisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self);
    if (vkdatetimeedit) {
        vkdatetimeedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDateTimeEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDateTimeEdit_SuperDisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->KDateTimeEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDateTimeEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDateTimeEdit_OnDisconnectNotify(KDateTimeEdit* self, intptr_t slot) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self))
        vkdatetimeedit->kdatetimeedit_disconnectnotify_callback = reinterpret_cast<VirtualKDateTimeEdit::KDateTimeEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KDateTimeEdit_AssignTimeZone(KDateTimeEdit* self, const QTimeZone* zone) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->VirtualKDateTimeEdit::assignTimeZone(*zone);
    } else
        qFatal("Error: Protected method KDateTimeEdit::assignTimeZone called without a directly constructed type");
}

// Derived class protected handler implementation
void KDateTimeEdit_UpdateMicroFocus(KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->VirtualKDateTimeEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method KDateTimeEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KDateTimeEdit_Create(KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->VirtualKDateTimeEdit::create();
    } else
        qFatal("Error: Protected method KDateTimeEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KDateTimeEdit_Destroy(KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        vkdatetimeedit->VirtualKDateTimeEdit::destroy();
    } else
        qFatal("Error: Protected method KDateTimeEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDateTimeEdit_FocusNextChild(KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        return vkdatetimeedit->VirtualKDateTimeEdit::focusNextChild();
    } else
        qFatal("Error: Protected method KDateTimeEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDateTimeEdit_FocusPreviousChild(KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = dynamic_cast<VirtualKDateTimeEdit*>(self)) {
        return vkdatetimeedit->VirtualKDateTimeEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method KDateTimeEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDateTimeEdit_Sender(const KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->VirtualKDateTimeEdit::sender();
    } else
        qFatal("Error: Protected method KDateTimeEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDateTimeEdit_SenderSignalIndex(const KDateTimeEdit* self) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->VirtualKDateTimeEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDateTimeEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDateTimeEdit_Receivers(const KDateTimeEdit* self, const char* signal) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->VirtualKDateTimeEdit::receivers(signal);
    } else
        qFatal("Error: Protected method KDateTimeEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDateTimeEdit_IsSignalConnected(const KDateTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->VirtualKDateTimeEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDateTimeEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KDateTimeEdit_GetDecodedMetricF(const KDateTimeEdit* self, int metricA, int metricB) {
    if (auto* vkdatetimeedit = const_cast<VirtualKDateTimeEdit*>(dynamic_cast<const VirtualKDateTimeEdit*>(self))) {
        return vkdatetimeedit->VirtualKDateTimeEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KDateTimeEdit::getDecodedMetricF called without a directly constructed type");
}

void KDateTimeEdit_Delete(KDateTimeEdit* self) {
    delete self;
}
