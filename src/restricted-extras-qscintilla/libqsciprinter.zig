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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciPrinter object in C++ memory
    ///
    pub fn new() QsciPrinter {
        return .{ .ptr = qtc.QsciPrinter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciPrinter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qprinter_enums.PrinterMode `
    ///
    pub fn new2(mode: i32) QsciPrinter {
        return .{ .ptr = qtc.QsciPrinter_new2(@bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `formatPage` instead
    ///
    pub const FormatPage = formatPage;

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
    pub fn formatPage(self: QsciPrinter, painter: anytype, drawing: bool, area: anytype, pagenr: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(area)._is_QRect;
        qtc.QsciPrinter_FormatPage(@ptrCast(self.ptr), @ptrCast(painter.ptr), drawing, @ptrCast(area.ptr), @bitCast(pagenr));
    }

    /// ### DEPRECATED: Use `onFormatPage` instead
    ///
    pub const OnFormatPage = onFormatPage;

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
    pub fn onFormatPage(self: QsciPrinter, callback: *const fn (QsciPrinter, QPainter, bool, QRect, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnFormatPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormatPage` instead
    ///
    pub const SuperFormatPage = superFormatPage;

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
    pub fn superFormatPage(self: QsciPrinter, painter: anytype, drawing: bool, area: anytype, pagenr: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(area)._is_QRect;
        qtc.QsciPrinter_SuperFormatPage(@ptrCast(self.ptr), @ptrCast(painter.ptr), drawing, @ptrCast(area.ptr), @bitCast(pagenr));
    }

    /// ### DEPRECATED: Use `magnification` instead
    ///
    pub const Magnification = magnification;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn magnification(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_Magnification(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMagnification` instead
    ///
    pub const SetMagnification = setMagnification;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _magnification: i32 `
    ///
    pub fn setMagnification(self: QsciPrinter, _magnification: i32) void {
        qtc.QsciPrinter_SetMagnification(@ptrCast(self.ptr), @bitCast(_magnification));
    }

    /// ### DEPRECATED: Use `onSetMagnification` instead
    ///
    pub const OnSetMagnification = onSetMagnification;

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
    pub fn onSetMagnification(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetMagnification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMagnification` instead
    ///
    pub const SuperSetMagnification = superSetMagnification;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _magnification: i32 `
    ///
    pub fn superSetMagnification(self: QsciPrinter, _magnification: i32) void {
        qtc.QsciPrinter_SuperSetMagnification(@ptrCast(self.ptr), @bitCast(_magnification));
    }

    /// ### DEPRECATED: Use `printRange` instead
    ///
    pub const PrintRange = printRange;

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
    pub fn printRange(self: QsciPrinter, qsb: anytype, painter: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.QsciPrinter_PrintRange(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @ptrCast(painter.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### DEPRECATED: Use `onPrintRange` instead
    ///
    pub const OnPrintRange = onPrintRange;

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
    pub fn onPrintRange(self: QsciPrinter, callback: *const fn (QsciPrinter, QsciScintillaBase, QPainter, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPrintRange` instead
    ///
    pub const SuperPrintRange = superPrintRange;

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
    pub fn superPrintRange(self: QsciPrinter, qsb: anytype, painter: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.QsciPrinter_SuperPrintRange(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @ptrCast(painter.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### DEPRECATED: Use `printRange2` instead
    ///
    pub const PrintRange2 = printRange2;

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
    pub fn printRange2(self: QsciPrinter, qsb: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        return qtc.QsciPrinter_PrintRange2(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### DEPRECATED: Use `onPrintRange2` instead
    ///
    pub const OnPrintRange2 = onPrintRange2;

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
    pub fn onPrintRange2(self: QsciPrinter, callback: *const fn (QsciPrinter, QsciScintillaBase, i32, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnPrintRange2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPrintRange2` instead
    ///
    pub const SuperPrintRange2 = superPrintRange2;

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
    pub fn superPrintRange2(self: QsciPrinter, qsb: anytype, from: i32, to: i32) i32 {
        comptime _ = @TypeOf(qsb)._is_QsciScintillaBase;
        return qtc.QsciPrinter_SuperPrintRange2(@ptrCast(self.ptr), @ptrCast(qsb.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### DEPRECATED: Use `wrapMode` instead
    ///
    pub const WrapMode = wrapMode;

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
    pub fn wrapMode(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_WrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapMode` instead
    ///
    pub const SetWrapMode = setWrapMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` wmode: qsciscintilla_enums.WrapMode `
    ///
    pub fn setWrapMode(self: QsciPrinter, wmode: i32) void {
        qtc.QsciPrinter_SetWrapMode(@ptrCast(self.ptr), @bitCast(wmode));
    }

    /// ### DEPRECATED: Use `onSetWrapMode` instead
    ///
    pub const OnSetWrapMode = onSetWrapMode;

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
    pub fn onSetWrapMode(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetWrapMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWrapMode` instead
    ///
    pub const SuperSetWrapMode = superSetWrapMode;

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
    pub fn superSetWrapMode(self: QsciPrinter, wmode: i32) void {
        qtc.QsciPrinter_SuperSetWrapMode(@ptrCast(self.ptr), @bitCast(wmode));
    }

    /// ### DEPRECATED: Use `setOutputFormat` instead
    ///
    pub const SetOutputFormat = setOutputFormat;

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
    pub fn setOutputFormat(self: QsciPrinter, format: i32) void {
        qtc.QPrinter_SetOutputFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `outputFormat` instead
    ///
    pub const OutputFormat = outputFormat;

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
    pub fn outputFormat(self: QsciPrinter) i32 {
        return qtc.QPrinter_OutputFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPdfVersion` instead
    ///
    pub const SetPdfVersion = setPdfVersion;

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
    pub fn setPdfVersion(self: QsciPrinter, version: i32) void {
        qtc.QPrinter_SetPdfVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// ### DEPRECATED: Use `pdfVersion` instead
    ///
    pub const PdfVersion = pdfVersion;

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
    pub fn pdfVersion(self: QsciPrinter) i32 {
        return qtc.QPrinter_PdfVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrinterName` instead
    ///
    pub const SetPrinterName = setPrinterName;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _printerName: []const u8 `
    ///
    pub fn setPrinterName(self: QsciPrinter, _printerName: []const u8) void {
        const printerName_str = qtc.libqt_string{
            .len = _printerName.len,
            .data = _printerName.ptr,
        };
        qtc.QPrinter_SetPrinterName(@ptrCast(self.ptr), printerName_str);
    }

    /// ### DEPRECATED: Use `printerName` instead
    ///
    pub const PrinterName = printerName;

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
    pub fn printerName(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciPrinter.printerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn isValid(self: QsciPrinter) bool {
        return qtc.QPrinter_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOutputFileName` instead
    ///
    pub const SetOutputFileName = setOutputFileName;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _outputFileName: []const u8 `
    ///
    pub fn setOutputFileName(self: QsciPrinter, _outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = _outputFileName.len,
            .data = _outputFileName.ptr,
        };
        qtc.QPrinter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### DEPRECATED: Use `outputFileName` instead
    ///
    pub const OutputFileName = outputFileName;

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
    pub fn outputFileName(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_OutputFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciPrinter.outputFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrintProgram` instead
    ///
    pub const SetPrintProgram = setPrintProgram;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _printProgram: []const u8 `
    ///
    pub fn setPrintProgram(self: QsciPrinter, _printProgram: []const u8) void {
        const printProgram_str = qtc.libqt_string{
            .len = _printProgram.len,
            .data = _printProgram.ptr,
        };
        qtc.QPrinter_SetPrintProgram(@ptrCast(self.ptr), printProgram_str);
    }

    /// ### DEPRECATED: Use `printProgram` instead
    ///
    pub const PrintProgram = printProgram;

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
    pub fn printProgram(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrintProgram(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciPrinter.printProgram: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocName` instead
    ///
    pub const SetDocName = setDocName;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDocName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _docName: []const u8 `
    ///
    pub fn setDocName(self: QsciPrinter, _docName: []const u8) void {
        const docName_str = qtc.libqt_string{
            .len = _docName.len,
            .data = _docName.ptr,
        };
        qtc.QPrinter_SetDocName(@ptrCast(self.ptr), docName_str);
    }

    /// ### DEPRECATED: Use `docName` instead
    ///
    pub const DocName = docName;

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
    pub fn docName(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_DocName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciPrinter.docName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCreator` instead
    ///
    pub const SetCreator = setCreator;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCreator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _creator: []const u8 `
    ///
    pub fn setCreator(self: QsciPrinter, _creator: []const u8) void {
        const creator_str = qtc.libqt_string{
            .len = _creator.len,
            .data = _creator.ptr,
        };
        qtc.QPrinter_SetCreator(@ptrCast(self.ptr), creator_str);
    }

    /// ### DEPRECATED: Use `creator` instead
    ///
    pub const Creator = creator;

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
    pub fn creator(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_Creator(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciPrinter.creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPageOrder` instead
    ///
    pub const SetPageOrder = setPageOrder;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _pageOrder: qprinter_enums.PageOrder `
    ///
    pub fn setPageOrder(self: QsciPrinter, _pageOrder: i32) void {
        qtc.QPrinter_SetPageOrder(@ptrCast(self.ptr), @bitCast(_pageOrder));
    }

    /// ### DEPRECATED: Use `pageOrder` instead
    ///
    pub const PageOrder = pageOrder;

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
    pub fn pageOrder(self: QsciPrinter) i32 {
        return qtc.QPrinter_PageOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResolution` instead
    ///
    pub const SetResolution = setResolution;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _resolution: i32 `
    ///
    pub fn setResolution(self: QsciPrinter, _resolution: i32) void {
        qtc.QPrinter_SetResolution(@ptrCast(self.ptr), @bitCast(_resolution));
    }

    /// ### DEPRECATED: Use `resolution` instead
    ///
    pub const Resolution = resolution;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn resolution(self: QsciPrinter) i32 {
        return qtc.QPrinter_Resolution(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorMode` instead
    ///
    pub const SetColorMode = setColorMode;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _colorMode: qprinter_enums.ColorMode `
    ///
    pub fn setColorMode(self: QsciPrinter, _colorMode: i32) void {
        qtc.QPrinter_SetColorMode(@ptrCast(self.ptr), @bitCast(_colorMode));
    }

    /// ### DEPRECATED: Use `colorMode` instead
    ///
    pub const ColorMode = colorMode;

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
    pub fn colorMode(self: QsciPrinter) i32 {
        return qtc.QPrinter_ColorMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCollateCopies` instead
    ///
    pub const SetCollateCopies = setCollateCopies;

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
    pub fn setCollateCopies(self: QsciPrinter, collate: bool) void {
        qtc.QPrinter_SetCollateCopies(@ptrCast(self.ptr), collate);
    }

    /// ### DEPRECATED: Use `collateCopies` instead
    ///
    pub const CollateCopies = collateCopies;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn collateCopies(self: QsciPrinter) bool {
        return qtc.QPrinter_CollateCopies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFullPage` instead
    ///
    pub const SetFullPage = setFullPage;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _fullPage: bool `
    ///
    pub fn setFullPage(self: QsciPrinter, _fullPage: bool) void {
        qtc.QPrinter_SetFullPage(@ptrCast(self.ptr), _fullPage);
    }

    /// ### DEPRECATED: Use `fullPage` instead
    ///
    pub const FullPage = fullPage;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fullPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn fullPage(self: QsciPrinter) bool {
        return qtc.QPrinter_FullPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCopyCount` instead
    ///
    pub const SetCopyCount = setCopyCount;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _copyCount: i32 `
    ///
    pub fn setCopyCount(self: QsciPrinter, _copyCount: i32) void {
        qtc.QPrinter_SetCopyCount(@ptrCast(self.ptr), @bitCast(_copyCount));
    }

    /// ### DEPRECATED: Use `copyCount` instead
    ///
    pub const CopyCount = copyCount;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#copyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn copyCount(self: QsciPrinter) i32 {
        return qtc.QPrinter_CopyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsMultipleCopies` instead
    ///
    pub const SupportsMultipleCopies = supportsMultipleCopies;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn supportsMultipleCopies(self: QsciPrinter) bool {
        return qtc.QPrinter_SupportsMultipleCopies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaperSource` instead
    ///
    pub const SetPaperSource = setPaperSource;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _paperSource: qprinter_enums.PaperSource `
    ///
    pub fn setPaperSource(self: QsciPrinter, _paperSource: i32) void {
        qtc.QPrinter_SetPaperSource(@ptrCast(self.ptr), @bitCast(_paperSource));
    }

    /// ### DEPRECATED: Use `paperSource` instead
    ///
    pub const PaperSource = paperSource;

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
    pub fn paperSource(self: QsciPrinter) i32 {
        return qtc.QPrinter_PaperSource(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDuplex` instead
    ///
    pub const SetDuplex = setDuplex;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _duplex: qprinter_enums.DuplexMode `
    ///
    pub fn setDuplex(self: QsciPrinter, _duplex: i32) void {
        qtc.QPrinter_SetDuplex(@ptrCast(self.ptr), @bitCast(_duplex));
    }

    /// ### DEPRECATED: Use `duplex` instead
    ///
    pub const Duplex = duplex;

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
    pub fn duplex(self: QsciPrinter) i32 {
        return qtc.QPrinter_Duplex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedResolutions` instead
    ///
    pub const SupportedResolutions = supportedResolutions;

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
    pub fn supportedResolutions(self: QsciPrinter, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPrinter_SupportedResolutions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QsciPrinter.supportedResolutions: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFontEmbeddingEnabled` instead
    ///
    pub const SetFontEmbeddingEnabled = setFontEmbeddingEnabled;

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
    pub fn setFontEmbeddingEnabled(self: QsciPrinter, enable: bool) void {
        qtc.QPrinter_SetFontEmbeddingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fontEmbeddingEnabled` instead
    ///
    pub const FontEmbeddingEnabled = fontEmbeddingEnabled;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn fontEmbeddingEnabled(self: QsciPrinter) bool {
        return qtc.QPrinter_FontEmbeddingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paperRect` instead
    ///
    pub const PaperRect = paperRect;

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
    pub fn paperRect(self: QsciPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PaperRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `pageRect` instead
    ///
    pub const PageRect = pageRect;

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
    pub fn pageRect(self: QsciPrinter, param1: i32) QRectF {
        return .{ .ptr = qtc.QPrinter_PageRect(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `printerSelectionOption` instead
    ///
    pub const PrinterSelectionOption = printerSelectionOption;

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
    pub fn printerSelectionOption(self: QsciPrinter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPrinter_PrinterSelectionOption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciPrinter.printerSelectionOption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrinterSelectionOption` instead
    ///
    pub const SetPrinterSelectionOption = setPrinterSelectionOption;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _printerSelectionOption: []const u8 `
    ///
    pub fn setPrinterSelectionOption(self: QsciPrinter, _printerSelectionOption: []const u8) void {
        const printerSelectionOption_str = qtc.libqt_string{
            .len = _printerSelectionOption.len,
            .data = _printerSelectionOption.ptr,
        };
        qtc.QPrinter_SetPrinterSelectionOption(@ptrCast(self.ptr), printerSelectionOption_str);
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn abort(self: QsciPrinter) bool {
        return qtc.QPrinter_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `printerState` instead
    ///
    pub const PrinterState = printerState;

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
    pub fn printerState(self: QsciPrinter) i32 {
        return qtc.QPrinter_PrinterState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `printEngine` instead
    ///
    pub const PrintEngine = printEngine;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#printEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn printEngine(self: QsciPrinter) QPrintEngine {
        return .{ .ptr = qtc.QPrinter_PrintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFromTo` instead
    ///
    pub const SetFromTo = setFromTo;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    /// ` _fromPage: i32 `
    ///
    /// ` _toPage: i32 `
    ///
    pub fn setFromTo(self: QsciPrinter, _fromPage: i32, _toPage: i32) void {
        qtc.QPrinter_SetFromTo(@ptrCast(self.ptr), @bitCast(_fromPage), @bitCast(_toPage));
    }

    /// ### DEPRECATED: Use `fromPage` instead
    ///
    pub const FromPage = fromPage;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#fromPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn fromPage(self: QsciPrinter) i32 {
        return qtc.QPrinter_FromPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPage` instead
    ///
    pub const ToPage = toPage;

    /// Inherited from QPrinter
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprinter.html#toPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn toPage(self: QsciPrinter) i32 {
        return qtc.QPrinter_ToPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPrintRange` instead
    ///
    pub const SetPrintRange = setPrintRange;

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
    pub fn setPrintRange(self: QsciPrinter, range: i32) void {
        qtc.QPrinter_SetPrintRange(@ptrCast(self.ptr), @bitCast(range));
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
    /// ` self: QsciPrinter `
    ///
    pub fn pageLayout(self: QsciPrinter) QPageLayout {
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
    /// ` self: QsciPrinter `
    ///
    pub fn pageRanges(self: QsciPrinter) QPageRanges {
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
    /// ` self: QsciPrinter `
    ///
    pub fn paintingActive(self: QsciPrinter) bool {
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
    /// ` self: QsciPrinter `
    ///
    pub fn width(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn height(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn widthMM(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn heightMM(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn logicalDpiX(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn logicalDpiY(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn physicalDpiX(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn physicalDpiY(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn devicePixelRatio(self: QsciPrinter) f64 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn devicePixelRatioF(self: QsciPrinter) f64 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn colorCount(self: QsciPrinter) i32 {
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
    /// ` self: QsciPrinter `
    ///
    pub fn depth(self: QsciPrinter) i32 {
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

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

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
    pub fn devType(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

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
    pub fn superDevType(self: QsciPrinter) i32 {
        return qtc.QsciPrinter_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QsciPrinter, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciPrinter_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newPage` instead
    ///
    pub const NewPage = newPage;

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
    pub fn newPage(self: QsciPrinter) bool {
        return qtc.QsciPrinter_NewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superNewPage` instead
    ///
    pub const SuperNewPage = superNewPage;

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
    pub fn superNewPage(self: QsciPrinter) bool {
        return qtc.QsciPrinter_SuperNewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewPage` instead
    ///
    pub const OnNewPage = onNewPage;

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
    pub fn onNewPage(self: QsciPrinter, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciPrinter_OnNewPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

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
    pub fn paintEngine(self: QsciPrinter) QPaintEngine {
        return .{ .ptr = qtc.QsciPrinter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

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
    pub fn superPaintEngine(self: QsciPrinter) QPaintEngine {
        return .{ .ptr = qtc.QsciPrinter_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: QsciPrinter, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QsciPrinter_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

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
    pub fn metric(self: QsciPrinter, param1: i32) i32 {
        return qtc.QsciPrinter_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

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
    pub fn superMetric(self: QsciPrinter, param1: i32) i32 {
        return qtc.QsciPrinter_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) i32) void {
        qtc.QsciPrinter_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn setPageLayout(self: QsciPrinter, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QsciPrinter_SetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn superSetPageLayout(self: QsciPrinter, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QsciPrinter_SuperSetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, pageLayout: QPageLayout) callconv(.c) bool `
    ///
    pub fn onSetPageLayout(self: QsciPrinter, callback: *const fn (QsciPrinter, QPageLayout) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn setPageSize(self: QsciPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QsciPrinter_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn superSetPageSize(self: QsciPrinter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QsciPrinter_SuperSetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, pageSize: QPageSize) callconv(.c) bool `
    ///
    pub fn onSetPageSize(self: QsciPrinter, callback: *const fn (QsciPrinter, QPageSize) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn setPageOrientation(self: QsciPrinter, orientation: i32) bool {
        return qtc.QsciPrinter_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QsciPrinter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn superSetPageOrientation(self: QsciPrinter, orientation: i32) bool {
        return qtc.QsciPrinter_SuperSetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool `
    ///
    pub fn onSetPageOrientation(self: QsciPrinter, callback: *const fn (QsciPrinter, i32) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn setPageMargins(self: QsciPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QsciPrinter_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
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
    /// ` self: QsciPrinter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn superSetPageMargins(self: QsciPrinter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QsciPrinter_SuperSetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, margins: QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool `
    ///
    pub fn onSetPageMargins(self: QsciPrinter, callback: *const fn (QsciPrinter, QMarginsF, i32) callconv(.c) bool) void {
        qtc.QsciPrinter_OnSetPageMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn setPageRanges(self: QsciPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QsciPrinter_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn superSetPageRanges(self: QsciPrinter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QsciPrinter_SuperSetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, ranges: QPageRanges) callconv(.c) void `
    ///
    pub fn onSetPageRanges(self: QsciPrinter, callback: *const fn (QsciPrinter, QPageRanges) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetPageRanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QsciPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciPrinter_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciPrinter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QsciPrinter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciPrinter_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QsciPrinter, callback: *const fn (QsciPrinter, QPainter) callconv(.c) void) void {
        qtc.QsciPrinter_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QsciPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciPrinter_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciPrinter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QsciPrinter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciPrinter_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QsciPrinter, callback: *const fn (QsciPrinter, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QsciPrinter_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    pub fn sharedPainter(self: QsciPrinter) QPainter {
        return .{ .ptr = qtc.QsciPrinter_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciPrinter `
    ///
    pub fn superSharedPainter(self: QsciPrinter) QPainter {
        return .{ .ptr = qtc.QsciPrinter_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QsciPrinter, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QsciPrinter_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEngines` instead
    ///
    pub const SetEngines = setEngines;

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
    /// ` _printEngine: QPrintEngine `
    ///
    /// ` _paintEngine: QPaintEngine `
    ///
    pub fn setEngines(self: QsciPrinter, _printEngine: anytype, _paintEngine: anytype) void {
        comptime _ = @TypeOf(_printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(_paintEngine)._is_QPaintEngine;
        qtc.QsciPrinter_SetEngines(@ptrCast(self.ptr), @ptrCast(_printEngine.ptr), @ptrCast(_paintEngine.ptr));
    }

    /// ### DEPRECATED: Use `superSetEngines` instead
    ///
    pub const SuperSetEngines = superSetEngines;

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
    /// ` _printEngine: QPrintEngine `
    ///
    /// ` _paintEngine: QPaintEngine `
    ///
    pub fn superSetEngines(self: QsciPrinter, _printEngine: anytype, _paintEngine: anytype) void {
        comptime _ = @TypeOf(_printEngine)._is_QPrintEngine;
        comptime _ = @TypeOf(_paintEngine)._is_QPaintEngine;
        qtc.QsciPrinter_SuperSetEngines(@ptrCast(self.ptr), @ptrCast(_printEngine.ptr), @ptrCast(_paintEngine.ptr));
    }

    /// ### DEPRECATED: Use `onSetEngines` instead
    ///
    pub const OnSetEngines = onSetEngines;

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
    pub fn onSetEngines(self: QsciPrinter, callback: *const fn (QsciPrinter, QPrintEngine, QPaintEngine) callconv(.c) void) void {
        qtc.QsciPrinter_OnSetEngines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QsciPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QsciPrinter_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciPrinter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QsciPrinter, metricA: i32, metricB: i32) f64 {
        return qtc.QsciPrinter_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciPrinter`
    ///
    /// ` callback: *const fn (self: QsciPrinter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QsciPrinter, callback: *const fn (QsciPrinter, i32, i32) callconv(.c) f64) void {
        qtc.QsciPrinter_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciPrinter `
    ///
    pub fn delete(self: QsciPrinter) void {
        qtc.QsciPrinter_Delete(@ptrCast(self.ptr));
    }
};
