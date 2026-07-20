#include <QByteArray>
#include <QByteArrayView>
#include <qbytearrayview.h>
#include "libqbytearrayview.h"
#include "libqbytearrayview.hxx"

ptrdiff_t QByteArrayView_MaxSize2() {
    return static_cast<ptrdiff_t>(QByteArrayView::maxSize());
}
