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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QImageCapture object in C++ memory
    ///
    pub fn new() QImageCapture {
        return .{ .ptr = qtc.QImageCapture_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QImageCapture object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QImageCapture {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QImageCapture_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn metaObject(self: QImageCapture) QMetaObject {
        return .{ .ptr = qtc.QImageCapture_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QImageCapture, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QImageCapture_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    pub fn superMetaObject(self: QImageCapture) QMetaObject {
        return .{ .ptr = qtc.QImageCapture_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QImageCapture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageCapture_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QImageCapture, callback: *const fn (QImageCapture, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QImageCapture_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QImageCapture, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageCapture_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QImageCapture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageCapture_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QImageCapture, callback: *const fn (QImageCapture, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QImageCapture_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QImageCapture, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageCapture_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAvailable` instead
    ///
    pub const IsAvailable = isAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#isAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn isAvailable(self: QImageCapture) bool {
        return qtc.QImageCapture_IsAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `captureSession` instead
    ///
    pub const CaptureSession = captureSession;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#captureSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn captureSession(self: QImageCapture) QMediaCaptureSession {
        return .{ .ptr = qtc.QImageCapture_CaptureSession(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QImageCapture) i32 {
        return qtc.QImageCapture_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QImageCapture, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageCapture_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadyForCapture` instead
    ///
    pub const IsReadyForCapture = isReadyForCapture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#isReadyForCapture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn isReadyForCapture(self: QImageCapture) bool {
        return qtc.QImageCapture_IsReadyForCapture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileFormat` instead
    ///
    pub const FileFormat = fileFormat;

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
    pub fn fileFormat(self: QImageCapture) i32 {
        return qtc.QImageCapture_FileFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFileFormat` instead
    ///
    pub const SetFileFormat = setFileFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setFileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` format: qimagecapture_enums.FileFormat `
    ///
    pub fn setFileFormat(self: QImageCapture, format: i32) void {
        qtc.QImageCapture_SetFileFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `supportedFormats` instead
    ///
    pub const SupportedFormats = supportedFormats;

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
    pub fn supportedFormats(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QImageCapture_SupportedFormats();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QImageCapture.supportedFormats: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileFormatName` instead
    ///
    pub const FileFormatName = fileFormatName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` c: qimagecapture_enums.FileFormat `
    ///
    pub fn fileFormatName(allocator: std.mem.Allocator, c: i32) []const u8 {
        var _str = qtc.QImageCapture_FileFormatName(@bitCast(c));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.fileFormatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileFormatDescription` instead
    ///
    pub const FileFormatDescription = fileFormatDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` c: qimagecapture_enums.FileFormat `
    ///
    pub fn fileFormatDescription(allocator: std.mem.Allocator, c: i32) []const u8 {
        var _str = qtc.QImageCapture_FileFormatDescription(@bitCast(c));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.fileFormatDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resolution` instead
    ///
    pub const Resolution = resolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn resolution(self: QImageCapture) QSize {
        return .{ .ptr = qtc.QImageCapture_Resolution(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setResolution` instead
    ///
    pub const SetResolution = setResolution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` _resolution: QSize `
    ///
    pub fn setResolution(self: QImageCapture, _resolution: anytype) void {
        comptime _ = @TypeOf(_resolution)._is_QSize;
        qtc.QImageCapture_SetResolution(@ptrCast(self.ptr), @ptrCast(_resolution.ptr));
    }

    /// ### DEPRECATED: Use `setResolution2` instead
    ///
    pub const SetResolution2 = setResolution2;

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
    pub fn setResolution2(self: QImageCapture, width: i32, height: i32) void {
        qtc.QImageCapture_SetResolution2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `quality` instead
    ///
    pub const Quality = quality;

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
    pub fn quality(self: QImageCapture) i32 {
        return qtc.QImageCapture_Quality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQuality` instead
    ///
    pub const SetQuality = setQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` _quality: qimagecapture_enums.Quality `
    ///
    pub fn setQuality(self: QImageCapture, _quality: i32) void {
        qtc.QImageCapture_SetQuality(@ptrCast(self.ptr), @bitCast(_quality));
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn metaData(self: QImageCapture) QMediaMetaData {
        return .{ .ptr = qtc.QImageCapture_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaData` instead
    ///
    pub const SetMetaData = setMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` _metaData: QMediaMetaData `
    ///
    pub fn setMetaData(self: QImageCapture, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QMediaMetaData;
        qtc.QImageCapture_SetMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `addMetaData` instead
    ///
    pub const AddMetaData = addMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` _metaData: QMediaMetaData `
    ///
    pub fn addMetaData(self: QImageCapture, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QMediaMetaData;
        qtc.QImageCapture_AddMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `captureToFile` instead
    ///
    pub const CaptureToFile = captureToFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn captureToFile(self: QImageCapture) i32 {
        return qtc.QImageCapture_CaptureToFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capture` instead
    ///
    pub const Capture = capture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#capture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn capture(self: QImageCapture) i32 {
        return qtc.QImageCapture_Capture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorChanged` instead
    ///
    pub const ErrorChanged = errorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn errorChanged(self: QImageCapture) void {
        qtc.QImageCapture_ErrorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onErrorChanged` instead
    ///
    pub const OnErrorChanged = onErrorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn onErrorChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred(self: QImageCapture, id: i32, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QImageCapture_ErrorOccurred(@ptrCast(self.ptr), @bitCast(id), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, errorVal: qimagecapture_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QImageCapture, callback: *const fn (QImageCapture, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readyForCaptureChanged` instead
    ///
    pub const ReadyForCaptureChanged = readyForCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` ready: bool `
    ///
    pub fn readyForCaptureChanged(self: QImageCapture, ready: bool) void {
        qtc.QImageCapture_ReadyForCaptureChanged(@ptrCast(self.ptr), ready);
    }

    /// ### DEPRECATED: Use `onReadyForCaptureChanged` instead
    ///
    pub const OnReadyForCaptureChanged = onReadyForCaptureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, ready: bool) callconv(.c) void `
    ///
    pub fn onReadyForCaptureChanged(self: QImageCapture, callback: *const fn (QImageCapture, bool) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ReadyForCaptureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metaDataChanged` instead
    ///
    pub const MetaDataChanged = metaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn metaDataChanged(self: QImageCapture) void {
        qtc.QImageCapture_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMetaDataChanged` instead
    ///
    pub const OnMetaDataChanged = onMetaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn onMetaDataChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileFormatChanged` instead
    ///
    pub const FileFormatChanged = fileFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn fileFormatChanged(self: QImageCapture) void {
        qtc.QImageCapture_FileFormatChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFileFormatChanged` instead
    ///
    pub const OnFileFormatChanged = onFileFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn onFileFormatChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_FileFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `qualityChanged` instead
    ///
    pub const QualityChanged = qualityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn qualityChanged(self: QImageCapture) void {
        qtc.QImageCapture_QualityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQualityChanged` instead
    ///
    pub const OnQualityChanged = onQualityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn onQualityChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_QualityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resolutionChanged` instead
    ///
    pub const ResolutionChanged = resolutionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    pub fn resolutionChanged(self: QImageCapture) void {
        qtc.QImageCapture_ResolutionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResolutionChanged` instead
    ///
    pub const OnResolutionChanged = onResolutionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn onResolutionChanged(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ResolutionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageExposed` instead
    ///
    pub const ImageExposed = imageExposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    pub fn imageExposed(self: QImageCapture, id: i32) void {
        qtc.QImageCapture_ImageExposed(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onImageExposed` instead
    ///
    pub const OnImageExposed = onImageExposed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32) callconv(.c) void `
    ///
    pub fn onImageExposed(self: QImageCapture, callback: *const fn (QImageCapture, i32) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageExposed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageCaptured` instead
    ///
    pub const ImageCaptured = imageCaptured;

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
    pub fn imageCaptured(self: QImageCapture, id: i32, preview: anytype) void {
        comptime _ = @TypeOf(preview)._is_QImage;
        qtc.QImageCapture_ImageCaptured(@ptrCast(self.ptr), @bitCast(id), @ptrCast(preview.ptr));
    }

    /// ### DEPRECATED: Use `onImageCaptured` instead
    ///
    pub const OnImageCaptured = onImageCaptured;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, preview: QImage) callconv(.c) void `
    ///
    pub fn onImageCaptured(self: QImageCapture, callback: *const fn (QImageCapture, i32, QImage) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageCaptured(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageMetadataAvailable` instead
    ///
    pub const ImageMetadataAvailable = imageMetadataAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    /// ` _metaData: QMediaMetaData `
    ///
    pub fn imageMetadataAvailable(self: QImageCapture, id: i32, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QMediaMetaData;
        qtc.QImageCapture_ImageMetadataAvailable(@ptrCast(self.ptr), @bitCast(id), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `onImageMetadataAvailable` instead
    ///
    pub const OnImageMetadataAvailable = onImageMetadataAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, metaData: QMediaMetaData) callconv(.c) void `
    ///
    pub fn onImageMetadataAvailable(self: QImageCapture, callback: *const fn (QImageCapture, i32, QMediaMetaData) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageMetadataAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageAvailable` instead
    ///
    pub const ImageAvailable = imageAvailable;

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
    pub fn imageAvailable(self: QImageCapture, id: i32, frame: anytype) void {
        comptime _ = @TypeOf(frame)._is_QVideoFrame;
        qtc.QImageCapture_ImageAvailable(@ptrCast(self.ptr), @bitCast(id), @ptrCast(frame.ptr));
    }

    /// ### DEPRECATED: Use `onImageAvailable` instead
    ///
    pub const OnImageAvailable = onImageAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, frame: QVideoFrame) callconv(.c) void `
    ///
    pub fn onImageAvailable(self: QImageCapture, callback: *const fn (QImageCapture, i32, QVideoFrame) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageSaved` instead
    ///
    pub const ImageSaved = imageSaved;

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
    pub fn imageSaved(self: QImageCapture, id: i32, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageCapture_ImageSaved(@ptrCast(self.ptr), @bitCast(id), fileName_str);
    }

    /// ### DEPRECATED: Use `onImageSaved` instead
    ///
    pub const OnImageSaved = onImageSaved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, id: i32, fileName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onImageSaved(self: QImageCapture, callback: *const fn (QImageCapture, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageSaved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `captureToFile1` instead
    ///
    pub const CaptureToFile1 = captureToFile1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageCapture `
    ///
    /// ` location: []const u8 `
    ///
    pub fn captureToFile1(self: QImageCapture, location: []const u8) i32 {
        const location_str = qtc.libqt_string{
            .len = location.len,
            .data = location.ptr,
        };
        return qtc.QImageCapture_CaptureToFile1(@ptrCast(self.ptr), location_str);
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
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QImageCapture, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageCapture.objectName: Memory allocation failed");
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
    /// ` self: QImageCapture `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QImageCapture, name: []const u8) void {
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
    /// ` self: QImageCapture `
    ///
    pub fn isWidgetType(self: QImageCapture) bool {
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
    /// ` self: QImageCapture `
    ///
    pub fn isWindowType(self: QImageCapture) bool {
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
    /// ` self: QImageCapture `
    ///
    pub fn isQuickItemType(self: QImageCapture) bool {
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
    /// ` self: QImageCapture `
    ///
    pub fn signalsBlocked(self: QImageCapture) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QImageCapture, b: bool) bool {
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
    /// ` self: QImageCapture `
    ///
    pub fn thread(self: QImageCapture) QThread {
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
    /// ` self: QImageCapture `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QImageCapture, _thread: anytype) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QImageCapture, interval: i32) i32 {
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
    /// ` self: QImageCapture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QImageCapture, time: i64) i32 {
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
    /// ` self: QImageCapture `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QImageCapture, id: i32) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QImageCapture, id: i32) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QImageCapture, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QImageCapture.children: Memory allocation failed");
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
    /// ` self: QImageCapture `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QImageCapture, _parent: anytype) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QImageCapture, filterObj: anytype) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QImageCapture, obj: anytype) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QImageCapture, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QImageCapture `
    ///
    pub fn disconnect3(self: QImageCapture) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QImageCapture, receiver: anytype) bool {
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
    /// ` self: QImageCapture `
    ///
    pub fn dumpObjectTree(self: QImageCapture) void {
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
    /// ` self: QImageCapture `
    ///
    pub fn dumpObjectInfo(self: QImageCapture) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QImageCapture, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QImageCapture, name: [:0]const u8) QVariant {
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
    /// ` self: QImageCapture `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QImageCapture, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageCapture.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageCapture.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QImageCapture `
    ///
    pub fn bindingStorage(self: QImageCapture) QBindingStorage {
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
    /// ` self: QImageCapture `
    ///
    pub fn bindingStorage2(self: QImageCapture) QBindingStorage {
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
    /// ` self: QImageCapture `
    ///
    pub fn destroyed(self: QImageCapture) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QImageCapture, callback: *const fn (QImageCapture) callconv(.c) void) void {
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
    /// ` self: QImageCapture `
    ///
    pub fn parent(self: QImageCapture) QObject {
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
    /// ` self: QImageCapture `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QImageCapture, classname: [:0]const u8) bool {
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
    /// ` self: QImageCapture `
    ///
    pub fn deleteLater(self: QImageCapture) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QImageCapture, interval: i32, timerType: i32) i32 {
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
    /// ` self: QImageCapture `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QImageCapture, time: i64, timerType: i32) i32 {
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
    /// ` self: QImageCapture `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QImageCapture, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QImageCapture, signal: [:0]const u8) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QImageCapture, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QImageCapture, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QImageCapture, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QImageCapture `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QImageCapture, param1: anytype) void {
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
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QImageCapture, callback: *const fn (QImageCapture, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QImageCapture, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageCapture_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QImageCapture, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageCapture_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QImageCapture, callback: *const fn (QImageCapture, QEvent) callconv(.c) bool) void {
        qtc.QImageCapture_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QImageCapture, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageCapture_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QImageCapture, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageCapture_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QImageCapture, callback: *const fn (QImageCapture, QObject, QEvent) callconv(.c) bool) void {
        qtc.QImageCapture_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QImageCapture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QImageCapture_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QImageCapture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QImageCapture_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QImageCapture, callback: *const fn (QImageCapture, QTimerEvent) callconv(.c) void) void {
        qtc.QImageCapture_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QImageCapture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QImageCapture_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QImageCapture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QImageCapture_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QImageCapture, callback: *const fn (QImageCapture, QChildEvent) callconv(.c) void) void {
        qtc.QImageCapture_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QImageCapture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QImageCapture_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QImageCapture, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QImageCapture_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QImageCapture, callback: *const fn (QImageCapture, QEvent) callconv(.c) void) void {
        qtc.QImageCapture_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QImageCapture, callback: *const fn (QImageCapture, QMetaMethod) callconv(.c) void) void {
        qtc.QImageCapture_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QImageCapture, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageCapture_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QImageCapture, callback: *const fn (QImageCapture, QMetaMethod) callconv(.c) void) void {
        qtc.QImageCapture_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    pub fn sender(self: QImageCapture) QObject {
        return .{ .ptr = qtc.QImageCapture_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QImageCapture `
    ///
    pub fn superSender(self: QImageCapture) QObject {
        return .{ .ptr = qtc.QImageCapture_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QImageCapture, callback: *const fn () callconv(.c) QObject) void {
        qtc.QImageCapture_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    pub fn senderSignalIndex(self: QImageCapture) i32 {
        return qtc.QImageCapture_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QImageCapture `
    ///
    pub fn superSenderSignalIndex(self: QImageCapture) i32 {
        return qtc.QImageCapture_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QImageCapture, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageCapture_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QImageCapture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageCapture_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QImageCapture, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageCapture_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QImageCapture, callback: *const fn (QImageCapture, [*:0]const u8) callconv(.c) i32) void {
        qtc.QImageCapture_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QImageCapture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageCapture_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QImageCapture `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QImageCapture, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageCapture_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QImageCapture`
    ///
    /// ` callback: *const fn (self: QImageCapture, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QImageCapture, callback: *const fn (QImageCapture, QMetaMethod) callconv(.c) bool) void {
        qtc.QImageCapture_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImageCapture `
    ///
    /// ` callback: *const fn (self: QImageCapture, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QImageCapture, callback: *const fn (QImageCapture, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagecapture.html#dtor.QImageCapture)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageCapture `
    ///
    pub fn delete(self: QImageCapture) void {
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
