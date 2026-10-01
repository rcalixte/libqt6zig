#include <QApplication>
#include <QChildEvent>
#include <QCoreApplication>
#include <QEvent>
#include <QFont>
#include <QFontMetrics>
#include <QGuiApplication>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QString>
#include <QStyle>
#include <QTimerEvent>
#include <QWidget>
#include <qapplication.h>
#include "libqapplication.h"
#include "libqapplication.hxx"

QApplication* QApplication_new(int* argc, char** argv) {
    return new VirtualQApplication(static_cast<int&>(*argc), argv);
}

QApplication* QApplication_new2(int* argc, char** argv, int param3) {
    return new VirtualQApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QApplication_MetaObject(const QApplication* self) {
    return (QMetaObject*)self->metaObject();
}

void* QApplication_Metacast(QApplication* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QApplication_Metacall(QApplication* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QApplication_Tr(const char* s) {
    auto _ret = QApplication::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QStyle* QApplication_Style() {
    return QApplication::style();
}

void QApplication_SetStyle(QStyle* style) {
    QApplication::setStyle(style);
}

QStyle* QApplication_SetStyle2(const libqt_string style) {
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QApplication::setStyle(style_QString);
}

QPalette* QApplication_Palette(const QWidget* param1) {
    return new QPalette(QApplication::palette(param1));
}

QPalette* QApplication_Palette2(const char* className) {
    return new QPalette(QApplication::palette(className));
}

void QApplication_SetPalette(const QPalette* param1) {
    QApplication::setPalette(*param1);
}

QFont* QApplication_Font() {
    return new QFont(QApplication::font());
}

QFont* QApplication_Font2(const QWidget* param1) {
    return new QFont(QApplication::font(param1));
}

QFont* QApplication_Font3(const char* className) {
    return new QFont(QApplication::font(className));
}

void QApplication_SetFont(const QFont* param1) {
    QApplication::setFont(*param1);
}

QFontMetrics* QApplication_FontMetrics() {
    return new QFontMetrics(QApplication::fontMetrics());
}

libqt_list /* of QWidget* */ QApplication_AllWidgets() {
    QList<QWidget*> _ret = QApplication::allWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QWidget* */ QApplication_TopLevelWidgets() {
    QList<QWidget*> _ret = QApplication::topLevelWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* QApplication_ActivePopupWidget() {
    return QApplication::activePopupWidget();
}

QWidget* QApplication_ActiveModalWidget() {
    return QApplication::activeModalWidget();
}

QWidget* QApplication_FocusWidget() {
    return QApplication::focusWidget();
}

QWidget* QApplication_ActiveWindow() {
    return QApplication::activeWindow();
}

void QApplication_SetActiveWindow(QWidget* act) {
    QApplication::setActiveWindow(act);
}

QWidget* QApplication_WidgetAt(const QPoint* p) {
    return QApplication::widgetAt(*p);
}

QWidget* QApplication_WidgetAt2(int x, int y) {
    return QApplication::widgetAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QApplication_TopLevelAt(const QPoint* p) {
    return QApplication::topLevelAt(*p);
}

QWidget* QApplication_TopLevelAt2(int x, int y) {
    return QApplication::topLevelAt(static_cast<int>(x), static_cast<int>(y));
}

void QApplication_Beep() {
    QApplication::beep();
}

void QApplication_Alert(QWidget* widget) {
    QApplication::alert(widget);
}

void QApplication_SetCursorFlashTime(int cursorFlashTime) {
    QApplication::setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QApplication_CursorFlashTime() {
    return QApplication::cursorFlashTime();
}

void QApplication_SetDoubleClickInterval(int doubleClickInterval) {
    QApplication::setDoubleClickInterval(static_cast<int>(doubleClickInterval));
}

int QApplication_DoubleClickInterval() {
    return QApplication::doubleClickInterval();
}

void QApplication_SetKeyboardInputInterval(int keyboardInputInterval) {
    QApplication::setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QApplication_KeyboardInputInterval() {
    return QApplication::keyboardInputInterval();
}

void QApplication_SetWheelScrollLines(int wheelScrollLines) {
    QApplication::setWheelScrollLines(static_cast<int>(wheelScrollLines));
}

int QApplication_WheelScrollLines() {
    return QApplication::wheelScrollLines();
}

void QApplication_SetStartDragTime(int ms) {
    QApplication::setStartDragTime(static_cast<int>(ms));
}

int QApplication_StartDragTime() {
    return QApplication::startDragTime();
}

void QApplication_SetStartDragDistance(int l) {
    QApplication::setStartDragDistance(static_cast<int>(l));
}

int QApplication_StartDragDistance() {
    return QApplication::startDragDistance();
}

bool QApplication_IsEffectEnabled(int param1) {
    return QApplication::isEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

void QApplication_SetEffectEnabled(int param1) {
    QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

int QApplication_Exec() {
    return QApplication::exec();
}

bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2) {
    return self->notify(param1, param2);
}

void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now) {
    self->focusChanged(old, now);
}

void QApplication_Connect_FocusChanged(QApplication* self, intptr_t slot) {
    void (*slotFunc)(QApplication*, QWidget*, QWidget*) = reinterpret_cast<void (*)(QApplication*, QWidget*, QWidget*)>(slot);
    QApplication::connect(self,
                          static_cast<void (QApplication::*)(QWidget*, QWidget*)>(&QApplication::focusChanged),
                          [self, slotFunc](QWidget* old, QWidget* now) {
                              QWidget* sigval1 = old;
                              QWidget* sigval2 = now;
                              slotFunc(self, sigval1, sigval2);
                          });
}

libqt_string QApplication_StyleSheet(const QApplication* self) {
    auto _ret = self->styleSheet();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QApplication_AutoSipEnabled(const QApplication* self) {
    return self->autoSipEnabled();
}

void QApplication_SetStyleSheet(QApplication* self, const libqt_string sheet) {
    QString sheet_QString = QString::fromUtf8(sheet.data, sheet.len);
    self->setStyleSheet(sheet_QString);
}

void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled) {
    self->setAutoSipEnabled(enabled);
}

void QApplication_CloseAllWindows() {
    QApplication::closeAllWindows();
}

void QApplication_AboutQt() {
    QApplication::aboutQt();
}

bool QApplication_Event(QApplication* self, QEvent* param1) {
    auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
    if (vqapplication) {
        return vqapplication->event(param1);
    }
    qFatal("Error: Protected method QApplication::event called without a directly constructed type");
}

libqt_string QApplication_Tr2(const char* s, const char* c) {
    auto _ret = QApplication::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QApplication_Tr3(const char* s, const char* c, int n) {
    auto _ret = QApplication::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QApplication_SetPalette2(const QPalette* param1, const char* className) {
    QApplication::setPalette(*param1, className);
}

void QApplication_SetFont2(const QFont* param1, const char* className) {
    QApplication::setFont(*param1, className);
}

void QApplication_Alert2(QWidget* widget, int duration) {
    QApplication::alert(widget, static_cast<int>(duration));
}

void QApplication_SetEffectEnabled2(int param1, bool enable) {
    QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1), enable);
}

// Base class handler implementation
QMetaObject* QApplication_SuperMetaObject(const QApplication* self) {
    return (QMetaObject*)self->QApplication::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnMetaObject(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self)))
        vqapplication->qapplication_metaobject_callback = reinterpret_cast<VirtualQApplication::QApplication_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QApplication_SuperMetacast(QApplication* self, const char* param1) {
    return self->QApplication::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnMetacast(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_metacast_callback = reinterpret_cast<VirtualQApplication::QApplication_Metacast_Callback>(slot);
}

// Base class handler implementation
int QApplication_SuperMetacall(QApplication* self, int param1, int param2, void** param3) {
    return self->QApplication::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnMetacall(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_metacall_callback = reinterpret_cast<VirtualQApplication::QApplication_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QApplication_SuperNotify(QApplication* self, QObject* param1, QEvent* param2) {
    return self->QApplication::notify(param1, param2);
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnNotify(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_notify_callback = reinterpret_cast<VirtualQApplication::QApplication_Notify_Callback>(slot);
}

// Base class handler implementation
bool QApplication_SuperEvent(QApplication* self, QEvent* param1) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        return vqapplication->QApplication::event(param1);
    } else
        qFatal("Error: Protected virtual method QApplication::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_event_callback = reinterpret_cast<VirtualQApplication::QApplication_Event_Callback>(slot);
}

// Derived class handler implementation
bool QApplication_EventFilter(QApplication* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QApplication_SuperEventFilter(QApplication* self, QObject* watched, QEvent* event) {
    return self->QApplication::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnEventFilter(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_eventfilter_callback = reinterpret_cast<VirtualQApplication::QApplication_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QApplication_TimerEvent(QApplication* self, QTimerEvent* event) {
    auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
    if (vqapplication) {
        vqapplication->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QApplication::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QApplication_SuperTimerEvent(QApplication* self, QTimerEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->QApplication::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QApplication::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnTimerEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_timerevent_callback = reinterpret_cast<VirtualQApplication::QApplication_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QApplication_ChildEvent(QApplication* self, QChildEvent* event) {
    auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
    if (vqapplication) {
        vqapplication->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QApplication::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QApplication_SuperChildEvent(QApplication* self, QChildEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->QApplication::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QApplication::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnChildEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_childevent_callback = reinterpret_cast<VirtualQApplication::QApplication_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QApplication_CustomEvent(QApplication* self, QEvent* event) {
    auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
    if (vqapplication) {
        vqapplication->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QApplication::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QApplication_SuperCustomEvent(QApplication* self, QEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->QApplication::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QApplication::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnCustomEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_customevent_callback = reinterpret_cast<VirtualQApplication::QApplication_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QApplication_ConnectNotify(QApplication* self, const QMetaMethod* signal) {
    auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
    if (vqapplication) {
        vqapplication->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QApplication::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QApplication_SuperConnectNotify(QApplication* self, const QMetaMethod* signal) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->QApplication::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QApplication::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnConnectNotify(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_connectnotify_callback = reinterpret_cast<VirtualQApplication::QApplication_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QApplication_DisconnectNotify(QApplication* self, const QMetaMethod* signal) {
    auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
    if (vqapplication) {
        vqapplication->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QApplication::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QApplication_SuperDisconnectNotify(QApplication* self, const QMetaMethod* signal) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->QApplication::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QApplication::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnDisconnectNotify(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self))
        vqapplication->qapplication_disconnectnotify_callback = reinterpret_cast<VirtualQApplication::QApplication_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* QApplication_ResolveInterface(const QApplication* self, const char* name, int revision) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->VirtualQApplication::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QApplication::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QApplication_Sender(const QApplication* self) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->VirtualQApplication::sender();
    } else
        qFatal("Error: Protected method QApplication::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QApplication_SenderSignalIndex(const QApplication* self) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->VirtualQApplication::senderSignalIndex();
    } else
        qFatal("Error: Protected method QApplication::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QApplication_Receivers(const QApplication* self, const char* signal) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->VirtualQApplication::receivers(signal);
    } else
        qFatal("Error: Protected method QApplication::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QApplication_IsSignalConnected(const QApplication* self, const QMetaMethod* signal) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->VirtualQApplication::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QApplication::isSignalConnected called without a directly constructed type");
}

void QApplication_Delete(QApplication* self) {
    delete self;
}
