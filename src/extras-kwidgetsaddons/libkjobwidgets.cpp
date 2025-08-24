#include <KJobWidgets>
#include <QObject>
#include <QWidget>
#include <QWindow>
#include <kjobwidgets.h>
#include "libkjobwidgets.h"
#include "libkjobwidgets.hxx"

void KJobWidgets_SetWindow(QObject* param1, QWidget* param2) {
    KJobWidgets::setWindow(param1, param2);
}

void KJobWidgets_SetWindowHandle(QObject* param1, QWindow* param2) {
    KJobWidgets::setWindowHandle(param1, param2);
}

QWidget* KJobWidgets_Window(QObject* param1) {
    return KJobWidgets::window(param1);
}

QWindow* KJobWidgets_WindowHandle(QObject* param1) {
    return KJobWidgets::windowHandle(param1);
}

void KJobWidgets_UpdateUserTimestamp(QObject* param1, unsigned long param2) {
    KJobWidgets::updateUserTimestamp(param1, static_cast<unsigned long>(param2));
}

unsigned long KJobWidgets_UserTimestamp(QObject* param1) {
    return KJobWidgets::userTimestamp(param1);
}
