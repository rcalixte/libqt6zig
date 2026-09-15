const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQmlContext = @import("libqt6").QQmlContext;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QQmlError = @import("libqt6").QQmlError;
const QQmlIncubator = @import("libqt6").QQmlIncubator;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qqmlcomponent_enums = enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)
pub const QQmlComponent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlComponent,

    pub const _is_QQmlComponent = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    pub fn new() QQmlComponent {
        return .{ .ptr = qtc.QQmlComponent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    pub fn new2(param1: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        return .{ .ptr = qtc.QQmlComponent_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn new3(param1: anytype, fileName: []const u8) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QQmlComponent_new3(@ptrCast(param1.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    pub fn new4(param1: anytype, fileName: []const u8, mode: i32) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QQmlComponent_new4(@ptrCast(param1.ptr), fileName_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` _url: QUrl `
    ///
    pub fn new5(param1: anytype, _url: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QQmlComponent_new5(@ptrCast(param1.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` _url: QUrl `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    pub fn new6(param1: anytype, _url: anytype, mode: i32) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QQmlComponent_new6(@ptrCast(param1.ptr), @ptrCast(_url.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: QQmlEngine `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    pub fn new7(_engine: anytype, uri: []const u8, typeName: []const u8) QQmlComponent {
        comptime _ = @TypeOf(_engine)._is_QQmlEngine;
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        return .{ .ptr = qtc.QQmlComponent_new7(@ptrCast(_engine.ptr), uri_str, typeName_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: QQmlEngine `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    pub fn new8(_engine: anytype, uri: []const u8, typeName: []const u8, mode: i32) QQmlComponent {
        comptime _ = @TypeOf(_engine)._is_QQmlEngine;
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        return .{ .ptr = qtc.QQmlComponent_new8(@ptrCast(_engine.ptr), uri_str, typeName_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new9(_parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new9(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new10(param1: anytype, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new10(@ptrCast(param1.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new11(param1: anytype, fileName: []const u8, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new11(@ptrCast(param1.ptr), fileName_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new12(param1: anytype, fileName: []const u8, mode: i32, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new12(@ptrCast(param1.ptr), fileName_str, @bitCast(mode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` _url: QUrl `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new13(param1: anytype, _url: anytype, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        comptime _ = @TypeOf(_url)._is_QUrl;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new13(@ptrCast(param1.ptr), @ptrCast(_url.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` _url: QUrl `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new14(param1: anytype, _url: anytype, mode: i32, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        comptime _ = @TypeOf(_url)._is_QUrl;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new14(@ptrCast(param1.ptr), @ptrCast(_url.ptr), @bitCast(mode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: QQmlEngine `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new15(_engine: anytype, uri: []const u8, typeName: []const u8, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(_engine)._is_QQmlEngine;
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new15(@ptrCast(_engine.ptr), uri_str, typeName_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new16` instead
    ///
    pub const New16 = new16;

    /// Allocate a new QQmlComponent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: QQmlEngine `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new16(_engine: anytype, uri: []const u8, typeName: []const u8, mode: i32, _parent: anytype) QQmlComponent {
        comptime _ = @TypeOf(_engine)._is_QQmlEngine;
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_new16(@ptrCast(_engine.ptr), uri_str, typeName_str, @bitCast(mode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn metaObject(self: QQmlComponent) QMetaObject {
        return .{ .ptr = qtc.QQmlComponent_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQmlComponent, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQmlComponent_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    pub fn superMetaObject(self: QQmlComponent) QMetaObject {
        return .{ .ptr = qtc.QQmlComponent_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQmlComponent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlComponent_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQmlComponent, callback: *const fn (QQmlComponent, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQmlComponent_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQmlComponent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlComponent_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQmlComponent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlComponent_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQmlComponent, callback: *const fn (QQmlComponent, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQmlComponent_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQmlComponent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlComponent_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlComponent_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlComponent.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ## Returns:
    ///
    /// ` qqmlcomponent_enums.Status `
    ///
    pub fn status(self: QQmlComponent) i32 {
        return qtc.QQmlComponent_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn isNull(self: QQmlComponent) bool {
        return qtc.QQmlComponent_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReady` instead
    ///
    pub const IsReady = isReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn isReady(self: QQmlComponent) bool {
        return qtc.QQmlComponent_IsReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn isError(self: QQmlComponent) bool {
        return qtc.QQmlComponent_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLoading` instead
    ///
    pub const IsLoading = isLoading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn isLoading(self: QQmlComponent) bool {
        return qtc.QQmlComponent_IsLoading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBound` instead
    ///
    pub const IsBound = isBound;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#isBound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn isBound(self: QQmlComponent) bool {
        return qtc.QQmlComponent_IsBound(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errors` instead
    ///
    pub const Errors = errors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#errors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errors(self: QQmlComponent, allocator: std.mem.Allocator) []QQmlError {
        const _arr: qtc.libqt_list = qtc.QQmlComponent_Errors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQmlError, _arr.len) catch @panic("QQmlComponent.errors: Memory allocation failed");
        const _data_val: [*]QtC.QQmlError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QQmlComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlComponent_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlComponent.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `progress` instead
    ///
    pub const Progress = progress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#progress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn progress(self: QQmlComponent) f64 {
        return qtc.QQmlComponent_Progress(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn url(self: QQmlComponent) QUrl {
        return .{ .ptr = qtc.QQmlComponent_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` context: QQmlContext `
    ///
    pub fn create(self: QQmlComponent, context: anytype) QObject {
        comptime _ = @TypeOf(context)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlComponent_Create(@ptrCast(self.ptr), @ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, context: QQmlContext) callconv(.c) QObject `
    ///
    pub fn onCreate(self: QQmlComponent, callback: *const fn (QQmlComponent, QQmlContext) callconv(.c) QObject) void {
        qtc.QQmlComponent_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` context: QQmlContext `
    ///
    pub fn superCreate(self: QQmlComponent, context: anytype) QObject {
        comptime _ = @TypeOf(context)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlComponent_SuperCreate(@ptrCast(self.ptr), @ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `createWithInitialProperties` instead
    ///
    pub const CreateWithInitialProperties = createWithInitialProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createWithInitialProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` initialProperties: ArrayMap_constu8_QVariant `
    ///
    pub fn createWithInitialProperties(self: QQmlComponent, allocator: std.mem.Allocator, initialProperties: ArrayMap_constu8_QVariant) QObject {
        const initialProperties_count = initialProperties.count();
        const initialProperties_keys = allocator.alloc(qtc.libqt_string, initialProperties_count) catch @panic("QQmlComponent.createWithInitialProperties: Memory allocation failed");
        defer allocator.free(initialProperties_keys);
        const initialProperties_values = allocator.alloc(QtC.QVariant, initialProperties_count) catch @panic("QQmlComponent.createWithInitialProperties: Memory allocation failed");
        defer allocator.free(initialProperties_values);
        var initialProperties_i: usize = 0;
        var initialProperties_it = initialProperties.iterator();
        while (initialProperties_it.next()) |it_entry| : (initialProperties_i += 1) {
            const initialProperties_key = it_entry.key_ptr.*;
            initialProperties_keys[initialProperties_i] = qtc.libqt_string{
                .len = initialProperties_key.len,
                .data = initialProperties_key.ptr,
            };
            initialProperties_values[initialProperties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const initialProperties_map = qtc.libqt_map{
            .len = initialProperties_count,
            .keys = @ptrCast(initialProperties_keys.ptr),
            .values = @ptrCast(initialProperties_values.ptr),
        };
        return .{ .ptr = qtc.QQmlComponent_CreateWithInitialProperties(@ptrCast(self.ptr), initialProperties_map) };
    }

    /// ### DEPRECATED: Use `setInitialProperties` instead
    ///
    pub const SetInitialProperties = setInitialProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#setInitialProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` component: QObject `
    ///
    /// ` properties: ArrayMap_constu8_QVariant `
    ///
    pub fn setInitialProperties(self: QQmlComponent, allocator: std.mem.Allocator, component: anytype, properties: ArrayMap_constu8_QVariant) void {
        comptime _ = @TypeOf(component)._is_QObject;
        const properties_count = properties.count();
        const properties_keys = allocator.alloc(qtc.libqt_string, properties_count) catch @panic("QQmlComponent.setInitialProperties: Memory allocation failed");
        defer allocator.free(properties_keys);
        const properties_values = allocator.alloc(QtC.QVariant, properties_count) catch @panic("QQmlComponent.setInitialProperties: Memory allocation failed");
        defer allocator.free(properties_values);
        var properties_i: usize = 0;
        var properties_it = properties.iterator();
        while (properties_it.next()) |it_entry| : (properties_i += 1) {
            const properties_key = it_entry.key_ptr.*;
            properties_keys[properties_i] = qtc.libqt_string{
                .len = properties_key.len,
                .data = properties_key.ptr,
            };
            properties_values[properties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const properties_map = qtc.libqt_map{
            .len = properties_count,
            .keys = @ptrCast(properties_keys.ptr),
            .values = @ptrCast(properties_values.ptr),
        };
        qtc.QQmlComponent_SetInitialProperties(@ptrCast(self.ptr), @ptrCast(component.ptr), properties_map);
    }

    /// ### DEPRECATED: Use `beginCreate` instead
    ///
    pub const BeginCreate = beginCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#beginCreate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: QQmlContext `
    ///
    pub fn beginCreate(self: QQmlComponent, param1: anytype) QObject {
        comptime _ = @TypeOf(param1)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlComponent_BeginCreate(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onBeginCreate` instead
    ///
    pub const OnBeginCreate = onBeginCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#beginCreate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, param1: QQmlContext) callconv(.c) QObject `
    ///
    pub fn onBeginCreate(self: QQmlComponent, callback: *const fn (QQmlComponent, QQmlContext) callconv(.c) QObject) void {
        qtc.QQmlComponent_OnBeginCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBeginCreate` instead
    ///
    pub const SuperBeginCreate = superBeginCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#beginCreate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: QQmlContext `
    ///
    pub fn superBeginCreate(self: QQmlComponent, param1: anytype) QObject {
        comptime _ = @TypeOf(param1)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlComponent_SuperBeginCreate(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `completeCreate` instead
    ///
    pub const CompleteCreate = completeCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#completeCreate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn completeCreate(self: QQmlComponent) void {
        qtc.QQmlComponent_CompleteCreate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompleteCreate` instead
    ///
    pub const OnCompleteCreate = onCompleteCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#completeCreate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCompleteCreate(self: QQmlComponent, callback: *const fn () callconv(.c) void) void {
        qtc.QQmlComponent_OnCompleteCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompleteCreate` instead
    ///
    pub const SuperCompleteCreate = superCompleteCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#completeCreate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn superCompleteCreate(self: QQmlComponent) void {
        qtc.QQmlComponent_SuperCompleteCreate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `create2` instead
    ///
    pub const Create2 = create2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: QQmlIncubator `
    ///
    pub fn create2(self: QQmlComponent, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlIncubator;
        qtc.QQmlComponent_Create2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `creationContext` instead
    ///
    pub const CreationContext = creationContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#creationContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn creationContext(self: QQmlComponent) QQmlContext {
        return .{ .ptr = qtc.QQmlComponent_CreationContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `engine` instead
    ///
    pub const Engine = engine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn engine(self: QQmlComponent) QQmlEngine {
        return .{ .ptr = qtc.QQmlComponent_Engine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `loadUrl` instead
    ///
    pub const LoadUrl = loadUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` _url: QUrl `
    ///
    pub fn loadUrl(self: QQmlComponent, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QQmlComponent_LoadUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `loadUrl2` instead
    ///
    pub const LoadUrl2 = loadUrl2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` _url: QUrl `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    pub fn loadUrl2(self: QQmlComponent, _url: anytype, mode: i32) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QQmlComponent_LoadUrl2(@ptrCast(self.ptr), @ptrCast(_url.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `loadFromModule` instead
    ///
    pub const LoadFromModule = loadFromModule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadFromModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    pub fn loadFromModule(self: QQmlComponent, uri: []const u8, typeName: []const u8) void {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        qtc.QQmlComponent_LoadFromModule(@ptrCast(self.ptr), uri_str, typeName_str);
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: []u8 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn setData(self: QQmlComponent, param1: []u8, baseUrl: anytype) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.QQmlComponent_SetData(@ptrCast(self.ptr), param1_str, @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: qqmlcomponent_enums.Status `
    ///
    pub fn statusChanged(self: QQmlComponent, param1: i32) void {
        qtc.QQmlComponent_StatusChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, param1: qqmlcomponent_enums.Status) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: QQmlComponent, callback: *const fn (QQmlComponent, i32) callconv(.c) void) void {
        qtc.QQmlComponent_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `progressChanged` instead
    ///
    pub const ProgressChanged = progressChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#progressChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: f64 `
    ///
    pub fn progressChanged(self: QQmlComponent, param1: f64) void {
        qtc.QQmlComponent_ProgressChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onProgressChanged` instead
    ///
    pub const OnProgressChanged = onProgressChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#progressChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, param1: f64) callconv(.c) void `
    ///
    pub fn onProgressChanged(self: QQmlComponent, callback: *const fn (QQmlComponent, f64) callconv(.c) void) void {
        qtc.QQmlComponent_Connect_ProgressChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createObject2` instead
    ///
    pub const CreateObject2 = createObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn createObject2(self: QQmlComponent) QObject {
        return .{ .ptr = qtc.QQmlComponent_CreateObject2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateObject2` instead
    ///
    pub const OnCreateObject2 = onCreateObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onCreateObject2(self: QQmlComponent, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQmlComponent_OnCreateObject2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateObject2` instead
    ///
    pub const SuperCreateObject2 = superCreateObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn superCreateObject2(self: QQmlComponent) QObject {
        return .{ .ptr = qtc.QQmlComponent_SuperCreateObject2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlComponent_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlComponent.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlComponent_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlComponent.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createWithInitialProperties2` instead
    ///
    pub const CreateWithInitialProperties2 = createWithInitialProperties2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createWithInitialProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` initialProperties: ArrayMap_constu8_QVariant `
    ///
    /// ` context: QQmlContext `
    ///
    pub fn createWithInitialProperties2(self: QQmlComponent, allocator: std.mem.Allocator, initialProperties: ArrayMap_constu8_QVariant, context: anytype) QObject {
        const initialProperties_count = initialProperties.count();
        const initialProperties_keys = allocator.alloc(qtc.libqt_string, initialProperties_count) catch @panic("QQmlComponent.createWithInitialProperties2: Memory allocation failed");
        defer allocator.free(initialProperties_keys);
        const initialProperties_values = allocator.alloc(QtC.QVariant, initialProperties_count) catch @panic("QQmlComponent.createWithInitialProperties2: Memory allocation failed");
        defer allocator.free(initialProperties_values);
        var initialProperties_i: usize = 0;
        var initialProperties_it = initialProperties.iterator();
        while (initialProperties_it.next()) |it_entry| : (initialProperties_i += 1) {
            const initialProperties_key = it_entry.key_ptr.*;
            initialProperties_keys[initialProperties_i] = qtc.libqt_string{
                .len = initialProperties_key.len,
                .data = initialProperties_key.ptr,
            };
            initialProperties_values[initialProperties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const initialProperties_map = qtc.libqt_map{
            .len = initialProperties_count,
            .keys = @ptrCast(initialProperties_keys.ptr),
            .values = @ptrCast(initialProperties_values.ptr),
        };
        comptime _ = @TypeOf(context)._is_QQmlContext;
        return .{ .ptr = qtc.QQmlComponent_CreateWithInitialProperties2(@ptrCast(self.ptr), initialProperties_map, @ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `create22` instead
    ///
    pub const Create22 = create22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: QQmlIncubator `
    ///
    /// ` context: QQmlContext `
    ///
    pub fn create22(self: QQmlComponent, param1: anytype, context: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlIncubator;
        comptime _ = @TypeOf(context)._is_QQmlContext;
        qtc.QQmlComponent_Create22(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `create3` instead
    ///
    pub const Create3 = create3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` param1: QQmlIncubator `
    ///
    /// ` context: QQmlContext `
    ///
    /// ` forContext: QQmlContext `
    ///
    pub fn create3(self: QQmlComponent, param1: anytype, context: anytype, forContext: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlIncubator;
        comptime _ = @TypeOf(context)._is_QQmlContext;
        comptime _ = @TypeOf(forContext)._is_QQmlContext;
        qtc.QQmlComponent_Create3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(context.ptr), @ptrCast(forContext.ptr));
    }

    /// ### DEPRECATED: Use `loadFromModule3` instead
    ///
    pub const LoadFromModule3 = loadFromModule3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#loadFromModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    /// ` mode: qqmlcomponent_enums.CompilationMode `
    ///
    pub fn loadFromModule3(self: QQmlComponent, uri: []const u8, typeName: []const u8, mode: i32) void {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        qtc.QQmlComponent_LoadFromModule3(@ptrCast(self.ptr), uri_str, typeName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `createObject1` instead
    ///
    pub const CreateObject1 = createObject1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createObject1(self: QQmlComponent, _parent: anytype) QObject {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_CreateObject1(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateObject1` instead
    ///
    pub const OnCreateObject1 = onCreateObject1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, parent: QObject) callconv(.c) QObject `
    ///
    pub fn onCreateObject1(self: QQmlComponent, callback: *const fn (QQmlComponent, QObject) callconv(.c) QObject) void {
        qtc.QQmlComponent_OnCreateObject1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateObject1` instead
    ///
    pub const SuperCreateObject1 = superCreateObject1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` _parent: QObject `
    ///
    pub fn superCreateObject1(self: QQmlComponent, _parent: anytype) QObject {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlComponent_SuperCreateObject1(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createObject22` instead
    ///
    pub const CreateObject22 = createObject22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _parent: QObject `
    ///
    /// ` properties: ArrayMap_constu8_QVariant `
    ///
    pub fn createObject22(self: QQmlComponent, allocator: std.mem.Allocator, _parent: anytype, properties: ArrayMap_constu8_QVariant) QObject {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const properties_count = properties.count();
        const properties_keys = allocator.alloc(qtc.libqt_string, properties_count) catch @panic("QQmlComponent.createObject22: Memory allocation failed");
        defer allocator.free(properties_keys);
        const properties_values = allocator.alloc(QtC.QVariant, properties_count) catch @panic("QQmlComponent.createObject22: Memory allocation failed");
        defer allocator.free(properties_values);
        var properties_i: usize = 0;
        var properties_it = properties.iterator();
        while (properties_it.next()) |it_entry| : (properties_i += 1) {
            const properties_key = it_entry.key_ptr.*;
            properties_keys[properties_i] = qtc.libqt_string{
                .len = properties_key.len,
                .data = properties_key.ptr,
            };
            properties_values[properties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const properties_map = qtc.libqt_map{
            .len = properties_count,
            .keys = @ptrCast(properties_keys.ptr),
            .values = @ptrCast(properties_values.ptr),
        };
        return .{ .ptr = qtc.QQmlComponent_CreateObject22(@ptrCast(self.ptr), @ptrCast(_parent.ptr), properties_map) };
    }

    /// ### DEPRECATED: Use `onCreateObject22` instead
    ///
    pub const OnCreateObject22 = onCreateObject22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, parent: QObject, properties: qtc.libqt_map (ArrayMap_constu8_QVariant)) callconv(.c) QObject `
    ///
    pub fn onCreateObject22(self: QQmlComponent, callback: *const fn (QQmlComponent, QObject, qtc.libqt_map) callconv(.c) QObject) void {
        qtc.QQmlComponent_OnCreateObject22(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateObject22` instead
    ///
    pub const SuperCreateObject22 = superCreateObject22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#createObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _parent: QObject `
    ///
    /// ` properties: ArrayMap_constu8_QVariant `
    ///
    pub fn superCreateObject22(self: QQmlComponent, allocator: std.mem.Allocator, _parent: anytype, properties: ArrayMap_constu8_QVariant) QObject {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const properties_count = properties.count();
        const properties_keys = allocator.alloc(qtc.libqt_string, properties_count) catch @panic("QQmlComponent.createObject22: Memory allocation failed");
        defer allocator.free(properties_keys);
        const properties_values = allocator.alloc(QtC.QVariant, properties_count) catch @panic("QQmlComponent.createObject22: Memory allocation failed");
        defer allocator.free(properties_values);
        var properties_i: usize = 0;
        var properties_it = properties.iterator();
        while (properties_it.next()) |it_entry| : (properties_i += 1) {
            const properties_key = it_entry.key_ptr.*;
            properties_keys[properties_i] = qtc.libqt_string{
                .len = properties_key.len,
                .data = properties_key.ptr,
            };
            properties_values[properties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const properties_map = qtc.libqt_map{
            .len = properties_count,
            .keys = @ptrCast(properties_keys.ptr),
            .values = @ptrCast(properties_values.ptr),
        };
        return .{ .ptr = qtc.QQmlComponent_SuperCreateObject22(@ptrCast(self.ptr), @ptrCast(_parent.ptr), properties_map) };
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
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQmlComponent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlComponent.objectName: Memory allocation failed");
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
    /// ` self: QQmlComponent `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQmlComponent, name: []const u8) void {
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
    /// ` self: QQmlComponent `
    ///
    pub fn isWidgetType(self: QQmlComponent) bool {
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
    /// ` self: QQmlComponent `
    ///
    pub fn isWindowType(self: QQmlComponent) bool {
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
    /// ` self: QQmlComponent `
    ///
    pub fn isQuickItemType(self: QQmlComponent) bool {
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
    /// ` self: QQmlComponent `
    ///
    pub fn signalsBlocked(self: QQmlComponent) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQmlComponent, b: bool) bool {
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
    /// ` self: QQmlComponent `
    ///
    pub fn thread(self: QQmlComponent) QThread {
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
    /// ` self: QQmlComponent `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQmlComponent, _thread: anytype) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQmlComponent, interval: i32) i32 {
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
    /// ` self: QQmlComponent `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQmlComponent, time: i64) i32 {
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
    /// ` self: QQmlComponent `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQmlComponent, id: i32) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQmlComponent, id: i32) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQmlComponent, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQmlComponent.children: Memory allocation failed");
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
    /// ` self: QQmlComponent `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQmlComponent, _parent: anytype) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQmlComponent, filterObj: anytype) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQmlComponent, obj: anytype) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQmlComponent, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQmlComponent `
    ///
    pub fn disconnect3(self: QQmlComponent) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQmlComponent, receiver: anytype) bool {
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
    /// ` self: QQmlComponent `
    ///
    pub fn dumpObjectTree(self: QQmlComponent) void {
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
    /// ` self: QQmlComponent `
    ///
    pub fn dumpObjectInfo(self: QQmlComponent) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQmlComponent, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQmlComponent, name: [:0]const u8) QVariant {
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
    /// ` self: QQmlComponent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQmlComponent, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQmlComponent.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlComponent.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQmlComponent `
    ///
    pub fn bindingStorage(self: QQmlComponent) QBindingStorage {
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
    /// ` self: QQmlComponent `
    ///
    pub fn bindingStorage2(self: QQmlComponent) QBindingStorage {
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
    /// ` self: QQmlComponent `
    ///
    pub fn destroyed(self: QQmlComponent) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQmlComponent, callback: *const fn (QQmlComponent) callconv(.c) void) void {
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
    /// ` self: QQmlComponent `
    ///
    pub fn parent(self: QQmlComponent) QObject {
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
    /// ` self: QQmlComponent `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQmlComponent, classname: [:0]const u8) bool {
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
    /// ` self: QQmlComponent `
    ///
    pub fn deleteLater(self: QQmlComponent) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQmlComponent, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQmlComponent `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQmlComponent, time: i64, timerType: i32) i32 {
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
    /// ` self: QQmlComponent `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQmlComponent, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQmlComponent, signal: [:0]const u8) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQmlComponent, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQmlComponent, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQmlComponent, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlComponent `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQmlComponent, param1: anytype) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQmlComponent, callback: *const fn (QQmlComponent, QObject) callconv(.c) void) void {
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQmlComponent, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlComponent_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQmlComponent, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlComponent_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQmlComponent, callback: *const fn (QQmlComponent, QEvent) callconv(.c) bool) void {
        qtc.QQmlComponent_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQmlComponent, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlComponent_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQmlComponent, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlComponent_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQmlComponent, callback: *const fn (QQmlComponent, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQmlComponent_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQmlComponent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQmlComponent_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQmlComponent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQmlComponent_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQmlComponent, callback: *const fn (QQmlComponent, QTimerEvent) callconv(.c) void) void {
        qtc.QQmlComponent_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQmlComponent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQmlComponent_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQmlComponent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQmlComponent_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQmlComponent, callback: *const fn (QQmlComponent, QChildEvent) callconv(.c) void) void {
        qtc.QQmlComponent_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQmlComponent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQmlComponent_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQmlComponent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQmlComponent_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQmlComponent, callback: *const fn (QQmlComponent, QEvent) callconv(.c) void) void {
        qtc.QQmlComponent_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQmlComponent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlComponent_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQmlComponent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlComponent_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQmlComponent, callback: *const fn (QQmlComponent, QMetaMethod) callconv(.c) void) void {
        qtc.QQmlComponent_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQmlComponent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlComponent_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQmlComponent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlComponent_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQmlComponent, callback: *const fn (QQmlComponent, QMetaMethod) callconv(.c) void) void {
        qtc.QQmlComponent_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    pub fn sender(self: QQmlComponent) QObject {
        return .{ .ptr = qtc.QQmlComponent_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQmlComponent `
    ///
    pub fn superSender(self: QQmlComponent) QObject {
        return .{ .ptr = qtc.QQmlComponent_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQmlComponent, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQmlComponent_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    pub fn senderSignalIndex(self: QQmlComponent) i32 {
        return qtc.QQmlComponent_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQmlComponent `
    ///
    pub fn superSenderSignalIndex(self: QQmlComponent) i32 {
        return qtc.QQmlComponent_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQmlComponent, callback: *const fn () callconv(.c) i32) void {
        qtc.QQmlComponent_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQmlComponent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQmlComponent_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQmlComponent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQmlComponent_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQmlComponent, callback: *const fn (QQmlComponent, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQmlComponent_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQmlComponent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQmlComponent_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlComponent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQmlComponent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQmlComponent_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlComponent`
    ///
    /// ` callback: *const fn (self: QQmlComponent, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQmlComponent, callback: *const fn (QQmlComponent, QMetaMethod) callconv(.c) bool) void {
        qtc.QQmlComponent_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlComponent `
    ///
    /// ` callback: *const fn (self: QQmlComponent, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQmlComponent, callback: *const fn (QQmlComponent, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#dtor.QQmlComponent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlComponent `
    ///
    pub fn delete(self: QQmlComponent) void {
        qtc.QQmlComponent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlcomponent.html#public-types)
pub const enums = struct {
    pub const CompilationMode = enum {
        pub const PreferSynchronous: i32 = 0;
        pub const Asynchronous: i32 = 1;
    };

    pub const Status = enum {
        pub const Null: i32 = 0;
        pub const Ready: i32 = 1;
        pub const Loading: i32 = 2;
        pub const Error: i32 = 3;
    };
};
