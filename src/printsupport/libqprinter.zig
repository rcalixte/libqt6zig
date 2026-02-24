const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagedpaintdevice_enums = @import("../libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("../libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprinter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html)
pub const qprinter = struct {
    /// New constructs a new QPrinter object.
    ///
    pub fn New() QtC.QPrinter {
        return qtc.QPrinter_new();
    }

    /// New2 constructs a new QPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QtC.QPrinterInfo `
    ///
    pub fn New2(printer: ?*anyopaque) QtC.QPrinter {
        return qtc.QPrinter_new2(@ptrCast(printer));
    }

    /// New3 constructs a new QPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn New3(mode: i32) QtC.QPrinter {
        return qtc.QPrinter_new3(@bitCast(mode));
    }

    /// New4 constructs a new QPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` printer: QtC.QPrinterInfo `
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn New4(printer: ?*anyopaque, mode: i32) QtC.QPrinter {
        return qtc.QPrinter_new4(@ptrCast(printer), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPrinter_DevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPrinter_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPrinter `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.QPrinter_SuperDevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` format: qprinter_enums.OutputFormat `
    ///
    pub fn SetOutputFormat(self: ?*anyopaque, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.OutputFormat `
    ///
    pub fn OutputFormat(self: ?*anyopaque) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` version: qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn SetPdfVersion(self: ?*anyopaque, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self), @bitCast(version));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn PdfVersion(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` printerName: []const u8 `
    ///
    pub fn SetPrinterName(self: ?*anyopaque, printerName: []const u8) void {
        const printerName_str = qtc.libqt_string{
            .len = printerName.len,
            .data = printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self), printerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_OutputFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.OutputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` printProgram: []const u8 `
    ///
    pub fn SetPrintProgram(self: ?*anyopaque, printProgram: []const u8) void {
        const printProgram_str = qtc.libqt_string{
            .len = printProgram.len,
            .data = printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self), printProgram_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrintProgram(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrintProgram(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrintProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` docName: []const u8 `
    ///
    pub fn SetDocName(self: ?*anyopaque, docName: []const u8) void {
        const docName_str = qtc.libqt_string{
            .len = docName.len,
            .data = docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self), docName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_DocName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.DocName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` creator: []const u8 `
    ///
    pub fn SetCreator(self: ?*anyopaque, creator: []const u8) void {
        const creator_str = qtc.libqt_string{
            .len = creator.len,
            .data = creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self), creator_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Creator(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_Creator(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` pageOrder: qprinter_enums.PageOrder `
    ///
    pub fn SetPageOrder(self: ?*anyopaque, pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self), @bitCast(pageOrder));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PageOrder `
    ///
    pub fn PageOrder(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` resolution: i32 `
    ///
    pub fn SetResolution(self: ?*anyopaque, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self), @bitCast(resolution));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn Resolution(self: ?*anyopaque) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` colorMode: qprinter_enums.ColorMode `
    ///
    pub fn SetColorMode(self: ?*anyopaque, colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self), @bitCast(colorMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#colorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.ColorMode `
    ///
    pub fn ColorMode(self: ?*anyopaque) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` collate: bool `
    ///
    pub fn SetCollateCopies(self: ?*anyopaque, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self), collate);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn CollateCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` fullPage: bool `
    ///
    pub fn SetFullPage(self: ?*anyopaque, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self), fullPage);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn FullPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` copyCount: i32 `
    ///
    pub fn SetCopyCount(self: ?*anyopaque, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self), @bitCast(copyCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn CopyCount(self: ?*anyopaque) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn SupportsMultipleCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` paperSource: qprinter_enums.PaperSource `
    ///
    pub fn SetPaperSource(self: ?*anyopaque, paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self), @bitCast(paperSource));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PaperSource `
    ///
    pub fn PaperSource(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` duplex: qprinter_enums.DuplexMode `
    ///
    pub fn SetDuplex(self: ?*anyopaque, duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self), @bitCast(duplex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#duplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.DuplexMode `
    ///
    pub fn Duplex(self: ?*anyopaque) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedResolutions(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontEmbeddingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn FontEmbeddingEnabled(self: ?*anyopaque) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PaperRect(self: ?*anyopaque, param1: i32) QtC.QRectF {
        return qtc.QPrinter_PaperRect(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PageRect(self: ?*anyopaque, param1: i32) QtC.QRectF {
        return qtc.QPrinter_PageRect(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterSelectionOption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` printerSelectionOption: []const u8 `
    ///
    pub fn SetPrinterSelectionOption(self: ?*anyopaque, printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.libqt_string{
            .len = printerSelectionOption.len,
            .data = printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self), printerSelectionOption_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_NewPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnNewPage(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPrinter_OnNewPage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPrinter `
    ///
    pub fn SuperNewPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_SuperNewPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn Abort(self: ?*anyopaque) bool {
        return qtc.QPrinter_Abort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrinterState `
    ///
    pub fn PrinterState(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPrinter_PaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QPrinter_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPrinter `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPrinter_SuperPaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PrintEngine(self: ?*anyopaque) QtC.QPrintEngine {
        return qtc.QPrinter_PrintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` fromPage: i32 `
    ///
    /// ` toPage: i32 `
    ///
    pub fn SetFromTo(self: ?*anyopaque, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self), @bitCast(fromPage), @bitCast(toPage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn FromPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn ToPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` range: qprinter_enums.PrintRange `
    ///
    pub fn SetPrintRange(self: ?*anyopaque, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrintRange `
    ///
    pub fn PrintRange(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PrintRange(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPrinter_Metric(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPrinter_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPrinter_SuperMetric(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` printEngine: QtC.QPrintEngine `
    ///
    /// ` paintEngine: QtC.QPaintEngine `
    ///
    pub fn SetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QPrinter_SetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine) callconv(.c) void `
    ///
    pub fn OnSetEngines(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnSetEngines(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` printEngine: QtC.QPrintEngine `
    ///
    /// ` paintEngine: QtC.QPaintEngine `
    ///
    pub fn SuperSetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QPrinter_SuperSetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PageLayout(self: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPagedPaintDevice_PageLayout(@ptrCast(self));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PageRanges(self: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPagedPaintDevice_PageRanges(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` pageLayout: QtC.QPageLayout `
    ///
    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPrinter_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` pageLayout: QtC.QPageLayout `
    ///
    pub fn SuperSetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPrinter_SuperSetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, pageLayout: QtC.QPageLayout) callconv(.c) bool `
    ///
    pub fn OnSetPageLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPrinter_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    pub fn SuperSetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPrinter_SuperSetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, pageSize: QtC.QPageSize) callconv(.c) bool `
    ///
    pub fn OnSetPageSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QPrinter_SetPageOrientation(@ptrCast(self), @bitCast(orientation));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SuperSetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QPrinter_SuperSetPageOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool `
    ///
    pub fn OnSetPageOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageOrientation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QPrinter_SetPageMargins(@ptrCast(self), @ptrCast(margins), @bitCast(units));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SuperSetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QPrinter_SuperSetPageMargins(@ptrCast(self), @ptrCast(margins), @bitCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool `
    ///
    pub fn OnSetPageMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` ranges: QtC.QPageRanges `
    ///
    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPrinter_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` ranges: QtC.QPageRanges `
    ///
    pub fn SuperSetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPrinter_SuperSetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, ranges: QtC.QPageRanges) callconv(.c) void `
    ///
    pub fn OnSetPageRanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnSetPageRanges(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPrinter_InitPainter(@ptrCast(self), @ptrCast(painter));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPrinter_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPrinter_Redirected(@ptrCast(self), @ptrCast(offset));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPrinter_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPrinter_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPrinter_SharedPainter(@ptrCast(self));
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
    /// ` self: QtC.QPrinter `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPrinter_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QPrinter_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPrinter_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QtC.QPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPrinter_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QPrinter_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPrinter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPrinter_Delete(@ptrCast(self));
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
