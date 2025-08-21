#include <QMetaObject>
#include <qtvideo.h>
#include "libqtvideo.h"
#include "libqtvideo.hxx"

QMetaObject* QtVideo_GetEnumMetaObject(int param1) {
    return (QMetaObject*)QtVideo::qt_getEnumMetaObject(static_cast<QtVideo::Rotation>(param1));
}

const char* QtVideo_GetEnumName(int param1) {
    return (const char*)QtVideo::qt_getEnumName(static_cast<QtVideo::Rotation>(param1));
}
