#include <qbytearrayalgorithms.h>
#include "libqbytearrayalgorithms.h"
#include "libqbytearrayalgorithms.hxx"

const void* qbytearrayalgorithms_h_Qmemrchr(const void* s, int needle, size_t n) {
    return (const void*)qmemrchr(s, static_cast<int>(needle), static_cast<size_t>(n));
}

char* qbytearrayalgorithms_h_Qstrdup(const char* param1) {
    return qstrdup(param1);
}

size_t qbytearrayalgorithms_h_Qstrlen(const char* str) {
    return qstrlen(str);
}

size_t qbytearrayalgorithms_h_Qstrnlen(const char* str, size_t maxlen) {
    return qstrnlen(str, static_cast<size_t>(maxlen));
}

char* qbytearrayalgorithms_h_Qstrcpy(char* dst, const char* src) {
    return qstrcpy(dst, src);
}

char* qbytearrayalgorithms_h_Qstrncpy(char* dst, const char* src, size_t len) {
    return qstrncpy(dst, src, static_cast<size_t>(len));
}

int qbytearrayalgorithms_h_Qstrcmp(const char* str1, const char* str2) {
    return qstrcmp(str1, str2);
}

int qbytearrayalgorithms_h_Qstrncmp(const char* str1, const char* str2, size_t len) {
    return qstrncmp(str1, str2, static_cast<size_t>(len));
}

int qbytearrayalgorithms_h_Qstricmp(const char* param1, const char* param2) {
    return qstricmp(param1, param2);
}

int qbytearrayalgorithms_h_Qstrnicmp(const char* param1, const char* param2, size_t len) {
    return qstrnicmp(param1, param2, static_cast<size_t>(len));
}

int qbytearrayalgorithms_h_Qstrnicmp2(const char* param1, ptrdiff_t param2, const char* param3, ptrdiff_t param4) {
    return qstrnicmp(param1, (qsizetype)(param2), param3, (qsizetype)(param4));
}
