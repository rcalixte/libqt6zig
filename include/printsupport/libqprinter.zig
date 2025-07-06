const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagedpaintdevice_enums = @import("../libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("../libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprinter_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qprinter.html
pub const qprinter = struct {
    /// New constructs a new QPrinter object.
    ///
    ///
    pub fn New() QtC.QPrinter {
        return qtc.QPrinter_new();
    }

    /// New2 constructs a new QPrinter object.
    ///
    /// ``` printer: QtC.QPrinterInfo ```
    pub fn New2(printer: ?*anyopaque) QtC.QPrinter {
        return qtc.QPrinter_new2(@ptrCast(printer));
    }

    /// New3 constructs a new QPrinter object.
    ///
    /// ``` mode: qprinter_enums.PrinterMode ```
    pub fn New3(mode: i64) QtC.QPrinter {
        return qtc.QPrinter_new3(@intCast(mode));
    }

    /// New4 constructs a new QPrinter object.
    ///
    /// ``` printer: QtC.QPrinterInfo, mode: qprinter_enums.PrinterMode ```
    pub fn New4(printer: ?*anyopaque, mode: i64) QtC.QPrinter {
        return qtc.QPrinter_new4(@ptrCast(printer), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPrinter_DevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPrinter, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPrinter_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QPrinter_QBaseDevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ``` self: QtC.QPrinter, format: qprinter_enums.OutputFormat ```
    pub fn SetOutputFormat(self: ?*anyopaque, format: i64) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn OutputFormat(self: ?*anyopaque) i64 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ``` self: QtC.QPrinter, version: qpagedpaintdevice_enums.PdfVersion ```
    pub fn SetPdfVersion(self: ?*anyopaque, version: i64) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self), @intCast(version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PdfVersion(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ``` self: QtC.QPrinter, printerName: []const u8 ```
    pub fn SetPrinterName(self: ?*anyopaque, printerName: []const u8) void {
        const printerName_str = qtc.struct_libqt_string{
            .len = printerName.len,
            .data = printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self), printerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn PrinterName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrinterName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ``` self: QtC.QPrinter, outputFileName: []const u8 ```
    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.struct_libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn OutputFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_OutputFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.OutputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ``` self: QtC.QPrinter, printProgram: []const u8 ```
    pub fn SetPrintProgram(self: ?*anyopaque, printProgram: []const u8) void {
        const printProgram_str = qtc.struct_libqt_string{
            .len = printProgram.len,
            .data = printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self), printProgram_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn PrintProgram(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrintProgram(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrintProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ``` self: QtC.QPrinter, docName: []const u8 ```
    pub fn SetDocName(self: ?*anyopaque, docName: []const u8) void {
        const docName_str = qtc.struct_libqt_string{
            .len = docName.len,
            .data = docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self), docName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn DocName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_DocName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.DocName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ``` self: QtC.QPrinter, creator: []const u8 ```
    pub fn SetCreator(self: ?*anyopaque, creator: []const u8) void {
        const creator_str = qtc.struct_libqt_string{
            .len = creator.len,
            .data = creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self), creator_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn Creator(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_Creator(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ``` self: QtC.QPrinter, pageOrder: qprinter_enums.PageOrder ```
    pub fn SetPageOrder(self: ?*anyopaque, pageOrder: i64) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self), @intCast(pageOrder));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PageOrder(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PageOrder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ``` self: QtC.QPrinter, resolution: i32 ```
    pub fn SetResolution(self: ?*anyopaque, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn Resolution(self: ?*anyopaque) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ``` self: QtC.QPrinter, colorMode: qprinter_enums.ColorMode ```
    pub fn SetColorMode(self: ?*anyopaque, colorMode: i64) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self), @intCast(colorMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn ColorMode(self: ?*anyopaque) i64 {
        return qtc.QPrinter_ColorMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ``` self: QtC.QPrinter, collate: bool ```
    pub fn SetCollateCopies(self: ?*anyopaque, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self), collate);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn CollateCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ``` self: QtC.QPrinter, fullPage: bool ```
    pub fn SetFullPage(self: ?*anyopaque, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self), fullPage);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn FullPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ``` self: QtC.QPrinter, copyCount: i32 ```
    pub fn SetCopyCount(self: ?*anyopaque, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self), @intCast(copyCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn CopyCount(self: ?*anyopaque) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn SupportsMultipleCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ``` self: QtC.QPrinter, paperSource: qprinter_enums.PaperSource ```
    pub fn SetPaperSource(self: ?*anyopaque, paperSource: i64) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self), @intCast(paperSource));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PaperSource(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PaperSource(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ``` self: QtC.QPrinter, duplex: qprinter_enums.DuplexMode ```
    pub fn SetDuplex(self: ?*anyopaque, duplex: i64) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self), @intCast(duplex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn Duplex(self: ?*anyopaque) i64 {
        return qtc.QPrinter_Duplex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn SupportedResolutions(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qprinter.SupportedResolutions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
    ///
    /// ``` self: QtC.QPrinter, enable: bool ```
    pub fn SetFontEmbeddingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn FontEmbeddingEnabled(self: ?*anyopaque) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ``` self: QtC.QPrinter, param1: qprinter_enums.Unit ```
    pub fn PaperRect(self: ?*anyopaque, param1: i64) QtC.QRectF {
        return qtc.QPrinter_PaperRect(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ``` self: QtC.QPrinter, param1: qprinter_enums.Unit ```
    pub fn PageRect(self: ?*anyopaque, param1: i64) QtC.QRectF {
        return qtc.QPrinter_PageRect(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ``` self: QtC.QPrinter, allocator: std.mem.Allocator ```
    pub fn PrinterSelectionOption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprinter.PrinterSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ``` self: QtC.QPrinter, printerSelectionOption: []const u8 ```
    pub fn SetPrinterSelectionOption(self: ?*anyopaque, printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.struct_libqt_string{
            .len = printerSelectionOption.len,
            .data = printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self), printerSelectionOption_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_NewPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPrinter, slot: fn () callconv(.c) bool ```
    pub fn OnNewPage(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPrinter_OnNewPage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn QBaseNewPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_QBaseNewPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn Abort(self: ?*anyopaque) bool {
        return qtc.QPrinter_Abort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PrinterState(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PrinterState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPrinter_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPrinter, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QPrinter_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPrinter_QBasePaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PrintEngine(self: ?*anyopaque) QtC.QPrintEngine {
        return qtc.QPrinter_PrintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ``` self: QtC.QPrinter, fromPage: i32, toPage: i32 ```
    pub fn SetFromTo(self: ?*anyopaque, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self), @intCast(fromPage), @intCast(toPage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn FromPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn ToPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ``` self: QtC.QPrinter, range: qprinter_enums.PrintRange ```
    pub fn SetPrintRange(self: ?*anyopaque, range: i64) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printRange)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PrintRange(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PrintRange(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// ``` self: QtC.QPrinter, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QPrinter_Metric(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QPrinter_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPrinter, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QPrinter_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// ``` self: QtC.QPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine ```
    pub fn SetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QPrinter_SetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine) callconv(.c) void ```
    pub fn OnSetEngines(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnSetEngines(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine ```
    pub fn QBaseSetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QPrinter_QBaseSetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PageLayout(self: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPagedPaintDevice_PageLayout(@ptrCast(self));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PageRanges(self: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPagedPaintDevice_PageRanges(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i64, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, pageLayout: QtC.QPageLayout ```
    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPrinter_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, pageLayout: QtC.QPageLayout ```
    pub fn QBaseSetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPrinter_QBaseSetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, pageLayout: QtC.QPageLayout) callconv(.c) bool ```
    pub fn OnSetPageLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, pageSize: QtC.QPageSize ```
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPrinter_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, pageSize: QtC.QPageSize ```
    pub fn QBaseSetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPrinter_QBaseSetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, pageSize: QtC.QPageSize) callconv(.c) bool ```
    pub fn OnSetPageSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, orientation: qpagelayout_enums.Orientation ```
    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QPrinter_SetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, orientation: qpagelayout_enums.Orientation ```
    pub fn QBaseSetPageOrientation(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QPrinter_QBaseSetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool ```
    pub fn OnSetPageOrientation(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit ```
    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i64) bool {
        return qtc.QPrinter_SetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit ```
    pub fn QBaseSetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i64) bool {
        return qtc.QPrinter_QBaseSetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool ```
    pub fn OnSetPageMargins(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QPrinter_OnSetPageMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, ranges: QtC.QPageRanges ```
    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPrinter_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, ranges: QtC.QPageRanges ```
    pub fn QBaseSetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPrinter_QBaseSetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, ranges: QtC.QPageRanges) callconv(.c) void ```
    pub fn OnSetPageRanges(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnSetPageRanges(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPrinter_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPrinter_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrinter_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPrinter_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPrinter_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPrinter_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPrinter_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPrinter_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QPrinter_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QPrinter_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QPrinter_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPrinter, slot: fn (self: QtC.QPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QPrinter_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#dtor.QPrinter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPrinter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrinter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprinter.html#types
pub const enums = struct {
    pub const PrinterMode = enum {
        pub const ScreenResolution: i32 = 0;
        pub const PrinterResolution: i32 = 1;
        pub const HighResolution: i32 = 2;
    };

    pub const PageOrder = enum {
        pub const FirstPageFirst: i32 = 0;
        pub const LastPageFirst: i32 = 1;
    };

    pub const ColorMode = enum {
        pub const GrayScale: i32 = 0;
        pub const Color: i32 = 1;
    };

    pub const PaperSource = enum {
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

    pub const PrinterState = enum {
        pub const Idle: i32 = 0;
        pub const Active: i32 = 1;
        pub const Aborted: i32 = 2;
        pub const Error: i32 = 3;
    };

    pub const OutputFormat = enum {
        pub const NativeFormat: i32 = 0;
        pub const PdfFormat: i32 = 1;
    };

    pub const PrintRange = enum {
        pub const AllPages: i32 = 0;
        pub const Selection: i32 = 1;
        pub const PageRange: i32 = 2;
        pub const CurrentPage: i32 = 3;
    };

    pub const Unit = enum {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
        pub const DevicePixel: i32 = 6;
    };

    pub const DuplexMode = enum {
        pub const DuplexNone: i32 = 0;
        pub const DuplexAuto: i32 = 1;
        pub const DuplexLongSide: i32 = 2;
        pub const DuplexShortSide: i32 = 3;
    };
};
