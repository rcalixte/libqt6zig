#include <qalgorithms.h>
#include "libqalgorithms.h"
#include "libqalgorithms.hxx"

unsigned int qalgorithms_QPopulationCount(unsigned int v) {
    return static_cast<unsigned int>(qPopulationCount(static_cast<quint32>(v)));
}

unsigned int qalgorithms_QPopulationCount2(unsigned char v) {
    return static_cast<unsigned int>(qPopulationCount(static_cast<quint8>(v)));
}

unsigned int qalgorithms_QPopulationCount3(uint16_t v) {
    return static_cast<unsigned int>(qPopulationCount(static_cast<quint16>(v)));
}

unsigned int qalgorithms_QPopulationCount4(unsigned long long v) {
    return static_cast<unsigned int>(qPopulationCount(static_cast<quint64>(v)));
}

unsigned int qalgorithms_QPopulationCount5(unsigned long v) {
    return static_cast<unsigned int>(qPopulationCount(static_cast<unsigned long>(v)));
}

unsigned int qalgorithms_QCountTrailingZeroBits(unsigned int v) {
    return static_cast<unsigned int>(qCountTrailingZeroBits(static_cast<quint32>(v)));
}

unsigned int qalgorithms_QCountTrailingZeroBits2(unsigned char v) {
    return static_cast<unsigned int>(qCountTrailingZeroBits(static_cast<quint8>(v)));
}

unsigned int qalgorithms_QCountTrailingZeroBits3(uint16_t v) {
    return static_cast<unsigned int>(qCountTrailingZeroBits(static_cast<quint16>(v)));
}

unsigned int qalgorithms_QCountTrailingZeroBits4(unsigned long long v) {
    return static_cast<unsigned int>(qCountTrailingZeroBits(static_cast<quint64>(v)));
}

unsigned int qalgorithms_QCountTrailingZeroBits5(unsigned long v) {
    return static_cast<unsigned int>(qCountTrailingZeroBits(static_cast<unsigned long>(v)));
}

unsigned int qalgorithms_QCountLeadingZeroBits(unsigned int v) {
    return static_cast<unsigned int>(qCountLeadingZeroBits(static_cast<quint32>(v)));
}

unsigned int qalgorithms_QCountLeadingZeroBits2(unsigned char v) {
    return static_cast<unsigned int>(qCountLeadingZeroBits(static_cast<quint8>(v)));
}

unsigned int qalgorithms_QCountLeadingZeroBits3(uint16_t v) {
    return static_cast<unsigned int>(qCountLeadingZeroBits(static_cast<quint16>(v)));
}

unsigned int qalgorithms_QCountLeadingZeroBits4(unsigned long long v) {
    return static_cast<unsigned int>(qCountLeadingZeroBits(static_cast<quint64>(v)));
}

unsigned int qalgorithms_QCountLeadingZeroBits5(unsigned long v) {
    return static_cast<unsigned int>(qCountLeadingZeroBits(static_cast<unsigned long>(v)));
}
