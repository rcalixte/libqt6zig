const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qimagereader_enums = @import("libqimagereader.zig").enums;
const qmovie_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)
pub const QMovie = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMovie,

    pub const _is_QMovie = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMovie object in C++ memory
    ///
    pub fn new() QMovie {
        return .{ .ptr = qtc.QMovie_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new2(_device: anytype) QMovie {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QMovie_new2(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new3(_fileName: []const u8) QMovie {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.QMovie_new3(fileName_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QMovie {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QMovie_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new5(_device: anytype, _format: []u8) QMovie {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QMovie_new5(@ptrCast(_device.ptr), format_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(_device: anytype, _format: []u8, _parent: anytype) QMovie {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QMovie_new6(@ptrCast(_device.ptr), format_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new7(_fileName: []const u8, _format: []u8) QMovie {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QMovie_new7(fileName_str, format_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QMovie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: []u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(_fileName: []const u8, _format: []u8, _parent: anytype) QMovie {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QMovie_new8(fileName_str, format_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn metaObject(self: QMovie) QMetaObject {
        return .{ .ptr = qtc.QMovie_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QMovie, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMovie_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    pub fn superMetaObject(self: QMovie) QMetaObject {
        return .{ .ptr = qtc.QMovie_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QMovie, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMovie_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QMovie, callback: *const fn (QMovie, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMovie_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QMovie, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMovie_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QMovie, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMovie_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QMovie, callback: *const fn (QMovie, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMovie_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QMovie, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMovie_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMovie.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedFormats` instead
    ///
    pub const SupportedFormats = supportedFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#supportedFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QMovie_SupportedFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMovie.supportedFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMovie.supportedFormats: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QMovie, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QMovie_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn device(self: QMovie) QIODevice {
        return .{ .ptr = qtc.QMovie_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn setFileName(self: QMovie, _fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.QMovie_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QMovie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMovie_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMovie.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` _format: []u8 `
    ///
    pub fn setFormat(self: QMovie, _format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QMovie_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn format(self: QMovie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QMovie_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QMovie.format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: QMovie, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QMovie_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn backgroundColor(self: QMovie) QColor {
        return .{ .ptr = qtc.QMovie_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ## Returns:
    ///
    /// ` qmovie_enums.MovieState `
    ///
    pub fn state(self: QMovie) i32 {
        return qtc.QMovie_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameRect` instead
    ///
    pub const FrameRect = frameRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn frameRect(self: QMovie) QRect {
        return .{ .ptr = qtc.QMovie_FrameRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentImage` instead
    ///
    pub const CurrentImage = currentImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#currentImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn currentImage(self: QMovie) QImage {
        return .{ .ptr = qtc.QMovie_CurrentImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentPixmap` instead
    ///
    pub const CurrentPixmap = currentPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#currentPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn currentPixmap(self: QMovie) QPixmap {
        return .{ .ptr = qtc.QMovie_CurrentPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn isValid(self: QMovie) bool {
        return qtc.QMovie_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ## Returns:
    ///
    /// ` qimagereader_enums.ImageReaderError `
    ///
    pub fn lastError(self: QMovie) i32 {
        return qtc.QMovie_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastErrorString` instead
    ///
    pub const LastErrorString = lastErrorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#lastErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn lastErrorString(self: QMovie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMovie_LastErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMovie.lastErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `jumpToFrame` instead
    ///
    pub const JumpToFrame = jumpToFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#jumpToFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` frameNumber: i32 `
    ///
    pub fn jumpToFrame(self: QMovie, frameNumber: i32) bool {
        return qtc.QMovie_JumpToFrame(@ptrCast(self.ptr), @bitCast(frameNumber));
    }

    /// ### DEPRECATED: Use `loopCount` instead
    ///
    pub const LoopCount = loopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn loopCount(self: QMovie) i32 {
        return qtc.QMovie_LoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameCount` instead
    ///
    pub const FrameCount = frameCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn frameCount(self: QMovie) i32 {
        return qtc.QMovie_FrameCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextFrameDelay` instead
    ///
    pub const NextFrameDelay = nextFrameDelay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#nextFrameDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn nextFrameDelay(self: QMovie) i32 {
        return qtc.QMovie_NextFrameDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentFrameNumber` instead
    ///
    pub const CurrentFrameNumber = currentFrameNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#currentFrameNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn currentFrameNumber(self: QMovie) i32 {
        return qtc.QMovie_CurrentFrameNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn speed(self: QMovie) i32 {
        return qtc.QMovie_Speed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scaledSize` instead
    ///
    pub const ScaledSize = scaledSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn scaledSize(self: QMovie) QSize {
        return .{ .ptr = qtc.QMovie_ScaledSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScaledSize` instead
    ///
    pub const SetScaledSize = setScaledSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` size: QSize `
    ///
    pub fn setScaledSize(self: QMovie, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QMovie_SetScaledSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `cacheMode` instead
    ///
    pub const CacheMode = cacheMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ## Returns:
    ///
    /// ` qmovie_enums.CacheMode `
    ///
    pub fn cacheMode(self: QMovie) i32 {
        return qtc.QMovie_CacheMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCacheMode` instead
    ///
    pub const SetCacheMode = setCacheMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` mode: qmovie_enums.CacheMode `
    ///
    pub fn setCacheMode(self: QMovie, mode: i32) void {
        qtc.QMovie_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `started` instead
    ///
    pub const Started = started;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn started(self: QMovie) void {
        qtc.QMovie_Started(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie) callconv(.c) void `
    ///
    pub fn onStarted(self: QMovie, callback: *const fn (QMovie) callconv(.c) void) void {
        qtc.QMovie_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resized` instead
    ///
    pub const Resized = resized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#resized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` size: QSize `
    ///
    pub fn resized(self: QMovie, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QMovie_Resized(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `onResized` instead
    ///
    pub const OnResized = onResized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#resized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, size: QSize) callconv(.c) void `
    ///
    pub fn onResized(self: QMovie, callback: *const fn (QMovie, QSize) callconv(.c) void) void {
        qtc.QMovie_Connect_Resized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updated` instead
    ///
    pub const Updated = updated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#updated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` rect: QRect `
    ///
    pub fn updated(self: QMovie, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QMovie_Updated(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onUpdated` instead
    ///
    pub const OnUpdated = onUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#updated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, rect: QRect) callconv(.c) void `
    ///
    pub fn onUpdated(self: QMovie, callback: *const fn (QMovie, QRect) callconv(.c) void) void {
        qtc.QMovie_Connect_Updated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` _state: qmovie_enums.MovieState `
    ///
    pub fn stateChanged(self: QMovie, _state: i32) void {
        qtc.QMovie_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, state: qmovie_enums.MovieState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QMovie, callback: *const fn (QMovie, i32) callconv(.c) void) void {
        qtc.QMovie_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` errorVal: qimagereader_enums.ImageReaderError `
    ///
    pub fn error0(self: QMovie, errorVal: i32) void {
        qtc.QMovie_Error(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#error)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, errorVal: qimagereader_enums.ImageReaderError) callconv(.c) void `
    ///
    pub fn onError(self: QMovie, callback: *const fn (QMovie, i32) callconv(.c) void) void {
        qtc.QMovie_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn finished(self: QMovie) void {
        qtc.QMovie_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie) callconv(.c) void `
    ///
    pub fn onFinished(self: QMovie, callback: *const fn (QMovie) callconv(.c) void) void {
        qtc.QMovie_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `frameChanged` instead
    ///
    pub const FrameChanged = frameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` frameNumber: i32 `
    ///
    pub fn frameChanged(self: QMovie, frameNumber: i32) void {
        qtc.QMovie_FrameChanged(@ptrCast(self.ptr), @bitCast(frameNumber));
    }

    /// ### DEPRECATED: Use `onFrameChanged` instead
    ///
    pub const OnFrameChanged = onFrameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, frameNumber: i32) callconv(.c) void `
    ///
    pub fn onFrameChanged(self: QMovie, callback: *const fn (QMovie, i32) callconv(.c) void) void {
        qtc.QMovie_Connect_FrameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn start(self: QMovie) void {
        qtc.QMovie_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `jumpToNextFrame` instead
    ///
    pub const JumpToNextFrame = jumpToNextFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#jumpToNextFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn jumpToNextFrame(self: QMovie) bool {
        return qtc.QMovie_JumpToNextFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaused` instead
    ///
    pub const SetPaused = setPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` paused: bool `
    ///
    pub fn setPaused(self: QMovie, paused: bool) void {
        qtc.QMovie_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    pub fn stop(self: QMovie) void {
        qtc.QMovie_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpeed` instead
    ///
    pub const SetSpeed = setSpeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setSpeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMovie `
    ///
    /// ` percentSpeed: i32 `
    ///
    pub fn setSpeed(self: QMovie, percentSpeed: i32) void {
        qtc.QMovie_SetSpeed(@ptrCast(self.ptr), @bitCast(percentSpeed));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMovie.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMovie.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QMovie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMovie.objectName: Memory allocation failed");
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
    /// ` self: QMovie `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QMovie, name: []const u8) void {
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
    /// ` self: QMovie `
    ///
    pub fn isWidgetType(self: QMovie) bool {
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
    /// ` self: QMovie `
    ///
    pub fn isWindowType(self: QMovie) bool {
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
    /// ` self: QMovie `
    ///
    pub fn isQuickItemType(self: QMovie) bool {
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
    /// ` self: QMovie `
    ///
    pub fn signalsBlocked(self: QMovie) bool {
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
    /// ` self: QMovie `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QMovie, b: bool) bool {
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
    /// ` self: QMovie `
    ///
    pub fn thread(self: QMovie) QThread {
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
    /// ` self: QMovie `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QMovie, _thread: anytype) bool {
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
    /// ` self: QMovie `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QMovie, interval: i32) i32 {
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
    /// ` self: QMovie `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QMovie, time: i64) i32 {
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
    /// ` self: QMovie `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QMovie, id: i32) void {
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
    /// ` self: QMovie `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QMovie, id: i32) void {
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
    /// ` self: QMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QMovie, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QMovie.children: Memory allocation failed");
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
    /// ` self: QMovie `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QMovie, _parent: anytype) void {
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
    /// ` self: QMovie `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QMovie, filterObj: anytype) void {
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
    /// ` self: QMovie `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QMovie, obj: anytype) void {
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
    /// ` self: QMovie `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QMovie, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QMovie `
    ///
    pub fn disconnect3(self: QMovie) bool {
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
    /// ` self: QMovie `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QMovie, receiver: anytype) bool {
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
    /// ` self: QMovie `
    ///
    pub fn dumpObjectTree(self: QMovie) void {
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
    /// ` self: QMovie `
    ///
    pub fn dumpObjectInfo(self: QMovie) void {
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
    /// ` self: QMovie `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QMovie, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QMovie `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QMovie, name: [:0]const u8) QVariant {
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
    /// ` self: QMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QMovie, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QMovie.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QMovie.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QMovie `
    ///
    pub fn bindingStorage(self: QMovie) QBindingStorage {
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
    /// ` self: QMovie `
    ///
    pub fn bindingStorage2(self: QMovie) QBindingStorage {
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
    /// ` self: QMovie `
    ///
    pub fn destroyed(self: QMovie) void {
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
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QMovie, callback: *const fn (QMovie) callconv(.c) void) void {
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
    /// ` self: QMovie `
    ///
    pub fn parent(self: QMovie) QObject {
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
    /// ` self: QMovie `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QMovie, classname: [:0]const u8) bool {
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
    /// ` self: QMovie `
    ///
    pub fn deleteLater(self: QMovie) void {
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
    /// ` self: QMovie `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QMovie, interval: i32, timerType: i32) i32 {
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
    /// ` self: QMovie `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QMovie, time: i64, timerType: i32) i32 {
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
    /// ` self: QMovie `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QMovie, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QMovie `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QMovie, signal: [:0]const u8) bool {
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
    /// ` self: QMovie `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QMovie, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QMovie `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QMovie, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMovie `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QMovie, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMovie `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QMovie, param1: anytype) void {
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
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QMovie, callback: *const fn (QMovie, QObject) callconv(.c) void) void {
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
    /// ` self: QMovie `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QMovie, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMovie_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QMovie, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMovie_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QMovie, callback: *const fn (QMovie, QEvent) callconv(.c) bool) void {
        qtc.QMovie_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QMovie, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMovie_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QMovie, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QMovie_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QMovie, callback: *const fn (QMovie, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMovie_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QMovie, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMovie_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QMovie, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QMovie_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QMovie, callback: *const fn (QMovie, QTimerEvent) callconv(.c) void) void {
        qtc.QMovie_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QMovie, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMovie_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QMovie, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QMovie_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QMovie, callback: *const fn (QMovie, QChildEvent) callconv(.c) void) void {
        qtc.QMovie_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QMovie, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMovie_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QMovie, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QMovie_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QMovie, callback: *const fn (QMovie, QEvent) callconv(.c) void) void {
        qtc.QMovie_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QMovie, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMovie_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QMovie, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMovie_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QMovie, callback: *const fn (QMovie, QMetaMethod) callconv(.c) void) void {
        qtc.QMovie_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QMovie, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMovie_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QMovie, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMovie_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QMovie, callback: *const fn (QMovie, QMetaMethod) callconv(.c) void) void {
        qtc.QMovie_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    pub fn sender(self: QMovie) QObject {
        return .{ .ptr = qtc.QMovie_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMovie `
    ///
    pub fn superSender(self: QMovie) QObject {
        return .{ .ptr = qtc.QMovie_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QMovie, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMovie_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    pub fn senderSignalIndex(self: QMovie) i32 {
        return qtc.QMovie_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMovie `
    ///
    pub fn superSenderSignalIndex(self: QMovie) i32 {
        return qtc.QMovie_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QMovie, callback: *const fn () callconv(.c) i32) void {
        qtc.QMovie_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QMovie, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMovie_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMovie `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QMovie, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMovie_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QMovie, callback: *const fn (QMovie, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMovie_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QMovie, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMovie_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMovie `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QMovie, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMovie_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMovie`
    ///
    /// ` callback: *const fn (self: QMovie, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QMovie, callback: *const fn (QMovie, QMetaMethod) callconv(.c) bool) void {
        qtc.QMovie_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMovie `
    ///
    /// ` callback: *const fn (self: QMovie, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QMovie, callback: *const fn (QMovie, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#dtor.QMovie)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMovie `
    ///
    pub fn delete(self: QMovie) void {
        qtc.QMovie_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#public-types)
pub const enums = struct {
    pub const MovieState = enum(i32) {
        pub const NotRunning: i32 = 0;
        pub const Paused: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const CacheMode = enum(i32) {
        pub const CacheNone: i32 = 0;
        pub const CacheAll: i32 = 1;
    };
};
