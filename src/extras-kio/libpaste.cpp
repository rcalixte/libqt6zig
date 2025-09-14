#include <KFileItem>
#include <QMimeData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <paste.h>
#include "libpaste.h"
#include "libpaste.hxx"

bool KIO_CanPasteMimeData(const QMimeData* param1) {
    return KIO::canPasteMimeData(param1);
}

libqt_string KIO_PasteActionText(const QMimeData* param1, bool* param2, const KFileItem* param3) {
    QString _ret = KIO::pasteActionText(param1, param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO_SetClipboardDataCut(QMimeData* param1, bool param2) {
    KIO::setClipboardDataCut(param1, param2);
}

bool KIO_IsClipboardDataCut(const QMimeData* param1) {
    return KIO::isClipboardDataCut(param1);
}
