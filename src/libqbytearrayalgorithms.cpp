#include <QByteArrayView>
#include <qbytearrayalgorithms.h>
#include "libqbytearrayalgorithms.h"
#include "libqbytearrayalgorithms.hxx"

const void* qbytearrayalgorithms_Qmemrchr(const void* s, int needle, size_t n) {
    return (const void*)qmemrchr(s, static_cast<int>(needle), static_cast<size_t>(n));
}

char* qbytearrayalgorithms_Qstrdup(const char* param1) {
    return qstrdup(param1);
}

size_t qbytearrayalgorithms_Qstrlen(const char* str) {
    return qstrlen(str);
}

size_t qbytearrayalgorithms_Qstrnlen(const char* str, size_t maxlen) {
    return qstrnlen(str, static_cast<size_t>(maxlen));
}

char* qbytearrayalgorithms_Qstrcpy(char* dst, const char* src) {
    return qstrcpy(dst, src);
}

char* qbytearrayalgorithms_Qstrncpy(char* dst, const char* src, size_t len) {
    return qstrncpy(dst, src, static_cast<size_t>(len));
}

int qbytearrayalgorithms_Qstrcmp(const char* str1, const char* str2) {
    return qstrcmp(str1, str2);
}

int qbytearrayalgorithms_Qstrncmp(const char* str1, const char* str2, size_t len) {
    return qstrncmp(str1, str2, static_cast<size_t>(len));
}

int qbytearrayalgorithms_Qstricmp(const char* param1, const char* param2) {
    return qstricmp(param1, param2);
}

int qbytearrayalgorithms_Qstrnicmp(const char* param1, const char* param2, size_t len) {
    return qstrnicmp(param1, param2, static_cast<size_t>(len));
}

int qbytearrayalgorithms_Qstrnicmp2(const char* param1, ptrdiff_t param2, const char* param3, ptrdiff_t param4) {
    return qstrnicmp(param1, (qsizetype)(param2), param3, (qsizetype)(param4));
}

uint16_t qbytearrayalgorithms_QChecksum(libqt_string data, int standard) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return static_cast<uint16_t>(qChecksum(data_QByteArrayView, static_cast<Qt::ChecksumType>(standard)));
}
