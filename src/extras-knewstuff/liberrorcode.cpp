#include <KNSCore/ErrorCode>
#include <QMetaObject>
#include <errorcode.h>
#include "liberrorcode.h"
#include "liberrorcode.hxx"

QMetaObject* KNSCore__ErrorCode_GetEnumMetaObject(int param1) {
    return (QMetaObject*)KNSCore::ErrorCode::qt_getEnumMetaObject(static_cast<KNSCore::ErrorCode::ErrorCode>(param1));
}

const char* KNSCore__ErrorCode_GetEnumName(int param1) {
    return (const char*)KNSCore::ErrorCode::qt_getEnumName(static_cast<KNSCore::ErrorCode::ErrorCode>(param1));
}
