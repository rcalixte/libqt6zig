#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__MimeUtils
#include <QMimeDatabase>
#include <QMimeType>
#include <QString>
#include <mimeutils.h>
#include "libmimeutils.h"
#include "libmimeutils.hxx"

QMimeType* KFileMetaData__MimeUtils_StrictMimeType(const libqt_string filePath, const QMimeDatabase* db) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    return new QMimeType(KFileMetaData::MimeUtils::strictMimeType(filePath_QString, *db));
}
