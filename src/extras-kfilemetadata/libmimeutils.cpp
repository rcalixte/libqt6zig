#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__MimeUtils
#include <QMimeDatabase>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <mimeutils.h>
#include "libmimeutils.h"
#include "libmimeutils.hxx"

QMimeType* KFileMetaData__MimeUtils_StrictMimeType(const libqt_string param1, const QMimeDatabase* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new QMimeType(KFileMetaData::MimeUtils::strictMimeType(param1_QString, *param2));
}
