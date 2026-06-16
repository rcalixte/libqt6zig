#include <KJobWidgets>
#include <QObject>
#include <QWidget>
#include <QWindow>
#include <kjobwidgets.h>
#include "libkjobwidgets.h"
#include "libkjobwidgets.hxx"

void KJobWidgets_SetWindow(QObject* job, QWidget* widget) {
    KJobWidgets::setWindow(job, widget);
}

void KJobWidgets_SetWindowHandle(QObject* job, QWindow* window) {
    KJobWidgets::setWindowHandle(job, window);
}

QWidget* KJobWidgets_Window(QObject* job) {
    return KJobWidgets::window(job);
}

QWindow* KJobWidgets_WindowHandle(QObject* job) {
    return KJobWidgets::windowHandle(job);
}

void KJobWidgets_UpdateUserTimestamp(QObject* job, unsigned long time) {
    KJobWidgets::updateUserTimestamp(job, static_cast<unsigned long>(time));
}

unsigned long KJobWidgets_UserTimestamp(QObject* job) {
    return KJobWidgets::userTimestamp(job);
}
