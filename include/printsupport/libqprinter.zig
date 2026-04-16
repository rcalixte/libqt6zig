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

    /// New constructs a new QPrinter object.
    ///
    pub fn New() QPrinter {
        return .{ .ptr = qtc.QPrinter_new() };
    }

    /// New2 constructs a new QPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QPrinterInfo `
    ///
    pub fn New2(printer: anytype) QPrinter {
        comptime _ = @TypeOf(printer)._is_QPrinterInfo;
        return .{ .ptr = qtc.QPrinter_new2(@ptrCast(printer.ptr)) };
    }

    /// New3 constructs a new QPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn New3(mode: i32) QPrinter {
        return .{ .ptr = qtc.QPrinter_new3(@bitCast(mode)) };
    }

    /// New4 constructs a new QPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QPrinterInfo `
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn New4(printer: anytype, mode: i32) QPrinter {
        comptime _ = @TypeOf(printer)._is_QPrinterInfo;
        return .{ .ptr = qtc.QPrinter_new4(@ptrCast(printer.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn DevType(self: QPrinter) i32 {
        return qtc.QPrinter_DevType(@ptrCast(self.ptr));
    }

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
    pub fn OnDevType(self: QPrinter, callback: *const fn () callconv(.c) i32) void {
        qtc.QPrinter_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn SuperDevType(self: QPrinter) i32 {
        return qtc.QPrinter_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` format: qprinter_enums.OutputFormat `
    ///
    pub fn SetOutputFormat(self: QPrinter, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self.ptr), @bitCast(format));
    }

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
    pub fn OutputFormat(self: QPrinter) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` version: qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn SetPdfVersion(self: QPrinter, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self.ptr), @bitCast(version));
    }

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
    pub fn PdfVersion(self: QPrinter) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` printerName: []const u8 `
    ///
    pub fn SetPrinterName(self: QPrinter, printerName: []const u8) void {
        const printerName_str = qtc.libqt_string{
            .len = printerName.len,
            .data = printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self.ptr), printerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterName(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn IsValid(self: QPrinter) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: QPrinter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputFileName(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_OutputFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.OutputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` printProgram: []const u8 `
    ///
    pub fn SetPrintProgram(self: QPrinter, printProgram: []const u8) void {
        const printProgram_str = qtc.libqt_string{
            .len = printProgram.len,
            .data = printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self.ptr), printProgram_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrintProgram(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrintProgram(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrintProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` docName: []const u8 `
    ///
    pub fn SetDocName(self: QPrinter, docName: []const u8) void {
        const docName_str = qtc.libqt_string{
            .len = docName.len,
            .data = docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self.ptr), docName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocName(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_DocName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.DocName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` creator: []const u8 `
    ///
    pub fn SetCreator(self: QPrinter, creator: []const u8) void {
        const creator_str = qtc.libqt_string{
            .len = creator.len,
            .data = creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self.ptr), creator_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Creator(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_Creator(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` pageOrder: qprinter_enums.PageOrder `
    ///
    pub fn SetPageOrder(self: QPrinter, pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self.ptr), @bitCast(pageOrder));
    }

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
    pub fn PageOrder(self: QPrinter) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` resolution: i32 `
    ///
    pub fn SetResolution(self: QPrinter, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self.ptr), @bitCast(resolution));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn Resolution(self: QPrinter) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` colorMode: qprinter_enums.ColorMode `
    ///
    pub fn SetColorMode(self: QPrinter, colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self.ptr), @bitCast(colorMode));
    }

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
    pub fn ColorMode(self: QPrinter) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` collate: bool `
    ///
    pub fn SetCollateCopies(self: QPrinter, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self.ptr), collate);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn CollateCopies(self: QPrinter) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` fullPage: bool `
    ///
    pub fn SetFullPage(self: QPrinter, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self.ptr), fullPage);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn FullPage(self: QPrinter) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` copyCount: i32 `
    ///
    pub fn SetCopyCount(self: QPrinter, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self.ptr), @bitCast(copyCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn CopyCount(self: QPrinter) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn SupportsMultipleCopies(self: QPrinter) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` paperSource: qprinter_enums.PaperSource `
    ///
    pub fn SetPaperSource(self: QPrinter, paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self.ptr), @bitCast(paperSource));
    }

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
    pub fn PaperSource(self: QPrinter) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` duplex: qprinter_enums.DuplexMode `
    ///
    pub fn SetDuplex(self: QPrinter, duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self.ptr), @bitCast(duplex));
    }

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
    pub fn Duplex(self: QPrinter) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedResolutions(self: QPrinter, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qprinter.SupportedResolutions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontEmbeddingEnabled(self: QPrinter, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn FontEmbeddingEnabled(self: QPrinter) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PaperRect(self: QPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PaperRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PageRect(self: QPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PageRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterSelectionOption(self: QPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` printerSelectionOption: []const u8 `
    ///
    pub fn SetPrinterSelectionOption(self: QPrinter, printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.libqt_string{
            .len = printerSelectionOption.len,
            .data = printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self.ptr), printerSelectionOption_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn NewPage(self: QPrinter) bool {
        return qtc.QPrinter_NewPage(@ptrCast(self.ptr));
    }

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
    pub fn OnNewPage(self: QPrinter, callback: *const fn () callconv(.c) bool) void {
        qtc.QPrinter_OnNewPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNewPage` instead
    ///
    pub const QBaseNewPage = SuperNewPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn SuperNewPage(self: QPrinter) bool {
        return qtc.QPrinter_SuperNewPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn Abort(self: QPrinter) bool {
        return qtc.QPrinter_Abort(@ptrCast(self.ptr));
    }

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
    pub fn PrinterState(self: QPrinter) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PaintEngine(self: QPrinter) QPaintEngine {
        return .{ .ptr = qtc.QPrinter_PaintEngine(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPaintEngine(self: QPrinter, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPrinter_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn SuperPaintEngine(self: QPrinter) QPaintEngine {
        return .{ .ptr = qtc.QPrinter_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PrintEngine(self: QPrinter) QPrintEngine {
        return .{ .ptr = qtc.QPrinter_PrintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` fromPage: i32 `
    ///
    /// ` toPage: i32 `
    ///
    pub fn SetFromTo(self: QPrinter, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self.ptr), @bitCast(fromPage), @bitCast(toPage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn FromPage(self: QPrinter) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn ToPage(self: QPrinter) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` range: qprinter_enums.PrintRange `
    ///
    pub fn SetPrintRange(self: QPrinter, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self.ptr), @bitCast(range));
    }

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
    pub fn PrintRange(self: QPrinter) i32 {
        return qtc.QPrinter_PrintRange(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QPrinter, param1: i32) i32 {
        return qtc.QPrinter_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMetric(self: QPrinter, callback: *const fn (QPrinter, i32) callconv(.c) i32) void {
        qtc.QPrinter_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

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
    pub fn SuperMetric(self: QPrinter, param1: i32) i32 {
        return qtc.QPrinter_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` printEngine: QPrintEngine `
    ///
    /// ` paintEngine: QPaintEngine `
    ///
    pub fn SetEngines(self: QPrinter, printEngine: anytype, paintEngine: anytype) void {
        comptime _ = @TypeOf(printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(paintEngine)._is_QPaintEngine;
        qtc.QPrinter_SetEngines(@ptrCast(self.ptr), @ptrCast(printEngine.ptr), @ptrCast(paintEngine.ptr));
    }

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
    pub fn OnSetEngines(self: QPrinter, callback: *const fn (QPrinter, QPrintEngine, QPaintEngine) callconv(.c) void) void {
        qtc.QPrinter_OnSetEngines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEngines` instead
    ///
    pub const QBaseSetEngines = SuperSetEngines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    /// ` printEngine: QPrintEngine `
    ///
    /// ` paintEngine: QPaintEngine `
    ///
    pub fn SuperSetEngines(self: QPrinter, printEngine: anytype, paintEngine: anytype) void {
        comptime _ = @TypeOf(printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(paintEngine)._is_QPaintEngine;
        qtc.QPrinter_SuperSetEngines(@ptrCast(self.ptr), @ptrCast(printEngine.ptr), @ptrCast(paintEngine.ptr));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PageLayout(self: QPrinter) QPageLayout {
        return .{ .ptr = qtc.QPagedPaintDevice_PageLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PageRanges(self: QPrinter) QPageRanges {
        return .{ .ptr = qtc.QPagedPaintDevice_PageRanges(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PaintingActive(self: QPrinter) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn Width(self: QPrinter) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn Height(self: QPrinter) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn WidthMM(self: QPrinter) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn HeightMM(self: QPrinter) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn LogicalDpiX(self: QPrinter) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn LogicalDpiY(self: QPrinter) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PhysicalDpiX(self: QPrinter) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn PhysicalDpiY(self: QPrinter) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn DevicePixelRatio(self: QPrinter) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn DevicePixelRatioF(self: QPrinter) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn ColorCount(self: QPrinter) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPrinter `
    ///
    pub fn Depth(self: QPrinter) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

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
    /// ` pageLayout: QPageLayout `
    ///
    pub fn SetPageLayout(self: QPrinter, pageLayout: anytype) bool {
        comptime _ = @TypeOf(pageLayout)._is_QPageLayout;
        return qtc.QPrinter_SetPageLayout(@ptrCast(self.ptr), @ptrCast(pageLayout.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPageLayout` instead
    ///
    pub const QBaseSetPageLayout = SuperSetPageLayout;

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
    /// ` pageLayout: QPageLayout `
    ///
    pub fn SuperSetPageLayout(self: QPrinter, pageLayout: anytype) bool {
        comptime _ = @TypeOf(pageLayout)._is_QPageLayout;
        return qtc.QPrinter_SuperSetPageLayout(@ptrCast(self.ptr), @ptrCast(pageLayout.ptr));
    }

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
    pub fn OnSetPageLayout(self: QPrinter, callback: *const fn (QPrinter, QPageLayout) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetPageSize(self: QPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPrinter_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPageSize` instead
    ///
    pub const QBaseSetPageSize = SuperSetPageSize;

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
    pub fn SuperSetPageSize(self: QPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPrinter_SuperSetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

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
    pub fn OnSetPageSize(self: QPrinter, callback: *const fn (QPrinter, QPageSize) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetPageOrientation(self: QPrinter, orientation: i32) bool {
        return qtc.QPrinter_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `SuperSetPageOrientation` instead
    ///
    pub const QBaseSetPageOrientation = SuperSetPageOrientation;

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
    pub fn SuperSetPageOrientation(self: QPrinter, orientation: i32) bool {
        return qtc.QPrinter_SuperSetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

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
    pub fn OnSetPageOrientation(self: QPrinter, callback: *const fn (QPrinter, i32) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetPageMargins(self: QPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPrinter_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

    /// ### DEPRECATED: Use `SuperSetPageMargins` instead
    ///
    pub const QBaseSetPageMargins = SuperSetPageMargins;

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
    pub fn SuperSetPageMargins(self: QPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPrinter_SuperSetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

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
    pub fn OnSetPageMargins(self: QPrinter, callback: *const fn (QPrinter, QMarginsF, i32) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetPageRanges(self: QPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPrinter_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPageRanges` instead
    ///
    pub const QBaseSetPageRanges = SuperSetPageRanges;

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
    pub fn SuperSetPageRanges(self: QPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPrinter_SuperSetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

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
    pub fn OnSetPageRanges(self: QPrinter, callback: *const fn (QPrinter, QPageRanges) callconv(.c) void) void {
        qtc.QPrinter_OnSetPageRanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InitPainter(self: QPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPrinter_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

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
    pub fn SuperInitPainter(self: QPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPrinter_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnInitPainter(self: QPrinter, callback: *const fn (QPrinter, QPainter) callconv(.c) void) void {
        qtc.QPrinter_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Redirected(self: QPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPrinter_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

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
    pub fn SuperRedirected(self: QPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPrinter_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

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
    pub fn OnRedirected(self: QPrinter, callback: *const fn (QPrinter, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPrinter_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SharedPainter(self: QPrinter) QPainter {
        return .{ .ptr = qtc.QPrinter_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

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
    pub fn SuperSharedPainter(self: QPrinter) QPainter {
        return .{ .ptr = qtc.QPrinter_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSharedPainter(self: QPrinter, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPrinter_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GetDecodedMetricF(self: QPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QPrinter_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

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
    pub fn SuperGetDecodedMetricF(self: QPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QPrinter_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

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
    pub fn OnGetDecodedMetricF(self: QPrinter, callback: *const fn (QPrinter, i32, i32) callconv(.c) f64) void {
        qtc.QPrinter_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#dtor.QPrinter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPrinter `
    ///
    pub fn Delete(self: QPrinter) void {
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
