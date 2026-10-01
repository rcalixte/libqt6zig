#include <QByteArray>
#include <QChildEvent>
#include <QClipboard>
#include <QCoreApplication>
#include <QCursor>
#include <QEvent>
#include <QFont>
#include <QGuiApplication>
#include <QIcon>
#include <QInputMethod>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QScreen>
#include <QSessionManager>
#include <QString>
#include <QStyleHints>
#include <QTimerEvent>
#include <QWindow>
#include <qguiapplication.h>
#include "libqguiapplication.h"
#include "libqguiapplication.hxx"

QGuiApplication* QGuiApplication_new(int* argc, char** argv) {
    return new VirtualQGuiApplication(static_cast<int&>(*argc), argv);
}

QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3) {
    return new VirtualQGuiApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QGuiApplication_MetaObject(const QGuiApplication* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGuiApplication_Metacast(QGuiApplication* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGuiApplication_Metacall(QGuiApplication* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGuiApplication_Tr(const char* s) {
    auto _ret = QGuiApplication::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGuiApplication_SetApplicationDisplayName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QGuiApplication::setApplicationDisplayName(name_QString);
}

libqt_string QGuiApplication_ApplicationDisplayName() {
    auto _ret = QGuiApplication::applicationDisplayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGuiApplication_SetBadgeNumber(QGuiApplication* self, long long number) {
    self->setBadgeNumber(static_cast<qint64>(number));
}

void QGuiApplication_SetDesktopFileName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QGuiApplication::setDesktopFileName(name_QString);
}

libqt_string QGuiApplication_DesktopFileName() {
    auto _ret = QGuiApplication::desktopFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QWindow* */ QGuiApplication_AllWindows() {
    QList<QWindow*> _ret = QGuiApplication::allWindows();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QWindow* */ QGuiApplication_TopLevelWindows() {
    QList<QWindow*> _ret = QGuiApplication::topLevelWindows();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWindow* QGuiApplication_TopLevelAt(const QPoint* pos) {
    return QGuiApplication::topLevelAt(*pos);
}

void QGuiApplication_SetWindowIcon(const QIcon* icon) {
    QGuiApplication::setWindowIcon(*icon);
}

QIcon* QGuiApplication_WindowIcon() {
    return new QIcon(QGuiApplication::windowIcon());
}

libqt_string QGuiApplication_PlatformName() {
    auto _ret = QGuiApplication::platformName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWindow* QGuiApplication_ModalWindow() {
    return QGuiApplication::modalWindow();
}

QWindow* QGuiApplication_FocusWindow() {
    return QGuiApplication::focusWindow();
}

QObject* QGuiApplication_FocusObject() {
    return QGuiApplication::focusObject();
}

QScreen* QGuiApplication_PrimaryScreen() {
    return QGuiApplication::primaryScreen();
}

libqt_list /* of QScreen* */ QGuiApplication_Screens() {
    QList<QScreen*> _ret = QGuiApplication::screens();
    // Convert QList<> from C++ memory to manually-managed C memory
    QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QScreen* QGuiApplication_ScreenAt(const QPoint* point) {
    return QGuiApplication::screenAt(*point);
}

double QGuiApplication_DevicePixelRatio(const QGuiApplication* self) {
    return static_cast<double>(self->devicePixelRatio());
}

QCursor* QGuiApplication_OverrideCursor() {
    return QGuiApplication::overrideCursor();
}

void QGuiApplication_SetOverrideCursor(const QCursor* overrideCursor) {
    QGuiApplication::setOverrideCursor(*overrideCursor);
}

void QGuiApplication_ChangeOverrideCursor(const QCursor* param1) {
    QGuiApplication::changeOverrideCursor(*param1);
}

void QGuiApplication_RestoreOverrideCursor() {
    QGuiApplication::restoreOverrideCursor();
}

QFont* QGuiApplication_Font() {
    return new QFont(QGuiApplication::font());
}

void QGuiApplication_SetFont(const QFont* font) {
    QGuiApplication::setFont(*font);
}

QClipboard* QGuiApplication_Clipboard() {
    return QGuiApplication::clipboard();
}

QPalette* QGuiApplication_Palette() {
    return new QPalette(QGuiApplication::palette());
}

void QGuiApplication_SetPalette(const QPalette* pal) {
    QGuiApplication::setPalette(*pal);
}

int QGuiApplication_KeyboardModifiers() {
    return static_cast<int>(QGuiApplication::keyboardModifiers());
}

int QGuiApplication_QueryKeyboardModifiers() {
    return static_cast<int>(QGuiApplication::queryKeyboardModifiers());
}

int QGuiApplication_MouseButtons() {
    return static_cast<int>(QGuiApplication::mouseButtons());
}

void QGuiApplication_SetLayoutDirection(int direction) {
    QGuiApplication::setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QGuiApplication_LayoutDirection() {
    return static_cast<int>(QGuiApplication::layoutDirection());
}

bool QGuiApplication_IsRightToLeft() {
    return QGuiApplication::isRightToLeft();
}

bool QGuiApplication_IsLeftToRight() {
    return QGuiApplication::isLeftToRight();
}

QStyleHints* QGuiApplication_StyleHints() {
    return QGuiApplication::styleHints();
}

void QGuiApplication_SetDesktopSettingsAware(bool on) {
    QGuiApplication::setDesktopSettingsAware(on);
}

bool QGuiApplication_DesktopSettingsAware() {
    return QGuiApplication::desktopSettingsAware();
}

QInputMethod* QGuiApplication_InputMethod() {
    return QGuiApplication::inputMethod();
}

intptr_t QGuiApplication_PlatformFunction(const libqt_string function) {
    QByteArray function_QByteArray(function.data, function.len);
    return reinterpret_cast<intptr_t>(QGuiApplication::platformFunction(function_QByteArray));
}

void QGuiApplication_SetQuitOnLastWindowClosed(bool quit) {
    QGuiApplication::setQuitOnLastWindowClosed(quit);
}

bool QGuiApplication_QuitOnLastWindowClosed() {
    return QGuiApplication::quitOnLastWindowClosed();
}

int QGuiApplication_ApplicationState() {
    return static_cast<int>(QGuiApplication::applicationState());
}

void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(int policy) {
    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(static_cast<Qt::HighDpiScaleFactorRoundingPolicy>(policy));
}

int QGuiApplication_HighDpiScaleFactorRoundingPolicy() {
    return static_cast<int>(QGuiApplication::highDpiScaleFactorRoundingPolicy());
}

int QGuiApplication_Exec() {
    return QGuiApplication::exec();
}

bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2) {
    return self->notify(param1, param2);
}

bool QGuiApplication_IsSessionRestored(const QGuiApplication* self) {
    return self->isSessionRestored();
}

libqt_string QGuiApplication_SessionId(const QGuiApplication* self) {
    auto _ret = self->sessionId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGuiApplication_SessionKey(const QGuiApplication* self) {
    auto _ret = self->sessionKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QGuiApplication_IsSavingSession(const QGuiApplication* self) {
    return self->isSavingSession();
}

void QGuiApplication_Sync() {
    QGuiApplication::sync();
}

void QGuiApplication_FontDatabaseChanged(QGuiApplication* self) {
    self->fontDatabaseChanged();
}

void QGuiApplication_Connect_FontDatabaseChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen) {
    self->screenAdded(screen);
}

void QGuiApplication_Connect_ScreenAdded(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenAdded),
                             [self, slotFunc](QScreen* screen) {
                                 QScreen* sigval1 = screen;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen) {
    self->screenRemoved(screen);
}

void QGuiApplication_Connect_ScreenRemoved(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenRemoved),
                             [self, slotFunc](QScreen* screen) {
                                 QScreen* sigval1 = screen;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen) {
    self->primaryScreenChanged(screen);
}

void QGuiApplication_Connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::primaryScreenChanged),
                             [self, slotFunc](QScreen* screen) {
                                 QScreen* sigval1 = screen;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_LastWindowClosed(QGuiApplication* self) {
    self->lastWindowClosed();
}

void QGuiApplication_Connect_LastWindowClosed(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject) {
    self->focusObjectChanged(focusObject);
}

void QGuiApplication_Connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QObject*) = reinterpret_cast<void (*)(QGuiApplication*, QObject*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QObject*)>(&QGuiApplication::focusObjectChanged),
                             [self, slotFunc](QObject* focusObject) {
                                 QObject* sigval1 = focusObject;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
    self->focusWindowChanged(focusWindow);
}

void QGuiApplication_Connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QWindow*) = reinterpret_cast<void (*)(QGuiApplication*, QWindow*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QWindow*)>(&QGuiApplication::focusWindowChanged),
                             [self, slotFunc](QWindow* focusWindow) {
                                 QWindow* sigval1 = focusWindow;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state) {
    self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_Connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, int) = reinterpret_cast<void (*)(QGuiApplication*, int)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged),
                             [self, slotFunc](Qt::ApplicationState state) {
                                 int sigval1 = static_cast<int>(state);
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction) {
    self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_Connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, int) = reinterpret_cast<void (*)(QGuiApplication*, int)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged),
                             [self, slotFunc](Qt::LayoutDirection direction) {
                                 int sigval1 = static_cast<int>(direction);
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
    self->commitDataRequest(*sessionManager);
}

void QGuiApplication_Connect_CommitDataRequest(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QSessionManager*) = reinterpret_cast<void (*)(QGuiApplication*, QSessionManager*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::commitDataRequest),
                             [self, slotFunc](QSessionManager& sessionManager) {
                                 QSessionManager& sessionManager_ret = sessionManager;
                                 // Cast returned reference into pointer
                                 QSessionManager* sigval1 = &sessionManager_ret;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager) {
    self->saveStateRequest(*sessionManager);
}

void QGuiApplication_Connect_SaveStateRequest(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QSessionManager*) = reinterpret_cast<void (*)(QGuiApplication*, QSessionManager*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::saveStateRequest),
                             [self, slotFunc](QSessionManager& sessionManager) {
                                 QSessionManager& sessionManager_ret = sessionManager;
                                 // Cast returned reference into pointer
                                 QSessionManager* sigval1 = &sessionManager_ret;
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self) {
    self->applicationDisplayNameChanged();
}

void QGuiApplication_Connect_ApplicationDisplayNameChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)()>(&QGuiApplication::applicationDisplayNameChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGuiApplication_PaletteChanged(QGuiApplication* self, const QPalette* pal) {
    self->paletteChanged(*pal);
}

void QGuiApplication_Connect_PaletteChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QPalette*) = reinterpret_cast<void (*)(QGuiApplication*, QPalette*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(const QPalette&)>(&QGuiApplication::paletteChanged),
                             [self, slotFunc](const QPalette& pal) {
                                 const QPalette& pal_ret = pal;
                                 // Cast returned reference into pointer
                                 QPalette* sigval1 = const_cast<QPalette*>(&pal_ret);
                                 slotFunc(self, sigval1);
                             });
}

void QGuiApplication_FontChanged(QGuiApplication* self, const QFont* font) {
    self->fontChanged(*font);
}

void QGuiApplication_Connect_FontChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QFont*) = reinterpret_cast<void (*)(QGuiApplication*, QFont*)>(slot);
    QGuiApplication::connect(self,
                             static_cast<void (QGuiApplication::*)(const QFont&)>(&QGuiApplication::fontChanged),
                             [self, slotFunc](const QFont& font) {
                                 const QFont& font_ret = font;
                                 // Cast returned reference into pointer
                                 QFont* sigval1 = const_cast<QFont*>(&font_ret);
                                 slotFunc(self, sigval1);
                             });
}

bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication) {
        return vqguiapplication->event(param1);
    }
    qFatal("Error: Protected method QGuiApplication::event called without a directly constructed type");
}

libqt_string QGuiApplication_Tr2(const char* s, const char* c) {
    auto _ret = QGuiApplication::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGuiApplication_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGuiApplication::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGuiApplication_SuperMetaObject(const QGuiApplication* self) {
    return (QMetaObject*)self->QGuiApplication::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnMetaObject(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self)))
        vqguiapplication->qguiapplication_metaobject_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGuiApplication_SuperMetacast(QGuiApplication* self, const char* param1) {
    return self->QGuiApplication::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnMetacast(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_metacast_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGuiApplication_SuperMetacall(QGuiApplication* self, int param1, int param2, void** param3) {
    return self->QGuiApplication::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnMetacall(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_metacall_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QGuiApplication_SuperNotify(QGuiApplication* self, QObject* param1, QEvent* param2) {
    return self->QGuiApplication::notify(param1, param2);
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnNotify(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_notify_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Notify_Callback>(slot);
}

// Base class handler implementation
bool QGuiApplication_SuperEvent(QGuiApplication* self, QEvent* param1) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self)) {
        return vqguiapplication->QGuiApplication::event(param1);
    } else
        qFatal("Error: Protected virtual method QGuiApplication::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnEvent(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_event_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGuiApplication_EventFilter(QGuiApplication* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGuiApplication_SuperEventFilter(QGuiApplication* self, QObject* watched, QEvent* event) {
    return self->QGuiApplication::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnEventFilter(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_eventfilter_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGuiApplication_TimerEvent(QGuiApplication* self, QTimerEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication) {
        vqguiapplication->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGuiApplication::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGuiApplication_SuperTimerEvent(QGuiApplication* self, QTimerEvent* event) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self)) {
        vqguiapplication->QGuiApplication::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGuiApplication::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnTimerEvent(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_timerevent_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGuiApplication_ChildEvent(QGuiApplication* self, QChildEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication) {
        vqguiapplication->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGuiApplication::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGuiApplication_SuperChildEvent(QGuiApplication* self, QChildEvent* event) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self)) {
        vqguiapplication->QGuiApplication::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGuiApplication::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnChildEvent(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_childevent_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGuiApplication_CustomEvent(QGuiApplication* self, QEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication) {
        vqguiapplication->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGuiApplication::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGuiApplication_SuperCustomEvent(QGuiApplication* self, QEvent* event) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self)) {
        vqguiapplication->QGuiApplication::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGuiApplication::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnCustomEvent(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_customevent_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGuiApplication_ConnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication) {
        vqguiapplication->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGuiApplication::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGuiApplication_SuperConnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self)) {
        vqguiapplication->QGuiApplication::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGuiApplication::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnConnectNotify(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_connectnotify_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGuiApplication_DisconnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication) {
        vqguiapplication->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGuiApplication::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGuiApplication_SuperDisconnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self)) {
        vqguiapplication->QGuiApplication::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGuiApplication::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnDisconnectNotify(QGuiApplication* self, intptr_t slot) {
    if (auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self))
        vqguiapplication->qguiapplication_disconnectnotify_callback = reinterpret_cast<VirtualQGuiApplication::QGuiApplication_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision) {
    if (auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self))) {
        return vqguiapplication->VirtualQGuiApplication::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QGuiApplication::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGuiApplication_Sender(const QGuiApplication* self) {
    if (auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self))) {
        return vqguiapplication->VirtualQGuiApplication::sender();
    } else
        qFatal("Error: Protected method QGuiApplication::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGuiApplication_SenderSignalIndex(const QGuiApplication* self) {
    if (auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self))) {
        return vqguiapplication->VirtualQGuiApplication::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGuiApplication::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGuiApplication_Receivers(const QGuiApplication* self, const char* signal) {
    if (auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self))) {
        return vqguiapplication->VirtualQGuiApplication::receivers(signal);
    } else
        qFatal("Error: Protected method QGuiApplication::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGuiApplication_IsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal) {
    if (auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self))) {
        return vqguiapplication->VirtualQGuiApplication::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGuiApplication::isSignalConnected called without a directly constructed type");
}

void QGuiApplication_Delete(QGuiApplication* self) {
    delete self;
}
