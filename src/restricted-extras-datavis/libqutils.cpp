#include <QSurfaceFormat>
#include <qutils.h>
#include "libqutils.h"
#include "libqutils.hxx"

QSurfaceFormat* qutils_h_QDefaultSurfaceFormat(bool antialias) {
    return new QSurfaceFormat(qDefaultSurfaceFormat(antialias));
}
