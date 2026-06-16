#include <KPixmapSequence>
#include <KPixmapSequenceLoader>
#include <QString>
#include <kpixmapsequenceloader.h>
#include "libkpixmapsequenceloader.h"
#include "libkpixmapsequenceloader.hxx"

KPixmapSequence* KPixmapSequenceLoader_Load(const libqt_string iconName, int size) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new KPixmapSequence(KPixmapSequenceLoader::load(iconName_QString, static_cast<int>(size)));
}
