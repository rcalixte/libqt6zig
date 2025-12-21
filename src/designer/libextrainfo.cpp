#include <QDesignerExtraInfoExtension>
#include <QDesignerFormEditorInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <extrainfo.h>
#include "libextrainfo.h"
#include "libextrainfo.hxx"

QDesignerFormEditorInterface* QDesignerExtraInfoExtension_Core(const QDesignerExtraInfoExtension* self) {
    return self->core();
}

QWidget* QDesignerExtraInfoExtension_Widget(const QDesignerExtraInfoExtension* self) {
    return self->widget();
}

libqt_string QDesignerExtraInfoExtension_WorkingDirectory(const QDesignerExtraInfoExtension* self) {
    QString _ret = self->workingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerExtraInfoExtension_SetWorkingDirectory(QDesignerExtraInfoExtension* self, const libqt_string workingDirectory) {
    QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
    self->setWorkingDirectory(workingDirectory_QString);
}

void QDesignerExtraInfoExtension_Delete(QDesignerExtraInfoExtension* self) {
    delete self;
}
