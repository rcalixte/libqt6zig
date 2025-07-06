#include <QList>
#include <QPageSize>
#include <QPrinter>
#include <QPrinterInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinterinfo.h>
#include "libqprinterinfo.h"
#include "libqprinterinfo.hxx"

QPrinterInfo* QPrinterInfo_new() {
    return new QPrinterInfo();
}

QPrinterInfo* QPrinterInfo_new2(const QPrinterInfo* other) {
    return new QPrinterInfo(*other);
}

QPrinterInfo* QPrinterInfo_new3(const QPrinter* printer) {
    return new QPrinterInfo(*printer);
}

void QPrinterInfo_OperatorAssign(QPrinterInfo* self, const QPrinterInfo* other) {
    self->operator=(*other);
}

libqt_string QPrinterInfo_PrinterName(const QPrinterInfo* self) {
    QString _ret = self->printerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrinterInfo_Description(const QPrinterInfo* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrinterInfo_Location(const QPrinterInfo* self) {
    QString _ret = self->location();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrinterInfo_MakeAndModel(const QPrinterInfo* self) {
    QString _ret = self->makeAndModel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPrinterInfo_IsNull(const QPrinterInfo* self) {
    return self->isNull();
}

bool QPrinterInfo_IsDefault(const QPrinterInfo* self) {
    return self->isDefault();
}

bool QPrinterInfo_IsRemote(const QPrinterInfo* self) {
    return self->isRemote();
}

int QPrinterInfo_State(const QPrinterInfo* self) {
    return static_cast<int>(self->state());
}

libqt_list /* of QPageSize* */ QPrinterInfo_SupportedPageSizes(const QPrinterInfo* self) {
    QList<QPageSize> _ret = self->supportedPageSizes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPageSize** _arr = static_cast<QPageSize**>(malloc(sizeof(QPageSize*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPageSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPageSize* QPrinterInfo_DefaultPageSize(const QPrinterInfo* self) {
    return new QPageSize(self->defaultPageSize());
}

bool QPrinterInfo_SupportsCustomPageSizes(const QPrinterInfo* self) {
    return self->supportsCustomPageSizes();
}

QPageSize* QPrinterInfo_MinimumPhysicalPageSize(const QPrinterInfo* self) {
    return new QPageSize(self->minimumPhysicalPageSize());
}

QPageSize* QPrinterInfo_MaximumPhysicalPageSize(const QPrinterInfo* self) {
    return new QPageSize(self->maximumPhysicalPageSize());
}

libqt_list /* of int */ QPrinterInfo_SupportedResolutions(const QPrinterInfo* self) {
    QList<int> _ret = self->supportedResolutions();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QPrinterInfo_DefaultDuplexMode(const QPrinterInfo* self) {
    return static_cast<int>(self->defaultDuplexMode());
}

libqt_list /* of int */ QPrinterInfo_SupportedDuplexModes(const QPrinterInfo* self) {
    QList<QPrinter::DuplexMode> _ret = self->supportedDuplexModes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QPrinterInfo_DefaultColorMode(const QPrinterInfo* self) {
    return static_cast<int>(self->defaultColorMode());
}

libqt_list /* of int */ QPrinterInfo_SupportedColorModes(const QPrinterInfo* self) {
    QList<QPrinter::ColorMode> _ret = self->supportedColorModes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QPrinterInfo_AvailablePrinterNames() {
    QList<QString> _ret = QPrinterInfo::availablePrinterNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QPrinterInfo* */ QPrinterInfo_AvailablePrinters() {
    QList<QPrinterInfo> _ret = QPrinterInfo::availablePrinters();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPrinterInfo** _arr = static_cast<QPrinterInfo**>(malloc(sizeof(QPrinterInfo*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPrinterInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QPrinterInfo_DefaultPrinterName() {
    QString _ret = QPrinterInfo::defaultPrinterName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPrinterInfo* QPrinterInfo_DefaultPrinter() {
    return new QPrinterInfo(QPrinterInfo::defaultPrinter());
}

QPrinterInfo* QPrinterInfo_PrinterInfo(const libqt_string printerName) {
    QString printerName_QString = QString::fromUtf8(printerName.data, printerName.len);
    return new QPrinterInfo(QPrinterInfo::printerInfo(printerName_QString));
}

void QPrinterInfo_Delete(QPrinterInfo* self) {
    delete self;
}
