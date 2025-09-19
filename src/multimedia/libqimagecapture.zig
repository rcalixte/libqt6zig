const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimagecapture_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qimagecapture.html
pub const qimagecapture = struct {
    /// New constructs a new QImageCapture object.
    ///
    ///
    pub fn New() QtC.QImageCapture {
        return qtc.QImageCapture_new();
    }

    /// New2 constructs a new QImageCapture object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QImageCapture {
        return qtc.QImageCapture_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QImageCapture_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QImageCapture, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageCapture_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QImageCapture, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QImageCapture_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QImageCapture_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageCapture, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QImageCapture_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QImageCapture_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#isAvailable)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn IsAvailable(self: ?*anyopaque) bool {
        return qtc.QImageCapture_IsAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureSession)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn CaptureSession(self: ?*anyopaque) QtC.QMediaCaptureSession {
        return qtc.QImageCapture_CaptureSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#error)
    ///
    /// ``` self: QtC.QImageCapture ```
    ///
    /// Returns: ``` qimagecapture_enums.Error ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorString)
    ///
    /// ``` self: QtC.QImageCapture, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#isReadyForCapture)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn IsReadyForCapture(self: ?*anyopaque) bool {
        return qtc.QImageCapture_IsReadyForCapture(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormat)
    ///
    /// ``` self: QtC.QImageCapture ```
    ///
    /// Returns: ``` qimagecapture_enums.FileFormat ```
    pub fn FileFormat(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_FileFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setFileFormat)
    ///
    /// ``` self: QtC.QImageCapture, format: qimagecapture_enums.FileFormat ```
    pub fn SetFileFormat(self: ?*anyopaque, format: i32) void {
        qtc.QImageCapture_SetFileFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#supportedFormats)
    ///
    /// ``` allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qimagecapture_enums.FileFormat ```
    pub fn SupportedFormats(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QImageCapture_SupportedFormats();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qimagecapture.SupportedFormats: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatName)
    ///
    /// ``` c: qimagecapture_enums.FileFormat, allocator: std.mem.Allocator ```
    pub fn FileFormatName(c: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_FileFormatName(@intCast(c));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.FileFormatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatDescription)
    ///
    /// ``` c: qimagecapture_enums.FileFormat, allocator: std.mem.Allocator ```
    pub fn FileFormatDescription(c: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageCapture_FileFormatDescription(@intCast(c));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.FileFormatDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolution)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn Resolution(self: ?*anyopaque) QtC.QSize {
        return qtc.QImageCapture_Resolution(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
    ///
    /// ``` self: QtC.QImageCapture, resolution: QtC.QSize ```
    pub fn SetResolution(self: ?*anyopaque, resolution: ?*anyopaque) void {
        qtc.QImageCapture_SetResolution(@ptrCast(self), @ptrCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
    ///
    /// ``` self: QtC.QImageCapture, width: i32, height: i32 ```
    pub fn SetResolution2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QImageCapture_SetResolution2(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#quality)
    ///
    /// ``` self: QtC.QImageCapture ```
    ///
    /// Returns: ``` qimagecapture_enums.Quality ```
    pub fn Quality(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_Quality(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setQuality)
    ///
    /// ``` self: QtC.QImageCapture, quality: qimagecapture_enums.Quality ```
    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QImageCapture_SetQuality(@ptrCast(self), @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaData)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn MetaData(self: ?*anyopaque) QtC.QMediaMetaData {
        return qtc.QImageCapture_MetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setMetaData)
    ///
    /// ``` self: QtC.QImageCapture, metaData: QtC.QMediaMetaData ```
    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QImageCapture_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#addMetaData)
    ///
    /// ``` self: QtC.QImageCapture, metaData: QtC.QMediaMetaData ```
    pub fn AddMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QImageCapture_AddMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn CaptureToFile(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_CaptureToFile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#capture)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn Capture(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_Capture(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn ErrorChanged(self: ?*anyopaque) void {
        qtc.QImageCapture_ErrorChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture) callconv(.c) void ```
    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
    ///
    /// ``` self: QtC.QImageCapture, id: i32, errorVal: qimagecapture_enums.Error, errorString: []const u8 ```
    pub fn ErrorOccurred(self: ?*anyopaque, id: i32, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QImageCapture_ErrorOccurred(@ptrCast(self), @intCast(id), @intCast(errorVal), errorString_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, id: i32, errorVal: qimagecapture_enums.Error, errorString: [*:0]const u8) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
    ///
    /// ``` self: QtC.QImageCapture, ready: bool ```
    pub fn ReadyForCaptureChanged(self: ?*anyopaque, ready: bool) void {
        qtc.QImageCapture_ReadyForCaptureChanged(@ptrCast(self), ready);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, ready: bool) callconv(.c) void ```
    pub fn OnReadyForCaptureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ReadyForCaptureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn MetaDataChanged(self: ?*anyopaque) void {
        qtc.QImageCapture_MetaDataChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture) callconv(.c) void ```
    pub fn OnMetaDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_MetaDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn FileFormatChanged(self: ?*anyopaque) void {
        qtc.QImageCapture_FileFormatChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture) callconv(.c) void ```
    pub fn OnFileFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_FileFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn QualityChanged(self: ?*anyopaque) void {
        qtc.QImageCapture_QualityChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture) callconv(.c) void ```
    pub fn OnQualityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_QualityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn ResolutionChanged(self: ?*anyopaque) void {
        qtc.QImageCapture_ResolutionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture) callconv(.c) void ```
    pub fn OnResolutionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ResolutionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
    ///
    /// ``` self: QtC.QImageCapture, id: i32 ```
    pub fn ImageExposed(self: ?*anyopaque, id: i32) void {
        qtc.QImageCapture_ImageExposed(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, id: i32) callconv(.c) void ```
    pub fn OnImageExposed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageExposed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
    ///
    /// ``` self: QtC.QImageCapture, id: i32, preview: QtC.QImage ```
    pub fn ImageCaptured(self: ?*anyopaque, id: i32, preview: ?*anyopaque) void {
        qtc.QImageCapture_ImageCaptured(@ptrCast(self), @intCast(id), @ptrCast(preview));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, id: i32, preview: QtC.QImage) callconv(.c) void ```
    pub fn OnImageCaptured(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageCaptured(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
    ///
    /// ``` self: QtC.QImageCapture, id: i32, metaData: QtC.QMediaMetaData ```
    pub fn ImageMetadataAvailable(self: ?*anyopaque, id: i32, metaData: ?*anyopaque) void {
        qtc.QImageCapture_ImageMetadataAvailable(@ptrCast(self), @intCast(id), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, id: i32, metaData: QtC.QMediaMetaData) callconv(.c) void ```
    pub fn OnImageMetadataAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageMetadataAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
    ///
    /// ``` self: QtC.QImageCapture, id: i32, frame: QtC.QVideoFrame ```
    pub fn ImageAvailable(self: ?*anyopaque, id: i32, frame: ?*anyopaque) void {
        qtc.QImageCapture_ImageAvailable(@ptrCast(self), @intCast(id), @ptrCast(frame));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, id: i32, frame: QtC.QVideoFrame) callconv(.c) void ```
    pub fn OnImageAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
    ///
    /// ``` self: QtC.QImageCapture, id: i32, fileName: []const u8 ```
    pub fn ImageSaved(self: ?*anyopaque, id: i32, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageCapture_ImageSaved(@ptrCast(self), @intCast(id), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, id: i32, fileName: [*:0]const u8) callconv(.c) void ```
    pub fn OnImageSaved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QImageCapture_Connect_ImageSaved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QImageCapture_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QImageCapture_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
    ///
    /// ``` self: QtC.QImageCapture, location: []const u8 ```
    pub fn CaptureToFile1(self: ?*anyopaque, location: []const u8) i32 {
        const location_str = qtc.libqt_string{
            .len = location.len,
            .data = location.ptr,
        };
        return qtc.QImageCapture_CaptureToFile1(@ptrCast(self), location_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QImageCapture, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagecapture.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QImageCapture, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QImageCapture, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QImageCapture, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QImageCapture, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QImageCapture, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QImageCapture, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QImageCapture, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qimagecapture.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QImageCapture, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QImageCapture, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QImageCapture, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QImageCapture, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QImageCapture, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QImageCapture, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QImageCapture, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QImageCapture, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QImageCapture, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QImageCapture, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QImageCapture, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QImageCapture, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageCapture_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageCapture_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageCapture_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageCapture_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageCapture_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageCapture_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageCapture_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageCapture_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageCapture_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageCapture_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageCapture_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageCapture_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageCapture_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageCapture_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageCapture_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageCapture_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageCapture_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QImageCapture_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QImageCapture_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QImageCapture_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QImageCapture_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageCapture_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageCapture_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageCapture_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QImageCapture_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QImageCapture_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QImageCapture_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageCapture_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QImageCapture, callback: *const fn (self: QtC.QImageCapture, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#dtor.QImageCapture)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QImageCapture ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageCapture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qimagecapture.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const NotReadyError: i32 = 1;
        pub const ResourceError: i32 = 2;
        pub const OutOfSpaceError: i32 = 3;
        pub const NotSupportedFeatureError: i32 = 4;
        pub const FormatError: i32 = 5;
    };

    pub const Quality = enum {
        pub const VeryLowQuality: i32 = 0;
        pub const LowQuality: i32 = 1;
        pub const NormalQuality: i32 = 2;
        pub const HighQuality: i32 = 3;
        pub const VeryHighQuality: i32 = 4;
    };

    pub const FileFormat = enum {
        pub const UnspecifiedFormat: i32 = 0;
        pub const JPEG: i32 = 1;
        pub const PNG: i32 = 2;
        pub const WebP: i32 = 3;
        pub const Tiff: i32 = 4;
        pub const LastFileFormat: i32 = 4;
    };
};
