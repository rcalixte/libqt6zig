#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Writer
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriterCollection
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <writercollection.h>
#include "libwritercollection.h"
#include "libwritercollection.hxx"

KFileMetaData__WriterCollection* KFileMetaData__WriterCollection_new() {
    return new KFileMetaData::WriterCollection();
}

libqt_list /* of KFileMetaData__Writer* */ KFileMetaData__WriterCollection_FetchWriters(const KFileMetaData__WriterCollection* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    QList<KFileMetaData::Writer*> _ret = self->fetchWriters(mimetype_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KFileMetaData__Writer** _arr = static_cast<KFileMetaData__Writer**>(malloc(sizeof(KFileMetaData__Writer*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileMetaData__WriterCollection_Delete(KFileMetaData__WriterCollection* self) {
    delete self;
}
