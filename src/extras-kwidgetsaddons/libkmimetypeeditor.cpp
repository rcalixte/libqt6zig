#include <KMimeTypeEditor>
#include <QString>
#include <QWidget>
#include <kmimetypeeditor.h>
#include "libkmimetypeeditor.h"
#include "libkmimetypeeditor.hxx"

void KMimeTypeEditor_EditMimeType(const libqt_string mimeType, QWidget* widget) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    KMimeTypeEditor::editMimeType(mimeType_QString, widget);
}
