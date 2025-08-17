#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPRINTERINFO_H
#define SRC_PRINTSUPPORTC_LIBQPRINTERINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPageSize QPageSize;
typedef struct QPrinter QPrinter;
typedef struct QPrinterInfo QPrinterInfo;
#endif

QPrinterInfo* QPrinterInfo_new();
QPrinterInfo* QPrinterInfo_new2(const QPrinterInfo* other);
QPrinterInfo* QPrinterInfo_new3(const QPrinter* printer);
void QPrinterInfo_OperatorAssign(QPrinterInfo* self, const QPrinterInfo* other);
libqt_string QPrinterInfo_PrinterName(const QPrinterInfo* self);
libqt_string QPrinterInfo_Description(const QPrinterInfo* self);
libqt_string QPrinterInfo_Location(const QPrinterInfo* self);
libqt_string QPrinterInfo_MakeAndModel(const QPrinterInfo* self);
bool QPrinterInfo_IsNull(const QPrinterInfo* self);
bool QPrinterInfo_IsDefault(const QPrinterInfo* self);
bool QPrinterInfo_IsRemote(const QPrinterInfo* self);
int QPrinterInfo_State(const QPrinterInfo* self);
libqt_list /* of QPageSize* */ QPrinterInfo_SupportedPageSizes(const QPrinterInfo* self);
QPageSize* QPrinterInfo_DefaultPageSize(const QPrinterInfo* self);
bool QPrinterInfo_SupportsCustomPageSizes(const QPrinterInfo* self);
QPageSize* QPrinterInfo_MinimumPhysicalPageSize(const QPrinterInfo* self);
QPageSize* QPrinterInfo_MaximumPhysicalPageSize(const QPrinterInfo* self);
libqt_list /* of int */ QPrinterInfo_SupportedResolutions(const QPrinterInfo* self);
int QPrinterInfo_DefaultDuplexMode(const QPrinterInfo* self);
libqt_list /* of int */ QPrinterInfo_SupportedDuplexModes(const QPrinterInfo* self);
int QPrinterInfo_DefaultColorMode(const QPrinterInfo* self);
libqt_list /* of int */ QPrinterInfo_SupportedColorModes(const QPrinterInfo* self);
libqt_list /* of libqt_string */ QPrinterInfo_AvailablePrinterNames();
libqt_list /* of QPrinterInfo* */ QPrinterInfo_AvailablePrinters();
libqt_string QPrinterInfo_DefaultPrinterName();
QPrinterInfo* QPrinterInfo_DefaultPrinter();
QPrinterInfo* QPrinterInfo_PrinterInfo(const libqt_string printerName);
void QPrinterInfo_Delete(QPrinterInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
