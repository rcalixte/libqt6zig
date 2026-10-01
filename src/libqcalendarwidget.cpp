#include <QActionEvent>
#include <QByteArray>
#include <QCalendar>
#include <QCalendarWidget>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTextCharFormat>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcalendarwidget.h>
#include "libqcalendarwidget.h"
#include "libqcalendarwidget.hxx"

QCalendarWidget* QCalendarWidget_new(QWidget* parent) {
    return new VirtualQCalendarWidget(parent);
}

QCalendarWidget* QCalendarWidget_new2() {
    return new VirtualQCalendarWidget();
}

QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCalendarWidget_Metacast(QCalendarWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCalendarWidget_Metacall(QCalendarWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCalendarWidget_Tr(const char* s) {
    auto _ret = QCalendarWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self) {
    return new QSize(self->sizeHint());
}

QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self) {
    return new QSize(self->minimumSizeHint());
}

QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self) {
    return new QDate(self->selectedDate());
}

int QCalendarWidget_YearShown(const QCalendarWidget* self) {
    return self->yearShown();
}

int QCalendarWidget_MonthShown(const QCalendarWidget* self) {
    return self->monthShown();
}

QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self) {
    return new QDate(self->minimumDate());
}

void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date) {
    self->setMinimumDate(*date);
}

void QCalendarWidget_ClearMinimumDate(QCalendarWidget* self) {
    self->clearMinimumDate();
}

QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self) {
    return new QDate(self->maximumDate());
}

void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date) {
    self->setMaximumDate(*date);
}

void QCalendarWidget_ClearMaximumDate(QCalendarWidget* self) {
    self->clearMaximumDate();
}

int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self) {
    return static_cast<int>(self->firstDayOfWeek());
}

void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek) {
    self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self) {
    return self->isNavigationBarVisible();
}

bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self) {
    return self->isGridVisible();
}

QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self) {
    return new QCalendar(self->calendar());
}

void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar) {
    self->setCalendar(*calendar);
}

int QCalendarWidget_SelectionMode(const QCalendarWidget* self) {
    return static_cast<int>(self->selectionMode());
}

void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode) {
    self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self) {
    return static_cast<int>(self->horizontalHeaderFormat());
}

void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format) {
    self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self) {
    return static_cast<int>(self->verticalHeaderFormat());
}

void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format) {
    self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self) {
    return new QTextCharFormat(self->headerTextFormat());
}

void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, const QTextCharFormat* format) {
    self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek) {
    return new QTextCharFormat(self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek)));
}

void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, const QTextCharFormat* format) {
    self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

libqt_map /* of QDate* to QTextCharFormat* */ QCalendarWidget_DateTextFormat(const QCalendarWidget* self) {
    QMap<QDate, QTextCharFormat> _ret = self->dateTextFormat();
    // Convert QMap<> from C++ memory to manually-managed C memory
    QDate** _karr = static_cast<QDate**>(malloc(sizeof(QDate*) * _ret.size()));
    QTextCharFormat** _varr = static_cast<QTextCharFormat**>(malloc(sizeof(QTextCharFormat*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = new QDate(_itr->first);
        _varr[_ctr] = new QTextCharFormat(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

QTextCharFormat* QCalendarWidget_DateTextFormat2(const QCalendarWidget* self, QDate* date) {
    return new QTextCharFormat(self->dateTextFormat(*date));
}

void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, const QTextCharFormat* format) {
    self->setDateTextFormat(*date, *format);
}

bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self) {
    return self->isDateEditEnabled();
}

void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable) {
    self->setDateEditEnabled(enable);
}

int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self) {
    return self->dateEditAcceptDelay();
}

void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay) {
    self->setDateEditAcceptDelay(static_cast<int>(delay));
}

bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        return vqcalendarwidget->event(event);
    }
    qFatal("Error: Protected method QCalendarWidget::event called without a directly constructed type");
}

bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        return vqcalendarwidget->eventFilter(watched, event);
    }
    qFatal("Error: Protected method QCalendarWidget::eventFilter called without a directly constructed type");
}

void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->mousePressEvent(event);
    }
}

void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->resizeEvent(event);
    }
}

void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->keyPressEvent(event);
    }
}

void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date) {
    auto* vqcalendarwidget = dynamic_cast<const VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->paintCell(painter, *rect, *date);
    }
}

void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date) {
    self->setSelectedDate(*date);
}

void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max) {
    self->setDateRange(*min, *max);
}

void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month) {
    self->setCurrentPage(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show) {
    self->setGridVisible(show);
}

void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible) {
    self->setNavigationBarVisible(visible);
}

void QCalendarWidget_ShowNextMonth(QCalendarWidget* self) {
    self->showNextMonth();
}

void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self) {
    self->showPreviousMonth();
}

void QCalendarWidget_ShowNextYear(QCalendarWidget* self) {
    self->showNextYear();
}

void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self) {
    self->showPreviousYear();
}

void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self) {
    self->showSelectedDate();
}

void QCalendarWidget_ShowToday(QCalendarWidget* self) {
    self->showToday();
}

void QCalendarWidget_SelectionChanged(QCalendarWidget* self) {
    self->selectionChanged();
}

void QCalendarWidget_Connect_SelectionChanged(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*) = reinterpret_cast<void (*)(QCalendarWidget*)>(slot);
    QCalendarWidget::connect(self,
                             static_cast<void (QCalendarWidget::*)()>(&QCalendarWidget::selectionChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date) {
    self->clicked(*date);
}

void QCalendarWidget_Connect_Clicked(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, QDate*) = reinterpret_cast<void (*)(QCalendarWidget*, QDate*)>(slot);
    QCalendarWidget::connect(self,
                             static_cast<void (QCalendarWidget::*)(QDate)>(&QCalendarWidget::clicked),
                             [self, slotFunc](QDate date) {
                                 QDate* sigval1 = new QDate(date);
                                 slotFunc(self, sigval1);
                             });
}

void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date) {
    self->activated(*date);
}

void QCalendarWidget_Connect_Activated(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, QDate*) = reinterpret_cast<void (*)(QCalendarWidget*, QDate*)>(slot);
    QCalendarWidget::connect(self,
                             static_cast<void (QCalendarWidget::*)(QDate)>(&QCalendarWidget::activated),
                             [self, slotFunc](QDate date) {
                                 QDate* sigval1 = new QDate(date);
                                 slotFunc(self, sigval1);
                             });
}

void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month) {
    self->currentPageChanged(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_Connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, int, int) = reinterpret_cast<void (*)(QCalendarWidget*, int, int)>(slot);
    QCalendarWidget::connect(self,
                             static_cast<void (QCalendarWidget::*)(int, int)>(&QCalendarWidget::currentPageChanged),
                             [self, slotFunc](int year, int month) {
                                 int sigval1 = year;
                                 int sigval2 = month;
                                 slotFunc(self, sigval1, sigval2);
                             });
}

libqt_string QCalendarWidget_Tr2(const char* s, const char* c) {
    auto _ret = QCalendarWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCalendarWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCalendarWidget_SuperMetaObject(const QCalendarWidget* self) {
    return (QMetaObject*)self->QCalendarWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMetaObject(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_metaobject_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCalendarWidget_SuperMetacast(QCalendarWidget* self, const char* param1) {
    return self->QCalendarWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMetacast(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_metacast_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCalendarWidget_SuperMetacall(QCalendarWidget* self, int param1, int param2, void** param3) {
    return self->QCalendarWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMetacall(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_metacall_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QCalendarWidget_SuperSizeHint(const QCalendarWidget* self) {
    return new QSize(self->QCalendarWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSizeHint(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_sizehint_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QCalendarWidget_SuperMinimumSizeHint(const QCalendarWidget* self) {
    return new QSize(self->QCalendarWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMinimumSizeHint(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_minimumsizehint_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QCalendarWidget_SuperEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->QCalendarWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_event_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Event_Callback>(slot);
}

// Base class handler implementation
bool QCalendarWidget_SuperEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->QCalendarWidget::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEventFilter(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_eventfilter_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QCalendarWidget_SuperMousePressEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMousePressEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_mousepressevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QCalendarWidget_SuperResizeEvent(QCalendarWidget* self, QResizeEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnResizeEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_resizeevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QCalendarWidget_SuperKeyPressEvent(QCalendarWidget* self, QKeyEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnKeyPressEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_keypressevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QCalendarWidget_SuperPaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->QCalendarWidget::paintCell(painter, *rect, *date);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::paintCell called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintCell(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_paintcell_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintCell_Callback>(slot);
}

// Derived class handler implementation
int QCalendarWidget_DevType(const QCalendarWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QCalendarWidget_SuperDevType(const QCalendarWidget* self) {
    return self->QCalendarWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDevType(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_devtype_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_SetVisible(QCalendarWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QCalendarWidget_SuperSetVisible(QCalendarWidget* self, bool visible) {
    self->QCalendarWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSetVisible(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_setvisible_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QCalendarWidget_HeightForWidth(const QCalendarWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QCalendarWidget_SuperHeightForWidth(const QCalendarWidget* self, int param1) {
    return self->QCalendarWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnHeightForWidth(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_heightforwidth_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QCalendarWidget_HasHeightForWidth(const QCalendarWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QCalendarWidget_SuperHasHeightForWidth(const QCalendarWidget* self) {
    return self->QCalendarWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnHasHeightForWidth(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QCalendarWidget_PaintEngine(const QCalendarWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QCalendarWidget_SuperPaintEngine(const QCalendarWidget* self) {
    return self->QCalendarWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintEngine(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_paintengine_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_MouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperMouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMouseReleaseEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_MouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperMouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMouseDoubleClickEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_MouseMoveEvent(QCalendarWidget* self, QMouseEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperMouseMoveEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMouseMoveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_mousemoveevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_WheelEvent(QCalendarWidget* self, QWheelEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperWheelEvent(QCalendarWidget* self, QWheelEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnWheelEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_wheelevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_KeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperKeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnKeyReleaseEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_FocusInEvent(QCalendarWidget* self, QFocusEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperFocusInEvent(QCalendarWidget* self, QFocusEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusInEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_focusinevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_FocusOutEvent(QCalendarWidget* self, QFocusEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperFocusOutEvent(QCalendarWidget* self, QFocusEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusOutEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_focusoutevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_EnterEvent(QCalendarWidget* self, QEnterEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperEnterEvent(QCalendarWidget* self, QEnterEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEnterEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_enterevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_LeaveEvent(QCalendarWidget* self, QEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperLeaveEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnLeaveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_leaveevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_PaintEvent(QCalendarWidget* self, QPaintEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperPaintEvent(QCalendarWidget* self, QPaintEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_paintevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_MoveEvent(QCalendarWidget* self, QMoveEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperMoveEvent(QCalendarWidget* self, QMoveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMoveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_moveevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_CloseEvent(QCalendarWidget* self, QCloseEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperCloseEvent(QCalendarWidget* self, QCloseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnCloseEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_closeevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_ContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnContextMenuEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_contextmenuevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_TabletEvent(QCalendarWidget* self, QTabletEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperTabletEvent(QCalendarWidget* self, QTabletEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnTabletEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_tabletevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_ActionEvent(QCalendarWidget* self, QActionEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperActionEvent(QCalendarWidget* self, QActionEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnActionEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_actionevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_DragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperDragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDragEnterEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_dragenterevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_DragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperDragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDragMoveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_dragmoveevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_DragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperDragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDragLeaveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_dragleaveevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_DropEvent(QCalendarWidget* self, QDropEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperDropEvent(QCalendarWidget* self, QDropEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDropEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_dropevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_ShowEvent(QCalendarWidget* self, QShowEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperShowEvent(QCalendarWidget* self, QShowEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnShowEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_showevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_HideEvent(QCalendarWidget* self, QHideEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperHideEvent(QCalendarWidget* self, QHideEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnHideEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_hideevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QCalendarWidget_NativeEvent(QCalendarWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        return vqcalendarwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCalendarWidget_SuperNativeEvent(QCalendarWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->QCalendarWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnNativeEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_nativeevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_ChangeEvent(QCalendarWidget* self, QEvent* param1) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperChangeEvent(QCalendarWidget* self, QEvent* param1) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnChangeEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_changeevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QCalendarWidget_Metric(const QCalendarWidget* self, int param1) {
    auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self));
    if (vqcalendarwidget) {
        return vqcalendarwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QCalendarWidget_SuperMetric(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->QCalendarWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMetric(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_metric_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_InitPainter(const QCalendarWidget* self, QPainter* painter) {
    auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self));
    if (vqcalendarwidget) {
        vqcalendarwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperInitPainter(const QCalendarWidget* self, QPainter* painter) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->QCalendarWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnInitPainter(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_initpainter_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QCalendarWidget_Redirected(const QCalendarWidget* self, QPoint* offset) {
    auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self));
    if (vqcalendarwidget) {
        return vqcalendarwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QCalendarWidget_SuperRedirected(const QCalendarWidget* self, QPoint* offset) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->QCalendarWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnRedirected(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_redirected_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QCalendarWidget_SharedPainter(const QCalendarWidget* self) {
    auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self));
    if (vqcalendarwidget) {
        return vqcalendarwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QCalendarWidget_SuperSharedPainter(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->QCalendarWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSharedPainter(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_sharedpainter_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_InputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperInputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnInputMethodEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_inputmethodevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QCalendarWidget_InputMethodQuery(const QCalendarWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QCalendarWidget_SuperInputMethodQuery(const QCalendarWidget* self, int param1) {
    return new QVariant(self->QCalendarWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnInputMethodQuery(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self)))
        vqcalendarwidget->qcalendarwidget_inputmethodquery_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QCalendarWidget_FocusNextPrevChild(QCalendarWidget* self, bool next) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        return vqcalendarwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QCalendarWidget_SuperFocusNextPrevChild(QCalendarWidget* self, bool next) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->QCalendarWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusNextPrevChild(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_TimerEvent(QCalendarWidget* self, QTimerEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperTimerEvent(QCalendarWidget* self, QTimerEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnTimerEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_timerevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_ChildEvent(QCalendarWidget* self, QChildEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperChildEvent(QCalendarWidget* self, QChildEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnChildEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_childevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_CustomEvent(QCalendarWidget* self, QEvent* event) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperCustomEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnCustomEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_customevent_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_ConnectNotify(QCalendarWidget* self, const QMetaMethod* signal) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperConnectNotify(QCalendarWidget* self, const QMetaMethod* signal) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnConnectNotify(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_connectnotify_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCalendarWidget_DisconnectNotify(QCalendarWidget* self, const QMetaMethod* signal) {
    auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self);
    if (vqcalendarwidget) {
        vqcalendarwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCalendarWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCalendarWidget_SuperDisconnectNotify(QCalendarWidget* self, const QMetaMethod* signal) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->QCalendarWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCalendarWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDisconnectNotify(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self))
        vqcalendarwidget->qcalendarwidget_disconnectnotify_callback = reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->VirtualQCalendarWidget::updateCell(*date);
    } else
        qFatal("Error: Protected method QCalendarWidget::updateCell called without a directly constructed type");
}

// Derived class protected handler implementation
void QCalendarWidget_UpdateCells(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->VirtualQCalendarWidget::updateCells();
    } else
        qFatal("Error: Protected method QCalendarWidget::updateCells called without a directly constructed type");
}

// Derived class protected handler implementation
void QCalendarWidget_UpdateMicroFocus(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->VirtualQCalendarWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QCalendarWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QCalendarWidget_Create(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->VirtualQCalendarWidget::create();
    } else
        qFatal("Error: Protected method QCalendarWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QCalendarWidget_Destroy(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->VirtualQCalendarWidget::destroy();
    } else
        qFatal("Error: Protected method QCalendarWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCalendarWidget_FocusNextChild(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->VirtualQCalendarWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QCalendarWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCalendarWidget_FocusPreviousChild(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->VirtualQCalendarWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QCalendarWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QCalendarWidget_Sender(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->VirtualQCalendarWidget::sender();
    } else
        qFatal("Error: Protected method QCalendarWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCalendarWidget_SenderSignalIndex(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->VirtualQCalendarWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCalendarWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCalendarWidget_Receivers(const QCalendarWidget* self, const char* signal) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->VirtualQCalendarWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QCalendarWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCalendarWidget_IsSignalConnected(const QCalendarWidget* self, const QMetaMethod* signal) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->VirtualQCalendarWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCalendarWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QCalendarWidget_GetDecodedMetricF(const QCalendarWidget* self, int metricA, int metricB) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->VirtualQCalendarWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QCalendarWidget::getDecodedMetricF called without a directly constructed type");
}

void QCalendarWidget_Delete(QCalendarWidget* self) {
    delete self;
}
