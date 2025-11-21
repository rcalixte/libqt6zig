#include <KWindowSystem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <kwindowsystem.h>
#include "libkwindowsystem.h"
#include "libkwindowsystem.hxx"

QMetaObject* KWindowSystem_MetaObject(const KWindowSystem* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWindowSystem_Metacast(KWindowSystem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWindowSystem_Metacall(KWindowSystem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

KWindowSystem* KWindowSystem_Self() {
    return KWindowSystem::self();
}

void KWindowSystem_ActivateWindow(QWindow* window) {
    KWindowSystem::activateWindow(window);
}

bool KWindowSystem_ShowingDesktop() {
    return KWindowSystem::showingDesktop();
}

void KWindowSystem_SetShowingDesktop(bool showing) {
    KWindowSystem::setShowingDesktop(showing);
}

void KWindowSystem_SetMainWindow(QWindow* subwindow, uintptr_t mainwindow) {
    KWindowSystem::setMainWindow(subwindow, static_cast<WId>(mainwindow));
}

void KWindowSystem_SetMainWindow2(QWindow* subwindow, const libqt_string mainwindow) {
    QString mainwindow_QString = QString::fromUtf8(mainwindow.data, mainwindow.len);
    KWindowSystem::setMainWindow(subwindow, mainwindow_QString);
}

void KWindowSystem_UpdateStartupId(QWindow* window) {
    KWindowSystem::updateStartupId(window);
}

int KWindowSystem_Platform() {
    return static_cast<int>(KWindowSystem::platform());
}

bool KWindowSystem_IsPlatformX11() {
    return KWindowSystem::isPlatformX11();
}

bool KWindowSystem_IsPlatformWayland() {
    return KWindowSystem::isPlatformWayland();
}

void KWindowSystem_SetCurrentXdgActivationToken(const libqt_string token) {
    QString token_QString = QString::fromUtf8(token.data, token.len);
    KWindowSystem::setCurrentXdgActivationToken(token_QString);
}

void KWindowSystem_ShowingDesktopChanged(KWindowSystem* self, bool showing) {
    self->showingDesktopChanged(showing);
}

void KWindowSystem_Connect_ShowingDesktopChanged(KWindowSystem* self, intptr_t slot) {
    void (*slotFunc)(KWindowSystem*, bool) = reinterpret_cast<void (*)(KWindowSystem*, bool)>(slot);
    KWindowSystem::connect(self, &KWindowSystem::showingDesktopChanged, [self, slotFunc](bool showing) {
        bool sigval1 = showing;
        slotFunc(self, sigval1);
    });
}

void KWindowSystem_ActivateWindow2(QWindow* window, long time) {
    KWindowSystem::activateWindow(window, static_cast<long>(time));
}

void KWindowSystem_Delete(KWindowSystem* self) {
    delete self;
}
