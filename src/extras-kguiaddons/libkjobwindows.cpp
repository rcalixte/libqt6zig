#include <KJobWindows>
#include <QObject>
#include <QWindow>
#include <kjobwindows.h>
#include "libkjobwindows.h"
#include "libkjobwindows.hxx"

void KJobWindows_SetWindow(QObject* job, QWindow* window) {
    KJobWindows::setWindow(job, window);
}

QWindow* KJobWindows_Window(QObject* job) {
    return KJobWindows::window(job);
}
