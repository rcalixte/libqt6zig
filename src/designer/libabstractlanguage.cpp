#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerLanguageExtension>
#include <QDesignerResourceBrowserInterface>
#include <QDialog>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractlanguage.h>
#include "libabstractlanguage.h"
#include "libabstractlanguage.hxx"

libqt_string QDesignerLanguageExtension_Name(const QDesignerLanguageExtension* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDialog* QDesignerLanguageExtension_CreateFormWindowSettingsDialog(QDesignerLanguageExtension* self, QDesignerFormWindowInterface* formWindow, QWidget* parentWidget) {
    return self->createFormWindowSettingsDialog(formWindow, parentWidget);
}

QDesignerResourceBrowserInterface* QDesignerLanguageExtension_CreateResourceBrowser(QDesignerLanguageExtension* self, QWidget* parentWidget) {
    return self->createResourceBrowser(parentWidget);
}

QDialog* QDesignerLanguageExtension_CreatePromotionDialog(QDesignerLanguageExtension* self, QDesignerFormEditorInterface* formEditor, QWidget* parentWidget) {
    return self->createPromotionDialog(formEditor, parentWidget);
}

bool QDesignerLanguageExtension_IsLanguageResource(const QDesignerLanguageExtension* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->isLanguageResource(path_QString);
}

libqt_string QDesignerLanguageExtension_ClassNameOf(const QDesignerLanguageExtension* self, QObject* object) {
    QString _ret = self->classNameOf(object);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDesignerLanguageExtension_SignalMatchesSlot(const QDesignerLanguageExtension* self, const libqt_string signal, const libqt_string slot) {
    QString signal_QString = QString::fromUtf8(signal.data, signal.len);
    QString slot_QString = QString::fromUtf8(slot.data, slot.len);
    return self->signalMatchesSlot(signal_QString, slot_QString);
}

libqt_string QDesignerLanguageExtension_WidgetBoxContents(const QDesignerLanguageExtension* self) {
    QString _ret = self->widgetBoxContents();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerLanguageExtension_UiExtension(const QDesignerLanguageExtension* self) {
    QString _ret = self->uiExtension();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerLanguageExtension_Delete(QDesignerLanguageExtension* self) {
    delete self;
}
