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
#include <QByteArray>
#include <cstring>
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
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDateTimeEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnMetacall(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Metacall_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateTimeEdit_QBaseMetacall(QDateTimeEdit* self, int param1, int param2, void** param3) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Metacall_IsBase(true);
        return vqdatetimeedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDateTimeEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDateTimeEdit_Tr(const char* s) {
    QString _ret = QDateTimeEdit::tr(s);
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
    QString _ret = self->sectionText(static_cast<QDateTimeEdit::Section>(section));
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
    QString _ret = self->displayFormat();
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
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQDateTimeEdit*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnSizeHint(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SizeHint_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QDateTimeEdit_QBaseSizeHint(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SizeHint_IsBase(true);
        return new QSize(vqdatetimeedit->sizeHint());
    } else {
        return new QSize(((VirtualQDateTimeEdit*)self)->sizeHint());
    }
}

void QDateTimeEdit_Clear(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        self->clear();
    } else {
        ((VirtualQDateTimeEdit*)self)->clear();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnClear(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Clear_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Clear_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseClear(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Clear_IsBase(true);
        vqdatetimeedit->clear();
    } else {
        ((VirtualQDateTimeEdit*)self)->clear();
    }
}

void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        self->stepBy(static_cast<int>(steps));
    } else {
        ((VirtualQDateTimeEdit*)self)->stepBy(static_cast<int>(steps));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnStepBy(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_StepBy_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepBy_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseStepBy(QDateTimeEdit* self, int steps) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_StepBy_IsBase(true);
        vqdatetimeedit->stepBy(static_cast<int>(steps));
    } else {
        ((VirtualQDateTimeEdit*)self)->stepBy(static_cast<int>(steps));
    }
}

bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return self->event(event);
    } else {
        return ((VirtualQDateTimeEdit*)self)->event(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Event_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QDateTimeEdit_QBaseEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Event_IsBase(true);
        return vqdatetimeedit->event(event);
    } else {
        return ((VirtualQDateTimeEdit*)self)->event(event);
    }
}

void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, const QDateTime* dateTime) {
    self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_Connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDateTime*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::dateTimeChanged, [self, slotFunc](const QDateTime& dateTime) {
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
    QDateTimeEdit::connect(self, &QDateTimeEdit::timeChanged, [self, slotFunc](QTime time) {
        QTime* sigval1 = new QTime(time);
        slotFunc(self, sigval1);
    });
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
    self->dateChanged(*date);
}

void QDateTimeEdit_Connect_DateChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDate*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::dateChanged, [self, slotFunc](QDate date) {
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
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->keyPressEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnKeyPressEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyPressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_KeyPressEvent_IsBase(true);
        vqdatetimeedit->keyPressEvent(event);
    }
}

void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->wheelEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnWheelEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_WheelEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_WheelEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseWheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_WheelEvent_IsBase(true);
        vqdatetimeedit->wheelEvent(event);
    }
}

void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->focusInEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnFocusInEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusInEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseFocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusInEvent_IsBase(true);
        vqdatetimeedit->focusInEvent(event);
    }
}

bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->focusNextPrevChild(next);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnFocusNextPrevChild(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QDateTimeEdit_QBaseFocusNextPrevChild(QDateTimeEdit* self, bool next) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextPrevChild_IsBase(true);
        return vqdatetimeedit->focusNextPrevChild(next);
    }
    return {};
}

int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnValidate(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Validate_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Validate_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateTimeEdit_QBaseValidate(const QDateTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Validate_IsBase(true);
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
    return {};
}

void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->fixup(input_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnFixup(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Fixup_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Fixup_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseFixup(const QDateTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Fixup_IsBase(true);
        vqdatetimeedit->fixup(input_QString);
    }
}

QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return new QDateTime(vqdatetimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnDateTimeFromText(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DateTimeFromText_Callback>(slot));
    }
}

// Virtual base class handler implementation
QDateTime* QDateTimeEdit_QBaseDateTimeFromText(const QDateTimeEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DateTimeFromText_IsBase(true);
        return new QDateTime(vqdatetimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        QString _ret = vqdatetimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnTextFromDateTime(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TextFromDateTime_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_string QDateTimeEdit_QBaseTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_TextFromDateTime_IsBase(true);
        QString _ret = vqdatetimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnStepEnabled(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_StepEnabled_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepEnabled_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateTimeEdit_QBaseStepEnabled(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_StepEnabled_IsBase(true);
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    }
    return {};
}

void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->mousePressEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnMousePressEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseMousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MousePressEvent_IsBase(true);
        vqdatetimeedit->mousePressEvent(event);
    }
}

void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->paintEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnPaintEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_PaintEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBasePaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_PaintEvent_IsBase(true);
        vqdatetimeedit->paintEvent(event);
    }
}

void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->initStyleOption(option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnInitStyleOption(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDateTimeEdit_QBaseInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
    auto* vqdatetimeedit = dynamic_cast<const VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InitStyleOption_IsBase(true);
        vqdatetimeedit->initStyleOption(option);
    }
}

libqt_string QDateTimeEdit_Tr2(const char* s, const char* c) {
    QString _ret = QDateTimeEdit::tr(s, c);
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
    QString _ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QDateTimeEdit_MinimumSizeHint(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return new QSize(vqdatetimeedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDateTimeEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDateTimeEdit_QBaseMinimumSizeHint(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqdatetimeedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDateTimeEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMinimumSizeHint(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDateTimeEdit_InputMethodQuery(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return new QVariant(vqdatetimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDateTimeEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDateTimeEdit_QBaseInputMethodQuery(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqdatetimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDateTimeEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInputMethodQuery(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ResizeEvent(QDateTimeEdit* self, QResizeEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->resizeEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseResizeEvent(QDateTimeEdit* self, QResizeEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ResizeEvent_IsBase(true);
        vqdatetimeedit->resizeEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnResizeEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_KeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->keyReleaseEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseKeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_KeyReleaseEvent_IsBase(true);
        vqdatetimeedit->keyReleaseEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnKeyReleaseEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_FocusOutEvent(QDateTimeEdit* self, QFocusEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->focusOutEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseFocusOutEvent(QDateTimeEdit* self, QFocusEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusOutEvent_IsBase(true);
        vqdatetimeedit->focusOutEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusOutEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->contextMenuEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ContextMenuEvent_IsBase(true);
        vqdatetimeedit->contextMenuEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnContextMenuEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ChangeEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->changeEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseChangeEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ChangeEvent_IsBase(true);
        vqdatetimeedit->changeEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnChangeEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_CloseEvent(QDateTimeEdit* self, QCloseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->closeEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseCloseEvent(QDateTimeEdit* self, QCloseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_CloseEvent_IsBase(true);
        vqdatetimeedit->closeEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCloseEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_CloseEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_HideEvent(QDateTimeEdit* self, QHideEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->hideEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseHideEvent(QDateTimeEdit* self, QHideEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_HideEvent_IsBase(true);
        vqdatetimeedit->hideEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHideEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_HideEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MouseReleaseEvent_IsBase(true);
        vqdatetimeedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseReleaseEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->mouseMoveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MouseMoveEvent_IsBase(true);
        vqdatetimeedit->mouseMoveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_TimerEvent(QDateTimeEdit* self, QTimerEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->timerEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseTimerEvent(QDateTimeEdit* self, QTimerEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_TimerEvent_IsBase(true);
        vqdatetimeedit->timerEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTimerEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_TimerEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ShowEvent(QDateTimeEdit* self, QShowEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->showEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseShowEvent(QDateTimeEdit* self, QShowEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ShowEvent_IsBase(true);
        vqdatetimeedit->showEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnShowEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ShowEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_DevType(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->devType();
    } else {
        return self->QDateTimeEdit::devType();
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseDevType(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DevType_IsBase(true);
        return vqdatetimeedit->devType();
    } else {
        return self->QDateTimeEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDevType(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DevType_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_SetVisible(QDateTimeEdit* self, bool visible) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setVisible(visible);
    } else {
        self->QDateTimeEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseSetVisible(QDateTimeEdit* self, bool visible) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SetVisible_IsBase(true);
        vqdatetimeedit->setVisible(visible);
    } else {
        self->QDateTimeEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSetVisible(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SetVisible_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_HeightForWidth(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDateTimeEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseHeightForWidth(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_HeightForWidth_IsBase(true);
        return vqdatetimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDateTimeEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHeightForWidth(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_HasHeightForWidth(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->hasHeightForWidth();
    } else {
        return self->QDateTimeEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseHasHeightForWidth(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_HasHeightForWidth_IsBase(true);
        return vqdatetimeedit->hasHeightForWidth();
    } else {
        return self->QDateTimeEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHasHeightForWidth(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDateTimeEdit_PaintEngine(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->paintEngine();
    } else {
        return self->QDateTimeEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDateTimeEdit_QBasePaintEngine(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_PaintEngine_IsBase(true);
        return vqdatetimeedit->paintEngine();
    } else {
        return self->QDateTimeEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnPaintEngine(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_PaintEngine_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MouseDoubleClickEvent_IsBase(true);
        vqdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseDoubleClickEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_EnterEvent(QDateTimeEdit* self, QEnterEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->enterEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseEnterEvent(QDateTimeEdit* self, QEnterEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_EnterEvent_IsBase(true);
        vqdatetimeedit->enterEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEnterEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_EnterEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_LeaveEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->leaveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseLeaveEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_LeaveEvent_IsBase(true);
        vqdatetimeedit->leaveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnLeaveEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MoveEvent(QDateTimeEdit* self, QMoveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->moveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMoveEvent(QDateTimeEdit* self, QMoveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MoveEvent_IsBase(true);
        vqdatetimeedit->moveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_MoveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_TabletEvent(QDateTimeEdit* self, QTabletEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->tabletEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseTabletEvent(QDateTimeEdit* self, QTabletEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_TabletEvent_IsBase(true);
        vqdatetimeedit->tabletEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTabletEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_TabletEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ActionEvent(QDateTimeEdit* self, QActionEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->actionEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseActionEvent(QDateTimeEdit* self, QActionEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ActionEvent_IsBase(true);
        vqdatetimeedit->actionEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnActionEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ActionEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->dragEnterEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DragEnterEvent_IsBase(true);
        vqdatetimeedit->dragEnterEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragEnterEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->dragMoveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DragMoveEvent_IsBase(true);
        vqdatetimeedit->dragMoveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->dragLeaveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DragLeaveEvent_IsBase(true);
        vqdatetimeedit->dragLeaveEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragLeaveEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DropEvent(QDateTimeEdit* self, QDropEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->dropEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDropEvent(QDateTimeEdit* self, QDropEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DropEvent_IsBase(true);
        vqdatetimeedit->dropEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDropEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DropEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_NativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDateTimeEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseNativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_NativeEvent_IsBase(true);
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDateTimeEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnNativeEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_NativeEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_Metric(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDateTimeEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseMetric(const QDateTimeEdit* self, int param1) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Metric_IsBase(true);
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDateTimeEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMetric(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Metric_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_InitPainter(const QDateTimeEdit* self, QPainter* painter) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->initPainter(painter);
    } else {
        ((VirtualQDateTimeEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseInitPainter(const QDateTimeEdit* self, QPainter* painter) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InitPainter_IsBase(true);
        vqdatetimeedit->initPainter(painter);
    } else {
        ((VirtualQDateTimeEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInitPainter(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InitPainter_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDateTimeEdit_Redirected(const QDateTimeEdit* self, QPoint* offset) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->redirected(offset);
    } else {
        return ((VirtualQDateTimeEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDateTimeEdit_QBaseRedirected(const QDateTimeEdit* self, QPoint* offset) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Redirected_IsBase(true);
        return vqdatetimeedit->redirected(offset);
    } else {
        return ((VirtualQDateTimeEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnRedirected(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Redirected_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDateTimeEdit_SharedPainter(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->sharedPainter();
    } else {
        return ((VirtualQDateTimeEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDateTimeEdit_QBaseSharedPainter(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SharedPainter_IsBase(true);
        return vqdatetimeedit->sharedPainter();
    } else {
        return ((VirtualQDateTimeEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSharedPainter(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SharedPainter_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_InputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->inputMethodEvent(param1);
    } else {
        ((VirtualQDateTimeEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseInputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodEvent_IsBase(true);
        vqdatetimeedit->inputMethodEvent(param1);
    } else {
        ((VirtualQDateTimeEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInputMethodEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_EventFilter(QDateTimeEdit* self, QObject* watched, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->eventFilter(watched, event);
    } else {
        return self->QDateTimeEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseEventFilter(QDateTimeEdit* self, QObject* watched, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_EventFilter_IsBase(true);
        return vqdatetimeedit->eventFilter(watched, event);
    } else {
        return self->QDateTimeEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEventFilter(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_EventFilter_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ChildEvent(QDateTimeEdit* self, QChildEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->childEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseChildEvent(QDateTimeEdit* self, QChildEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ChildEvent_IsBase(true);
        vqdatetimeedit->childEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnChildEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ChildEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_CustomEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->customEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseCustomEvent(QDateTimeEdit* self, QEvent* event) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_CustomEvent_IsBase(true);
        vqdatetimeedit->customEvent(event);
    } else {
        ((VirtualQDateTimeEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCustomEvent(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_CustomEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->connectNotify(*signal);
    } else {
        ((VirtualQDateTimeEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ConnectNotify_IsBase(true);
        vqdatetimeedit->connectNotify(*signal);
    } else {
        ((VirtualQDateTimeEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnConnectNotify(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->disconnectNotify(*signal);
    } else {
        ((VirtualQDateTimeEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DisconnectNotify_IsBase(true);
        vqdatetimeedit->disconnectNotify(*signal);
    } else {
        ((VirtualQDateTimeEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDisconnectNotify(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QDateTimeEdit_LineEdit(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->lineEdit();
    } else {
        return ((VirtualQDateTimeEdit*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QDateTimeEdit_QBaseLineEdit(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_LineEdit_IsBase(true);
        return vqdatetimeedit->lineEdit();
    } else {
        return ((VirtualQDateTimeEdit*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnLineEdit(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_LineEdit_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_SetLineEdit(QDateTimeEdit* self, QLineEdit* edit) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setLineEdit(edit);
    } else {
        ((VirtualQDateTimeEdit*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseSetLineEdit(QDateTimeEdit* self, QLineEdit* edit) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SetLineEdit_IsBase(true);
        vqdatetimeedit->setLineEdit(edit);
    } else {
        ((VirtualQDateTimeEdit*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSetLineEdit(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SetLineEdit_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_UpdateMicroFocus(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->updateMicroFocus();
    } else {
        ((VirtualQDateTimeEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseUpdateMicroFocus(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_UpdateMicroFocus_IsBase(true);
        vqdatetimeedit->updateMicroFocus();
    } else {
        ((VirtualQDateTimeEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnUpdateMicroFocus(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_Create(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->create();
    } else {
        ((VirtualQDateTimeEdit*)self)->create();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseCreate(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Create_IsBase(true);
        vqdatetimeedit->create();
    } else {
        ((VirtualQDateTimeEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCreate(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Create_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_Destroy(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->destroy();
    } else {
        ((VirtualQDateTimeEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDestroy(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Destroy_IsBase(true);
        vqdatetimeedit->destroy();
    } else {
        ((VirtualQDateTimeEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDestroy(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Destroy_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_FocusNextChild(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->focusNextChild();
    } else {
        return ((VirtualQDateTimeEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseFocusNextChild(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextChild_IsBase(true);
        return vqdatetimeedit->focusNextChild();
    } else {
        return ((VirtualQDateTimeEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusNextChild(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_FocusPreviousChild(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->focusPreviousChild();
    } else {
        return ((VirtualQDateTimeEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseFocusPreviousChild(QDateTimeEdit* self) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusPreviousChild_IsBase(true);
        return vqdatetimeedit->focusPreviousChild();
    } else {
        return ((VirtualQDateTimeEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusPreviousChild(QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self);
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDateTimeEdit_Sender(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->sender();
    } else {
        return ((VirtualQDateTimeEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDateTimeEdit_QBaseSender(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Sender_IsBase(true);
        return vqdatetimeedit->sender();
    } else {
        return ((VirtualQDateTimeEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSender(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Sender_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_SenderSignalIndex(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->senderSignalIndex();
    } else {
        return ((VirtualQDateTimeEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseSenderSignalIndex(const QDateTimeEdit* self) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SenderSignalIndex_IsBase(true);
        return vqdatetimeedit->senderSignalIndex();
    } else {
        return ((VirtualQDateTimeEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSenderSignalIndex(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_Receivers(const QDateTimeEdit* self, const char* signal) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->receivers(signal);
    } else {
        return ((VirtualQDateTimeEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseReceivers(const QDateTimeEdit* self, const char* signal) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Receivers_IsBase(true);
        return vqdatetimeedit->receivers(signal);
    } else {
        return ((VirtualQDateTimeEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnReceivers(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_Receivers_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_IsSignalConnected(const QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQDateTimeEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseIsSignalConnected(const QDateTimeEdit* self, const QMetaMethod* signal) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_IsSignalConnected_IsBase(true);
        return vqdatetimeedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQDateTimeEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnIsSignalConnected(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDateTimeEdit_GetDecodedMetricF(const QDateTimeEdit* self, int metricA, int metricB) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        return vqdatetimeedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDateTimeEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDateTimeEdit_QBaseGetDecodedMetricF(const QDateTimeEdit* self, int metricA, int metricB) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_GetDecodedMetricF_IsBase(true);
        return vqdatetimeedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDateTimeEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnGetDecodedMetricF(const QDateTimeEdit* self, intptr_t slot) {
    auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self));
    if (vqdatetimeedit && vqdatetimeedit->isVirtualQDateTimeEdit) {
        vqdatetimeedit->setQDateTimeEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_GetDecodedMetricF_Callback>(slot));
    }
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
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTimeEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTimeEdit_OnMetacall(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Metacall_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTimeEdit_QBaseMetacall(QTimeEdit* self, int param1, int param2, void** param3) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Metacall_IsBase(true);
        return vqtimeedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTimeEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTimeEdit_Tr(const char* s) {
    QString _ret = QTimeEdit::tr(s);
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
    QTimeEdit::connect(self, &QTimeEdit::userTimeChanged, [self, slotFunc](QTime time) {
        QTime* sigval1 = new QTime(time);
        slotFunc(self, sigval1);
    });
}

libqt_string QTimeEdit_Tr2(const char* s, const char* c) {
    QString _ret = QTimeEdit::tr(s, c);
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
    QString _ret = QTimeEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QTimeEdit_SizeHint(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return new QSize(vqtimeedit->sizeHint());
    } else {
        return new QSize(((VirtualQTimeEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QTimeEdit_QBaseSizeHint(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SizeHint_IsBase(true);
        return new QSize(vqtimeedit->sizeHint());
    } else {
        return new QSize(((VirtualQTimeEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSizeHint(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SizeHint_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Clear(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->clear();
    } else {
        self->QTimeEdit::clear();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseClear(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Clear_IsBase(true);
        vqtimeedit->clear();
    } else {
        self->QTimeEdit::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnClear(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Clear_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_StepBy(QTimeEdit* self, int steps) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->stepBy(static_cast<int>(steps));
    } else {
        self->QTimeEdit::stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QTimeEdit_QBaseStepBy(QTimeEdit* self, int steps) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_StepBy_IsBase(true);
        vqtimeedit->stepBy(static_cast<int>(steps));
    } else {
        self->QTimeEdit::stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnStepBy(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_StepBy_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_Event(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->event(event);
    } else {
        return self->QTimeEdit::event(event);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Event_IsBase(true);
        return vqtimeedit->event(event);
    } else {
        return self->QTimeEdit::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Event_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_KeyPressEvent(QTimeEdit* self, QKeyEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->keyPressEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseKeyPressEvent(QTimeEdit* self, QKeyEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_KeyPressEvent_IsBase(true);
        vqtimeedit->keyPressEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnKeyPressEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_WheelEvent(QTimeEdit* self, QWheelEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->wheelEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseWheelEvent(QTimeEdit* self, QWheelEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_WheelEvent_IsBase(true);
        vqtimeedit->wheelEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnWheelEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_WheelEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_FocusInEvent(QTimeEdit* self, QFocusEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->focusInEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseFocusInEvent(QTimeEdit* self, QFocusEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusInEvent_IsBase(true);
        vqtimeedit->focusInEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusInEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_FocusNextPrevChild(QTimeEdit* self, bool next) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQTimeEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseFocusNextPrevChild(QTimeEdit* self, bool next) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusNextPrevChild_IsBase(true);
        return vqtimeedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQTimeEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusNextPrevChild(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_Validate(const QTimeEdit* self, libqt_string input, int* pos) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualQTimeEdit*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QTimeEdit_QBaseValidate(const QTimeEdit* self, libqt_string input, int* pos) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Validate_IsBase(true);
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualQTimeEdit*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnValidate(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Validate_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Fixup(const QTimeEdit* self, libqt_string input) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->fixup(input_QString);
    } else {
        ((VirtualQTimeEdit*)self)->fixup(input_QString);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseFixup(const QTimeEdit* self, libqt_string input) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Fixup_IsBase(true);
        vqtimeedit->fixup(input_QString);
    } else {
        ((VirtualQTimeEdit*)self)->fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFixup(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Fixup_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QDateTime* QTimeEdit_DateTimeFromText(const QTimeEdit* self, const libqt_string text) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return new QDateTime(vqtimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Base class handler implementation
QDateTime* QTimeEdit_QBaseDateTimeFromText(const QTimeEdit* self, const libqt_string text) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DateTimeFromText_IsBase(true);
        return new QDateTime(vqtimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDateTimeFromText(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DateTimeFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTimeEdit_TextFromDateTime(const QTimeEdit* self, const QDateTime* dt) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        QString _ret = vqtimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQTimeEdit*)self)->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTimeEdit_QBaseTextFromDateTime(const QTimeEdit* self, const QDateTime* dt) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_TextFromDateTime_IsBase(true);
        QString _ret = vqtimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQTimeEdit*)self)->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTextFromDateTime(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TextFromDateTime_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_StepEnabled(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return static_cast<int>(vqtimeedit->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQTimeEdit*)self)->stepEnabled());
    }
}

// Base class handler implementation
int QTimeEdit_QBaseStepEnabled(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_StepEnabled_IsBase(true);
        return static_cast<int>(vqtimeedit->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQTimeEdit*)self)->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnStepEnabled(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_StepEnabled_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MousePressEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->mousePressEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMousePressEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MousePressEvent_IsBase(true);
        vqtimeedit->mousePressEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMousePressEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_PaintEvent(QTimeEdit* self, QPaintEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->paintEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBasePaintEvent(QTimeEdit* self, QPaintEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_PaintEvent_IsBase(true);
        vqtimeedit->paintEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnPaintEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_PaintEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_InitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->initStyleOption(option);
    } else {
        ((VirtualQTimeEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseInitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InitStyleOption_IsBase(true);
        vqtimeedit->initStyleOption(option);
    } else {
        ((VirtualQTimeEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInitStyleOption(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTimeEdit_MinimumSizeHint(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return new QSize(vqtimeedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTimeEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTimeEdit_QBaseMinimumSizeHint(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqtimeedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTimeEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMinimumSizeHint(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTimeEdit_InputMethodQuery(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return new QVariant(vqtimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTimeEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QTimeEdit_QBaseInputMethodQuery(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqtimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTimeEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInputMethodQuery(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ResizeEvent(QTimeEdit* self, QResizeEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->resizeEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseResizeEvent(QTimeEdit* self, QResizeEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ResizeEvent_IsBase(true);
        vqtimeedit->resizeEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnResizeEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_KeyReleaseEvent(QTimeEdit* self, QKeyEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->keyReleaseEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseKeyReleaseEvent(QTimeEdit* self, QKeyEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_KeyReleaseEvent_IsBase(true);
        vqtimeedit->keyReleaseEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnKeyReleaseEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_FocusOutEvent(QTimeEdit* self, QFocusEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->focusOutEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseFocusOutEvent(QTimeEdit* self, QFocusEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusOutEvent_IsBase(true);
        vqtimeedit->focusOutEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusOutEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->contextMenuEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ContextMenuEvent_IsBase(true);
        vqtimeedit->contextMenuEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnContextMenuEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ChangeEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->changeEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseChangeEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ChangeEvent_IsBase(true);
        vqtimeedit->changeEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnChangeEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_CloseEvent(QTimeEdit* self, QCloseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->closeEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseCloseEvent(QTimeEdit* self, QCloseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_CloseEvent_IsBase(true);
        vqtimeedit->closeEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCloseEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_CloseEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_HideEvent(QTimeEdit* self, QHideEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->hideEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseHideEvent(QTimeEdit* self, QHideEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_HideEvent_IsBase(true);
        vqtimeedit->hideEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHideEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_HideEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MouseReleaseEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMouseReleaseEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MouseReleaseEvent_IsBase(true);
        vqtimeedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseReleaseEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MouseMoveEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->mouseMoveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMouseMoveEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MouseMoveEvent_IsBase(true);
        vqtimeedit->mouseMoveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseMoveEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_TimerEvent(QTimeEdit* self, QTimerEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->timerEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseTimerEvent(QTimeEdit* self, QTimerEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_TimerEvent_IsBase(true);
        vqtimeedit->timerEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTimerEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_TimerEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ShowEvent(QTimeEdit* self, QShowEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->showEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseShowEvent(QTimeEdit* self, QShowEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ShowEvent_IsBase(true);
        vqtimeedit->showEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnShowEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ShowEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_DevType(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->devType();
    } else {
        return self->QTimeEdit::devType();
    }
}

// Base class handler implementation
int QTimeEdit_QBaseDevType(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DevType_IsBase(true);
        return vqtimeedit->devType();
    } else {
        return self->QTimeEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDevType(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DevType_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_SetVisible(QTimeEdit* self, bool visible) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setVisible(visible);
    } else {
        self->QTimeEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseSetVisible(QTimeEdit* self, bool visible) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SetVisible_IsBase(true);
        vqtimeedit->setVisible(visible);
    } else {
        self->QTimeEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSetVisible(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SetVisible_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_HeightForWidth(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTimeEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTimeEdit_QBaseHeightForWidth(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_HeightForWidth_IsBase(true);
        return vqtimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTimeEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHeightForWidth(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_HasHeightForWidth(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->hasHeightForWidth();
    } else {
        return self->QTimeEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseHasHeightForWidth(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_HasHeightForWidth_IsBase(true);
        return vqtimeedit->hasHeightForWidth();
    } else {
        return self->QTimeEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHasHeightForWidth(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTimeEdit_PaintEngine(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->paintEngine();
    } else {
        return self->QTimeEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTimeEdit_QBasePaintEngine(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_PaintEngine_IsBase(true);
        return vqtimeedit->paintEngine();
    } else {
        return self->QTimeEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnPaintEngine(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_PaintEngine_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MouseDoubleClickEvent_IsBase(true);
        vqtimeedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseDoubleClickEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_EnterEvent(QTimeEdit* self, QEnterEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->enterEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseEnterEvent(QTimeEdit* self, QEnterEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_EnterEvent_IsBase(true);
        vqtimeedit->enterEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEnterEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_EnterEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_LeaveEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->leaveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseLeaveEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_LeaveEvent_IsBase(true);
        vqtimeedit->leaveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnLeaveEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MoveEvent(QTimeEdit* self, QMoveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->moveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMoveEvent(QTimeEdit* self, QMoveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MoveEvent_IsBase(true);
        vqtimeedit->moveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMoveEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_MoveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_TabletEvent(QTimeEdit* self, QTabletEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->tabletEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseTabletEvent(QTimeEdit* self, QTabletEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_TabletEvent_IsBase(true);
        vqtimeedit->tabletEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTabletEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_TabletEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ActionEvent(QTimeEdit* self, QActionEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->actionEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseActionEvent(QTimeEdit* self, QActionEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ActionEvent_IsBase(true);
        vqtimeedit->actionEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnActionEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ActionEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DragEnterEvent(QTimeEdit* self, QDragEnterEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->dragEnterEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDragEnterEvent(QTimeEdit* self, QDragEnterEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DragEnterEvent_IsBase(true);
        vqtimeedit->dragEnterEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragEnterEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DragMoveEvent(QTimeEdit* self, QDragMoveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->dragMoveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDragMoveEvent(QTimeEdit* self, QDragMoveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DragMoveEvent_IsBase(true);
        vqtimeedit->dragMoveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragMoveEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->dragLeaveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DragLeaveEvent_IsBase(true);
        vqtimeedit->dragLeaveEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragLeaveEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DropEvent(QTimeEdit* self, QDropEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->dropEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDropEvent(QTimeEdit* self, QDropEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DropEvent_IsBase(true);
        vqtimeedit->dropEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDropEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DropEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_NativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTimeEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseNativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_NativeEvent_IsBase(true);
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTimeEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnNativeEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_NativeEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_Metric(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTimeEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTimeEdit_QBaseMetric(const QTimeEdit* self, int param1) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Metric_IsBase(true);
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTimeEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMetric(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Metric_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_InitPainter(const QTimeEdit* self, QPainter* painter) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->initPainter(painter);
    } else {
        ((VirtualQTimeEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseInitPainter(const QTimeEdit* self, QPainter* painter) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InitPainter_IsBase(true);
        vqtimeedit->initPainter(painter);
    } else {
        ((VirtualQTimeEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInitPainter(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InitPainter_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTimeEdit_Redirected(const QTimeEdit* self, QPoint* offset) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->redirected(offset);
    } else {
        return ((VirtualQTimeEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTimeEdit_QBaseRedirected(const QTimeEdit* self, QPoint* offset) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Redirected_IsBase(true);
        return vqtimeedit->redirected(offset);
    } else {
        return ((VirtualQTimeEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnRedirected(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Redirected_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTimeEdit_SharedPainter(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->sharedPainter();
    } else {
        return ((VirtualQTimeEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTimeEdit_QBaseSharedPainter(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SharedPainter_IsBase(true);
        return vqtimeedit->sharedPainter();
    } else {
        return ((VirtualQTimeEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSharedPainter(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SharedPainter_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_InputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->inputMethodEvent(param1);
    } else {
        ((VirtualQTimeEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseInputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InputMethodEvent_IsBase(true);
        vqtimeedit->inputMethodEvent(param1);
    } else {
        ((VirtualQTimeEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInputMethodEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_EventFilter(QTimeEdit* self, QObject* watched, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->eventFilter(watched, event);
    } else {
        return self->QTimeEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseEventFilter(QTimeEdit* self, QObject* watched, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_EventFilter_IsBase(true);
        return vqtimeedit->eventFilter(watched, event);
    } else {
        return self->QTimeEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEventFilter(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_EventFilter_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ChildEvent(QTimeEdit* self, QChildEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->childEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseChildEvent(QTimeEdit* self, QChildEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ChildEvent_IsBase(true);
        vqtimeedit->childEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnChildEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ChildEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_CustomEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->customEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseCustomEvent(QTimeEdit* self, QEvent* event) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_CustomEvent_IsBase(true);
        vqtimeedit->customEvent(event);
    } else {
        ((VirtualQTimeEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCustomEvent(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_CustomEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ConnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->connectNotify(*signal);
    } else {
        ((VirtualQTimeEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseConnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ConnectNotify_IsBase(true);
        vqtimeedit->connectNotify(*signal);
    } else {
        ((VirtualQTimeEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnConnectNotify(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DisconnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->disconnectNotify(*signal);
    } else {
        ((VirtualQTimeEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDisconnectNotify(QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DisconnectNotify_IsBase(true);
        vqtimeedit->disconnectNotify(*signal);
    } else {
        ((VirtualQTimeEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDisconnectNotify(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QTimeEdit_LineEdit(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->lineEdit();
    } else {
        return ((VirtualQTimeEdit*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QTimeEdit_QBaseLineEdit(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_LineEdit_IsBase(true);
        return vqtimeedit->lineEdit();
    } else {
        return ((VirtualQTimeEdit*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnLineEdit(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_LineEdit_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_SetLineEdit(QTimeEdit* self, QLineEdit* edit) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setLineEdit(edit);
    } else {
        ((VirtualQTimeEdit*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseSetLineEdit(QTimeEdit* self, QLineEdit* edit) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SetLineEdit_IsBase(true);
        vqtimeedit->setLineEdit(edit);
    } else {
        ((VirtualQTimeEdit*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSetLineEdit(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SetLineEdit_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_UpdateMicroFocus(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->updateMicroFocus();
    } else {
        ((VirtualQTimeEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseUpdateMicroFocus(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_UpdateMicroFocus_IsBase(true);
        vqtimeedit->updateMicroFocus();
    } else {
        ((VirtualQTimeEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnUpdateMicroFocus(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Create(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->create();
    } else {
        ((VirtualQTimeEdit*)self)->create();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseCreate(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Create_IsBase(true);
        vqtimeedit->create();
    } else {
        ((VirtualQTimeEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCreate(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Create_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Destroy(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->destroy();
    } else {
        ((VirtualQTimeEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDestroy(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Destroy_IsBase(true);
        vqtimeedit->destroy();
    } else {
        ((VirtualQTimeEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDestroy(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Destroy_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_FocusNextChild(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->focusNextChild();
    } else {
        return ((VirtualQTimeEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseFocusNextChild(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusNextChild_IsBase(true);
        return vqtimeedit->focusNextChild();
    } else {
        return ((VirtualQTimeEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusNextChild(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_FocusPreviousChild(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->focusPreviousChild();
    } else {
        return ((VirtualQTimeEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseFocusPreviousChild(QTimeEdit* self) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusPreviousChild_IsBase(true);
        return vqtimeedit->focusPreviousChild();
    } else {
        return ((VirtualQTimeEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusPreviousChild(QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self);
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTimeEdit_Sender(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->sender();
    } else {
        return ((VirtualQTimeEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTimeEdit_QBaseSender(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Sender_IsBase(true);
        return vqtimeedit->sender();
    } else {
        return ((VirtualQTimeEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSender(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Sender_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_SenderSignalIndex(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->senderSignalIndex();
    } else {
        return ((VirtualQTimeEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTimeEdit_QBaseSenderSignalIndex(const QTimeEdit* self) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SenderSignalIndex_IsBase(true);
        return vqtimeedit->senderSignalIndex();
    } else {
        return ((VirtualQTimeEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSenderSignalIndex(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_Receivers(const QTimeEdit* self, const char* signal) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->receivers(signal);
    } else {
        return ((VirtualQTimeEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTimeEdit_QBaseReceivers(const QTimeEdit* self, const char* signal) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Receivers_IsBase(true);
        return vqtimeedit->receivers(signal);
    } else {
        return ((VirtualQTimeEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnReceivers(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_Receivers_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_IsSignalConnected(const QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQTimeEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseIsSignalConnected(const QTimeEdit* self, const QMetaMethod* signal) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_IsSignalConnected_IsBase(true);
        return vqtimeedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQTimeEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnIsSignalConnected(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QTimeEdit_GetDecodedMetricF(const QTimeEdit* self, int metricA, int metricB) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        return vqtimeedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTimeEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QTimeEdit_QBaseGetDecodedMetricF(const QTimeEdit* self, int metricA, int metricB) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_GetDecodedMetricF_IsBase(true);
        return vqtimeedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTimeEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnGetDecodedMetricF(const QTimeEdit* self, intptr_t slot) {
    auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self));
    if (vqtimeedit && vqtimeedit->isVirtualQTimeEdit) {
        vqtimeedit->setQTimeEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_GetDecodedMetricF_Callback>(slot));
    }
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
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDateEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateEdit_OnMetacall(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Metacall_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateEdit_QBaseMetacall(QDateEdit* self, int param1, int param2, void** param3) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Metacall_IsBase(true);
        return vqdateedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDateEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDateEdit_Tr(const char* s) {
    QString _ret = QDateEdit::tr(s);
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
    QDateEdit::connect(self, &QDateEdit::userDateChanged, [self, slotFunc](QDate date) {
        QDate* sigval1 = new QDate(date);
        slotFunc(self, sigval1);
    });
}

libqt_string QDateEdit_Tr2(const char* s, const char* c) {
    QString _ret = QDateEdit::tr(s, c);
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
    QString _ret = QDateEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QDateEdit_SizeHint(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return new QSize(vqdateedit->sizeHint());
    } else {
        return new QSize(((VirtualQDateEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDateEdit_QBaseSizeHint(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SizeHint_IsBase(true);
        return new QSize(vqdateedit->sizeHint());
    } else {
        return new QSize(((VirtualQDateEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSizeHint(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SizeHint_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Clear(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->clear();
    } else {
        self->QDateEdit::clear();
    }
}

// Base class handler implementation
void QDateEdit_QBaseClear(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Clear_IsBase(true);
        vqdateedit->clear();
    } else {
        self->QDateEdit::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnClear(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Clear_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_StepBy(QDateEdit* self, int steps) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->stepBy(static_cast<int>(steps));
    } else {
        self->QDateEdit::stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QDateEdit_QBaseStepBy(QDateEdit* self, int steps) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_StepBy_IsBase(true);
        vqdateedit->stepBy(static_cast<int>(steps));
    } else {
        self->QDateEdit::stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnStepBy(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_StepBy_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_Event(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->event(event);
    } else {
        return self->QDateEdit::event(event);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Event_IsBase(true);
        return vqdateedit->event(event);
    } else {
        return self->QDateEdit::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Event_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_KeyPressEvent(QDateEdit* self, QKeyEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->keyPressEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseKeyPressEvent(QDateEdit* self, QKeyEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_KeyPressEvent_IsBase(true);
        vqdateedit->keyPressEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnKeyPressEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_WheelEvent(QDateEdit* self, QWheelEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->wheelEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseWheelEvent(QDateEdit* self, QWheelEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_WheelEvent_IsBase(true);
        vqdateedit->wheelEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnWheelEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_WheelEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_FocusInEvent(QDateEdit* self, QFocusEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->focusInEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseFocusInEvent(QDateEdit* self, QFocusEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusInEvent_IsBase(true);
        vqdateedit->focusInEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusInEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_FocusNextPrevChild(QDateEdit* self, bool next) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQDateEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseFocusNextPrevChild(QDateEdit* self, bool next) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusNextPrevChild_IsBase(true);
        return vqdateedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQDateEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusNextPrevChild(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_Validate(const QDateEdit* self, libqt_string input, int* pos) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualQDateEdit*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QDateEdit_QBaseValidate(const QDateEdit* self, libqt_string input, int* pos) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Validate_IsBase(true);
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(((VirtualQDateEdit*)self)->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnValidate(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Validate_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Fixup(const QDateEdit* self, libqt_string input) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->fixup(input_QString);
    } else {
        ((VirtualQDateEdit*)self)->fixup(input_QString);
    }
}

// Base class handler implementation
void QDateEdit_QBaseFixup(const QDateEdit* self, libqt_string input) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Fixup_IsBase(true);
        vqdateedit->fixup(input_QString);
    } else {
        ((VirtualQDateEdit*)self)->fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFixup(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Fixup_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QDateTime* QDateEdit_DateTimeFromText(const QDateEdit* self, const libqt_string text) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return new QDateTime(vqdateedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Base class handler implementation
QDateTime* QDateEdit_QBaseDateTimeFromText(const QDateEdit* self, const libqt_string text) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DateTimeFromText_IsBase(true);
        return new QDateTime(vqdateedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDateTimeFromText(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DateTimeFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QDateEdit_TextFromDateTime(const QDateEdit* self, const QDateTime* dt) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        QString _ret = vqdateedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDateEdit*)self)->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QDateEdit_QBaseTextFromDateTime(const QDateEdit* self, const QDateTime* dt) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_TextFromDateTime_IsBase(true);
        QString _ret = vqdateedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDateEdit*)self)->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTextFromDateTime(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_TextFromDateTime_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_StepEnabled(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return static_cast<int>(vqdateedit->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQDateEdit*)self)->stepEnabled());
    }
}

// Base class handler implementation
int QDateEdit_QBaseStepEnabled(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_StepEnabled_IsBase(true);
        return static_cast<int>(vqdateedit->stepEnabled());
    } else {
        return static_cast<int>(((VirtualQDateEdit*)self)->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnStepEnabled(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_StepEnabled_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MousePressEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->mousePressEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMousePressEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MousePressEvent_IsBase(true);
        vqdateedit->mousePressEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMousePressEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_PaintEvent(QDateEdit* self, QPaintEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->paintEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBasePaintEvent(QDateEdit* self, QPaintEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_PaintEvent_IsBase(true);
        vqdateedit->paintEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnPaintEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_PaintEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_InitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->initStyleOption(option);
    } else {
        ((VirtualQDateEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QDateEdit_QBaseInitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InitStyleOption_IsBase(true);
        vqdateedit->initStyleOption(option);
    } else {
        ((VirtualQDateEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInitStyleOption(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDateEdit_MinimumSizeHint(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return new QSize(vqdateedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDateEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDateEdit_QBaseMinimumSizeHint(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqdateedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDateEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMinimumSizeHint(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDateEdit_InputMethodQuery(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return new QVariant(vqdateedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDateEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDateEdit_QBaseInputMethodQuery(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqdateedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDateEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInputMethodQuery(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ResizeEvent(QDateEdit* self, QResizeEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->resizeEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseResizeEvent(QDateEdit* self, QResizeEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ResizeEvent_IsBase(true);
        vqdateedit->resizeEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnResizeEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_KeyReleaseEvent(QDateEdit* self, QKeyEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->keyReleaseEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseKeyReleaseEvent(QDateEdit* self, QKeyEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_KeyReleaseEvent_IsBase(true);
        vqdateedit->keyReleaseEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnKeyReleaseEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_FocusOutEvent(QDateEdit* self, QFocusEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->focusOutEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseFocusOutEvent(QDateEdit* self, QFocusEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusOutEvent_IsBase(true);
        vqdateedit->focusOutEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusOutEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ContextMenuEvent(QDateEdit* self, QContextMenuEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->contextMenuEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseContextMenuEvent(QDateEdit* self, QContextMenuEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ContextMenuEvent_IsBase(true);
        vqdateedit->contextMenuEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnContextMenuEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ChangeEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->changeEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseChangeEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ChangeEvent_IsBase(true);
        vqdateedit->changeEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnChangeEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_CloseEvent(QDateEdit* self, QCloseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->closeEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseCloseEvent(QDateEdit* self, QCloseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_CloseEvent_IsBase(true);
        vqdateedit->closeEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCloseEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_CloseEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_HideEvent(QDateEdit* self, QHideEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->hideEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseHideEvent(QDateEdit* self, QHideEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_HideEvent_IsBase(true);
        vqdateedit->hideEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHideEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_HideEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MouseReleaseEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMouseReleaseEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MouseReleaseEvent_IsBase(true);
        vqdateedit->mouseReleaseEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseReleaseEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MouseMoveEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->mouseMoveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMouseMoveEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MouseMoveEvent_IsBase(true);
        vqdateedit->mouseMoveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseMoveEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_TimerEvent(QDateEdit* self, QTimerEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->timerEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseTimerEvent(QDateEdit* self, QTimerEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_TimerEvent_IsBase(true);
        vqdateedit->timerEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTimerEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_TimerEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ShowEvent(QDateEdit* self, QShowEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->showEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseShowEvent(QDateEdit* self, QShowEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ShowEvent_IsBase(true);
        vqdateedit->showEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnShowEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ShowEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_DevType(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->devType();
    } else {
        return self->QDateEdit::devType();
    }
}

// Base class handler implementation
int QDateEdit_QBaseDevType(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DevType_IsBase(true);
        return vqdateedit->devType();
    } else {
        return self->QDateEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDevType(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DevType_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_SetVisible(QDateEdit* self, bool visible) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setVisible(visible);
    } else {
        self->QDateEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QDateEdit_QBaseSetVisible(QDateEdit* self, bool visible) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SetVisible_IsBase(true);
        vqdateedit->setVisible(visible);
    } else {
        self->QDateEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSetVisible(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SetVisible_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_HeightForWidth(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDateEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDateEdit_QBaseHeightForWidth(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_HeightForWidth_IsBase(true);
        return vqdateedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDateEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHeightForWidth(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_HasHeightForWidth(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->hasHeightForWidth();
    } else {
        return self->QDateEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDateEdit_QBaseHasHeightForWidth(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_HasHeightForWidth_IsBase(true);
        return vqdateedit->hasHeightForWidth();
    } else {
        return self->QDateEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHasHeightForWidth(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDateEdit_PaintEngine(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->paintEngine();
    } else {
        return self->QDateEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDateEdit_QBasePaintEngine(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_PaintEngine_IsBase(true);
        return vqdateedit->paintEngine();
    } else {
        return self->QDateEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnPaintEngine(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_PaintEngine_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MouseDoubleClickEvent_IsBase(true);
        vqdateedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseDoubleClickEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_EnterEvent(QDateEdit* self, QEnterEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->enterEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseEnterEvent(QDateEdit* self, QEnterEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_EnterEvent_IsBase(true);
        vqdateedit->enterEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEnterEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_EnterEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_LeaveEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->leaveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseLeaveEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_LeaveEvent_IsBase(true);
        vqdateedit->leaveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnLeaveEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MoveEvent(QDateEdit* self, QMoveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->moveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMoveEvent(QDateEdit* self, QMoveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MoveEvent_IsBase(true);
        vqdateedit->moveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMoveEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_MoveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_TabletEvent(QDateEdit* self, QTabletEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->tabletEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseTabletEvent(QDateEdit* self, QTabletEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_TabletEvent_IsBase(true);
        vqdateedit->tabletEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTabletEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_TabletEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ActionEvent(QDateEdit* self, QActionEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->actionEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseActionEvent(QDateEdit* self, QActionEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ActionEvent_IsBase(true);
        vqdateedit->actionEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnActionEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ActionEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DragEnterEvent(QDateEdit* self, QDragEnterEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->dragEnterEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDragEnterEvent(QDateEdit* self, QDragEnterEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DragEnterEvent_IsBase(true);
        vqdateedit->dragEnterEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragEnterEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DragMoveEvent(QDateEdit* self, QDragMoveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->dragMoveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDragMoveEvent(QDateEdit* self, QDragMoveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DragMoveEvent_IsBase(true);
        vqdateedit->dragMoveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragMoveEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->dragLeaveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DragLeaveEvent_IsBase(true);
        vqdateedit->dragLeaveEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragLeaveEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DropEvent(QDateEdit* self, QDropEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->dropEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDropEvent(QDateEdit* self, QDropEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DropEvent_IsBase(true);
        vqdateedit->dropEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDropEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DropEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_NativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDateEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDateEdit_QBaseNativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_NativeEvent_IsBase(true);
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDateEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnNativeEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_NativeEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_Metric(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDateEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDateEdit_QBaseMetric(const QDateEdit* self, int param1) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Metric_IsBase(true);
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDateEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMetric(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Metric_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_InitPainter(const QDateEdit* self, QPainter* painter) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->initPainter(painter);
    } else {
        ((VirtualQDateEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDateEdit_QBaseInitPainter(const QDateEdit* self, QPainter* painter) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InitPainter_IsBase(true);
        vqdateedit->initPainter(painter);
    } else {
        ((VirtualQDateEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInitPainter(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InitPainter_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDateEdit_Redirected(const QDateEdit* self, QPoint* offset) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->redirected(offset);
    } else {
        return ((VirtualQDateEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDateEdit_QBaseRedirected(const QDateEdit* self, QPoint* offset) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Redirected_IsBase(true);
        return vqdateedit->redirected(offset);
    } else {
        return ((VirtualQDateEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnRedirected(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Redirected_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDateEdit_SharedPainter(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->sharedPainter();
    } else {
        return ((VirtualQDateEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDateEdit_QBaseSharedPainter(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SharedPainter_IsBase(true);
        return vqdateedit->sharedPainter();
    } else {
        return ((VirtualQDateEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSharedPainter(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SharedPainter_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_InputMethodEvent(QDateEdit* self, QInputMethodEvent* param1) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->inputMethodEvent(param1);
    } else {
        ((VirtualQDateEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDateEdit_QBaseInputMethodEvent(QDateEdit* self, QInputMethodEvent* param1) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InputMethodEvent_IsBase(true);
        vqdateedit->inputMethodEvent(param1);
    } else {
        ((VirtualQDateEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInputMethodEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_EventFilter(QDateEdit* self, QObject* watched, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->eventFilter(watched, event);
    } else {
        return self->QDateEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseEventFilter(QDateEdit* self, QObject* watched, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_EventFilter_IsBase(true);
        return vqdateedit->eventFilter(watched, event);
    } else {
        return self->QDateEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEventFilter(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_EventFilter_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ChildEvent(QDateEdit* self, QChildEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->childEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseChildEvent(QDateEdit* self, QChildEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ChildEvent_IsBase(true);
        vqdateedit->childEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnChildEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ChildEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_CustomEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->customEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseCustomEvent(QDateEdit* self, QEvent* event) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_CustomEvent_IsBase(true);
        vqdateedit->customEvent(event);
    } else {
        ((VirtualQDateEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCustomEvent(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_CustomEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ConnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->connectNotify(*signal);
    } else {
        ((VirtualQDateEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDateEdit_QBaseConnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ConnectNotify_IsBase(true);
        vqdateedit->connectNotify(*signal);
    } else {
        ((VirtualQDateEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnConnectNotify(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DisconnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->disconnectNotify(*signal);
    } else {
        ((VirtualQDateEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDisconnectNotify(QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DisconnectNotify_IsBase(true);
        vqdateedit->disconnectNotify(*signal);
    } else {
        ((VirtualQDateEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDisconnectNotify(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QDateEdit_LineEdit(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->lineEdit();
    } else {
        return ((VirtualQDateEdit*)self)->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QDateEdit_QBaseLineEdit(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_LineEdit_IsBase(true);
        return vqdateedit->lineEdit();
    } else {
        return ((VirtualQDateEdit*)self)->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnLineEdit(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_LineEdit_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_SetLineEdit(QDateEdit* self, QLineEdit* edit) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setLineEdit(edit);
    } else {
        ((VirtualQDateEdit*)self)->setLineEdit(edit);
    }
}

// Base class handler implementation
void QDateEdit_QBaseSetLineEdit(QDateEdit* self, QLineEdit* edit) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SetLineEdit_IsBase(true);
        vqdateedit->setLineEdit(edit);
    } else {
        ((VirtualQDateEdit*)self)->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSetLineEdit(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SetLineEdit_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_UpdateMicroFocus(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->updateMicroFocus();
    } else {
        ((VirtualQDateEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDateEdit_QBaseUpdateMicroFocus(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_UpdateMicroFocus_IsBase(true);
        vqdateedit->updateMicroFocus();
    } else {
        ((VirtualQDateEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnUpdateMicroFocus(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Create(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->create();
    } else {
        ((VirtualQDateEdit*)self)->create();
    }
}

// Base class handler implementation
void QDateEdit_QBaseCreate(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Create_IsBase(true);
        vqdateedit->create();
    } else {
        ((VirtualQDateEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCreate(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Create_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Destroy(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->destroy();
    } else {
        ((VirtualQDateEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QDateEdit_QBaseDestroy(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Destroy_IsBase(true);
        vqdateedit->destroy();
    } else {
        ((VirtualQDateEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDestroy(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Destroy_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_FocusNextChild(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->focusNextChild();
    } else {
        return ((VirtualQDateEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDateEdit_QBaseFocusNextChild(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusNextChild_IsBase(true);
        return vqdateedit->focusNextChild();
    } else {
        return ((VirtualQDateEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusNextChild(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_FocusPreviousChild(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->focusPreviousChild();
    } else {
        return ((VirtualQDateEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDateEdit_QBaseFocusPreviousChild(QDateEdit* self) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusPreviousChild_IsBase(true);
        return vqdateedit->focusPreviousChild();
    } else {
        return ((VirtualQDateEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusPreviousChild(QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self);
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDateEdit_Sender(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->sender();
    } else {
        return ((VirtualQDateEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDateEdit_QBaseSender(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Sender_IsBase(true);
        return vqdateedit->sender();
    } else {
        return ((VirtualQDateEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSender(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Sender_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_SenderSignalIndex(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->senderSignalIndex();
    } else {
        return ((VirtualQDateEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDateEdit_QBaseSenderSignalIndex(const QDateEdit* self) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SenderSignalIndex_IsBase(true);
        return vqdateedit->senderSignalIndex();
    } else {
        return ((VirtualQDateEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSenderSignalIndex(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_Receivers(const QDateEdit* self, const char* signal) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->receivers(signal);
    } else {
        return ((VirtualQDateEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDateEdit_QBaseReceivers(const QDateEdit* self, const char* signal) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Receivers_IsBase(true);
        return vqdateedit->receivers(signal);
    } else {
        return ((VirtualQDateEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnReceivers(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_Receivers_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_IsSignalConnected(const QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQDateEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseIsSignalConnected(const QDateEdit* self, const QMetaMethod* signal) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_IsSignalConnected_IsBase(true);
        return vqdateedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQDateEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnIsSignalConnected(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDateEdit_GetDecodedMetricF(const QDateEdit* self, int metricA, int metricB) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        return vqdateedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDateEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDateEdit_QBaseGetDecodedMetricF(const QDateEdit* self, int metricA, int metricB) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_GetDecodedMetricF_IsBase(true);
        return vqdateedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDateEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnGetDecodedMetricF(const QDateEdit* self, intptr_t slot) {
    auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self));
    if (vqdateedit && vqdateedit->isVirtualQDateEdit) {
        vqdateedit->setQDateEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void QDateEdit_Delete(QDateEdit* self) {
    delete self;
}
