#include <KJobWindows>
#include <QObject>
#include <QWindow>
#include <kjobwindows.h>
#include "libkjobwindows.h"
#include "libkjobwindows.hxx"

void KJobWindows_SetWindow(QObject* param1, QWindow* param2) {
    KJobWindows::setWindow(param1, param2);
}

QWindow* KJobWindows_Window(QObject* param1) {
    return KJobWindows::window(param1);
}
