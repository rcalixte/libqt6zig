#include <QByteArray>
#include <QByteArrayView>
#include <qbytearrayview.h>
#include "libqbytearrayview.h"
#include "libqbytearrayview.hxx"

ptrdiff_t QByteArrayView_MaxSize2() {
    return static_cast<ptrdiff_t>(QByteArrayView::maxSize());
}

uint16_t qbytearrayview_QChecksum(const char* s, ptrdiff_t len, int standard) {
    return static_cast<uint16_t>(qChecksum(s, (qsizetype)(len), static_cast<Qt::ChecksumType>(standard)));
}
