#include <KFileItem>
#include <QMimeData>
#include <QString>
#include <paste.h>
#include "libpaste.h"
#include "libpaste.hxx"

bool KIO_CanPasteMimeData(const QMimeData* data) {
    return KIO::canPasteMimeData(data);
}

libqt_string KIO_PasteActionText(const QMimeData* mimeData, bool* enable, const KFileItem* destItem) {
    auto _ret = KIO::pasteActionText(mimeData, enable, *destItem);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO_SetClipboardDataCut(QMimeData* mimeData, bool cut) {
    KIO::setClipboardDataCut(mimeData, cut);
}

bool KIO_IsClipboardDataCut(const QMimeData* mimeData) {
    return KIO::isClipboardDataCut(mimeData);
}
