const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMediaCaptureSession = @import("libqt6").QMediaCaptureSession;
const QMediaMetaData = @import("libqt6").QMediaMetaData;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVideoFrame = @import("libqt6").QVideoFrame;
const qimagecapture_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html)
pub const QImageCapture = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QImageCapture,

    pub const _is_QImageCapture = {};
    pub const _is_QObject = {};

    /// New constructs a new QImageCapture object.
    ///
    pub fn New() QImageCapture {
        return .{ .ptr = qtc.QImageCapture_new() };
    }

    /// New2 constructs a new QImageCapture object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QImageCapture {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QImageCapture_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn MetaObject(self: QImageCapture) QMetaObject {
        return .{ .ptr = qtc.QImageCapture_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QImageCapture, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QImageCapture_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn SuperMetaObject(self: QImageCapture) QMetaObject {
        return .{ .ptr = qtc.QImageCapture_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QImageCapture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageCapture_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QImageCapture, callback: *const fn (QImageCapture, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QImageCapture_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QImageCapture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageCapture_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QImageCapture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageCapture_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QImageCapture, callback: *const fn (QImageCapture, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QImageCapture_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QImageCapture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageCapture_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn IsAvailable(self: QImageCapture) bool {
        return qtc.QImageCapture_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn CaptureSession(self: QImageCapture) QMediaCaptureSession {
        return .{ .ptr = qtc.QImageCapture_CaptureSession(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ## Returns:
    ///
    /// ` qimagecapture_enums.Error `
    ///
    pub fn Error(self: QImageCapture) i32 {
        return qtc.QImageCapture_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QImageCapture, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageCapture_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#isReadyForCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn IsReadyForCapture(self: QImageCapture) bool {
        return qtc.QImageCapture_IsReadyForCapture(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ## Returns:
    ///
    /// ` qimagecapture_enums.FileFormat `
    ///
    pub fn FileFormat(self: QImageCapture) i32 {
        return qtc.QImageCapture_FileFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setFileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` format: qimagecapture_enums.FileFormat `
    ///
    pub fn SetFileFormat(self: QImageCapture, format: i32) void {
        qtc.QImageCapture_SetFileFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#supportedFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qimagecapture_enums.FileFormat `
    ///
    pub fn SupportedFormats(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QImageCapture_SupportedFormats();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qimagecapture.SupportedFormats: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` c: qimagecapture_enums.FileFormat `
    ///
    pub fn FileFormatName(allocator: std.mem.Allocator, c: i32) []const u8 {
        var _str = qtc.QImageCapture_FileFormatName(@bitCast(c));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.FileFormatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` c: qimagecapture_enums.FileFormat `
    ///
    pub fn FileFormatDescription(allocator: std.mem.Allocator, c: i32) []const u8 {
        var _str = qtc.QImageCapture_FileFormatDescription(@bitCast(c));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.FileFormatDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Resolution(self: QImageCapture) QSize {
        return .{ .ptr = qtc.QImageCapture_Resolution(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` resolution: QSize `
    ///
    pub fn SetResolution(self: QImageCapture, resolution: anytype) void {
        comptime _ = @TypeOf(resolution)._is_QSize;
        qtc.QImageCapture_SetResolution(@ptrCast(self.ptr), @ptrCast(resolution.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SetResolution2(self: QImageCapture, width: i32, height: i32) void {
        qtc.QImageCapture_SetResolution2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ## Returns:
    ///
    /// ` qimagecapture_enums.Quality `
    ///
    pub fn Quality(self: QImageCapture) i32 {
        return qtc.QImageCapture_Quality(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` quality: qimagecapture_enums.Quality `
    ///
    pub fn SetQuality(self: QImageCapture, quality: i32) void {
        qtc.QImageCapture_SetQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn MetaData(self: QImageCapture) QMediaMetaData {
        return .{ .ptr = qtc.QImageCapture_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` metaData: QMediaMetaData `
    ///
    pub fn SetMetaData(self: QImageCapture, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QMediaMetaData;
        qtc.QImageCapture_SetMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` metaData: QMediaMetaData `
    ///
    pub fn AddMetaData(self: QImageCapture, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QMediaMetaData;
        qtc.QImageCapture_AddMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn CaptureToFile(self: QImageCapture) i32 {
        return qtc.QImageCapture_CaptureToFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#capture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Capture(self: QImageCapture) i32 {
        return qtc.QImageCapture_Capture(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn ErrorChanged(self: QImageCapture) void {
        qtc.QImageCapture_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn OnErrorChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    /// ` errorVal: qimagecapture_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred(self: QImageCapture, id: i32, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QImageCapture_ErrorOccurred(@ptrCast(self.ptr), @bitCast(id), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, errorVal: qimagecapture_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QImageCapture, callback: *const fn (QImageCapture, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` ready: bool `
    ///
    pub fn ReadyForCaptureChanged(self: QImageCapture, ready: bool) void {
        qtc.QImageCapture_ReadyForCaptureChanged(@ptrCast(self.ptr), ready);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, ready: bool) callconv(.c) void `
    ///
    pub fn OnReadyForCaptureChanged(self: QImageCapture, callback: *const fn (QImageCapture, bool) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ReadyForCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn MetaDataChanged(self: QImageCapture) void {
        qtc.QImageCapture_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn OnMetaDataChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn FileFormatChanged(self: QImageCapture) void {
        qtc.QImageCapture_FileFormatChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn OnFileFormatChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_FileFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn QualityChanged(self: QImageCapture) void {
        qtc.QImageCapture_QualityChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn OnQualityChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_QualityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn ResolutionChanged(self: QImageCapture) void {
        qtc.QImageCapture_ResolutionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn OnResolutionChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ResolutionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    pub fn ImageExposed(self: QImageCapture, id: i32) void {
        qtc.QImageCapture_ImageExposed(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32) callconv(.c) void `
    ///
    pub fn OnImageExposed(self: QImageCapture, callback: *const fn (QImageCapture, i32) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageExposed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    /// ` preview: QImage `
    ///
    pub fn ImageCaptured(self: QImageCapture, id: i32, preview: anytype) void {
        comptime _ = @TypeOf(preview)._is_QImage;
        qtc.QImageCapture_ImageCaptured(@ptrCast(self.ptr), @bitCast(id), @ptrCast(preview.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, preview: QImage) callconv(.c) void `
    ///
    pub fn OnImageCaptured(self: QImageCapture, callback: *const fn (QImageCapture, i32, QImage) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageCaptured(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    /// ` metaData: QMediaMetaData `
    ///
    pub fn ImageMetadataAvailable(self: QImageCapture, id: i32, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QMediaMetaData;
        qtc.QImageCapture_ImageMetadataAvailable(@ptrCast(self.ptr), @bitCast(id), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, metaData: QMediaMetaData) callconv(.c) void `
    ///
    pub fn OnImageMetadataAvailable(self: QImageCapture, callback: *const fn (QImageCapture, i32, QMediaMetaData) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageMetadataAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    /// ` frame: QVideoFrame `
    ///
    pub fn ImageAvailable(self: QImageCapture, id: i32, frame: anytype) void {
        comptime _ = @TypeOf(frame)._is_QVideoFrame;
        qtc.QImageCapture_ImageAvailable(@ptrCast(self.ptr), @bitCast(id), @ptrCast(frame.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, frame: QVideoFrame) callconv(.c) void `
    ///
    pub fn OnImageAvailable(self: QImageCapture, callback: *const fn (QImageCapture, i32, QVideoFrame) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn ImageSaved(self: QImageCapture, id: i32, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageCapture_ImageSaved(@ptrCast(self.ptr), @bitCast(id), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, fileName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnImageSaved(self: QImageCapture, callback: *const fn (QImageCapture, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageSaved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` location: []const u8 `
    ///
    pub fn CaptureToFile1(self: QImageCapture, location: []const u8) i32 {
        const location_str = qtc.libqt_string{
            .len = location.len,
            .data = location.ptr,
        };
        return qtc.QImageCapture_CaptureToFile1(@ptrCast(self.ptr), location_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QImageCapture, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QImageCapture, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn IsWidgetType(self: QImageCapture) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn IsWindowType(self: QImageCapture) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn IsQuickItemType(self: QImageCapture) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn SignalsBlocked(self: QImageCapture) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QImageCapture, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Thread(self: QImageCapture) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QImageCapture, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QImageCapture, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QImageCapture, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QImageCapture, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QImageCapture, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QImageCapture, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qimagecapture.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QImageCapture, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QImageCapture, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QImageCapture, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QImageCapture, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Disconnect3(self: QImageCapture) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QImageCapture, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn DumpObjectTree(self: QImageCapture) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn DumpObjectInfo(self: QImageCapture) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QImageCapture, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QImageCapture, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QImageCapture, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagecapture.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagecapture.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn BindingStorage(self: QImageCapture) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn BindingStorage2(self: QImageCapture) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Destroyed(self: QImageCapture) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Parent(self: QImageCapture) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QImageCapture, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn DeleteLater(self: QImageCapture) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QImageCapture, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QImageCapture, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QImageCapture, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QImageCapture, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QImageCapture, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QImageCapture, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QImageCapture, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QImageCapture, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QImageCapture, callback: *const fn (QImageCapture, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QImageCapture, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageCapture_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QImageCapture, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageCapture_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QImageCapture, callback: *const fn (QImageCapture, QEvent) callconv(.c) bool) void {
        qtc.QImageCapture_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QImageCapture, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageCapture_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QImageCapture, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageCapture_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QImageCapture, callback: *const fn (QImageCapture, QObject, QEvent) callconv(.c) bool) void {
        qtc.QImageCapture_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QImageCapture, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QImageCapture_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QImageCapture, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QImageCapture_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QImageCapture, callback: *const fn (QImageCapture, QTimerEvent) callconv(.c) void) void {
        qtc.QImageCapture_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QImageCapture, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QImageCapture_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QImageCapture, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QImageCapture_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QImageCapture, callback: *const fn (QImageCapture, QChildEvent) callconv(.c) void) void {
        qtc.QImageCapture_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QImageCapture, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QImageCapture_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QImageCapture, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QImageCapture_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QImageCapture, callback: *const fn (QImageCapture, QEvent) callconv(.c) void) void {
        qtc.QImageCapture_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QImageCapture, callback: *const fn (QImageCapture, QMetaMethod) callconv(.c) void) void {
        qtc.QImageCapture_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QImageCapture, callback: *const fn (QImageCapture, QMetaMethod) callconv(.c) void) void {
        qtc.QImageCapture_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Sender(self: QImageCapture) QObject {
        return .{ .ptr = qtc.QImageCapture_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn SuperSender(self: QImageCapture) QObject {
        return .{ .ptr = qtc.QImageCapture_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QImageCapture, callback: *const fn () callconv(.c) QObject) void {
        qtc.QImageCapture_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn SenderSignalIndex(self: QImageCapture) i32 {
        return qtc.QImageCapture_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn SuperSenderSignalIndex(self: QImageCapture) i32 {
        return qtc.QImageCapture_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QImageCapture, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageCapture_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QImageCapture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageCapture_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QImageCapture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageCapture_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QImageCapture, callback: *const fn (QImageCapture, [*:0]const u8) callconv(.c) i32) void {
        qtc.QImageCapture_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QImageCapture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageCapture_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QImageCapture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageCapture_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QImageCapture, callback: *const fn (QImageCapture, QMetaMethod) callconv(.c) bool) void {
        qtc.QImageCapture_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QImageCapture, callback: *const fn (QImageCapture, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#dtor.QImageCapture)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageCapture `
    ///
    pub fn Delete(self: QImageCapture) void {
        qtc.QImageCapture_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const NotReadyError: i32 = 1;
        pub const ResourceError: i32 = 2;
        pub const OutOfSpaceError: i32 = 3;
        pub const NotSupportedFeatureError: i32 = 4;
        pub const FormatError: i32 = 5;
    };

    pub const Quality = enum(i32) {
        pub const VeryLowQuality: i32 = 0;
        pub const LowQuality: i32 = 1;
        pub const NormalQuality: i32 = 2;
        pub const HighQuality: i32 = 3;
        pub const VeryHighQuality: i32 = 4;
    };

    pub const FileFormat = enum(i32) {
        pub const UnspecifiedFormat: i32 = 0;
        pub const JPEG: i32 = 1;
        pub const PNG: i32 = 2;
        pub const WebP: i32 = 3;
        pub const Tiff: i32 = 4;
        pub const LastFileFormat: i32 = 4;
    };
};
