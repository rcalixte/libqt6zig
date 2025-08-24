#include <KPixmapSequence>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kpixmapsequence.h>
#include "libkpixmapsequence.h"
#include "libkpixmapsequence.hxx"

KPixmapSequence* KPixmapSequence_new() {
    return new KPixmapSequence();
}

KPixmapSequence* KPixmapSequence_new2(const KPixmapSequence* other) {
    return new KPixmapSequence(*other);
}

KPixmapSequence* KPixmapSequence_new3(const QPixmap* pixmap) {
    return new KPixmapSequence(*pixmap);
}

KPixmapSequence* KPixmapSequence_new4(const libqt_string fullPath, int size) {
    QString fullPath_QString = QString::fromUtf8(fullPath.data, fullPath.len);
    return new KPixmapSequence(fullPath_QString, static_cast<int>(size));
}

KPixmapSequence* KPixmapSequence_new5(const QPixmap* pixmap, const QSize* frameSize) {
    return new KPixmapSequence(*pixmap, *frameSize);
}

void KPixmapSequence_OperatorAssign(KPixmapSequence* self, const KPixmapSequence* other) {
    self->operator=(*other);
}

bool KPixmapSequence_IsValid(const KPixmapSequence* self) {
    return self->isValid();
}

bool KPixmapSequence_IsEmpty(const KPixmapSequence* self) {
    return self->isEmpty();
}

QSize* KPixmapSequence_FrameSize(const KPixmapSequence* self) {
    return new QSize(self->frameSize());
}

int KPixmapSequence_FrameCount(const KPixmapSequence* self) {
    return self->frameCount();
}

QPixmap* KPixmapSequence_FrameAt(const KPixmapSequence* self, int index) {
    return new QPixmap(self->frameAt(static_cast<int>(index)));
}

void KPixmapSequence_Delete(KPixmapSequence* self) {
    delete self;
}
