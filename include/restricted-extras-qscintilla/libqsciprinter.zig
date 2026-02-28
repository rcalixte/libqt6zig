const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagedpaintdevice_enums = @import("../libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("../libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprinter_enums = @import("../printsupport/libqprinter.zig").enums;
const qsciscintilla_enums = @import("libqsciscintilla.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
pub const qsciprinter = struct {
    /// New constructs a new QsciPrinter object.
    ///
    pub fn New() QtC.QsciPrinter {
        return qtc.QsciPrinter_new();
    }

    /// New2 constructs a new QsciPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn New2(mode: i32) QtC.QsciPrinter {
        return qtc.QsciPrinter_new2(@bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` drawing: bool `
    ///
    /// ` area: QtC.QRect `
    ///
    /// ` pagenr: i32 `
    ///
    pub fn FormatPage(self: ?*anyopaque, painter: ?*anyopaque, drawing: bool, area: ?*anyopaque, pagenr: i32) void {
        qtc.QsciPrinter_FormatPage(@ptrCast(self), @ptrCast(painter), drawing, @ptrCast(area), @bitCast(pagenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, painter: QtC.QPainter, drawing: bool, area: QtC.QRect, pagenr: i32) callconv(.c) void `
    ///
    pub fn OnFormatPage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnFormatPage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormatPage` instead
    ///
    pub const QBaseFormatPage = SuperFormatPage;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` drawing: bool `
    ///
    /// ` area: QtC.QRect `
    ///
    /// ` pagenr: i32 `
    ///
    pub fn SuperFormatPage(self: ?*anyopaque, painter: ?*anyopaque, drawing: bool, area: ?*anyopaque, pagenr: i32) void {
        qtc.QsciPrinter_SuperFormatPage(@ptrCast(self), @ptrCast(painter), drawing, @ptrCast(area), @bitCast(pagenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn Magnification(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_Magnification(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` magnification: i32 `
    ///
    pub fn SetMagnification(self: ?*anyopaque, magnification: i32) void {
        qtc.QsciPrinter_SetMagnification(@ptrCast(self), @bitCast(magnification));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, magnification: i32) callconv(.c) void `
    ///
    pub fn OnSetMagnification(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetMagnification(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMagnification` instead
    ///
    pub const QBaseSetMagnification = SuperSetMagnification;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` magnification: i32 `
    ///
    pub fn SuperSetMagnification(self: ?*anyopaque, magnification: i32) void {
        qtc.QsciPrinter_SuperSetMagnification(@ptrCast(self), @bitCast(magnification));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` qsb: QtC.QsciScintillaBase `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn PrintRange(self: ?*anyopaque, qsb: ?*anyopaque, painter: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_PrintRange(@ptrCast(self), @ptrCast(qsb), @ptrCast(painter), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, painter: QtC.QPainter, from: i32, to: i32) callconv(.c) i32 `
    ///
    pub fn OnPrintRange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPrintRange` instead
    ///
    pub const QBasePrintRange = SuperPrintRange;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` qsb: QtC.QsciScintillaBase `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn SuperPrintRange(self: ?*anyopaque, qsb: ?*anyopaque, painter: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_SuperPrintRange(@ptrCast(self), @ptrCast(qsb), @ptrCast(painter), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` qsb: QtC.QsciScintillaBase `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn PrintRange2(self: ?*anyopaque, qsb: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_PrintRange2(@ptrCast(self), @ptrCast(qsb), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, qsb: QtC.QsciScintillaBase, from: i32, to: i32) callconv(.c) i32 `
    ///
    pub fn OnPrintRange2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPrintRange2` instead
    ///
    pub const QBasePrintRange2 = SuperPrintRange2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` qsb: QtC.QsciScintillaBase `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn SuperPrintRange2(self: ?*anyopaque, qsb: ?*anyopaque, from: i32, to: i32) i32 {
        return qtc.QsciPrinter_SuperPrintRange2(@ptrCast(self), @ptrCast(qsb), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.WrapMode `
    ///
    pub fn WrapMode(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_WrapMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` wmode: qsciscintilla_enums.WrapMode `
    ///
    pub fn SetWrapMode(self: ?*anyopaque, wmode: i32) void {
        qtc.QsciPrinter_SetWrapMode(@ptrCast(self), @bitCast(wmode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, wmode: qsciscintilla_enums.WrapMode) callconv(.c) void `
    ///
    pub fn OnSetWrapMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetWrapMode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWrapMode` instead
    ///
    pub const QBaseSetWrapMode = SuperSetWrapMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` wmode: qsciscintilla_enums.WrapMode `
    ///
    pub fn SuperSetWrapMode(self: ?*anyopaque, wmode: i32) void {
        qtc.QsciPrinter_SuperSetWrapMode(@ptrCast(self), @bitCast(wmode));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` format: qprinter_enums.OutputFormat `
    ///
    pub fn SetOutputFormat(self: ?*anyopaque, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self), @bitCast(format));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.OutputFormat `
    ///
    pub fn OutputFormat(self: ?*anyopaque) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` version: qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn SetPdfVersion(self: ?*anyopaque, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self), @bitCast(version));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn PdfVersion(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.PrinterName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_OutputFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.OutputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrintProgram(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrintProgram(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.PrintProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_DocName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.DocName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Creator(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_Creator(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` pageOrder: qprinter_enums.PageOrder `
    ///
    pub fn SetPageOrder(self: ?*anyopaque, pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self), @bitCast(pageOrder));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PageOrder `
    ///
    pub fn PageOrder(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` resolution: i32 `
    ///
    pub fn SetResolution(self: ?*anyopaque, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self), @bitCast(resolution));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn Resolution(self: ?*anyopaque) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` colorMode: qprinter_enums.ColorMode `
    ///
    pub fn SetColorMode(self: ?*anyopaque, colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self), @bitCast(colorMode));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#colorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.ColorMode `
    ///
    pub fn ColorMode(self: ?*anyopaque) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` collate: bool `
    ///
    pub fn SetCollateCopies(self: ?*anyopaque, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self), collate);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn CollateCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` fullPage: bool `
    ///
    pub fn SetFullPage(self: ?*anyopaque, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self), fullPage);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn FullPage(self: ?*anyopaque) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` copyCount: i32 `
    ///
    pub fn SetCopyCount(self: ?*anyopaque, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self), @bitCast(copyCount));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn CopyCount(self: ?*anyopaque) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn SupportsMultipleCopies(self: ?*anyopaque) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` paperSource: qprinter_enums.PaperSource `
    ///
    pub fn SetPaperSource(self: ?*anyopaque, paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self), @bitCast(paperSource));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PaperSource `
    ///
    pub fn PaperSource(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` duplex: qprinter_enums.DuplexMode `
    ///
    pub fn SetDuplex(self: ?*anyopaque, duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self), @bitCast(duplex));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#duplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.DuplexMode `
    ///
    pub fn Duplex(self: ?*anyopaque) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedResolutions(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsciprinter.SupportedResolutions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontEmbeddingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn FontEmbeddingEnabled(self: ?*anyopaque) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PaperRect(self: ?*anyopaque, param1: i32) QtC.QRectF {
        return qtc.QPrinter_PaperRect(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PageRect(self: ?*anyopaque, param1: i32) QtC.QRectF {
        return qtc.QPrinter_PageRect(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterSelectionOption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciprinter.PrinterSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn Abort(self: ?*anyopaque) bool {
        return qtc.QPrinter_Abort(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrinterState `
    ///
    pub fn PrinterState(self: ?*anyopaque) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn PrintEngine(self: ?*anyopaque) QtC.QPrintEngine {
        return qtc.QPrinter_PrintEngine(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` fromPage: i32 `
    ///
    /// ` toPage: i32 `
    ///
    pub fn SetFromTo(self: ?*anyopaque, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self), @bitCast(fromPage), @bitCast(toPage));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn FromPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn ToPage(self: ?*anyopaque) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` range: qprinter_enums.PrintRange `
    ///
    pub fn SetPrintRange(self: ?*anyopaque, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self), @bitCast(range));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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
    /// ` self: QtC.QsciPrinter `
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_DevType(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.QsciPrinter_SuperDevType(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciPrinter_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QsciPrinter_NewPage(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperNewPage` instead
    ///
    pub const QBaseNewPage = SuperNewPage;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn SuperNewPage(self: ?*anyopaque) bool {
        return qtc.QsciPrinter_SuperNewPage(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnNewPage(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciPrinter_OnNewPage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciPrinter_PaintEngine(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciPrinter_SuperPaintEngine(@ptrCast(self));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QsciPrinter_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QsciPrinter_Metric(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QsciPrinter_SuperMetric(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` pageLayout: QtC.QPageLayout `
    ///
    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QsciPrinter_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` pageLayout: QtC.QPageLayout `
    ///
    pub fn SuperSetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QsciPrinter_SuperSetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, pageLayout: QtC.QPageLayout) callconv(.c) bool `
    ///
    pub fn OnSetPageLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QsciPrinter_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` pageSize: QtC.QPageSize `
    ///
    pub fn SuperSetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QsciPrinter_SuperSetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, pageSize: QtC.QPageSize) callconv(.c) bool `
    ///
    pub fn OnSetPageSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QsciPrinter_SetPageOrientation(@ptrCast(self), @bitCast(orientation));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SuperSetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QsciPrinter_SuperSetPageOrientation(@ptrCast(self), @bitCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool `
    ///
    pub fn OnSetPageOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageOrientation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QsciPrinter_SetPageMargins(@ptrCast(self), @ptrCast(margins), @bitCast(units));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` margins: QtC.QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SuperSetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QsciPrinter_SuperSetPageMargins(@ptrCast(self), @ptrCast(margins), @bitCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, margins: QtC.QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool `
    ///
    pub fn OnSetPageMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageMargins(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` ranges: QtC.QPageRanges `
    ///
    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QsciPrinter_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` ranges: QtC.QPageRanges `
    ///
    pub fn SuperSetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QsciPrinter_SuperSetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, ranges: QtC.QPageRanges) callconv(.c) void `
    ///
    pub fn OnSetPageRanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetPageRanges(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciPrinter_InitPainter(@ptrCast(self), @ptrCast(painter));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciPrinter_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciPrinter_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciPrinter_Redirected(@ptrCast(self), @ptrCast(offset));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciPrinter_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QsciPrinter_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciPrinter_SharedPainter(@ptrCast(self));
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
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciPrinter_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QsciPrinter_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` printEngine: QtC.QPrintEngine `
    ///
    /// ` paintEngine: QtC.QPaintEngine `
    ///
    pub fn SetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QsciPrinter_SetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// ### DEPRECATED: Use `SuperSetEngines` instead
    ///
    pub const QBaseSetEngines = SuperSetEngines;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` printEngine: QtC.QPrintEngine `
    ///
    /// ` paintEngine: QtC.QPaintEngine `
    ///
    pub fn SuperSetEngines(self: ?*anyopaque, printEngine: ?*anyopaque, paintEngine: ?*anyopaque) void {
        qtc.QsciPrinter_SuperSetEngines(@ptrCast(self), @ptrCast(printEngine), @ptrCast(paintEngine));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, printEngine: QtC.QPrintEngine, paintEngine: QtC.QPaintEngine) callconv(.c) void `
    ///
    pub fn OnSetEngines(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetEngines(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QsciPrinter_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QtC.QsciPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QsciPrinter_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QsciPrinter`
    ///
    /// ` callback: *const fn (self: QtC.QsciPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QsciPrinter_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QsciPrinter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QsciPrinter_Delete(@ptrCast(self));
    }
};
