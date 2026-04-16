const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html)
pub const KIO__ThumbnailRequest = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__ThumbnailRequest,

    pub const _is_KIO__ThumbnailRequest = {};

    /// New constructs a new KIO::ThumbnailRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` targetSize: QSize `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` dpr: f64 `
    ///
    /// ` sequenceIndex: f32 `
    ///
    pub fn New(url: anytype, targetSize: anytype, mimeType: []const u8, dpr: f64, sequenceIndex: f32) KIO__ThumbnailRequest {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(targetSize)._is_QSize;
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KIO__ThumbnailRequest_new(@ptrCast(url.ptr), @ptrCast(targetSize.ptr), mimeType_str, @bitCast(dpr), @bitCast(sequenceIndex)) };
    }

    /// New2 constructs a new KIO::ThumbnailRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__ThumbnailRequest `
    ///
    pub fn New2(param1: anytype) KIO__ThumbnailRequest {
        comptime _ = @TypeOf(param1)._is_KIO__ThumbnailRequest;
        return .{ .ptr = qtc.KIO__ThumbnailRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    /// ` param1: KIO__ThumbnailRequest `
    ///
    pub fn OperatorAssign(self: KIO__ThumbnailRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ThumbnailRequest;
        qtc.KIO__ThumbnailRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    pub fn Url(self: KIO__ThumbnailRequest) QUrl {
        return .{ .ptr = qtc.KIO__ThumbnailRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html#targetSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    pub fn TargetSize(self: KIO__ThumbnailRequest) QSize {
        return .{ .ptr = qtc.KIO__ThumbnailRequest_TargetSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: KIO__ThumbnailRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__ThumbnailRequest_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__thumbnailrequest.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    pub fn DevicePixelRatio(self: KIO__ThumbnailRequest) f64 {
        return qtc.KIO__ThumbnailRequest_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailrequest.html#sequenceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    pub fn SequenceIndex(self: KIO__ThumbnailRequest) f32 {
        return qtc.KIO__ThumbnailRequest_SequenceIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__ThumbnailRequest `
    ///
    pub fn Delete(self: KIO__ThumbnailRequest) void {
        qtc.KIO__ThumbnailRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html)
pub const KIO__ThumbnailResult = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__ThumbnailResult,

    pub const _is_KIO__ThumbnailResult = {};

    /// New constructs a new KIO::ThumbnailResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__ThumbnailResult `
    ///
    pub fn New(param1: anytype) KIO__ThumbnailResult {
        comptime _ = @TypeOf(param1)._is_KIO__ThumbnailResult;
        return .{ .ptr = qtc.KIO__ThumbnailResult_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailResult `
    ///
    /// ` param1: KIO__ThumbnailResult `
    ///
    pub fn OperatorAssign(self: KIO__ThumbnailResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ThumbnailResult;
        qtc.KIO__ThumbnailResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailResult `
    ///
    pub fn Image(self: KIO__ThumbnailResult) QImage {
        return .{ .ptr = qtc.KIO__ThumbnailResult_Image(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailResult `
    ///
    pub fn IsValid(self: KIO__ThumbnailResult) bool {
        return qtc.KIO__ThumbnailResult_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#sequenceIndexWraparoundPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailResult `
    ///
    pub fn SequenceIndexWraparoundPoint(self: KIO__ThumbnailResult) f32 {
        return qtc.KIO__ThumbnailResult_SequenceIndexWraparoundPoint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#setSequenceIndexWraparoundPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailResult `
    ///
    /// ` wraparoundPoint: f32 `
    ///
    pub fn SetSequenceIndexWraparoundPoint(self: KIO__ThumbnailResult, wraparoundPoint: f32) void {
        qtc.KIO__ThumbnailResult_SetSequenceIndexWraparoundPoint(@ptrCast(self.ptr), @bitCast(wraparoundPoint));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#pass)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn Pass(image: anytype) KIO__ThumbnailResult {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.KIO__ThumbnailResult_Pass(@ptrCast(image.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailresult.html#fail)
    ///
    pub fn Fail() KIO__ThumbnailResult {
        return .{ .ptr = qtc.KIO__ThumbnailResult_Fail() };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__ThumbnailResult `
    ///
    pub fn Delete(self: KIO__ThumbnailResult) void {
        qtc.KIO__ThumbnailResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-thumbnailcreator.html)
pub const KIO__ThumbnailCreator = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailcreator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__ThumbnailCreator,

    pub const _is_KIO__ThumbnailCreator = {};
    pub const _is_QObject = {};

    /// New constructs a new KIO::ThumbnailCreator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    /// ` args: []QVariant `
    ///
    pub fn New(parent: anytype, args: []QVariant) KIO__ThumbnailCreator {
        comptime _ = @TypeOf(parent)._is_QObject;
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return .{ .ptr = qtc.KIO__ThumbnailCreator_new(@ptrCast(parent.ptr), args_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn MetaObject(self: KIO__ThumbnailCreator) QMetaObject {
        return .{ .ptr = qtc.KIO__ThumbnailCreator_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KIO__ThumbnailCreator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__ThumbnailCreator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn SuperMetaObject(self: KIO__ThumbnailCreator) QMetaObject {
        return .{ .ptr = qtc.KIO__ThumbnailCreator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__ThumbnailCreator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ThumbnailCreator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__ThumbnailCreator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KIO__ThumbnailCreator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ThumbnailCreator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KIO__ThumbnailCreator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ThumbnailCreator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__ThumbnailCreator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KIO__ThumbnailCreator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ThumbnailCreator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__thumbnailcreator.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailcreator.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` request: KIO__ThumbnailRequest `
    ///
    pub fn Create(self: KIO__ThumbnailCreator, request: anytype) KIO__ThumbnailResult {
        comptime _ = @TypeOf(request)._is_KIO__ThumbnailRequest;
        return .{ .ptr = qtc.KIO__ThumbnailCreator_Create(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailcreator.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, request: KIO__ThumbnailRequest) callconv(.c) KIO__ThumbnailResult `
    ///
    pub fn OnCreate(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, KIO__ThumbnailRequest) callconv(.c) KIO__ThumbnailResult) void {
        qtc.KIO__ThumbnailCreator_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// ### [Upstream resources](https://api.kde.org/kio-thumbnailcreator.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` request: KIO__ThumbnailRequest `
    ///
    pub fn SuperCreate(self: KIO__ThumbnailCreator, request: anytype) KIO__ThumbnailResult {
        comptime _ = @TypeOf(request)._is_KIO__ThumbnailRequest;
        return .{ .ptr = qtc.KIO__ThumbnailCreator_SuperCreate(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__thumbnailcreator.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__thumbnailcreator.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KIO__ThumbnailCreator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__thumbnailcreator.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KIO__ThumbnailCreator, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn IsWidgetType(self: KIO__ThumbnailCreator) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn IsWindowType(self: KIO__ThumbnailCreator) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn IsQuickItemType(self: KIO__ThumbnailCreator) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn SignalsBlocked(self: KIO__ThumbnailCreator) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KIO__ThumbnailCreator, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn Thread(self: KIO__ThumbnailCreator) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__ThumbnailCreator, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KIO__ThumbnailCreator, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KIO__ThumbnailCreator, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KIO__ThumbnailCreator, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KIO__ThumbnailCreator, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KIO__ThumbnailCreator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__thumbnailcreator.Children: Memory allocation failed");
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__ThumbnailCreator, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KIO__ThumbnailCreator, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KIO__ThumbnailCreator, obj: anytype) void {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__ThumbnailCreator, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn Disconnect3(self: KIO__ThumbnailCreator) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KIO__ThumbnailCreator, receiver: anytype) bool {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn DumpObjectTree(self: KIO__ThumbnailCreator) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn DumpObjectInfo(self: KIO__ThumbnailCreator) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KIO__ThumbnailCreator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__ThumbnailCreator, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KIO__ThumbnailCreator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__thumbnailcreator.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__thumbnailcreator.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn BindingStorage(self: KIO__ThumbnailCreator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn BindingStorage2(self: KIO__ThumbnailCreator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn Destroyed(self: KIO__ThumbnailCreator) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn Parent(self: KIO__ThumbnailCreator) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KIO__ThumbnailCreator, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn DeleteLater(self: KIO__ThumbnailCreator) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KIO__ThumbnailCreator, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KIO__ThumbnailCreator, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__ThumbnailCreator, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__ThumbnailCreator, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KIO__ThumbnailCreator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__ThumbnailCreator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__ThumbnailCreator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__ThumbnailCreator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QObject) callconv(.c) void) void {
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__ThumbnailCreator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ThumbnailCreator_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KIO__ThumbnailCreator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ThumbnailCreator_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QEvent) callconv(.c) bool) void {
        qtc.KIO__ThumbnailCreator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__ThumbnailCreator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ThumbnailCreator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KIO__ThumbnailCreator, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ThumbnailCreator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__ThumbnailCreator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KIO__ThumbnailCreator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__ThumbnailCreator_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KIO__ThumbnailCreator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__ThumbnailCreator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__ThumbnailCreator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KIO__ThumbnailCreator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__ThumbnailCreator_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KIO__ThumbnailCreator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__ThumbnailCreator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QChildEvent) callconv(.c) void) void {
        qtc.KIO__ThumbnailCreator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KIO__ThumbnailCreator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__ThumbnailCreator_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KIO__ThumbnailCreator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__ThumbnailCreator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QEvent) callconv(.c) void) void {
        qtc.KIO__ThumbnailCreator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KIO__ThumbnailCreator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ThumbnailCreator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KIO__ThumbnailCreator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ThumbnailCreator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ThumbnailCreator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KIO__ThumbnailCreator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ThumbnailCreator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KIO__ThumbnailCreator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ThumbnailCreator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ThumbnailCreator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn Sender(self: KIO__ThumbnailCreator) QObject {
        return .{ .ptr = qtc.KIO__ThumbnailCreator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn SuperSender(self: KIO__ThumbnailCreator) QObject {
        return .{ .ptr = qtc.KIO__ThumbnailCreator_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KIO__ThumbnailCreator, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__ThumbnailCreator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn SenderSignalIndex(self: KIO__ThumbnailCreator) i32 {
        return qtc.KIO__ThumbnailCreator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn SuperSenderSignalIndex(self: KIO__ThumbnailCreator) i32 {
        return qtc.KIO__ThumbnailCreator_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KIO__ThumbnailCreator, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__ThumbnailCreator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KIO__ThumbnailCreator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ThumbnailCreator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KIO__ThumbnailCreator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ThumbnailCreator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__ThumbnailCreator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KIO__ThumbnailCreator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ThumbnailCreator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KIO__ThumbnailCreator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ThumbnailCreator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator`
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__ThumbnailCreator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    /// ` callback: *const fn (self: KIO__ThumbnailCreator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KIO__ThumbnailCreator, callback: *const fn (KIO__ThumbnailCreator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__ThumbnailCreator `
    ///
    pub fn Delete(self: KIO__ThumbnailCreator) void {
        qtc.KIO__ThumbnailCreator_Delete(@ptrCast(self.ptr));
    }
};
