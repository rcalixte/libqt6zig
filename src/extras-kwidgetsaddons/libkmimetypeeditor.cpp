#include <KMimeTypeEditor>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kmimetypeeditor.h>
#include "libkmimetypeeditor.h"
#include "libkmimetypeeditor.hxx"

void KMimeTypeEditor_EditMimeType(const libqt_string param1, QWidget* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    KMimeTypeEditor::editMimeType(param1_QString, param2);
}
