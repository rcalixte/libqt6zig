#include <KLocalizedString>
#include <KuitSetup>
#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kuitsetup.h>
#include "libkuitsetup.h"
#include "libkuitsetup.hxx"

KuitSetup* Kuit_SetupForDomain(const libqt_string param1) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    KuitSetup& _ret = Kuit::setupForDomain(param1_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

void KuitSetup_SetTagPattern(KuitSetup* self, const libqt_string tagName, const libqt_list /* of libqt_string */ attribNames, int format, const KLocalizedString* pattern) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    QList<QString> attribNames_QList;
    attribNames_QList.reserve(attribNames.len);
    libqt_string* attribNames_arr = static_cast<libqt_string*>(attribNames.data);
    for (size_t i = 0; i < attribNames.len; ++i) {
        QString attribNames_arr_i_QString = QString::fromUtf8(attribNames_arr[i].data, attribNames_arr[i].len);
        attribNames_QList.push_back(attribNames_arr_i_QString);
    }
    self->setTagPattern(tagName_QString, attribNames_QList, static_cast<Kuit::VisualFormat>(format), *pattern);
}

void KuitSetup_SetTagClass(KuitSetup* self, const libqt_string tagName, int aClass) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    self->setTagClass(tagName_QString, static_cast<Kuit::TagClass>(aClass));
}

void KuitSetup_SetFormatForMarker(KuitSetup* self, const libqt_string marker, int format) {
    QString marker_QString = QString::fromUtf8(marker.data, marker.len);
    self->setFormatForMarker(marker_QString, static_cast<Kuit::VisualFormat>(format));
}

void KuitSetup_Delete(KuitSetup* self) {
    delete self;
}
