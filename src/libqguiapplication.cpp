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
#include <QByteArray>
#include <cstring>
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
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGuiApplication*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGuiApplication_OnMetacall(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Metacall_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGuiApplication_QBaseMetacall(QGuiApplication* self, int param1, int param2, void** param3) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Metacall_IsBase(true);
        return vqguiapplication->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGuiApplication*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGuiApplication_Tr(const char* s) {
    QString _ret = QGuiApplication::tr(s);
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
    QString _ret = QGuiApplication::applicationDisplayName();
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
    QString _ret = QGuiApplication::desktopFileName();
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
    QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.size()));
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
    QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.size()));
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
    QString _ret = QGuiApplication::platformName();
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
    QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.size()));
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

bool QGuiApplication_IsSessionRestored(const QGuiApplication* self) {
    return self->isSessionRestored();
}

libqt_string QGuiApplication_SessionId(const QGuiApplication* self) {
    QString _ret = self->sessionId();
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
    QString _ret = self->sessionKey();
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
    QGuiApplication::connect(self, &QGuiApplication::fontDatabaseChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen) {
    self->screenAdded(screen);
}

void QGuiApplication_Connect_ScreenAdded(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::screenAdded, [self, slotFunc](QScreen* screen) {
        QScreen* sigval1 = screen;
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen) {
    self->screenRemoved(screen);
}

void QGuiApplication_Connect_ScreenRemoved(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::screenRemoved, [self, slotFunc](QScreen* screen) {
        QScreen* sigval1 = screen;
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen) {
    self->primaryScreenChanged(screen);
}

void QGuiApplication_Connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::primaryScreenChanged, [self, slotFunc](QScreen* screen) {
        QScreen* sigval1 = screen;
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_LastWindowClosed(QGuiApplication* self) {
    self->lastWindowClosed();
}

void QGuiApplication_Connect_LastWindowClosed(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::lastWindowClosed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject) {
    self->focusObjectChanged(focusObject);
}

void QGuiApplication_Connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QObject*) = reinterpret_cast<void (*)(QGuiApplication*, QObject*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::focusObjectChanged, [self, slotFunc](QObject* focusObject) {
        QObject* sigval1 = focusObject;
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
    self->focusWindowChanged(focusWindow);
}

void QGuiApplication_Connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QWindow*) = reinterpret_cast<void (*)(QGuiApplication*, QWindow*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::focusWindowChanged, [self, slotFunc](QWindow* focusWindow) {
        QWindow* sigval1 = focusWindow;
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state) {
    self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_Connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, int) = reinterpret_cast<void (*)(QGuiApplication*, int)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::applicationStateChanged, [self, slotFunc](Qt::ApplicationState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction) {
    self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_Connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, int) = reinterpret_cast<void (*)(QGuiApplication*, int)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::layoutDirectionChanged, [self, slotFunc](Qt::LayoutDirection direction) {
        int sigval1 = static_cast<int>(direction);
        slotFunc(self, sigval1);
    });
}

void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
    self->commitDataRequest(*sessionManager);
}

void QGuiApplication_Connect_CommitDataRequest(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QSessionManager*) = reinterpret_cast<void (*)(QGuiApplication*, QSessionManager*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::commitDataRequest, [self, slotFunc](QSessionManager& sessionManager) {
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
    QGuiApplication::connect(self, &QGuiApplication::saveStateRequest, [self, slotFunc](QSessionManager& sessionManager) {
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
    QGuiApplication::connect(self, &QGuiApplication::applicationDisplayNameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGuiApplication_PaletteChanged(QGuiApplication* self, const QPalette* pal) {
    self->paletteChanged(*pal);
}

void QGuiApplication_Connect_PaletteChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QPalette*) = reinterpret_cast<void (*)(QGuiApplication*, QPalette*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::paletteChanged, [self, slotFunc](const QPalette& pal) {
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
    QGuiApplication::connect(self, &QGuiApplication::fontChanged, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QGuiApplication_Tr2(const char* s, const char* c) {
    QString _ret = QGuiApplication::tr(s, c);
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
    QString _ret = QGuiApplication::tr(s, c, static_cast<int>(n));
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
bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->notify(param1, param2);
    } else {
        return self->QGuiApplication::notify(param1, param2);
    }
}

// Base class handler implementation
bool QGuiApplication_QBaseNotify(QGuiApplication* self, QObject* param1, QEvent* param2) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Notify_IsBase(true);
        return vqguiapplication->notify(param1, param2);
    } else {
        return self->QGuiApplication::notify(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnNotify(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Notify_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Notify_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->event(param1);
    } else {
        return ((VirtualQGuiApplication*)self)->event(param1);
    }
}

// Base class handler implementation
bool QGuiApplication_QBaseEvent(QGuiApplication* self, QEvent* param1) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Event_IsBase(true);
        return vqguiapplication->event(param1);
    } else {
        return ((VirtualQGuiApplication*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnEvent(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Event_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGuiApplication_EventFilter(QGuiApplication* self, QObject* watched, QEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->eventFilter(watched, event);
    } else {
        return self->QGuiApplication::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGuiApplication_QBaseEventFilter(QGuiApplication* self, QObject* watched, QEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_EventFilter_IsBase(true);
        return vqguiapplication->eventFilter(watched, event);
    } else {
        return self->QGuiApplication::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnEventFilter(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_EventFilter_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGuiApplication_TimerEvent(QGuiApplication* self, QTimerEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->timerEvent(event);
    } else {
        ((VirtualQGuiApplication*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGuiApplication_QBaseTimerEvent(QGuiApplication* self, QTimerEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_TimerEvent_IsBase(true);
        vqguiapplication->timerEvent(event);
    } else {
        ((VirtualQGuiApplication*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnTimerEvent(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_TimerEvent_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGuiApplication_ChildEvent(QGuiApplication* self, QChildEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->childEvent(event);
    } else {
        ((VirtualQGuiApplication*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGuiApplication_QBaseChildEvent(QGuiApplication* self, QChildEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_ChildEvent_IsBase(true);
        vqguiapplication->childEvent(event);
    } else {
        ((VirtualQGuiApplication*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnChildEvent(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_ChildEvent_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGuiApplication_CustomEvent(QGuiApplication* self, QEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->customEvent(event);
    } else {
        ((VirtualQGuiApplication*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGuiApplication_QBaseCustomEvent(QGuiApplication* self, QEvent* event) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_CustomEvent_IsBase(true);
        vqguiapplication->customEvent(event);
    } else {
        ((VirtualQGuiApplication*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnCustomEvent(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_CustomEvent_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGuiApplication_ConnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->connectNotify(*signal);
    } else {
        ((VirtualQGuiApplication*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGuiApplication_QBaseConnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_ConnectNotify_IsBase(true);
        vqguiapplication->connectNotify(*signal);
    } else {
        ((VirtualQGuiApplication*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnConnectNotify(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_ConnectNotify_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGuiApplication_DisconnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->disconnectNotify(*signal);
    } else {
        ((VirtualQGuiApplication*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGuiApplication_QBaseDisconnectNotify(QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_DisconnectNotify_IsBase(true);
        vqguiapplication->disconnectNotify(*signal);
    } else {
        ((VirtualQGuiApplication*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnDisconnectNotify(QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_DisconnectNotify_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQGuiApplication*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QGuiApplication_QBaseResolveInterface(const QGuiApplication* self, const char* name, int revision) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_ResolveInterface_IsBase(true);
        return vqguiapplication->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQGuiApplication*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnResolveInterface(const QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_ResolveInterface_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGuiApplication_Sender(const QGuiApplication* self) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->sender();
    } else {
        return ((VirtualQGuiApplication*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGuiApplication_QBaseSender(const QGuiApplication* self) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Sender_IsBase(true);
        return vqguiapplication->sender();
    } else {
        return ((VirtualQGuiApplication*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnSender(const QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Sender_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGuiApplication_SenderSignalIndex(const QGuiApplication* self) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->senderSignalIndex();
    } else {
        return ((VirtualQGuiApplication*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGuiApplication_QBaseSenderSignalIndex(const QGuiApplication* self) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_SenderSignalIndex_IsBase(true);
        return vqguiapplication->senderSignalIndex();
    } else {
        return ((VirtualQGuiApplication*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnSenderSignalIndex(const QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGuiApplication_Receivers(const QGuiApplication* self, const char* signal) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->receivers(signal);
    } else {
        return ((VirtualQGuiApplication*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGuiApplication_QBaseReceivers(const QGuiApplication* self, const char* signal) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Receivers_IsBase(true);
        return vqguiapplication->receivers(signal);
    } else {
        return ((VirtualQGuiApplication*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnReceivers(const QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_Receivers_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGuiApplication_IsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        return vqguiapplication->isSignalConnected(*signal);
    } else {
        return ((VirtualQGuiApplication*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGuiApplication_QBaseIsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_IsSignalConnected_IsBase(true);
        return vqguiapplication->isSignalConnected(*signal);
    } else {
        return ((VirtualQGuiApplication*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnIsSignalConnected(const QGuiApplication* self, intptr_t slot) {
    auto* vqguiapplication = const_cast<VirtualQGuiApplication*>(dynamic_cast<const VirtualQGuiApplication*>(self));
    if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
        vqguiapplication->setQGuiApplication_IsSignalConnected_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_IsSignalConnected_Callback>(slot));
    }
}

void QGuiApplication_Delete(QGuiApplication* self) {
    delete self;
}
