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
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QsciScintillaBase = @import("libqt6").QsciScintillaBase;
const qpagedpaintdevice_enums = @import("../libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("../libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprinter_enums = @import("../printsupport/libqprinter.zig").enums;
const qsciscintilla_enums = @import("libqsciscintilla.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
pub const QsciPrinter = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciPrinter,

    pub const _is_QsciPrinter = {};
    pub const _is_QPrinter = {};
    pub const _is_QPagedPaintDevice = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QsciPrinter object.
    ///
    pub fn New() QsciPrinter {
        return .{ .ptr = qtc.QsciPrinter_new() };
    }

    /// New2 constructs a new QsciPrinter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn New2(mode: i32) QsciPrinter {
        return .{ .ptr = qtc.QsciPrinter_new2(@bitCast(mode)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` painter: QPainter `
    ///
    /// ` drawing: bool `
    ///
    /// ` area: QRect `
    ///
    /// ` pagenr: i32 `
    ///
    pub fn FormatPage(self: QsciPrinter, painter: anytype, drawing: bool, area: anytype, pagenr: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(area)._is_QRect;
        qtc.QsciPrinter_FormatPage(@ptrCast(self.ptr), @ptrCast(painter.ptr), drawing, @ptrCast(area.ptr), @bitCast(pagenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` callback: *const fn (self: QsciPrinter, painter: QPainter, drawing: bool, area: QRect, pagenr: i32) callconv(.c) void `
    ///
    pub fn OnFormatPage(self: QsciPrinter, callback: *const fn (QsciPrinter, QPainter, bool, QRect, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnFormatPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` painter: QPainter `
    ///
    /// ` drawing: bool `
    ///
    /// ` area: QRect `
    ///
    /// ` pagenr: i32 `
    ///
    pub fn SuperFormatPage(self: QsciPrinter, painter: anytype, drawing: bool, area: anytype, pagenr: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(area)._is_QRect;
        qtc.QsciPrinter_SuperFormatPage(@ptrCast(self.ptr), @ptrCast(painter.ptr), drawing, @ptrCast(area.ptr), @bitCast(pagenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn Magnification(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_Magnification(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` magnification: i32 `
    ///
    pub fn SetMagnification(self: QsciPrinter, magnification: i32) void {
        qtc.QsciPrinter_SetMagnification(@ptrCast(self.ptr), @bitCast(magnification));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` callback: *const fn (self: QsciPrinter, magnification: i32) callconv(.c) void `
    ///
    pub fn OnSetMagnification(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetMagnification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` magnification: i32 `
    ///
    pub fn SuperSetMagnification(self: QsciPrinter, magnification: i32) void {
        qtc.QsciPrinter_SuperSetMagnification(@ptrCast(self.ptr), @bitCast(magnification));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` qsb: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn PrintRange(self: QsciPrinter, qsb: anytype, painter: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.QsciPrinter_PrintRange(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @ptrCast(painter.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` callback: *const fn (self: QsciPrinter, qsb: QsciScintillaBase, painter: QPainter, from: i32, to: i32) callconv(.c) i32 `
    ///
    pub fn OnPrintRange(self: QsciPrinter, callback: *const fn (QsciPrinter, QsciScintillaBase, QPainter, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` qsb: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn SuperPrintRange(self: QsciPrinter, qsb: anytype, painter: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.QsciPrinter_SuperPrintRange(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @ptrCast(painter.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` qsb: QsciScintillaBase `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn PrintRange2(self: QsciPrinter, qsb: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        return qtc.QsciPrinter_PrintRange2(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` callback: *const fn (self: QsciPrinter, qsb: QsciScintillaBase, from: i32, to: i32) callconv(.c) i32 `
    ///
    pub fn OnPrintRange2(self: QsciPrinter, callback: *const fn (QsciPrinter, QsciScintillaBase, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` qsb: QsciScintillaBase `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn SuperPrintRange2(self: QsciPrinter, qsb: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        return qtc.QsciPrinter_SuperPrintRange2(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.WrapMode `
    ///
    pub fn WrapMode(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_WrapMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` wmode: qsciscintilla_enums.WrapMode `
    ///
    pub fn SetWrapMode(self: QsciPrinter, wmode: i32) void {
        qtc.QsciPrinter_SetWrapMode(@ptrCast(self.ptr), @bitCast(wmode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` callback: *const fn (self: QsciPrinter, wmode: qsciscintilla_enums.WrapMode) callconv(.c) void `
    ///
    pub fn OnSetWrapMode(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetWrapMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` wmode: qsciscintilla_enums.WrapMode `
    ///
    pub fn SuperSetWrapMode(self: QsciPrinter, wmode: i32) void {
        qtc.QsciPrinter_SuperSetWrapMode(@ptrCast(self.ptr), @bitCast(wmode));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` format: qprinter_enums.OutputFormat `
    ///
    pub fn SetOutputFormat(self: QsciPrinter, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.OutputFormat `
    ///
    pub fn OutputFormat(self: QsciPrinter) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` version: qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn SetPdfVersion(self: QsciPrinter, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn PdfVersion(self: QsciPrinter) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` printerName: []const u8 `
    ///
    pub fn SetPrinterName(self: QsciPrinter, printerName: []const u8) void {
        const printerName_str = qtc.libqt_string{
            .len = printerName.len,
            .data = printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self.ptr), printerName_str);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterName(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterName(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    pub fn IsValid(self: QsciPrinter) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: QsciPrinter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputFileName(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_OutputFileName(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` printProgram: []const u8 `
    ///
    pub fn SetPrintProgram(self: QsciPrinter, printProgram: []const u8) void {
        const printProgram_str = qtc.libqt_string{
            .len = printProgram.len,
            .data = printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self.ptr), printProgram_str);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrintProgram(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrintProgram(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` docName: []const u8 `
    ///
    pub fn SetDocName(self: QsciPrinter, docName: []const u8) void {
        const docName_str = qtc.libqt_string{
            .len = docName.len,
            .data = docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self.ptr), docName_str);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#docName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocName(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_DocName(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` creator: []const u8 `
    ///
    pub fn SetCreator(self: QsciPrinter, creator: []const u8) void {
        const creator_str = qtc.libqt_string{
            .len = creator.len,
            .data = creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self.ptr), creator_str);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#creator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Creator(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_Creator(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` pageOrder: qprinter_enums.PageOrder `
    ///
    pub fn SetPageOrder(self: QsciPrinter, pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self.ptr), @bitCast(pageOrder));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PageOrder `
    ///
    pub fn PageOrder(self: QsciPrinter) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` resolution: i32 `
    ///
    pub fn SetResolution(self: QsciPrinter, resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self.ptr), @bitCast(resolution));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn Resolution(self: QsciPrinter) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` colorMode: qprinter_enums.ColorMode `
    ///
    pub fn SetColorMode(self: QsciPrinter, colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self.ptr), @bitCast(colorMode));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#colorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.ColorMode `
    ///
    pub fn ColorMode(self: QsciPrinter) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` collate: bool `
    ///
    pub fn SetCollateCopies(self: QsciPrinter, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self.ptr), collate);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn CollateCopies(self: QsciPrinter) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` fullPage: bool `
    ///
    pub fn SetFullPage(self: QsciPrinter, fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self.ptr), fullPage);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn FullPage(self: QsciPrinter) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` copyCount: i32 `
    ///
    pub fn SetCopyCount(self: QsciPrinter, copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self.ptr), @bitCast(copyCount));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn CopyCount(self: QsciPrinter) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn SupportsMultipleCopies(self: QsciPrinter) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` paperSource: qprinter_enums.PaperSource `
    ///
    pub fn SetPaperSource(self: QsciPrinter, paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self.ptr), @bitCast(paperSource));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PaperSource `
    ///
    pub fn PaperSource(self: QsciPrinter) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` duplex: qprinter_enums.DuplexMode `
    ///
    pub fn SetDuplex(self: QsciPrinter, duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self.ptr), @bitCast(duplex));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#duplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.DuplexMode `
    ///
    pub fn Duplex(self: QsciPrinter) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedResolutions(self: QsciPrinter, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFontEmbeddingEnabled(self: QsciPrinter, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn FontEmbeddingEnabled(self: QsciPrinter) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paperRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PaperRect(self: QsciPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PaperRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#pageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` param1: qprinter_enums.Unit `
    ///
    pub fn PageRect(self: QsciPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PageRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrinterSelectionOption(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` printerSelectionOption: []const u8 `
    ///
    pub fn SetPrinterSelectionOption(self: QsciPrinter, printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.libqt_string{
            .len = printerSelectionOption.len,
            .data = printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self.ptr), printerSelectionOption_str);
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn Abort(self: QsciPrinter) bool {
        return qtc.QPrinter_Abort(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printerState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ## Returns:
    ///
    /// ` qprinter_enums.PrinterState `
    ///
    pub fn PrinterState(self: QsciPrinter) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PrintEngine(self: QsciPrinter) QPrintEngine {
        return .{ .ptr = qtc.QPrinter_PrintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` fromPage: i32 `
    ///
    /// ` toPage: i32 `
    ///
    pub fn SetFromTo(self: QsciPrinter, fromPage: i32, toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self.ptr), @bitCast(fromPage), @bitCast(toPage));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn FromPage(self: QsciPrinter) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn ToPage(self: QsciPrinter) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` range: qprinter_enums.PrintRange `
    ///
    pub fn SetPrintRange(self: QsciPrinter, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PageLayout(self: QsciPrinter) QPageLayout {
        return .{ .ptr = qtc.QPagedPaintDevice_PageLayout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PageRanges(self: QsciPrinter) QPageRanges {
        return .{ .ptr = qtc.QPagedPaintDevice_PageRanges(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PaintingActive(self: QsciPrinter) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn Width(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn Height(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn WidthMM(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn HeightMM(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn LogicalDpiX(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn LogicalDpiY(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PhysicalDpiX(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PhysicalDpiY(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn DevicePixelRatio(self: QsciPrinter) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn DevicePixelRatioF(self: QsciPrinter) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn ColorCount(self: QsciPrinter) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn Depth(self: QsciPrinter) i32 {
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

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn DevType(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_DevType(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    pub fn SuperDevType(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QsciPrinter, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciPrinter_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn NewPage(self: QsciPrinter) bool {
        return qtc.QsciPrinter_NewPage(@ptrCast(self.ptr));
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
    /// ` self: QsciPrinter `
    ///
    pub fn SuperNewPage(self: QsciPrinter) bool {
        return qtc.QsciPrinter_SuperNewPage(@ptrCast(self.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#newPage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnNewPage(self: QsciPrinter, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciPrinter_OnNewPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn PaintEngine(self: QsciPrinter) QPaintEngine {
        return .{ .ptr = qtc.QsciPrinter_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciPrinter `
    ///
    pub fn SuperPaintEngine(self: QsciPrinter) QPaintEngine {
        return .{ .ptr = qtc.QsciPrinter_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QsciPrinter, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QsciPrinter_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QsciPrinter, param1: i32) i32 {
        return qtc.QsciPrinter_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciPrinter `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QsciPrinter, param1: i32) i32 {
        return qtc.QsciPrinter_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` pageLayout: QPageLayout `
    ///
    pub fn SetPageLayout(self: QsciPrinter, pageLayout: anytype) bool {
        comptime _ = @TypeOf(pageLayout)._is_QPageLayout;
        return qtc.QsciPrinter_SetPageLayout(@ptrCast(self.ptr), @ptrCast(pageLayout.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` pageLayout: QPageLayout `
    ///
    pub fn SuperSetPageLayout(self: QsciPrinter, pageLayout: anytype) bool {
        comptime _ = @TypeOf(pageLayout)._is_QPageLayout;
        return qtc.QsciPrinter_SuperSetPageLayout(@ptrCast(self.ptr), @ptrCast(pageLayout.ptr));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, pageLayout: QPageLayout) callconv(.c) bool `
    ///
    pub fn OnSetPageLayout(self: QsciPrinter, callback: *const fn (QsciPrinter, QPageLayout) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn SetPageSize(self: QsciPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QsciPrinter_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn SuperSetPageSize(self: QsciPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QsciPrinter_SuperSetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, pageSize: QPageSize) callconv(.c) bool `
    ///
    pub fn OnSetPageSize(self: QsciPrinter, callback: *const fn (QsciPrinter, QPageSize) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SetPageOrientation(self: QsciPrinter, orientation: i32) bool {
        return qtc.QsciPrinter_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QsciPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn SuperSetPageOrientation(self: QsciPrinter, orientation: i32) bool {
        return qtc.QsciPrinter_SuperSetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool `
    ///
    pub fn OnSetPageOrientation(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SetPageMargins(self: QsciPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QsciPrinter_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
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
    /// ` self: QsciPrinter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn SuperSetPageMargins(self: QsciPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QsciPrinter_SuperSetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, margins: QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool `
    ///
    pub fn OnSetPageMargins(self: QsciPrinter, callback: *const fn (QsciPrinter, QMarginsF, i32) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn SetPageRanges(self: QsciPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QsciPrinter_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn SuperSetPageRanges(self: QsciPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QsciPrinter_SuperSetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
    }

    /// Inherited from QPagedPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, ranges: QPageRanges) callconv(.c) void `
    ///
    pub fn OnSetPageRanges(self: QsciPrinter, callback: *const fn (QsciPrinter, QPageRanges) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetPageRanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QsciPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciPrinter_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QsciPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciPrinter_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QsciPrinter, callback: *const fn (QsciPrinter, QPainter) callconv(.c) void) void {
        qtc.QsciPrinter_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QsciPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciPrinter_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciPrinter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QsciPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciPrinter_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QsciPrinter, callback: *const fn (QsciPrinter, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QsciPrinter_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn SharedPainter(self: QsciPrinter) QPainter {
        return .{ .ptr = qtc.QsciPrinter_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciPrinter `
    ///
    pub fn SuperSharedPainter(self: QsciPrinter) QPainter {
        return .{ .ptr = qtc.QsciPrinter_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QsciPrinter, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QsciPrinter_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` printEngine: QPrintEngine `
    ///
    /// ` paintEngine: QPaintEngine `
    ///
    pub fn SetEngines(self: QsciPrinter, printEngine: anytype, paintEngine: anytype) void {
        comptime _ = @TypeOf(printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(paintEngine)._is_QPaintEngine;
        qtc.QsciPrinter_SetEngines(@ptrCast(self.ptr), @ptrCast(printEngine.ptr), @ptrCast(paintEngine.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` printEngine: QPrintEngine `
    ///
    /// ` paintEngine: QPaintEngine `
    ///
    pub fn SuperSetEngines(self: QsciPrinter, printEngine: anytype, paintEngine: anytype) void {
        comptime _ = @TypeOf(printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(paintEngine)._is_QPaintEngine;
        qtc.QsciPrinter_SuperSetEngines(@ptrCast(self.ptr), @ptrCast(printEngine.ptr), @ptrCast(paintEngine.ptr));
    }

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setEngines)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, printEngine: QPrintEngine, paintEngine: QPaintEngine) callconv(.c) void `
    ///
    pub fn OnSetEngines(self: QsciPrinter, callback: *const fn (QsciPrinter, QPrintEngine, QPaintEngine) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetEngines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QsciPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QsciPrinter_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QsciPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QsciPrinter_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QsciPrinter, callback: *const fn (QsciPrinter, i32, i32) callconv(.c) f64) void {
        qtc.QsciPrinter_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    pub fn Delete(self: QsciPrinter) void {
        qtc.QsciPrinter_Delete(@ptrCast(self.ptr));
    }
};
