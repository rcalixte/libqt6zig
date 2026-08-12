const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QMarginsF = @import("libqt6").QMarginsF;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPageLayout = @import("libqt6").QPageLayout;
const QPageRanges = @import("libqt6").QPageRanges;
const QPageSize = @import("libqt6").QPageSize;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPdfOutputIntent = @import("libqt6").QPdfOutputIntent;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUuid = @import("libqt6").QUuid;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpagedpaintdevice_enums = @import("libqpagedpaintdevice.zig").enums;
const qpagelayout_enums = @import("libqpagelayout.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpdfwriter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html)
pub const QPdfWriter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfWriter,

    pub const _is_QPdfWriter = {};
    pub const _is_QObject = {};
    pub const _is_QPagedPaintDevice = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn new(filename: []const u8) QPdfWriter {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.QPdfWriter_new(filename_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPdfWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn new2(device: anytype) QPdfWriter {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QPdfWriter_new2(@ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn metaObject(self: QPdfWriter) QMetaObject {
        return .{ .ptr = qtc.QPdfWriter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPdfWriter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPdfWriter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn superMetaObject(self: QPdfWriter) QMetaObject {
        return .{ .ptr = qtc.QPdfWriter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPdfWriter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfWriter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn (self: QPdfWriter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPdfWriter, callback: *const fn (QPdfWriter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPdfWriter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPdfWriter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfWriter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QPdfWriter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfWriter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn (self: QPdfWriter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPdfWriter, callback: *const fn (QPdfWriter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfWriter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QPdfWriter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfWriter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfWriter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPdfVersion` instead
    ///
    pub const SetPdfVersion = setPdfVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setPdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` version: qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn setPdfVersion(self: QPdfWriter, version: i32) void {
        qtc.QPdfWriter_SetPdfVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// ### DEPRECATED: Use `pdfVersion` instead
    ///
    pub const PdfVersion = pdfVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#pdfVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ## Returns:
    ///
    /// ` qpagedpaintdevice_enums.PdfVersion `
    ///
    pub fn pdfVersion(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_PdfVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QPdfWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfWriter_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfWriter.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QPdfWriter, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QPdfWriter_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `creator` instead
    ///
    pub const Creator = creator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#creator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn creator(self: QPdfWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfWriter_Creator(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfWriter.creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCreator` instead
    ///
    pub const SetCreator = setCreator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setCreator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _creator: []const u8 `
    ///
    pub fn setCreator(self: QPdfWriter, _creator: []const u8) void {
        const creator_str = qtc.libqt_string{
            .len = _creator.len,
            .data = _creator.ptr,
        };
        qtc.QPdfWriter_SetCreator(@ptrCast(self.ptr), creator_str);
    }

    /// ### DEPRECATED: Use `documentId` instead
    ///
    pub const DocumentId = documentId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#documentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn documentId(self: QPdfWriter) QUuid {
        return .{ .ptr = qtc.QPdfWriter_DocumentId(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDocumentId` instead
    ///
    pub const SetDocumentId = setDocumentId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _documentId: QUuid `
    ///
    pub fn setDocumentId(self: QPdfWriter, _documentId: anytype) void {
        comptime _ = @TypeOf(_documentId)._is_QUuid;
        qtc.QPdfWriter_SetDocumentId(@ptrCast(self.ptr), @ptrCast(_documentId.ptr));
    }

    /// ### DEPRECATED: Use `newPage` instead
    ///
    pub const NewPage = newPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn newPage(self: QPdfWriter) bool {
        return qtc.QPdfWriter_NewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewPage` instead
    ///
    pub const OnNewPage = onNewPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onNewPage(self: QPdfWriter, callback: *const fn () callconv(.c) bool) void {
        qtc.QPdfWriter_OnNewPage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNewPage` instead
    ///
    pub const SuperNewPage = superNewPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn superNewPage(self: QPdfWriter) bool {
        return qtc.QPdfWriter_SuperNewPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResolution` instead
    ///
    pub const SetResolution = setResolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _resolution: i32 `
    ///
    pub fn setResolution(self: QPdfWriter, _resolution: i32) void {
        qtc.QPdfWriter_SetResolution(@ptrCast(self.ptr), @bitCast(_resolution));
    }

    /// ### DEPRECATED: Use `resolution` instead
    ///
    pub const Resolution = resolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn resolution(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_Resolution(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocumentXmpMetadata` instead
    ///
    pub const SetDocumentXmpMetadata = setDocumentXmpMetadata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentXmpMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` xmpMetadata: []u8 `
    ///
    pub fn setDocumentXmpMetadata(self: QPdfWriter, xmpMetadata: []u8) void {
        const xmpMetadata_str = qtc.libqt_string{
            .len = xmpMetadata.len,
            .data = xmpMetadata.ptr,
        };
        qtc.QPdfWriter_SetDocumentXmpMetadata(@ptrCast(self.ptr), xmpMetadata_str);
    }

    /// ### DEPRECATED: Use `documentXmpMetadata` instead
    ///
    pub const DocumentXmpMetadata = documentXmpMetadata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#documentXmpMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentXmpMetadata(self: QPdfWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QPdfWriter_DocumentXmpMetadata(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QPdfWriter.documentXmpMetadata: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addFileAttachment` instead
    ///
    pub const AddFileAttachment = addFileAttachment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn addFileAttachment(self: QPdfWriter, fileName: []const u8, data: []u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QPdfWriter_AddFileAttachment(@ptrCast(self.ptr), fileName_str, data_str);
    }

    /// ### DEPRECATED: Use `colorModel` instead
    ///
    pub const ColorModel = colorModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#colorModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ## Returns:
    ///
    /// ` qpdfwriter_enums.ColorModel `
    ///
    pub fn colorModel(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_ColorModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorModel` instead
    ///
    pub const SetColorModel = setColorModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setColorModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` model: qpdfwriter_enums.ColorModel `
    ///
    pub fn setColorModel(self: QPdfWriter, model: i32) void {
        qtc.QPdfWriter_SetColorModel(@ptrCast(self.ptr), @bitCast(model));
    }

    /// ### DEPRECATED: Use `outputIntent` instead
    ///
    pub const OutputIntent = outputIntent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#outputIntent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn outputIntent(self: QPdfWriter) QPdfOutputIntent {
        return .{ .ptr = qtc.QPdfWriter_OutputIntent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOutputIntent` instead
    ///
    pub const SetOutputIntent = setOutputIntent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setOutputIntent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` intent: QPdfOutputIntent `
    ///
    pub fn setOutputIntent(self: QPdfWriter, intent: anytype) void {
        comptime _ = @TypeOf(intent)._is_QPdfOutputIntent;
        qtc.QPdfWriter_SetOutputIntent(@ptrCast(self.ptr), @ptrCast(intent.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn paintEngine(self: QPdfWriter) QPaintEngine {
        return .{ .ptr = qtc.QPdfWriter_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QPdfWriter, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPdfWriter_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn superPaintEngine(self: QPdfWriter) QPaintEngine {
        return .{ .ptr = qtc.QPdfWriter_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` id: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QPdfWriter, id: i32) i32 {
        return qtc.QPdfWriter_Metric(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn (self: QPdfWriter, id: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QPdfWriter, callback: *const fn (QPdfWriter, i32) callconv(.c) i32) void {
        qtc.QPdfWriter_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` id: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QPdfWriter, id: i32) i32 {
        return qtc.QPdfWriter_SuperMetric(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfWriter.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfWriter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addFileAttachment3` instead
    ///
    pub const AddFileAttachment3 = addFileAttachment3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn addFileAttachment3(self: QPdfWriter, fileName: []const u8, data: []u8, mimeType: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.QPdfWriter_AddFileAttachment3(@ptrCast(self.ptr), fileName_str, data_str, mimeType_str);
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPdfWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfWriter.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPdfWriter, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn isWidgetType(self: QPdfWriter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn isWindowType(self: QPdfWriter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn isQuickItemType(self: QPdfWriter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn signalsBlocked(self: QPdfWriter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPdfWriter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn thread(self: QPdfWriter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPdfWriter, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPdfWriter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPdfWriter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPdfWriter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPdfWriter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPdfWriter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPdfWriter.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPdfWriter, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPdfWriter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPdfWriter, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPdfWriter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn disconnect3(self: QPdfWriter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPdfWriter, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn dumpObjectTree(self: QPdfWriter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn dumpObjectInfo(self: QPdfWriter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPdfWriter, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPdfWriter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPdfWriter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPdfWriter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPdfWriter.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn bindingStorage(self: QPdfWriter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn bindingStorage2(self: QPdfWriter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn destroyed(self: QPdfWriter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn (self: QPdfWriter) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPdfWriter, callback: *const fn (QPdfWriter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn parent(self: QPdfWriter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPdfWriter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn deleteLater(self: QPdfWriter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPdfWriter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPdfWriter, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPdfWriter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPdfWriter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPdfWriter, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPdfWriter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPdfWriter, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPdfWriter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn (self: QPdfWriter, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPdfWriter, callback: *const fn (QPdfWriter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    pub fn pageLayout(self: QPdfWriter) QPageLayout {
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
    /// ` self: QPdfWriter `
    ///
    pub fn pageRanges(self: QPdfWriter) QPageRanges {
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
    /// ` self: QPdfWriter `
    ///
    pub fn paintingActive(self: QPdfWriter) bool {
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
    /// ` self: QPdfWriter `
    ///
    pub fn width(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn height(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn widthMM(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn heightMM(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn logicalDpiX(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn logicalDpiY(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn physicalDpiX(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn physicalDpiY(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn devicePixelRatio(self: QPdfWriter) f64 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn devicePixelRatioF(self: QPdfWriter) f64 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn colorCount(self: QPdfWriter) i32 {
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
    /// ` self: QPdfWriter `
    ///
    pub fn depth(self: QPdfWriter) i32 {
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

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPdfWriter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfWriter_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPdfWriter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfWriter_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPdfWriter, callback: *const fn (QPdfWriter, QEvent) callconv(.c) bool) void {
        qtc.QPdfWriter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPdfWriter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfWriter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPdfWriter, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfWriter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPdfWriter, callback: *const fn (QPdfWriter, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPdfWriter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPdfWriter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPdfWriter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPdfWriter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPdfWriter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPdfWriter, callback: *const fn (QPdfWriter, QTimerEvent) callconv(.c) void) void {
        qtc.QPdfWriter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPdfWriter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPdfWriter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPdfWriter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPdfWriter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPdfWriter, callback: *const fn (QPdfWriter, QChildEvent) callconv(.c) void) void {
        qtc.QPdfWriter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPdfWriter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPdfWriter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPdfWriter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPdfWriter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPdfWriter, callback: *const fn (QPdfWriter, QEvent) callconv(.c) void) void {
        qtc.QPdfWriter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPdfWriter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfWriter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPdfWriter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfWriter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPdfWriter, callback: *const fn (QPdfWriter, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfWriter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPdfWriter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfWriter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPdfWriter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfWriter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPdfWriter, callback: *const fn (QPdfWriter, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfWriter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn setPageLayout(self: QPdfWriter, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QPdfWriter_SetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
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
    /// ` self: QPdfWriter `
    ///
    /// ` _pageLayout: QPageLayout `
    ///
    pub fn superSetPageLayout(self: QPdfWriter, _pageLayout: anytype) bool {
        comptime _ = @TypeOf(_pageLayout)._is_QPageLayout;
        return qtc.QPdfWriter_SuperSetPageLayout(@ptrCast(self.ptr), @ptrCast(_pageLayout.ptr));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, pageLayout: QPageLayout) callconv(.c) bool `
    ///
    pub fn onSetPageLayout(self: QPdfWriter, callback: *const fn (QPdfWriter, QPageLayout) callconv(.c) bool) void {
        qtc.QPdfWriter_OnSetPageLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn setPageSize(self: QPdfWriter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPdfWriter_SetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
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
    /// ` self: QPdfWriter `
    ///
    /// ` pageSize: QPageSize `
    ///
    pub fn superSetPageSize(self: QPdfWriter, pageSize: anytype) bool {
        comptime _ = @TypeOf(pageSize)._is_QPageSize;
        return qtc.QPdfWriter_SuperSetPageSize(@ptrCast(self.ptr), @ptrCast(pageSize.ptr));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, pageSize: QPageSize) callconv(.c) bool `
    ///
    pub fn onSetPageSize(self: QPdfWriter, callback: *const fn (QPdfWriter, QPageSize) callconv(.c) bool) void {
        qtc.QPdfWriter_OnSetPageSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn setPageOrientation(self: QPdfWriter, orientation: i32) bool {
        return qtc.QPdfWriter_SetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QPdfWriter `
    ///
    /// ` orientation: qpagelayout_enums.Orientation `
    ///
    pub fn superSetPageOrientation(self: QPdfWriter, orientation: i32) bool {
        return qtc.QPdfWriter_SuperSetPageOrientation(@ptrCast(self.ptr), @bitCast(orientation));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, orientation: qpagelayout_enums.Orientation) callconv(.c) bool `
    ///
    pub fn onSetPageOrientation(self: QPdfWriter, callback: *const fn (QPdfWriter, i32) callconv(.c) bool) void {
        qtc.QPdfWriter_OnSetPageOrientation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn setPageMargins(self: QPdfWriter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPdfWriter_SetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
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
    /// ` self: QPdfWriter `
    ///
    /// ` margins: QMarginsF `
    ///
    /// ` units: qpagelayout_enums.Unit `
    ///
    pub fn superSetPageMargins(self: QPdfWriter, margins: anytype, units: i32) bool {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        return qtc.QPdfWriter_SuperSetPageMargins(@ptrCast(self.ptr), @ptrCast(margins.ptr), @bitCast(units));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, margins: QMarginsF, units: qpagelayout_enums.Unit) callconv(.c) bool `
    ///
    pub fn onSetPageMargins(self: QPdfWriter, callback: *const fn (QPdfWriter, QMarginsF, i32) callconv(.c) bool) void {
        qtc.QPdfWriter_OnSetPageMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn setPageRanges(self: QPdfWriter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPdfWriter_SetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
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
    /// ` self: QPdfWriter `
    ///
    /// ` ranges: QPageRanges `
    ///
    pub fn superSetPageRanges(self: QPdfWriter, ranges: anytype) void {
        comptime _ = @TypeOf(ranges)._is_QPageRanges;
        qtc.QPdfWriter_SuperSetPageRanges(@ptrCast(self.ptr), @ptrCast(ranges.ptr));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, ranges: QPageRanges) callconv(.c) void `
    ///
    pub fn onSetPageRanges(self: QPdfWriter, callback: *const fn (QPdfWriter, QPageRanges) callconv(.c) void) void {
        qtc.QPdfWriter_OnSetPageRanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn devType(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn superDevType(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QPdfWriter, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfWriter_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QPdfWriter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPdfWriter_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPdfWriter `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QPdfWriter, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPdfWriter_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QPdfWriter, callback: *const fn (QPdfWriter, QPainter) callconv(.c) void) void {
        qtc.QPdfWriter_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QPdfWriter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPdfWriter_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPdfWriter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QPdfWriter, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPdfWriter_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QPdfWriter, callback: *const fn (QPdfWriter, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPdfWriter_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    pub fn sharedPainter(self: QPdfWriter) QPainter {
        return .{ .ptr = qtc.QPdfWriter_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfWriter `
    ///
    pub fn superSharedPainter(self: QPdfWriter) QPainter {
        return .{ .ptr = qtc.QPdfWriter_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QPdfWriter, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPdfWriter_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn sender(self: QPdfWriter) QObject {
        return .{ .ptr = qtc.QPdfWriter_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn superSender(self: QPdfWriter) QObject {
        return .{ .ptr = qtc.QPdfWriter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPdfWriter, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPdfWriter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn senderSignalIndex(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn superSenderSignalIndex(self: QPdfWriter) i32 {
        return qtc.QPdfWriter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPdfWriter, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfWriter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPdfWriter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfWriter_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPdfWriter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfWriter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPdfWriter, callback: *const fn (QPdfWriter, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPdfWriter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPdfWriter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfWriter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPdfWriter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfWriter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPdfWriter, callback: *const fn (QPdfWriter, QMetaMethod) callconv(.c) bool) void {
        qtc.QPdfWriter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfWriter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QPdfWriter, metricA: i32, metricB: i32) f64 {
        return qtc.QPdfWriter_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPdfWriter `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QPdfWriter, metricA: i32, metricB: i32) f64 {
        return qtc.QPdfWriter_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPdfWriter`
    ///
    /// ` callback: *const fn (self: QPdfWriter, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QPdfWriter, callback: *const fn (QPdfWriter, i32, i32) callconv(.c) f64) void {
        qtc.QPdfWriter_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfWriter `
    ///
    /// ` callback: *const fn (self: QPdfWriter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPdfWriter, callback: *const fn (QPdfWriter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#dtor.QPdfWriter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfWriter `
    ///
    pub fn delete(self: QPdfWriter) void {
        qtc.QPdfWriter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#public-types)
pub const enums = struct {
    pub const ColorModel = enum(i32) {
        pub const RGB: i32 = 0;
        pub const Grayscale: i32 = 1;
        pub const CMYK: i32 = 2;
        pub const Auto: i32 = 3;
    };
};
