#include <QChar>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHints>
#include <qstylehints.h>
#include "libqstylehints.h"
#include "libqstylehints.hxx"

QMetaObject* QStyleHints_MetaObject(const QStyleHints* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStyleHints_Metacast(QStyleHints* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStyleHints_Metacall(QStyleHints* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStyleHints_Tr(const char* s) {
    QString _ret = QStyleHints::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStyleHints_SetMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval) {
    self->setMouseDoubleClickInterval(static_cast<int>(mouseDoubleClickInterval));
}

int QStyleHints_MouseDoubleClickInterval(const QStyleHints* self) {
    return self->mouseDoubleClickInterval();
}

int QStyleHints_MouseDoubleClickDistance(const QStyleHints* self) {
    return self->mouseDoubleClickDistance();
}

int QStyleHints_TouchDoubleTapDistance(const QStyleHints* self) {
    return self->touchDoubleTapDistance();
}

void QStyleHints_SetMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval) {
    self->setMousePressAndHoldInterval(static_cast<int>(mousePressAndHoldInterval));
}

int QStyleHints_MousePressAndHoldInterval(const QStyleHints* self) {
    return self->mousePressAndHoldInterval();
}

void QStyleHints_SetStartDragDistance(QStyleHints* self, int startDragDistance) {
    self->setStartDragDistance(static_cast<int>(startDragDistance));
}

int QStyleHints_StartDragDistance(const QStyleHints* self) {
    return self->startDragDistance();
}

void QStyleHints_SetStartDragTime(QStyleHints* self, int startDragTime) {
    self->setStartDragTime(static_cast<int>(startDragTime));
}

int QStyleHints_StartDragTime(const QStyleHints* self) {
    return self->startDragTime();
}

int QStyleHints_StartDragVelocity(const QStyleHints* self) {
    return self->startDragVelocity();
}

void QStyleHints_SetKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval) {
    self->setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QStyleHints_KeyboardInputInterval(const QStyleHints* self) {
    return self->keyboardInputInterval();
}

int QStyleHints_KeyboardAutoRepeatRate(const QStyleHints* self) {
    return self->keyboardAutoRepeatRate();
}

double QStyleHints_KeyboardAutoRepeatRateF(const QStyleHints* self) {
    return static_cast<double>(self->keyboardAutoRepeatRateF());
}

void QStyleHints_SetCursorFlashTime(QStyleHints* self, int cursorFlashTime) {
    self->setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QStyleHints_CursorFlashTime(const QStyleHints* self) {
    return self->cursorFlashTime();
}

bool QStyleHints_ShowIsFullScreen(const QStyleHints* self) {
    return self->showIsFullScreen();
}

bool QStyleHints_ShowIsMaximized(const QStyleHints* self) {
    return self->showIsMaximized();
}

bool QStyleHints_ShowShortcutsInContextMenus(const QStyleHints* self) {
    return self->showShortcutsInContextMenus();
}

void QStyleHints_SetShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus) {
    self->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}

int QStyleHints_ContextMenuTrigger(const QStyleHints* self) {
    return static_cast<int>(self->contextMenuTrigger());
}

void QStyleHints_SetContextMenuTrigger(QStyleHints* self, int contextMenuTrigger) {
    self->setContextMenuTrigger(static_cast<Qt::ContextMenuTrigger>(contextMenuTrigger));
}

int QStyleHints_PasswordMaskDelay(const QStyleHints* self) {
    return self->passwordMaskDelay();
}

QChar* QStyleHints_PasswordMaskCharacter(const QStyleHints* self) {
    return new QChar(self->passwordMaskCharacter());
}

double QStyleHints_FontSmoothingGamma(const QStyleHints* self) {
    return static_cast<double>(self->fontSmoothingGamma());
}

bool QStyleHints_UseRtlExtensions(const QStyleHints* self) {
    return self->useRtlExtensions();
}

bool QStyleHints_SetFocusOnTouchRelease(const QStyleHints* self) {
    return self->setFocusOnTouchRelease();
}

int QStyleHints_TabFocusBehavior(const QStyleHints* self) {
    return static_cast<int>(self->tabFocusBehavior());
}

void QStyleHints_SetTabFocusBehavior(QStyleHints* self, int tabFocusBehavior) {
    self->setTabFocusBehavior(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

bool QStyleHints_SingleClickActivation(const QStyleHints* self) {
    return self->singleClickActivation();
}

bool QStyleHints_UseHoverEffects(const QStyleHints* self) {
    return self->useHoverEffects();
}

void QStyleHints_SetUseHoverEffects(QStyleHints* self, bool useHoverEffects) {
    self->setUseHoverEffects(useHoverEffects);
}

int QStyleHints_WheelScrollLines(const QStyleHints* self) {
    return self->wheelScrollLines();
}

void QStyleHints_SetWheelScrollLines(QStyleHints* self, int scrollLines) {
    self->setWheelScrollLines(static_cast<int>(scrollLines));
}

void QStyleHints_SetMouseQuickSelectionThreshold(QStyleHints* self, int threshold) {
    self->setMouseQuickSelectionThreshold(static_cast<int>(threshold));
}

int QStyleHints_MouseQuickSelectionThreshold(const QStyleHints* self) {
    return self->mouseQuickSelectionThreshold();
}

int QStyleHints_ColorScheme(const QStyleHints* self) {
    return static_cast<int>(self->colorScheme());
}

void QStyleHints_SetColorScheme(QStyleHints* self, int scheme) {
    self->setColorScheme(static_cast<Qt::ColorScheme>(scheme));
}

void QStyleHints_UnsetColorScheme(QStyleHints* self) {
    self->unsetColorScheme();
}

void QStyleHints_CursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime) {
    self->cursorFlashTimeChanged(static_cast<int>(cursorFlashTime));
}

void QStyleHints_Connect_CursorFlashTimeChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::cursorFlashTimeChanged, [self, slotFunc](int cursorFlashTime) {
        int sigval1 = cursorFlashTime;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_KeyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval) {
    self->keyboardInputIntervalChanged(static_cast<int>(keyboardInputInterval));
}

void QStyleHints_Connect_KeyboardInputIntervalChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::keyboardInputIntervalChanged, [self, slotFunc](int keyboardInputInterval) {
        int sigval1 = keyboardInputInterval;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_MouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval) {
    self->mouseDoubleClickIntervalChanged(static_cast<int>(mouseDoubleClickInterval));
}

void QStyleHints_Connect_MouseDoubleClickIntervalChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::mouseDoubleClickIntervalChanged, [self, slotFunc](int mouseDoubleClickInterval) {
        int sigval1 = mouseDoubleClickInterval;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_MousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval) {
    self->mousePressAndHoldIntervalChanged(static_cast<int>(mousePressAndHoldInterval));
}

void QStyleHints_Connect_MousePressAndHoldIntervalChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::mousePressAndHoldIntervalChanged, [self, slotFunc](int mousePressAndHoldInterval) {
        int sigval1 = mousePressAndHoldInterval;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_StartDragDistanceChanged(QStyleHints* self, int startDragDistance) {
    self->startDragDistanceChanged(static_cast<int>(startDragDistance));
}

void QStyleHints_Connect_StartDragDistanceChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::startDragDistanceChanged, [self, slotFunc](int startDragDistance) {
        int sigval1 = startDragDistance;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_StartDragTimeChanged(QStyleHints* self, int startDragTime) {
    self->startDragTimeChanged(static_cast<int>(startDragTime));
}

void QStyleHints_Connect_StartDragTimeChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::startDragTimeChanged, [self, slotFunc](int startDragTime) {
        int sigval1 = startDragTime;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_TabFocusBehaviorChanged(QStyleHints* self, int tabFocusBehavior) {
    self->tabFocusBehaviorChanged(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

void QStyleHints_Connect_TabFocusBehaviorChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::tabFocusBehaviorChanged, [self, slotFunc](Qt::TabFocusBehavior tabFocusBehavior) {
        int sigval1 = static_cast<int>(tabFocusBehavior);
        slotFunc(self, sigval1);
    });
}

void QStyleHints_UseHoverEffectsChanged(QStyleHints* self, bool useHoverEffects) {
    self->useHoverEffectsChanged(useHoverEffects);
}

void QStyleHints_Connect_UseHoverEffectsChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, bool) = reinterpret_cast<void (*)(QStyleHints*, bool)>(slot);
    QStyleHints::connect(self, &QStyleHints::useHoverEffectsChanged, [self, slotFunc](bool useHoverEffects) {
        bool sigval1 = useHoverEffects;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_ShowShortcutsInContextMenusChanged(QStyleHints* self, bool param1) {
    self->showShortcutsInContextMenusChanged(param1);
}

void QStyleHints_Connect_ShowShortcutsInContextMenusChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, bool) = reinterpret_cast<void (*)(QStyleHints*, bool)>(slot);
    QStyleHints::connect(self, &QStyleHints::showShortcutsInContextMenusChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_ContextMenuTriggerChanged(QStyleHints* self, int contextMenuTrigger) {
    self->contextMenuTriggerChanged(static_cast<Qt::ContextMenuTrigger>(contextMenuTrigger));
}

void QStyleHints_Connect_ContextMenuTriggerChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::contextMenuTriggerChanged, [self, slotFunc](Qt::ContextMenuTrigger contextMenuTrigger) {
        int sigval1 = static_cast<int>(contextMenuTrigger);
        slotFunc(self, sigval1);
    });
}

void QStyleHints_WheelScrollLinesChanged(QStyleHints* self, int scrollLines) {
    self->wheelScrollLinesChanged(static_cast<int>(scrollLines));
}

void QStyleHints_Connect_WheelScrollLinesChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::wheelScrollLinesChanged, [self, slotFunc](int scrollLines) {
        int sigval1 = scrollLines;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_MouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold) {
    self->mouseQuickSelectionThresholdChanged(static_cast<int>(threshold));
}

void QStyleHints_Connect_MouseQuickSelectionThresholdChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::mouseQuickSelectionThresholdChanged, [self, slotFunc](int threshold) {
        int sigval1 = threshold;
        slotFunc(self, sigval1);
    });
}

void QStyleHints_ColorSchemeChanged(QStyleHints* self, int colorScheme) {
    self->colorSchemeChanged(static_cast<Qt::ColorScheme>(colorScheme));
}

void QStyleHints_Connect_ColorSchemeChanged(QStyleHints* self, intptr_t slot) {
    void (*slotFunc)(QStyleHints*, int) = reinterpret_cast<void (*)(QStyleHints*, int)>(slot);
    QStyleHints::connect(self, &QStyleHints::colorSchemeChanged, [self, slotFunc](Qt::ColorScheme colorScheme) {
        int sigval1 = static_cast<int>(colorScheme);
        slotFunc(self, sigval1);
    });
}

libqt_string QStyleHints_Tr2(const char* s, const char* c) {
    QString _ret = QStyleHints::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStyleHints_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStyleHints::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStyleHints_Delete(QStyleHints* self) {
    delete self;
}
