const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagedpaintdevice_enums = @import("../libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("../libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprinter_enums = @import("../printsupport/libqprinter.zig").enums;
const qsciscintilla_enums = @import("libqsciscintilla.zig").enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html
pub const qsciprinter = struct {
    /// New constructs a new QsciPrinter object.
    ///
    ///
    pub fn New() QtC.QsciPrinter {
        return qtc.QsciPrinter_new();
    }

    /// New2 constructs a new QsciPrinter object.
    ///
    /// ``` mode: qprinter_enums.PrinterMode ```
    pub fn New2(mode: i64) QtC.QsciPrinter {
        return qtc.QsciPrinter_new2(@intCast(mode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter, painter: QtC.QPainter, drawing: bool, area: QtC.QRect, pagenr: i32 ```
    pub fn FormatPage(self: ?*anyopaque, painter: ?*anyopaque, drawing: bool, area: ?*anyopaque, pagenr: i32) void {
        qtc.QsciPrinter_FormatPage(@ptrCast(self), @ptrCast(painter), drawing, @ptrCast(area), @intCast(pagenr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, painter: QtC.QPainter, drawing: bool, area: QtC.QRect, pagenr: i32) callconv(.c) void ```
    pub fn OnFormatPage(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnFormatPage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciPrinter, painter: QtC.QPainter, drawing: bool, area: QtC.QRect, pagenr: i32 ```
    pub fn QBaseFormatPage(self: ?*anyopaque, painter: ?*anyopaque, drawing: bool, area: ?*anyopaque, pagenr: i32) void {
        qtc.QsciPrinter_QBaseFormatPage(@ptrCast(self), @ptrCast(painter), drawing, @ptrCast(area), @intCast(pagenr));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn Magnification(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_Magnification(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter, magnification: i32 ```
    pub fn SetMagnification(self: ?*anyopaque, magnification: i32) void {
        qtc.QsciPrinter_SetMagnification(@ptrCast(self), @intCast(magnification));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, magnification: i32) callconv(.c) void ```
    pub fn OnSetMagnification(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetMagnification(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciPrinter, magnification: i32 ```
    pub fn QBaseSetMagnification(self: ?*anyopaque, magnification: i32) void {
        qtc.QsciPrinter_QBaseSetMagnification(@ptrCast(self), @intCast(magnification));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, painter: QtC.QPainter, from: i32, to: i32 ```
    pub fn PrintRange(self: ?*anyopaque, qsb: ?*anyopaque, painter: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_PrintRange(@ptrCast(self), @ptrCast(qsb), @ptrCast(painter), @intCast(from), @intCast(to));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, painter: QtC.QPainter, from: i32, to: i32) callconv(.c) i32 ```
    pub fn OnPrintRange(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, painter: QtC.QPainter, from: i32, to: i32 ```
    pub fn QBasePrintRange(self: ?*anyopaque, qsb: ?*anyopaque, painter: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_QBasePrintRange(@ptrCast(self), @ptrCast(qsb), @ptrCast(painter), @intCast(from), @intCast(to));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, from: i32, to: i32 ```
    pub fn PrintRange2(self: ?*anyopaque, qsb: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_PrintRange2(@ptrCast(self), @ptrCast(qsb), @intCast(from), @intCast(to));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, from: i32, to: i32) callconv(.c) i32 ```
    pub fn OnPrintRange2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, from: i32, to: i32 ```
    pub fn QBasePrintRange2(self: ?*anyopaque, qsb: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_QBasePrintRange2(@ptrCast(self), @ptrCast(qsb), @intCast(from), @intCast(to));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn WrapMode(self: ?*anyopaque) i64 {
        return qtc.QsciPrinter_WrapMode(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ``` self: QtC.QsciPrinter, wmode: qsciscintilla_enums.WrapMode ```
    pub fn SetWrapMode(self: ?*anyopaque, wmode: i64) void {
        qtc.QsciPrinter_SetWrapMode(@ptrCast(self), @intCast(wmode));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, wmode: qsciscintilla_enums.WrapMode) callconv(.c) void ```
    pub fn OnSetWrapMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetWrapMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciPrinter, wmode: qsciscintilla_enums.WrapMode ```
    pub fn QBaseSetWrapMode(self: ?*anyopaque, wmode: i64) void {
        qtc.QsciPrinter_QBaseSetWrapMode(@ptrCast(self), @intCast(wmode));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ``` self: QtC.QsciPrinter, format: qprinter_enums.OutputFormat ```
    pub fn SetOutputFormat(self: ?*anyopaque, format: i64) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self), @intCast(format));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn OutputFormat(self: ?*anyopaque) i64 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ``` self: QtC.QsciPrinter, version: qpagedpaintdevice_enums.PdfVersion ```
    pub fn SetPdfVersion(self: ?*anyopaque, version: i64) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PdfVersion(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ``` self: QtC.QsciPrinter, printerName: []const u8 ```
    pub fn SetPrinterName(self: ?*anyopaque, printerName: []const u8) void {
        const printerName_str = qtc.struct_libqt_string{
            .len = printerName.len,
            .data = printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self), printerName_str);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn PrinterName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrinterName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.PrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ``` self: QtC.QsciPrinter, outputFileName: []const u8 ```
    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.struct_libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn OutputFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_OutputFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.OutputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ``` self: QtC.QsciPrinter, printProgram: []const u8 ```
    pub fn SetPrintProgram(self: ?*anyopaque, printProgram: []const u8) void {
        const printProgram_str = qtc.struct_libqt_string{
            .len = printProgram.len,
            .data = printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self), printProgram_str);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn PrintProgram(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrintProgram(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.PrintProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ``` self: QtC.QsciPrinter, docName: []const u8 ```
    pub fn SetDocName(self: ?*anyopaque, docName: []const u8) void {
        const docName_str = qtc.struct_libqt_string{
            .len = docName.len,
            .data = docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self), docName_str);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn DocName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_DocName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.DocName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ``` self: QtC.QsciPrinter, creator: []const u8 ```
    pub fn SetCreator(self: ?*anyopaque, creator: []const u8) void {
        const creator_str = qtc.struct_libqt_string{
            .len = creator.len,
            .data = creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self), creator_str);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn Creator(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_Creator(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ``` self: QtC.QsciPrinter, pageOrder: qprinter_enums.PageOrder ```
    pub fn SetPageOrder(self: ?*anyopaque, pageOrder: i64) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self), @intCast(pageOrder));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PageOrder(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PageOrder(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ``` self: QtC.QsciPrinter, resolution: i32 ```
    pub fn SetResolution(self: ?*anyopaque, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self), @intCast(resolution));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn Resolution(self: ?*anyopaque) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ``` self: QtC.QsciPrinter, colorMode: qprinter_enums.ColorMode ```
    pub fn SetColorMode(self: ?*anyopaque, colorMode: i64) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self), @intCast(colorMode));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn ColorMode(self: ?*anyopaque) i64 {
        return qtc.QPrinter_ColorMode(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ``` self: QtC.QsciPrinter, collate: bool ```
    pub fn SetCollateCopies(self: ?*anyopaque, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self), collate);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn CollateCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ``` self: QtC.QsciPrinter, fullPage: bool ```
    pub fn SetFullPage(self: ?*anyopaque, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self), fullPage);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn FullPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ``` self: QtC.QsciPrinter, copyCount: i32 ```
    pub fn SetCopyCount(self: ?*anyopaque, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self), @intCast(copyCount));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn CopyCount(self: ?*anyopaque) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn SupportsMultipleCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ``` self: QtC.QsciPrinter, paperSource: qprinter_enums.PaperSource ```
    pub fn SetPaperSource(self: ?*anyopaque, paperSource: i64) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self), @intCast(paperSource));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PaperSource(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PaperSource(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ``` self: QtC.QsciPrinter, duplex: qprinter_enums.DuplexMode ```
    pub fn SetDuplex(self: ?*anyopaque, duplex: i64) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self), @intCast(duplex));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn Duplex(self: ?*anyopaque) i64 {
        return qtc.QPrinter_Duplex(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn SupportedResolutions(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsciprinter.SupportedResolutions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
    ///
    /// ``` self: QtC.QsciPrinter, enable: bool ```
    pub fn SetFontEmbeddingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn FontEmbeddingEnabled(self: ?*anyopaque) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ``` self: QtC.QsciPrinter, param1: qprinter_enums.Unit ```
    pub fn PaperRect(self: ?*anyopaque, param1: i64) QtC.QRectF {
        return qtc.QPrinter_PaperRect(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ``` self: QtC.QsciPrinter, param1: qprinter_enums.Unit ```
    pub fn PageRect(self: ?*anyopaque, param1: i64) QtC.QRectF {
        return qtc.QPrinter_PageRect(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ``` self: QtC.QsciPrinter, allocator: std.mem.Allocator ```
    pub fn PrinterSelectionOption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.PrinterSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ``` self: QtC.QsciPrinter, printerSelectionOption: []const u8 ```
    pub fn SetPrinterSelectionOption(self: ?*anyopaque, printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.struct_libqt_string{
            .len = printerSelectionOption.len,
            .data = printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self), printerSelectionOption_str);
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn Abort(self: ?*anyopaque) bool {
        return qtc.QPrinter_Abort(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PrinterState(self: ?*anyopaque) i64 {
        return qtc.QPrinter_PrinterState(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PrintEngine(self: ?*anyopaque) QtC.QPrintEngine {
        return qtc.QPrinter_PrintEngine(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ``` self: QtC.QsciPrinter, fromPage: i32, toPage: i32 ```
    pub fn SetFromTo(self: ?*anyopaque, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self), @intCast(fromPage), @intCast(toPage));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn FromPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn ToPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ``` self: QtC.QsciPrinter, range: qprinter_enums.PrintRange ```
    pub fn SetPrintRange(self: ?*anyopaque, range: i64) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self), @intCast(range));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PageLayout(self: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPagedPaintDevice_PageLayout(@ptrCast(self));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PageRanges(self: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPagedPaintDevice_PageRanges(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QsciPrinter ```
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

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_DevType(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QsciPrinter_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QsciPrinter_NewPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn QBaseNewPage(self: ?*anyopaque) bool {
        return qtc.QsciPrinter_QBaseNewPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn () callconv(.c) bool ```
    pub fn OnNewPage(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciPrinter_OnNewPage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciPrinter_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciPrinter_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QsciPrinter_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QsciPrinter_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QsciPrinter_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QsciPrinter_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, pageLayout: QtC.QPageLayout ```
    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QsciPrinter_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, pageLayout: QtC.QPageLayout ```
    pub fn QBaseSetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QsciPrinter_QBaseSetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, pageLayout: QtC.QPageLayout) callconv(.c) bool ```
    pub fn OnSetPageLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, pageSize: QtC.QPageSize ```
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QsciPrinter_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, pageSize: QtC.QPageSize ```
    pub fn QBaseSetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QsciPrinter_QBaseSetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, pageSize: QtC.QPageSize) callconv(.c) bool ```
    pub fn OnSetPageSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, orientation: qpagelayout_enums.Orientation ```
    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QsciPrinter_SetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, orientation: qpagelayout_enums.Orientation ```
    pub fn QBaseSetPageOrientation(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QsciPrinter_QBaseSetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool ```
    pub fn OnSetPageOrientation(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit ```
    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i64) bool {
        return qtc.QsciPrinter_SetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit ```
    pub fn QBaseSetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i64) bool {
        return qtc.QsciPrinter_QBaseSetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool ```
    pub fn OnSetPageMargins(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, ranges: QtC.QPageRanges ```
    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QsciPrinter_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, ranges: QtC.QPageRanges ```
    pub fn QBaseSetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QsciPrinter_QBaseSetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, ranges: QtC.QPageRanges) callconv(.c) void ```
    pub fn OnSetPageRanges(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetPageRanges(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciPrinter_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciPrinter_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciPrinter_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciPrinter_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciPrinter_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QsciPrinter_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciPrinter_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciPrinter_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QsciPrinter_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine ```
    pub fn SetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QsciPrinter_SetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine ```
    pub fn QBaseSetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QsciPrinter_QBaseSetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Inherited from QPrinter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine) callconv(.c) void ```
    pub fn OnSetEngines(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetEngines(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QsciPrinter_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QsciPrinter_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciPrinter, slot: fn (self: QtC.QsciPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QsciPrinter_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciPrinter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciPrinter_Delete(@ptrCast(self));
    }
};
