const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMarginsF = @import("libqt6").QMarginsF;
const QPageLayout = @import("libqt6").QPageLayout;
const QPageRanges = @import("libqt6").QPageRanges;
const QPageSize = @import("libqt6").QPageSize;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QPrintEngine = @import("libqt6").QPrintEngine;
const QPrinterInfo = @import("libqt6").QPrinterInfo;
const QRectF = @import("libqt6").QRectF;
const qpagedpaintdevice_enums = @import("../libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("../libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprinter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html)
pub const QPrinter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPrinter,

    pub const _is_QPrinter = {};
    pub const _is_QPagedPaintDevice = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPrinter object in C++ memory
    ///
    pub fn new() QPrinter {
        return .{ .ptr = qtc.QPrinter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPrinter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QPrinterInfo `
    ///
    pub fn new2(printer: anytype) QPrinter {
        comptime _ = @TypeOf(printer)._is_QPrinterInfo;
        return .{ .ptr = qtc.QPrinter_new2(@ptrCast(printer.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPrinter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn new3(mode: i32) QPrinter {
        return .{ .ptr = qtc.QPrinter_new3(@bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPrinter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QPrinterInfo `
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn new4(printer: anytype, mode: i32) QPrinter {
        comptime _ = @TypeOf(printer)._is_QPrinterInfo;
        return .{ .ptr = qtc.QPrinter_new4(@ptrCast(printer.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn devType(self: QPrinter) i32 {
        return qtc.QPrinter_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QPrinter, callback: *const fn () callconv(.c) i32) void {
        qtc.QPrinter_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn superDevType(self: QPrinter) i32 {
        return qtc.QPrinter_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOutputFormat` instead
    ///
    pub const SetOutputFormat = setOutputFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` format: qprinter_enums.OutputFormat `
    ///
    pub fn setOutputFormat(self: QPrinter, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `outputFormat` instead
    ///
    pub const OutputFormat = outputFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.OutputFormat `
    ///
    pub fn outputFormat(self: QPrinter) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPdfVersion` instead
    ///
    pub const SetPdfVersion = setPdfVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` version: qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn setPdfVersion(self: QPrinter, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// ### DEPRECATED: Use `pdfVersion` instead
    ///
    pub const PdfVersion = pdfVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn pdfVersion(self: QPrinter) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrinterName` instead
    ///
    pub const SetPrinterName = setPrinterName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _printerName: []const u8 `
    ///
    pub fn setPrinterName(self: QPrinter, _printerName: []const u8) void {
        const printerName_str = qtc.libqt_string{
            .len = _printerName.len,
            .data = _printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self.ptr), printerName_str);
    }

    /// ### DEPRECATED: Use `printerName` instead
    ///
    pub const PrinterName = printerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn printerName(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinter.printerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn isValid(self: QPrinter) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOutputFileName` instead
    ///
    pub const SetOutputFileName = setOutputFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _outputFileName: []const u8 `
    ///
    pub fn setOutputFileName(self: QPrinter, _outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = _outputFileName.len,
            .data = _outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### DEPRECATED: Use `outputFileName` instead
    ///
    pub const OutputFileName = outputFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn outputFileName(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_OutputFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinter.outputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrintProgram` instead
    ///
    pub const SetPrintProgram = setPrintProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _printProgram: []const u8 `
    ///
    pub fn setPrintProgram(self: QPrinter, _printProgram: []const u8) void {
        const printProgram_str = qtc.libqt_string{
            .len = _printProgram.len,
            .data = _printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self.ptr), printProgram_str);
    }

    /// ### DEPRECATED: Use `printProgram` instead
    ///
    pub const PrintProgram = printProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn printProgram(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrintProgram(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinter.printProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocName` instead
    ///
    pub const SetDocName = setDocName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _docName: []const u8 `
    ///
    pub fn setDocName(self: QPrinter, _docName: []const u8) void {
        const docName_str = qtc.libqt_string{
            .len = _docName.len,
            .data = _docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self.ptr), docName_str);
    }

    /// ### DEPRECATED: Use `docName` instead
    ///
    pub const DocName = docName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn docName(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_DocName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinter.docName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCreator` instead
    ///
    pub const SetCreator = setCreator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _creator: []const u8 `
    ///
    pub fn setCreator(self: QPrinter, _creator: []const u8) void {
        const creator_str = qtc.libqt_string{
            .len = _creator.len,
            .data = _creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self.ptr), creator_str);
    }

    /// ### DEPRECATED: Use `creator` instead
    ///
    pub const Creator = creator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn creator(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_Creator(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinter.creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPageOrder` instead
    ///
    pub const SetPageOrder = setPageOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _pageOrder: qprinter_enums.PageOrder `
    ///
    pub fn setPageOrder(self: QPrinter, _pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self.ptr), @bitCast(_pageOrder));
    }

    /// ### DEPRECATED: Use `pageOrder` instead
    ///
    pub const PageOrder = pageOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PageOrder `
    ///
    pub fn pageOrder(self: QPrinter) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResolution` instead
    ///
    pub const SetResolution = setResolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _resolution: i32 `
    ///
    pub fn setResolution(self: QPrinter, _resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self.ptr), @bitCast(_resolution));
    }

    /// ### DEPRECATED: Use `resolution` instead
    ///
    pub const Resolution = resolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn resolution(self: QPrinter) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorMode` instead
    ///
    pub const SetColorMode = setColorMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _colorMode: qprinter_enums.ColorMode `
    ///
    pub fn setColorMode(self: QPrinter, _colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self.ptr), @bitCast(_colorMode));
    }

    /// ### DEPRECATED: Use `colorMode` instead
    ///
    pub const ColorMode = colorMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#colorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.ColorMode `
    ///
    pub fn colorMode(self: QPrinter) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCollateCopies` instead
    ///
    pub const SetCollateCopies = setCollateCopies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` collate: bool `
    ///
    pub fn setCollateCopies(self: QPrinter, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self.ptr), collate);
    }

    /// ### DEPRECATED: Use `collateCopies` instead
    ///
    pub const CollateCopies = collateCopies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn collateCopies(self: QPrinter) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFullPage` instead
    ///
    pub const SetFullPage = setFullPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _fullPage: bool `
    ///
    pub fn setFullPage(self: QPrinter, _fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self.ptr), _fullPage);
    }

    /// ### DEPRECATED: Use `fullPage` instead
    ///
    pub const FullPage = fullPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn fullPage(self: QPrinter) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCopyCount` instead
    ///
    pub const SetCopyCount = setCopyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _copyCount: i32 `
    ///
    pub fn setCopyCount(self: QPrinter, _copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self.ptr), @bitCast(_copyCount));
    }

    /// ### DEPRECATED: Use `copyCount` instead
    ///
    pub const CopyCount = copyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn copyCount(self: QPrinter) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsMultipleCopies` instead
    ///
    pub const SupportsMultipleCopies = supportsMultipleCopies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn supportsMultipleCopies(self: QPrinter) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaperSource` instead
    ///
    pub const SetPaperSource = setPaperSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _paperSource: qprinter_enums.PaperSource `
    ///
    pub fn setPaperSource(self: QPrinter, _paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self.ptr), @bitCast(_paperSource));
    }

    /// ### DEPRECATED: Use `paperSource` instead
    ///
    pub const PaperSource = paperSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PaperSource `
    ///
    pub fn paperSource(self: QPrinter) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDuplex` instead
    ///
    pub const SetDuplex = setDuplex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _duplex: qprinter_enums.DuplexMode `
    ///
    pub fn setDuplex(self: QPrinter, _duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self.ptr), @bitCast(_duplex));
    }

    /// ### DEPRECATED: Use `duplex` instead
    ///
    pub const Duplex = duplex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#duplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.DuplexMode `
    ///
    pub fn duplex(self: QPrinter) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedResolutions` instead
    ///
    pub const SupportedResolutions = supportedResolutions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedResolutions(self: QPrinter, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QPrinter.supportedResolutions: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFontEmbeddingEnabled` instead
    ///
    pub const SetFontEmbeddingEnabled = setFontEmbeddingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` enable: bool `
    ///
    pub fn setFontEmbeddingEnabled(self: QPrinter, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fontEmbeddingEnabled` instead
    ///
    pub const FontEmbeddingEnabled = fontEmbeddingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn fontEmbeddingEnabled(self: QPrinter) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paperRect` instead
    ///
    pub const PaperRect = paperRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn paperRect(self: QPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PaperRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `pageRect` instead
    ///
    pub const PageRect = pageRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn pageRect(self: QPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PageRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `printerSelectionOption` instead
    ///
    pub const PrinterSelectionOption = printerSelectionOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn printerSelectionOption(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPrinter.printerSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrinterSelectionOption` instead
    ///
    pub const SetPrinterSelectionOption = setPrinterSelectionOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _printerSelectionOption: []const u8 `
    ///
    pub fn setPrinterSelectionOption(self: QPrinter, _printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.libqt_string{
            .len = _printerSelectionOption.len,
            .data = _printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self.ptr), printerSelectionOption_str);
    }

    /// ### DEPRECATED: Use `newPage` instead
    ///
    pub const NewPage = newPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn newPage(self: QPrinter) bool {
        return qtc.QPrinter_NewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewPage` instead
    ///
    pub const OnNewPage = onNewPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onNewPage(self: QPrinter, callback: *const fn () callconv(.c) bool) void {
        qtc.QPrinter_OnNewPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNewPage` instead
    ///
    pub const SuperNewPage = superNewPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn superNewPage(self: QPrinter) bool {
        return qtc.QPrinter_SuperNewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn abort(self: QPrinter) bool {
        return qtc.QPrinter_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `printerState` instead
    ///
    pub const PrinterState = printerState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrinterState `
    ///
    pub fn printerState(self: QPrinter) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn paintEngine(self: QPrinter) QPaintEngine {
        return .{ .ptr = qtc.QPrinter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QPrinter, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPrinter_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn superPaintEngine(self: QPrinter) QPaintEngine {
        return .{ .ptr = qtc.QPrinter_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `printEngine` instead
    ///
    pub const PrintEngine = printEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn printEngine(self: QPrinter) QPrintEngine {
        return .{ .ptr = qtc.QPrinter_PrintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFromTo` instead
    ///
    pub const SetFromTo = setFromTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _fromPage: i32 `
    ///
    /// ` _toPage: i32 `
    ///
    pub fn setFromTo(self: QPrinter, _fromPage: i32, _toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self.ptr), @bitCast(_fromPage), @bitCast(_toPage));
    }

    /// ### DEPRECATED: Use `fromPage` instead
    ///
    pub const FromPage = fromPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn fromPage(self: QPrinter) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPage` instead
    ///
    pub const ToPage = toPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn toPage(self: QPrinter) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintRange` instead
    ///
    pub const SetPrintRange = setPrintRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` range: qprinter_enums.PrintRange `
    ///
    pub fn setPrintRange(self: QPrinter, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `printRange` instead
    ///
    pub const PrintRange = printRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrintRange `
    ///
    pub fn printRange(self: QPrinter) i32 {
        return qtc.QPrinter_PrintRange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QPrinter, param1: i32) i32 {
        return qtc.QPrinter_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter `
    ///
    /// ` callback: *const fn (self: QPrinter, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QPrinter, callback: *const fn (QPrinter, i32) callconv(.c) i32) void {
        qtc.QPrinter_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QPrinter, param1: i32) i32 {
        return qtc.QPrinter_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `setEngines` instead
    ///
    pub const SetEngines = setEngines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _printEngine: QPrintEngine `
    ///
    /// ` _paintEngine: QPaintEngine `
    ///
    pub fn setEngines(self: QPrinter, _printEngine: anytype, _paintEngine: anytype) void {
        comptime _ = @TypeOf(_printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(_paintEngine)._is_QPaintEngine;
        qtc.QPrinter_SetEngines(@ptrCast(self.ptr), @ptrCast(_printEngine.ptr), @ptrCast(_paintEngine.ptr));
    }

    /// ### DEPRECATED: Use `onSetEngines` instead
    ///
    pub const OnSetEngines = onSetEngines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter `
    ///
    /// ` callback: *const fn (self: QPrinter, printEngine: QPrintEngine, paintEngine: QPaintEngine) callconv(.c) void `
    ///
    pub fn onSetEngines(self: QPrinter, callback: *const fn (QPrinter, QPrintEngine, QPaintEngine) callconv(.c) void) void {
        qtc.QPrinter_OnSetEngines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEngines` instead
    ///
    pub const SuperSetEngines = superSetEngines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _printEngine: QPrintEngine `
    ///
    /// ` _paintEngine: QPaintEngine `
    ///
    pub fn superSetEngines(self: QPrinter, _printEngine: anytype, _paintEngine: anytype) void {
        comptime _ = @TypeOf(_printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(_paintEngine)._is_QPaintEngine;
        qtc.QPrinter_SuperSetEngines(@ptrCast(self.ptr), @ptrCast(_printEngine.ptr), @ptrCast(_paintEngine.ptr));
    }

    /// ### DEPRECATED: Use `pageLayout` instead
    ///
    pub const PageLayout = pageLayout;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn pageLayout(self: QPrinter) QPageLayout {
        return .{ .ptr = qtc.QPagedPaintDevice_PageLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pageRanges` instead
    ///
    pub const PageRanges = pageRanges;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn pageRanges(self: QPrinter) QPageRanges {
        return .{ .ptr = qtc.QPagedPaintDevice_PageRanges(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn paintingActive(self: QPrinter) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn width(self: QPrinter) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn height(self: QPrinter) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn widthMM(self: QPrinter) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn heightMM(self: QPrinter) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn logicalDpiX(self: QPrinter) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn logicalDpiY(self: QPrinter) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn physicalDpiX(self: QPrinter) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn physicalDpiY(self: QPrinter) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn devicePixelRatio(self: QPrinter) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn devicePixelRatioF(self: QPrinter) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn colorCount(self: QPrinter) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn depth(self: QPrinter) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setPageLayout` instead
    ///
    pub const SetPageLayout = setPageLayout;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn setPageLayout(self: QPrinter, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QPrinter_SetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
    }

    /// ### DEPRECATED: Use `superSetPageLayout` instead
    ///
    pub const SuperSetPageLayout = superSetPageLayout;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn superSetPageLayout(self: QPrinter, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QPrinter_SuperSetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
    }

    /// ### DEPRECATED: Use `onSetPageLayout` instead
    ///
    pub const OnSetPageLayout = onSetPageLayout;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, pageLayout: QPageLayout) callconv(.c) bool `
    ///
    pub fn onSetPageLayout(self: QPrinter, callback: *const fn (QPrinter, QPageLayout) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPageSize` instead
    ///
    pub const SetPageSize = setPageSize;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn setPageSize(self: QPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPrinter_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// ### DEPRECATED: Use `superSetPageSize` instead
    ///
    pub const SuperSetPageSize = superSetPageSize;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn superSetPageSize(self: QPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPrinter_SuperSetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// ### DEPRECATED: Use `onSetPageSize` instead
    ///
    pub const OnSetPageSize = onSetPageSize;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, pageSize: QPageSize) callconv(.c) bool `
    ///
    pub fn onSetPageSize(self: QPrinter, callback: *const fn (QPrinter, QPageSize) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPageOrientation` instead
    ///
    pub const SetPageOrientation = setPageOrientation;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn setPageOrientation(self: QPrinter, orientation: i32) bool {
        return qtc.QPrinter_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `superSetPageOrientation` instead
    ///
    pub const SuperSetPageOrientation = superSetPageOrientation;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn superSetPageOrientation(self: QPrinter, orientation: i32) bool {
        return qtc.QPrinter_SuperSetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `onSetPageOrientation` instead
    ///
    pub const OnSetPageOrientation = onSetPageOrientation;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool `
    ///
    pub fn onSetPageOrientation(self: QPrinter, callback: *const fn (QPrinter, i32) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPageMargins` instead
    ///
    pub const SetPageMargins = setPageMargins;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn setPageMargins(self: QPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPrinter_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

    /// ### DEPRECATED: Use `superSetPageMargins` instead
    ///
    pub const SuperSetPageMargins = superSetPageMargins;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn superSetPageMargins(self: QPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPrinter_SuperSetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

    /// ### DEPRECATED: Use `onSetPageMargins` instead
    ///
    pub const OnSetPageMargins = onSetPageMargins;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, margins: QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool `
    ///
    pub fn onSetPageMargins(self: QPrinter, callback: *const fn (QPrinter, QMarginsF, i32) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPageRanges` instead
    ///
    pub const SetPageRanges = setPageRanges;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn setPageRanges(self: QPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPrinter_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

    /// ### DEPRECATED: Use `superSetPageRanges` instead
    ///
    pub const SuperSetPageRanges = superSetPageRanges;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn superSetPageRanges(self: QPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPrinter_SuperSetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

    /// ### DEPRECATED: Use `onSetPageRanges` instead
    ///
    pub const OnSetPageRanges = onSetPageRanges;

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, ranges: QPageRanges) callconv(.c) void `
    ///
    pub fn onSetPageRanges(self: QPrinter, callback: *const fn (QPrinter, QPageRanges) callconv(.c) void) void {
        qtc.QPrinter_OnSetPageRanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPrinter_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPrinter_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QPrinter, callback: *const fn (QPrinter, QPainter) callconv(.c) void) void {
        qtc.QPrinter_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPrinter_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPrinter_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QPrinter, callback: *const fn (QPrinter, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPrinter_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn sharedPainter(self: QPrinter) QPainter {
        return .{ .ptr = qtc.QPrinter_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn superSharedPainter(self: QPrinter) QPainter {
        return .{ .ptr = qtc.QPrinter_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QPrinter, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPrinter_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QPrinter_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QPrinter_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPrinter`
    ///
    /// ` callback: *const fn (self: QPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QPrinter, callback: *const fn (QPrinter, i32, i32) callconv(.c) f64) void {
        qtc.QPrinter_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#dtor.QPrinter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPrinter `
    ///
    pub fn delete(self: QPrinter) void {
        qtc.QPrinter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#public-types)
pub const enums = struct {
    pub const PrinterMode = enum(i32) {
        pub const ScreenResolution: i32 = 0;
        pub const PrinterResolution: i32 = 1;
        pub const HighResolution: i32 = 2;
    };

    pub const PageOrder = enum(i32) {
        pub const FirstPageFirst: i32 = 0;
        pub const LastPageFirst: i32 = 1;
    };

    pub const ColorMode = enum(i32) {
        pub const GrayScale: i32 = 0;
        pub const Color: i32 = 1;
    };

    pub const PaperSource = enum(i32) {
        pub const OnlyOne: i32 = 0;
        pub const Lower: i32 = 1;
        pub const Middle: i32 = 2;
        pub const Manual: i32 = 3;
        pub const Envelope: i32 = 4;
        pub const EnvelopeManual: i32 = 5;
        pub const Auto: i32 = 6;
        pub const Tractor: i32 = 7;
        pub const SmallFormat: i32 = 8;
        pub const LargeFormat: i32 = 9;
        pub const LargeCapacity: i32 = 10;
        pub const Cassette: i32 = 11;
        pub const FormSource: i32 = 12;
        pub const MaxPageSource: i32 = 13;
        pub const CustomSource: i32 = 14;
        pub const LastPaperSource: i32 = 14;
        pub const Upper: i32 = 0;
    };

    pub const PrinterState = enum(i32) {
        pub const Idle: i32 = 0;
        pub const Active: i32 = 1;
        pub const Aborted: i32 = 2;
        pub const Error: i32 = 3;
    };

    pub const OutputFormat = enum(i32) {
        pub const NativeFormat: i32 = 0;
        pub const PdfFormat: i32 = 1;
    };

    pub const PrintRange = enum(i32) {
        pub const AllPages: i32 = 0;
        pub const Selection: i32 = 1;
        pub const PageRange: i32 = 2;
        pub const CurrentPage: i32 = 3;
    };

    pub const Unit = enum(i32) {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
        pub const DevicePixel: i32 = 6;
    };

    pub const DuplexMode = enum(i32) {
        pub const DuplexNone: i32 = 0;
        pub const DuplexAuto: i32 = 1;
        pub const DuplexLongSide: i32 = 2;
        pub const DuplexShortSide: i32 = 3;
    };
};
