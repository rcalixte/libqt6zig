#include <qendian.h>
#include "libqendian.h"
#include "libqendian.hxx"

unsigned long long qendian_h_QbswapHelper(unsigned long long source) {
    return static_cast<unsigned long long>(qbswap_helper(static_cast<quint64>(source)));
}

unsigned int qendian_h_QbswapHelper2(unsigned int source) {
    return static_cast<unsigned int>(qbswap_helper(static_cast<quint32>(source)));
}

uint16_t qendian_h_QbswapHelper3(uint16_t source) {
    return static_cast<uint16_t>(qbswap_helper(static_cast<quint16>(source)));
}

unsigned char qendian_h_QbswapHelper4(unsigned char source) {
    return static_cast<unsigned char>(qbswap_helper(static_cast<quint8>(source)));
}
