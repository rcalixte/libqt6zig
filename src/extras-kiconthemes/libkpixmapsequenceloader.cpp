#include <KPixmapSequence>
#include <KPixmapSequenceLoader>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kpixmapsequenceloader.h>
#include "libkpixmapsequenceloader.h"
#include "libkpixmapsequenceloader.hxx"

KPixmapSequence* KPixmapSequenceLoader_Load(const libqt_string param1, int param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new KPixmapSequence(KPixmapSequenceLoader::load(param1_QString, static_cast<int>(param2)));
}
