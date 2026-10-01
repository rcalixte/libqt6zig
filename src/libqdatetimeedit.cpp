#include <QAbstractSpinBox>
#include <QActionEvent>
#include <QByteArray>
#include <QCalendar>
#include <QCalendarWidget>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
#include <QDateEdit>
#include <QDateTime>
#include <QDateTimeEdit>
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
#include <QLineEdit>
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
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QTime>
#include <QTimeEdit>
#include <QTimeZone>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdatetimeedit.h>
#include "libqdatetimeedit.h"
#include "libqdatetimeedit.hxx"

QDateTimeEdit* QDateTimeEdit_new(QWidget* parent) {
    return new VirtualQDateTimeEdit(parent);
}

QDateTimeEdit* QDateTimeEdit_new2() {
    return new VirtualQDateTimeEdit();
}

QDateTimeEdit* QDateTimeEdit_new3(const QDateTime* dt) {
    return new VirtualQDateTimeEdit(*dt);
}

QDateTimeEdit* QDateTimeEdit_new4(QDate* d) {
    return new VirtualQDateTimeEdit(*d);
}

QDateTimeEdit* QDateTimeEdit_new5(QTime* t) {
    return new VirtualQDateTimeEdit(*t);
}

QDateTimeEdit* QDateTimeEdit_new6(const QDateTime* dt, QWidget* parent) {
    return new VirtualQDateTimeEdit(*dt, parent);
}

QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent) {
    return new VirtualQDateTimeEdit(*d, parent);
}

QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent) {
    return new VirtualQDateTimeEdit(*t, parent);
}

QMetaObject* QDateTimeEdit_MetaObject(const QDateTimeEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDateTimeEdit_Metacast(QDateTimeEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDateTimeEdit_Metacall(QDateTimeEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDateTimeEdit_Tr(const char* s) {
    auto _ret = QDateTimeEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self) {
    return new QDateTime(self->dateTime());
}

QDate* QDateTimeEdit_Date(const QDateTimeEdit* self) {
    return new QDate(self->date());
}

QTime* QDateTimeEdit_Time(const QDateTimeEdit* self) {
    return new QTime(self->time());
}

QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self) {
    return new QCalendar(self->calendar());
}

void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar) {
    self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self) {
    return new QDateTime(self->minimumDateTime());
}

void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self) {
    self->clearMinimumDateTime();
}

void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, const QDateTime* dt) {
    self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self) {
    return new QDateTime(self->maximumDateTime());
}

void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self) {
    self->clearMaximumDateTime();
}

void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, const QDateTime* dt) {
    self->setMaximumDateTime(*dt);
}

void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, const QDateTime* min, const QDateTime* max) {
    self->setDateTimeRange(*min, *max);
}

QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self) {
    return new QDate(self->minimumDate());
}

void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min) {
    self->setMinimumDate(*min);
}

void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self) {
    self->clearMinimumDate();
}

QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self) {
    return new QDate(self->maximumDate());
}

void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max) {
    self->setMaximumDate(*max);
}

void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self) {
    self->clearMaximumDate();
}

void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max) {
    self->setDateRange(*min, *max);
}

QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self) {
    return new QTime(self->minimumTime());
}

void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min) {
    self->setMinimumTime(*min);
}

void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self) {
    self->clearMinimumTime();
}

QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self) {
    return new QTime(self->maximumTime());
}

void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max) {
    self->setMaximumTime(*max);
}

void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self) {
    self->clearMaximumTime();
}

void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max) {
    self->setTimeRange(*min, *max);
}

int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self) {
    return static_cast<int>(self->displayedSections());
}

int QDateTimeEdit_CurrentSection(const QDateTimeEdit* self) {
    return static_cast<int>(self->currentSection());
}

int QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index) {
    return static_cast<int>(self->sectionAt(static_cast<int>(index)));
}

void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, int section) {
    self->setCurrentSection(static_cast<QDateTimeEdit::Section>(section));
}

int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self) {
    return self->currentSectionIndex();
}

void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index) {
    self->setCurrentSectionIndex(static_cast<int>(index));
}

QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self) {
    return self->calendarWidget();
}

void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
    self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_SectionCount(const QDateTimeEdit* self) {
    return self->sectionCount();
}

void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, int section) {
    self->setSelectedSection(static_cast<QDateTimeEdit::Section>(section));
}

libqt_string QDateTimeEdit_SectionText(const QDateTimeEdit* self, int section) {
    auto _ret = self->sectionText(static_cast<QDateTimeEdit::Section>(section));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self) {
    auto _ret = self->displayFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setDisplayFormat(format_QString);
}

bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self) {
    return self->calendarPopup();
}

void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable) {
    self->setCalendarPopup(enable);
}

int QDateTimeEdit_TimeSpec(const QDateTimeEdit* self) {
    return static_cast<int>(self->timeSpec());
}

void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, int spec) {
    self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

QTimeZone* QDateTimeEdit_TimeZone(const QDateTimeEdit* self) {
    return new QTimeZone(self->timeZone());
}

void QDateTimeEdit_SetTimeZone(QDateTimeEdit* self, const QTimeZone* zone) {
    self->setTimeZone(*zone);
}

QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self) {
    return new QSize(self->sizeHint());
}

void QDateTimeEdit_Clear(QDateTimeEdit* self) {
    self->clear();
}

void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps) {
    self->stepBy(static_cast<int>(steps));
}

bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event) {
    return self->event(event);
}

void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, const QDateTime* dateTime) {
    self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_Connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDateTime*)>(slot);
    QDateTimeEdit::connect(self,
                           static_cast<void (QDateTimeEdit::*)(const QDateTime&)>(&QDateTimeEdit::dateTimeChanged),
                           [self, slotFunc](const QDateTime& dateTime) {
                               const QDateTime& dateTime_ret = dateTime;
                               // Cast returned reference into pointer
                               QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
                               slotFunc(self, sigval1);
                           });
}

void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time) {
    self->timeChanged(*time);
}

void QDateTimeEdit_Connect_TimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, QTime*)>(slot);
    QDateTimeEdit::connect(self,
                           static_cast<void (QDateTimeEdit::*)(QTime)>(&QDateTimeEdit::timeChanged),
                           [self, slotFunc](QTime time) {
                               QTime* sigval1 = new QTime(time);
                               slotFunc(self, sigval1);
                           });
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
    self->dateChanged(*date);
}

void QDateTimeEdit_Connect_DateChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDate*)>(slot);
    QDateTimeEdit::connect(self,
                           static_cast<void (QDateTimeEdit::*)(QDate)>(&QDateTimeEdit::dateChanged),
                           [self, slotFunc](QDate date) {
                               QDate* sigval1 = new QDate(date);
                               slotFunc(self, sigval1);
                           });
}

void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, const QDateTime* dateTime) {
    self->setDateTime(*dateTime);
}

void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date) {
    self->setDate(*date);
}

void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time) {
    self->setTime(*time);
}

void QDateTimeEdit_KeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->keyPressEvent(event);
    }
}

void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->wheelEvent(event);
    }
}

void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->focusInEvent(event);
    }
}

bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        return vqdatetimeedit->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QDateTimeEdit::focusNextPrevChild called without a directly constructed type");
}

int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
    qFatal("Error: Protected method QDateTimeEdit::validate called without a directly constructed type");
}

void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->fixup(input_QString);
    }
}

QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        return new QDateTime(vqdatetimeedit->dateTimeFromText(text_QString));
    }
    qFatal("Error: Protected method QDateTimeEdit::dateTimeFromText called without a directly constructed type");
}

libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        auto _ret = vqdatetimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QDateTimeEdit::textFromDateTime called without a directly constructed type");
}

int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    }
    qFatal("Error: Protected method QDateTimeEdit::stepEnabled called without a directly constructed type");
}

void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->mousePressEvent(event);
    }
}

void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->paintEvent(event);
    }
}

void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->initStyleOption(option);
    }
}

libqt_string QDateTimeEdit_Tr2(const char* s, const char* c) {
    auto _ret = QDateTimeEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDateTimeEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDateTimeEdit_SuperMetaObject(const QDateTimeEdit* self) {
    return (QMetaObject*)self->QDateTimeEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMetaObject(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_metaobject_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDateTimeEdit_SuperMetacast(QDateTimeEdit* self, const char* param1) {
    return self->QDateTimeEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMetacast(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_metacast_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDateTimeEdit_SuperMetacall(QDateTimeEdit* self, int param1, int param2, void** param3) {
    return self->QDateTimeEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMetacall(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_metacall_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QDateTimeEdit_SuperSizeHint(const QDateTimeEdit* self) {
    return new QSize(self->QDateTimeEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSizeHint(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_sizehint_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperClear(QDateTimeEdit* self) {
    self->QDateTimeEdit::clear();
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnClear(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_clear_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Clear_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperStepBy(QDateTimeEdit* self, int steps) {
    self->QDateTimeEdit::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnStepBy(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_stepby_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepBy_Callback>(slot);
}

// Base class handler implementation
bool QDateTimeEdit_SuperEvent(QDateTimeEdit* self, QEvent* event) {
    return self->QDateTimeEdit::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_event_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Event_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnKeyPressEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_keypressevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperWheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnWheelEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_wheelevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperFocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusInEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_focusinevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
bool QDateTimeEdit_SuperFocusNextPrevChild(QDateTimeEdit* self, bool next) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->QDateTimeEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusNextPrevChild(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_focusnextprevchild_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
int QDateTimeEdit_SuperValidate(const QDateTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return static_cast<int>(vqdatetimeedit->QDateTimeEdit::validate(input_QString, static_cast<int&>(*pos)));
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::validate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnValidate(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_validate_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Validate_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperFixup(const QDateTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->QDateTimeEdit::fixup(input_QString);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::fixup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFixup(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_fixup_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Fixup_Callback>(slot);
}

// Base class handler implementation
QDateTime* QDateTimeEdit_SuperDateTimeFromText(const QDateTimeEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        return new QDateTime(vqdatetimeedit->QDateTimeEdit::dateTimeFromText(text_QString));
    qFatal("Error: Protected virtual method QDateTimeEdit::dateTimeFromText called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDateTimeFromText(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_datetimefromtext_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DateTimeFromText_Callback>(slot);
}

// Base class handler implementation
libqt_string QDateTimeEdit_SuperTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        auto _ret = vqdatetimeedit->QDateTimeEdit::textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::textFromDateTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTextFromDateTime(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_textfromdatetime_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TextFromDateTime_Callback>(slot);
}

// Base class handler implementation
int QDateTimeEdit_SuperStepEnabled(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return static_cast<int>(vqdatetimeedit->QDateTimeEdit::stepEnabled());
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnStepEnabled(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_stepenabled_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepEnabled_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperMousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMousePressEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_mousepressevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperPaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnPaintEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_paintevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QDateTimeEdit_SuperInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->QDateTimeEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInitStyleOption(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_initstyleoption_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QSize* QDateTimeEdit_MinimumSizeHint(const QDateTimeEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDateTimeEdit_SuperMinimumSizeHint(const QDateTimeEdit* self) {
    return new QSize(self->QDateTimeEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMinimumSizeHint(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_minimumsizehint_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDateTimeEdit_InputMethodQuery(const QDateTimeEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDateTimeEdit_SuperInputMethodQuery(const QDateTimeEdit* self, int param1) {
    return new QVariant(self->QDateTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInputMethodQuery(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_inputmethodquery_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ResizeEvent(QDateTimeEdit* self, QResizeEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperResizeEvent(QDateTimeEdit* self, QResizeEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnResizeEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_resizeevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_KeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperKeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnKeyReleaseEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_keyreleaseevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_FocusOutEvent(QDateTimeEdit* self, QFocusEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperFocusOutEvent(QDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusOutEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_focusoutevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnContextMenuEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_contextmenuevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ChangeEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperChangeEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnChangeEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_changeevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_CloseEvent(QDateTimeEdit* self, QCloseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperCloseEvent(QDateTimeEdit* self, QCloseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCloseEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_closeevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_HideEvent(QDateTimeEdit* self, QHideEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperHideEvent(QDateTimeEdit* self, QHideEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHideEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_hideevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_MouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperMouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseReleaseEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_mousereleaseevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_MouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperMouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_mousemoveevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_TimerEvent(QDateTimeEdit* self, QTimerEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperTimerEvent(QDateTimeEdit* self, QTimerEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTimerEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_timerevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ShowEvent(QDateTimeEdit* self, QShowEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperShowEvent(QDateTimeEdit* self, QShowEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnShowEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_showevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
int QDateTimeEdit_DevType(const QDateTimeEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QDateTimeEdit_SuperDevType(const QDateTimeEdit* self) {
    return self->QDateTimeEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDevType(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_devtype_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_SetVisible(QDateTimeEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDateTimeEdit_SuperSetVisible(QDateTimeEdit* self, bool visible) {
    self->QDateTimeEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSetVisible(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_setvisible_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QDateTimeEdit_HeightForWidth(const QDateTimeEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDateTimeEdit_SuperHeightForWidth(const QDateTimeEdit* self, int param1) {
    return self->QDateTimeEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHeightForWidth(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_heightforwidth_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDateTimeEdit_HasHeightForWidth(const QDateTimeEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDateTimeEdit_SuperHasHeightForWidth(const QDateTimeEdit* self) {
    return self->QDateTimeEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHasHeightForWidth(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_hasheightforwidth_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDateTimeEdit_PaintEngine(const QDateTimeEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDateTimeEdit_SuperPaintEngine(const QDateTimeEdit* self) {
    return self->QDateTimeEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnPaintEngine(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_paintengine_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_MouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperMouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseDoubleClickEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_EnterEvent(QDateTimeEdit* self, QEnterEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperEnterEvent(QDateTimeEdit* self, QEnterEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEnterEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_enterevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_LeaveEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperLeaveEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnLeaveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_leaveevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_MoveEvent(QDateTimeEdit* self, QMoveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperMoveEvent(QDateTimeEdit* self, QMoveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_moveevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_TabletEvent(QDateTimeEdit* self, QTabletEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperTabletEvent(QDateTimeEdit* self, QTabletEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTabletEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_tabletevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ActionEvent(QDateTimeEdit* self, QActionEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperActionEvent(QDateTimeEdit* self, QActionEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnActionEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_actionevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_DragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperDragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragEnterEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_dragenterevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_DragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperDragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_dragmoveevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_DragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperDragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragLeaveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_dragleaveevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_DropEvent(QDateTimeEdit* self, QDropEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperDropEvent(QDateTimeEdit* self, QDropEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDropEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_dropevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDateTimeEdit_NativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDateTimeEdit_SuperNativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->QDateTimeEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnNativeEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_nativeevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDateTimeEdit_Metric(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit) {
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDateTimeEdit_SuperMetric(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->QDateTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMetric(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_metric_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_InitPainter(const QDateTimeEdit* self, QPainter* painter) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit) {
        vqdatetimeedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperInitPainter(const QDateTimeEdit* self, QPainter* painter) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->QDateTimeEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInitPainter(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_initpainter_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDateTimeEdit_Redirected(const QDateTimeEdit* self, QPoint* offset) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit) {
        return vqdatetimeedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDateTimeEdit_SuperRedirected(const QDateTimeEdit* self, QPoint* offset) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->QDateTimeEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnRedirected(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_redirected_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDateTimeEdit_SharedPainter(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit) {
        return vqdatetimeedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDateTimeEdit_SuperSharedPainter(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->QDateTimeEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSharedPainter(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self)))
        vqdatetimeedit->qdatetimeedit_sharedpainter_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_InputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperInputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInputMethodEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_inputmethodevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDateTimeEdit_EventFilter(QDateTimeEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDateTimeEdit_SuperEventFilter(QDateTimeEdit* self, QObject* watched, QEvent* event) {
    return self->QDateTimeEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEventFilter(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_eventfilter_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ChildEvent(QDateTimeEdit* self, QChildEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperChildEvent(QDateTimeEdit* self, QChildEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnChildEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_childevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_CustomEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperCustomEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCustomEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_customevent_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_ConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnConnectNotify(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_connectnotify_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeEdit_DisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit) {
        vqdatetimeedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDateTimeEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeEdit_SuperDisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->QDateTimeEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDateTimeEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDisconnectNotify(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self))
        vqdatetimeedit->qdatetimeedit_disconnectnotify_callback = reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* QDateTimeEdit_LineEdit(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->VirtualQDateTimeEdit::lineEdit();
    } else
        qFatal("Error: Protected method QDateTimeEdit::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateTimeEdit_SetLineEdit(QDateTimeEdit* self, QLineEdit* edit) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->VirtualQDateTimeEdit::setLineEdit(edit);
    } else
        qFatal("Error: Protected method QDateTimeEdit::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateTimeEdit_UpdateMicroFocus(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->VirtualQDateTimeEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDateTimeEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateTimeEdit_Create(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->VirtualQDateTimeEdit::create();
    } else
        qFatal("Error: Protected method QDateTimeEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateTimeEdit_Destroy(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->VirtualQDateTimeEdit::destroy();
    } else
        qFatal("Error: Protected method QDateTimeEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateTimeEdit_FocusNextChild(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->VirtualQDateTimeEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QDateTimeEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateTimeEdit_FocusPreviousChild(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->VirtualQDateTimeEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDateTimeEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDateTimeEdit_Sender(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->VirtualQDateTimeEdit::sender();
    } else
        qFatal("Error: Protected method QDateTimeEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDateTimeEdit_SenderSignalIndex(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->VirtualQDateTimeEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDateTimeEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDateTimeEdit_Receivers(const QDateTimeEdit* self, const char* signal) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->VirtualQDateTimeEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QDateTimeEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateTimeEdit_IsSignalConnected(const QDateTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->VirtualQDateTimeEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDateTimeEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDateTimeEdit_GetDecodedMetricF(const QDateTimeEdit* self, int metricA, int metricB) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->VirtualQDateTimeEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDateTimeEdit::getDecodedMetricF called without a directly constructed type");
}

void QDateTimeEdit_Delete(QDateTimeEdit* self) {
    delete self;
}

QTimeEdit* QTimeEdit_new(QWidget* parent) {
    return new VirtualQTimeEdit(parent);
}

QTimeEdit* QTimeEdit_new2() {
    return new VirtualQTimeEdit();
}

QTimeEdit* QTimeEdit_new3(QTime* time) {
    return new VirtualQTimeEdit(*time);
}

QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent) {
    return new VirtualQTimeEdit(*time, parent);
}

QMetaObject* QTimeEdit_MetaObject(const QTimeEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTimeEdit_Metacast(QTimeEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTimeEdit_Metacall(QTimeEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTimeEdit_Tr(const char* s) {
    auto _ret = QTimeEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time) {
    self->userTimeChanged(*time);
}

void QTimeEdit_Connect_UserTimeChanged(QTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QTimeEdit*, QTime*) = reinterpret_cast<void (*)(QTimeEdit*, QTime*)>(slot);
    QTimeEdit::connect(self,
                       static_cast<void (QTimeEdit::*)(QTime)>(&QTimeEdit::userTimeChanged),
                       [self, slotFunc](QTime time) {
                           QTime* sigval1 = new QTime(time);
                           slotFunc(self, sigval1);
                       });
}

libqt_string QTimeEdit_Tr2(const char* s, const char* c) {
    auto _ret = QTimeEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTimeEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTimeEdit_SuperMetaObject(const QTimeEdit* self) {
    return (QMetaObject*)self->QTimeEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMetaObject(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_metaobject_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTimeEdit_SuperMetacast(QTimeEdit* self, const char* param1) {
    return self->QTimeEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMetacast(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_metacast_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTimeEdit_SuperMetacall(QTimeEdit* self, int param1, int param2, void** param3) {
    return self->QTimeEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMetacall(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_metacall_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* QTimeEdit_SizeHint(const QTimeEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTimeEdit_SuperSizeHint(const QTimeEdit* self) {
    return new QSize(self->QTimeEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSizeHint(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_sizehint_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_Clear(QTimeEdit* self) {
    self->clear();
}

// Base class handler implementation
void QTimeEdit_SuperClear(QTimeEdit* self) {
    self->QTimeEdit::clear();
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnClear(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_clear_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Clear_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_StepBy(QTimeEdit* self, int steps) {
    self->stepBy(static_cast<int>(steps));
}

// Base class handler implementation
void QTimeEdit_SuperStepBy(QTimeEdit* self, int steps) {
    self->QTimeEdit::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnStepBy(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_stepby_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_StepBy_Callback>(slot);
}

// Derived class handler implementation
bool QTimeEdit_Event(QTimeEdit* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTimeEdit_SuperEvent(QTimeEdit* self, QEvent* event) {
    return self->QTimeEdit::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_event_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_KeyPressEvent(QTimeEdit* self, QKeyEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperKeyPressEvent(QTimeEdit* self, QKeyEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnKeyPressEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_keypressevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_WheelEvent(QTimeEdit* self, QWheelEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperWheelEvent(QTimeEdit* self, QWheelEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnWheelEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_wheelevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_FocusInEvent(QTimeEdit* self, QFocusEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperFocusInEvent(QTimeEdit* self, QFocusEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusInEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_focusinevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTimeEdit_FocusNextPrevChild(QTimeEdit* self, bool next) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        return vqtimeedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTimeEdit_SuperFocusNextPrevChild(QTimeEdit* self, bool next) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->QTimeEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusNextPrevChild(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_focusnextprevchild_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
int QTimeEdit_Validate(const QTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::validate called without a directly constructed type");
    }
}

// Base class handler implementation
int QTimeEdit_SuperValidate(const QTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return static_cast<int>(vqtimeedit->QTimeEdit::validate(input_QString, static_cast<int&>(*pos)));
    } else
        qFatal("Error: Protected virtual method QTimeEdit::validate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnValidate(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_validate_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Validate_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_Fixup(const QTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        vqtimeedit->fixup(input_QString);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::fixup called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperFixup(const QTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->QTimeEdit::fixup(input_QString);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::fixup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFixup(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_fixup_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Fixup_Callback>(slot);
}

// Derived class handler implementation
QDateTime* QTimeEdit_DateTimeFromText(const QTimeEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QDateTime((self->*&VirtualQTimeEdit::Base::dateTimeFromText)(text_QString));
}

// Base class handler implementation
QDateTime* QTimeEdit_SuperDateTimeFromText(const QTimeEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        return new QDateTime(vqtimeedit->dateTimeFromText(text_QString));
    qFatal("Error: Protected virtual method QTimeEdit::dateTimeFromText called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDateTimeFromText(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_datetimefromtext_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DateTimeFromText_Callback>(slot);
}

// Derived class handler implementation
libqt_string QTimeEdit_TextFromDateTime(const QTimeEdit* self, const QDateTime* dt) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        auto _ret = vqtimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::textFromDateTime called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_string QTimeEdit_SuperTextFromDateTime(const QTimeEdit* self, const QDateTime* dt) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        auto _ret = vqtimeedit->QTimeEdit::textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QTimeEdit::textFromDateTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTextFromDateTime(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_textfromdatetime_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TextFromDateTime_Callback>(slot);
}

// Derived class handler implementation
int QTimeEdit_StepEnabled(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        return static_cast<int>(vqtimeedit->stepEnabled());
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::stepEnabled called without a directly constructed type");
    }
}

// Base class handler implementation
int QTimeEdit_SuperStepEnabled(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return static_cast<int>(vqtimeedit->QTimeEdit::stepEnabled());
    } else
        qFatal("Error: Protected virtual method QTimeEdit::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnStepEnabled(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_stepenabled_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_StepEnabled_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_MousePressEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperMousePressEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMousePressEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_mousepressevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_PaintEvent(QTimeEdit* self, QPaintEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperPaintEvent(QTimeEdit* self, QPaintEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnPaintEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_paintevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_InitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        vqtimeedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperInitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->QTimeEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInitStyleOption(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_initstyleoption_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QSize* QTimeEdit_MinimumSizeHint(const QTimeEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTimeEdit_SuperMinimumSizeHint(const QTimeEdit* self) {
    return new QSize(self->QTimeEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMinimumSizeHint(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_minimumsizehint_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTimeEdit_InputMethodQuery(const QTimeEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QTimeEdit_SuperInputMethodQuery(const QTimeEdit* self, int param1) {
    return new QVariant(self->QTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInputMethodQuery(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_inputmethodquery_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ResizeEvent(QTimeEdit* self, QResizeEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperResizeEvent(QTimeEdit* self, QResizeEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnResizeEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_resizeevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_KeyReleaseEvent(QTimeEdit* self, QKeyEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperKeyReleaseEvent(QTimeEdit* self, QKeyEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnKeyReleaseEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_keyreleaseevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_FocusOutEvent(QTimeEdit* self, QFocusEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperFocusOutEvent(QTimeEdit* self, QFocusEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusOutEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_focusoutevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnContextMenuEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_contextmenuevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ChangeEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperChangeEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnChangeEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_changeevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_CloseEvent(QTimeEdit* self, QCloseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperCloseEvent(QTimeEdit* self, QCloseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCloseEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_closeevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_HideEvent(QTimeEdit* self, QHideEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperHideEvent(QTimeEdit* self, QHideEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHideEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_hideevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_MouseReleaseEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperMouseReleaseEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseReleaseEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_mousereleaseevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_MouseMoveEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperMouseMoveEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseMoveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_mousemoveevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_TimerEvent(QTimeEdit* self, QTimerEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperTimerEvent(QTimeEdit* self, QTimerEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTimerEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_timerevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ShowEvent(QTimeEdit* self, QShowEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperShowEvent(QTimeEdit* self, QShowEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnShowEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_showevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
int QTimeEdit_DevType(const QTimeEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QTimeEdit_SuperDevType(const QTimeEdit* self) {
    return self->QTimeEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDevType(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_devtype_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_SetVisible(QTimeEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTimeEdit_SuperSetVisible(QTimeEdit* self, bool visible) {
    self->QTimeEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSetVisible(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_setvisible_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTimeEdit_HeightForWidth(const QTimeEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTimeEdit_SuperHeightForWidth(const QTimeEdit* self, int param1) {
    return self->QTimeEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHeightForWidth(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_heightforwidth_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTimeEdit_HasHeightForWidth(const QTimeEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTimeEdit_SuperHasHeightForWidth(const QTimeEdit* self) {
    return self->QTimeEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHasHeightForWidth(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_hasheightforwidth_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTimeEdit_PaintEngine(const QTimeEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTimeEdit_SuperPaintEngine(const QTimeEdit* self) {
    return self->QTimeEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnPaintEngine(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_paintengine_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_MouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperMouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseDoubleClickEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_EnterEvent(QTimeEdit* self, QEnterEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperEnterEvent(QTimeEdit* self, QEnterEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEnterEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_enterevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_LeaveEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperLeaveEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnLeaveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_leaveevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_MoveEvent(QTimeEdit* self, QMoveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperMoveEvent(QTimeEdit* self, QMoveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMoveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_moveevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_TabletEvent(QTimeEdit* self, QTabletEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperTabletEvent(QTimeEdit* self, QTabletEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTabletEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_tabletevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ActionEvent(QTimeEdit* self, QActionEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperActionEvent(QTimeEdit* self, QActionEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnActionEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_actionevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_DragEnterEvent(QTimeEdit* self, QDragEnterEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperDragEnterEvent(QTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragEnterEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_dragenterevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_DragMoveEvent(QTimeEdit* self, QDragMoveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperDragMoveEvent(QTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragMoveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_dragmoveevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_DragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperDragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragLeaveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_dragleaveevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_DropEvent(QTimeEdit* self, QDropEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperDropEvent(QTimeEdit* self, QDropEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDropEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_dropevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTimeEdit_NativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTimeEdit_SuperNativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->QTimeEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTimeEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnNativeEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_nativeevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTimeEdit_Metric(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTimeEdit_SuperMetric(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->QTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTimeEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMetric(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_metric_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_InitPainter(const QTimeEdit* self, QPainter* painter) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        vqtimeedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperInitPainter(const QTimeEdit* self, QPainter* painter) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->QTimeEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInitPainter(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_initpainter_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTimeEdit_Redirected(const QTimeEdit* self, QPoint* offset) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        return vqtimeedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTimeEdit_SuperRedirected(const QTimeEdit* self, QPoint* offset) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->QTimeEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnRedirected(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_redirected_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTimeEdit_SharedPainter(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit) {
        return vqtimeedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTimeEdit_SuperSharedPainter(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->QTimeEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTimeEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSharedPainter(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self)))
        vqtimeedit->qtimeedit_sharedpainter_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_InputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperInputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInputMethodEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_inputmethodevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTimeEdit_EventFilter(QTimeEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTimeEdit_SuperEventFilter(QTimeEdit* self, QObject* watched, QEvent* event) {
    return self->QTimeEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEventFilter(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_eventfilter_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ChildEvent(QTimeEdit* self, QChildEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperChildEvent(QTimeEdit* self, QChildEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnChildEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_childevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_CustomEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperCustomEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCustomEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_customevent_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_ConnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperConnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnConnectNotify(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_connectnotify_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTimeEdit_DisconnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit) {
        vqtimeedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTimeEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTimeEdit_SuperDisconnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->QTimeEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTimeEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDisconnectNotify(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self))
        vqtimeedit->qtimeedit_disconnectnotify_callback = reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* QTimeEdit_LineEdit(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->VirtualQTimeEdit::lineEdit();
    } else
        qFatal("Error: Protected method QTimeEdit::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QTimeEdit_SetLineEdit(QTimeEdit* self, QLineEdit* edit) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->VirtualQTimeEdit::setLineEdit(edit);
    } else
        qFatal("Error: Protected method QTimeEdit::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QTimeEdit_UpdateMicroFocus(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->VirtualQTimeEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTimeEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTimeEdit_Create(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->VirtualQTimeEdit::create();
    } else
        qFatal("Error: Protected method QTimeEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTimeEdit_Destroy(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->VirtualQTimeEdit::destroy();
    } else
        qFatal("Error: Protected method QTimeEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTimeEdit_FocusNextChild(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->VirtualQTimeEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QTimeEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTimeEdit_FocusPreviousChild(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->VirtualQTimeEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTimeEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTimeEdit_Sender(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->VirtualQTimeEdit::sender();
    } else
        qFatal("Error: Protected method QTimeEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTimeEdit_SenderSignalIndex(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->VirtualQTimeEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTimeEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTimeEdit_Receivers(const QTimeEdit* self, const char* signal) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->VirtualQTimeEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QTimeEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTimeEdit_IsSignalConnected(const QTimeEdit* self, const QMetaMethod* signal) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->VirtualQTimeEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTimeEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTimeEdit_GetDecodedMetricF(const QTimeEdit* self, int metricA, int metricB) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->VirtualQTimeEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTimeEdit::getDecodedMetricF called without a directly constructed type");
}

void QTimeEdit_Delete(QTimeEdit* self) {
    delete self;
}

QDateEdit* QDateEdit_new(QWidget* parent) {
    return new VirtualQDateEdit(parent);
}

QDateEdit* QDateEdit_new2() {
    return new VirtualQDateEdit();
}

QDateEdit* QDateEdit_new3(QDate* date) {
    return new VirtualQDateEdit(*date);
}

QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent) {
    return new VirtualQDateEdit(*date, parent);
}

QMetaObject* QDateEdit_MetaObject(const QDateEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDateEdit_Metacast(QDateEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDateEdit_Metacall(QDateEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDateEdit_Tr(const char* s) {
    auto _ret = QDateEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date) {
    self->userDateChanged(*date);
}

void QDateEdit_Connect_UserDateChanged(QDateEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateEdit*, QDate*) = reinterpret_cast<void (*)(QDateEdit*, QDate*)>(slot);
    QDateEdit::connect(self,
                       static_cast<void (QDateEdit::*)(QDate)>(&QDateEdit::userDateChanged),
                       [self, slotFunc](QDate date) {
                           QDate* sigval1 = new QDate(date);
                           slotFunc(self, sigval1);
                       });
}

libqt_string QDateEdit_Tr2(const char* s, const char* c) {
    auto _ret = QDateEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDateEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDateEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDateEdit_SuperMetaObject(const QDateEdit* self) {
    return (QMetaObject*)self->QDateEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMetaObject(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_metaobject_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDateEdit_SuperMetacast(QDateEdit* self, const char* param1) {
    return self->QDateEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMetacast(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_metacast_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDateEdit_SuperMetacall(QDateEdit* self, int param1, int param2, void** param3) {
    return self->QDateEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMetacall(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_metacall_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* QDateEdit_SizeHint(const QDateEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDateEdit_SuperSizeHint(const QDateEdit* self) {
    return new QSize(self->QDateEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSizeHint(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_sizehint_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_Clear(QDateEdit* self) {
    self->clear();
}

// Base class handler implementation
void QDateEdit_SuperClear(QDateEdit* self) {
    self->QDateEdit::clear();
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnClear(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_clear_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Clear_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_StepBy(QDateEdit* self, int steps) {
    self->stepBy(static_cast<int>(steps));
}

// Base class handler implementation
void QDateEdit_SuperStepBy(QDateEdit* self, int steps) {
    self->QDateEdit::stepBy(static_cast<int>(steps));
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnStepBy(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_stepby_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_StepBy_Callback>(slot);
}

// Derived class handler implementation
bool QDateEdit_Event(QDateEdit* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDateEdit_SuperEvent(QDateEdit* self, QEvent* event) {
    return self->QDateEdit::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_event_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_KeyPressEvent(QDateEdit* self, QKeyEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperKeyPressEvent(QDateEdit* self, QKeyEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnKeyPressEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_keypressevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_WheelEvent(QDateEdit* self, QWheelEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperWheelEvent(QDateEdit* self, QWheelEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnWheelEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_wheelevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_FocusInEvent(QDateEdit* self, QFocusEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperFocusInEvent(QDateEdit* self, QFocusEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusInEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_focusinevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDateEdit_FocusNextPrevChild(QDateEdit* self, bool next) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        return vqdateedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDateEdit_SuperFocusNextPrevChild(QDateEdit* self, bool next) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->QDateEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDateEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusNextPrevChild(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_focusnextprevchild_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
int QDateEdit_Validate(const QDateEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        qFatal("Error: Protected virtual method QDateEdit::validate called without a directly constructed type");
    }
}

// Base class handler implementation
int QDateEdit_SuperValidate(const QDateEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return static_cast<int>(vqdateedit->QDateEdit::validate(input_QString, static_cast<int&>(*pos)));
    } else
        qFatal("Error: Protected virtual method QDateEdit::validate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnValidate(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_validate_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Validate_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_Fixup(const QDateEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        vqdateedit->fixup(input_QString);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::fixup called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperFixup(const QDateEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->QDateEdit::fixup(input_QString);
    } else
        qFatal("Error: Protected virtual method QDateEdit::fixup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFixup(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_fixup_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Fixup_Callback>(slot);
}

// Derived class handler implementation
QDateTime* QDateEdit_DateTimeFromText(const QDateEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QDateTime((self->*&VirtualQDateEdit::Base::dateTimeFromText)(text_QString));
}

// Base class handler implementation
QDateTime* QDateEdit_SuperDateTimeFromText(const QDateEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        return new QDateTime(vqdateedit->dateTimeFromText(text_QString));
    qFatal("Error: Protected virtual method QDateEdit::dateTimeFromText called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDateTimeFromText(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_datetimefromtext_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DateTimeFromText_Callback>(slot);
}

// Derived class handler implementation
libqt_string QDateEdit_TextFromDateTime(const QDateEdit* self, const QDateTime* dt) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        auto _ret = vqdateedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        qFatal("Error: Protected virtual method QDateEdit::textFromDateTime called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_string QDateEdit_SuperTextFromDateTime(const QDateEdit* self, const QDateTime* dt) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        auto _ret = vqdateedit->QDateEdit::textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QDateEdit::textFromDateTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTextFromDateTime(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_textfromdatetime_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_TextFromDateTime_Callback>(slot);
}

// Derived class handler implementation
int QDateEdit_StepEnabled(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        return static_cast<int>(vqdateedit->stepEnabled());
    } else {
        qFatal("Error: Protected virtual method QDateEdit::stepEnabled called without a directly constructed type");
    }
}

// Base class handler implementation
int QDateEdit_SuperStepEnabled(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return static_cast<int>(vqdateedit->QDateEdit::stepEnabled());
    } else
        qFatal("Error: Protected virtual method QDateEdit::stepEnabled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnStepEnabled(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_stepenabled_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_StepEnabled_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_MousePressEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperMousePressEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMousePressEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_mousepressevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_PaintEvent(QDateEdit* self, QPaintEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperPaintEvent(QDateEdit* self, QPaintEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnPaintEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_paintevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_InitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        vqdateedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperInitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->QDateEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QDateEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInitStyleOption(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_initstyleoption_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QSize* QDateEdit_MinimumSizeHint(const QDateEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDateEdit_SuperMinimumSizeHint(const QDateEdit* self) {
    return new QSize(self->QDateEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMinimumSizeHint(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_minimumsizehint_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDateEdit_InputMethodQuery(const QDateEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDateEdit_SuperInputMethodQuery(const QDateEdit* self, int param1) {
    return new QVariant(self->QDateEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInputMethodQuery(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_inputmethodquery_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ResizeEvent(QDateEdit* self, QResizeEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperResizeEvent(QDateEdit* self, QResizeEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnResizeEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_resizeevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_KeyReleaseEvent(QDateEdit* self, QKeyEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperKeyReleaseEvent(QDateEdit* self, QKeyEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnKeyReleaseEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_keyreleaseevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_FocusOutEvent(QDateEdit* self, QFocusEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperFocusOutEvent(QDateEdit* self, QFocusEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusOutEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_focusoutevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ContextMenuEvent(QDateEdit* self, QContextMenuEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperContextMenuEvent(QDateEdit* self, QContextMenuEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnContextMenuEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_contextmenuevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ChangeEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperChangeEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnChangeEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_changeevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_CloseEvent(QDateEdit* self, QCloseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperCloseEvent(QDateEdit* self, QCloseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCloseEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_closeevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_HideEvent(QDateEdit* self, QHideEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperHideEvent(QDateEdit* self, QHideEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHideEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_hideevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_MouseReleaseEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperMouseReleaseEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseReleaseEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_mousereleaseevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_MouseMoveEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperMouseMoveEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseMoveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_mousemoveevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_TimerEvent(QDateEdit* self, QTimerEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperTimerEvent(QDateEdit* self, QTimerEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTimerEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_timerevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ShowEvent(QDateEdit* self, QShowEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperShowEvent(QDateEdit* self, QShowEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnShowEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_showevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
int QDateEdit_DevType(const QDateEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QDateEdit_SuperDevType(const QDateEdit* self) {
    return self->QDateEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDevType(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_devtype_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_SetVisible(QDateEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDateEdit_SuperSetVisible(QDateEdit* self, bool visible) {
    self->QDateEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSetVisible(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_setvisible_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QDateEdit_HeightForWidth(const QDateEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDateEdit_SuperHeightForWidth(const QDateEdit* self, int param1) {
    return self->QDateEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHeightForWidth(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_heightforwidth_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDateEdit_HasHeightForWidth(const QDateEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDateEdit_SuperHasHeightForWidth(const QDateEdit* self) {
    return self->QDateEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHasHeightForWidth(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_hasheightforwidth_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDateEdit_PaintEngine(const QDateEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDateEdit_SuperPaintEngine(const QDateEdit* self) {
    return self->QDateEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnPaintEngine(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_paintengine_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_MouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperMouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseDoubleClickEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_EnterEvent(QDateEdit* self, QEnterEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperEnterEvent(QDateEdit* self, QEnterEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEnterEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_enterevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_LeaveEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperLeaveEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnLeaveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_leaveevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_MoveEvent(QDateEdit* self, QMoveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperMoveEvent(QDateEdit* self, QMoveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMoveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_moveevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_TabletEvent(QDateEdit* self, QTabletEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperTabletEvent(QDateEdit* self, QTabletEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTabletEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_tabletevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ActionEvent(QDateEdit* self, QActionEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperActionEvent(QDateEdit* self, QActionEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnActionEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_actionevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_DragEnterEvent(QDateEdit* self, QDragEnterEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperDragEnterEvent(QDateEdit* self, QDragEnterEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragEnterEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_dragenterevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_DragMoveEvent(QDateEdit* self, QDragMoveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperDragMoveEvent(QDateEdit* self, QDragMoveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragMoveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_dragmoveevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_DragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperDragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragLeaveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_dragleaveevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_DropEvent(QDateEdit* self, QDropEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperDropEvent(QDateEdit* self, QDropEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDropEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_dropevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDateEdit_NativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDateEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDateEdit_SuperNativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->QDateEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDateEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnNativeEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_nativeevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDateEdit_Metric(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDateEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDateEdit_SuperMetric(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->QDateEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDateEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMetric(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_metric_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_InitPainter(const QDateEdit* self, QPainter* painter) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        vqdateedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperInitPainter(const QDateEdit* self, QPainter* painter) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->QDateEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDateEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInitPainter(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_initpainter_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDateEdit_Redirected(const QDateEdit* self, QPoint* offset) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        return vqdateedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDateEdit_SuperRedirected(const QDateEdit* self, QPoint* offset) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->QDateEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDateEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnRedirected(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_redirected_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDateEdit_SharedPainter(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit) {
        return vqdateedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDateEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDateEdit_SuperSharedPainter(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->QDateEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDateEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSharedPainter(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self)))
        vqdateedit->qdateedit_sharedpainter_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_InputMethodEvent(QDateEdit* self, QInputMethodEvent* param1) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperInputMethodEvent(QDateEdit* self, QInputMethodEvent* param1) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDateEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInputMethodEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_inputmethodevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDateEdit_EventFilter(QDateEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDateEdit_SuperEventFilter(QDateEdit* self, QObject* watched, QEvent* event) {
    return self->QDateEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEventFilter(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_eventfilter_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ChildEvent(QDateEdit* self, QChildEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperChildEvent(QDateEdit* self, QChildEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnChildEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_childevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_CustomEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperCustomEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCustomEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_customevent_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_ConnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperConnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDateEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnConnectNotify(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_connectnotify_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDateEdit_DisconnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit) {
        vqdateedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDateEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateEdit_SuperDisconnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->QDateEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDateEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDisconnectNotify(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self))
        vqdateedit->qdateedit_disconnectnotify_callback = reinterpret_cast<VirtualQDateEdit::QDateEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QLineEdit* QDateEdit_LineEdit(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->VirtualQDateEdit::lineEdit();
    } else
        qFatal("Error: Protected method QDateEdit::lineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateEdit_SetLineEdit(QDateEdit* self, QLineEdit* edit) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->VirtualQDateEdit::setLineEdit(edit);
    } else
        qFatal("Error: Protected method QDateEdit::setLineEdit called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateEdit_UpdateMicroFocus(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->VirtualQDateEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDateEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateEdit_Create(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->VirtualQDateEdit::create();
    } else
        qFatal("Error: Protected method QDateEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDateEdit_Destroy(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->VirtualQDateEdit::destroy();
    } else
        qFatal("Error: Protected method QDateEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateEdit_FocusNextChild(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->VirtualQDateEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QDateEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateEdit_FocusPreviousChild(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->VirtualQDateEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDateEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDateEdit_Sender(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->VirtualQDateEdit::sender();
    } else
        qFatal("Error: Protected method QDateEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDateEdit_SenderSignalIndex(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->VirtualQDateEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDateEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDateEdit_Receivers(const QDateEdit* self, const char* signal) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->VirtualQDateEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QDateEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateEdit_IsSignalConnected(const QDateEdit* self, const QMetaMethod* signal) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->VirtualQDateEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDateEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDateEdit_GetDecodedMetricF(const QDateEdit* self, int metricA, int metricB) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->VirtualQDateEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDateEdit::getDecodedMetricF called without a directly constructed type");
}

void QDateEdit_Delete(QDateEdit* self) {
    delete self;
}
