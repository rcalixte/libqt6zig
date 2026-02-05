#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriteData
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Writer
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <writer.h>
#include "libwriter.h"
#include "libwriter.hxx"

void KFileMetaData__Writer_Write(KFileMetaData__Writer* self, const KFileMetaData__WriteData* data) {
    self->write(*data);
}

libqt_list /* of libqt_string */ KFileMetaData__Writer_Mimetypes(const KFileMetaData__Writer* self) {
    QList<QString> _ret = self->mimetypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileMetaData__Writer_Delete(KFileMetaData__Writer* self) {
    delete self;
}
