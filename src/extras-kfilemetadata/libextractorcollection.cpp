#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__Extractor
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractorCollection
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <extractorcollection.h>
#include "libextractorcollection.h"
#include "libextractorcollection.hxx"

KFileMetaData__ExtractorCollection* KFileMetaData__ExtractorCollection_new() {
    return new KFileMetaData::ExtractorCollection();
}

libqt_list /* of KFileMetaData__Extractor* */ KFileMetaData__ExtractorCollection_FetchExtractors(const KFileMetaData__ExtractorCollection* self, const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    QList<KFileMetaData::Extractor*> _ret = self->fetchExtractors(mimetype_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KFileMetaData__Extractor** _arr = static_cast<KFileMetaData__Extractor**>(malloc(sizeof(KFileMetaData__Extractor*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileMetaData__ExtractorCollection_Delete(KFileMetaData__ExtractorCollection* self) {
    delete self;
}
