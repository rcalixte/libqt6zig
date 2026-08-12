const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html)
pub const QPlaceSearchSuggestionReply = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceSearchSuggestionReply,

    pub const _is_QPlaceSearchSuggestionReply = {};
    pub const _is_QPlaceReply = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceSearchSuggestionReply object in C++ memory
    ///
    pub fn new() QPlaceSearchSuggestionReply {
        return .{ .ptr = qtc.QPlaceSearchSuggestionReply_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceSearchSuggestionReply object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPlaceSearchSuggestionReply_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn metaObject(self: QPlaceSearchSuggestionReply) QMetaObject {
        return .{ .ptr = qtc.QPlaceSearchSuggestionReply_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPlaceSearchSuggestionReply, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlaceSearchSuggestionReply_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn superMetaObject(self: QPlaceSearchSuggestionReply) QMetaObject {
        return .{ .ptr = qtc.QPlaceSearchSuggestionReply_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPlaceSearchSuggestionReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceSearchSuggestionReply_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlaceSearchSuggestionReply_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPlaceSearchSuggestionReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceSearchSuggestionReply_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QPlaceSearchSuggestionReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceSearchSuggestionReply_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlaceSearchSuggestionReply_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QPlaceSearchSuggestionReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceSearchSuggestionReply_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchSuggestionReply.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `suggestions` instead
    ///
    pub const Suggestions = suggestions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#suggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suggestions(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlaceSearchSuggestionReply_Suggestions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlaceSearchSuggestionReply.suggestions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceSearchSuggestionReply.suggestions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ## Returns:
    ///
    /// ` qplacereply_enums.Type `
    ///
    pub fn type0(self: QPlaceSearchSuggestionReply) i32 {
        return qtc.QPlaceSearchSuggestionReply_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QPlaceSearchSuggestionReply, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceSearchSuggestionReply_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ## Returns:
    ///
    /// ` qplacereply_enums.Type `
    ///
    pub fn superType(self: QPlaceSearchSuggestionReply) i32 {
        return qtc.QPlaceSearchSuggestionReply_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSuggestions` instead
    ///
    pub const SetSuggestions = setSuggestions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#setSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _suggestions: []const []const u8 `
    ///
    pub fn setSuggestions(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator, _suggestions: []const []const u8) void {
        const suggestions_arr = allocator.alloc(qtc.libqt_string, _suggestions.len) catch @panic("QPlaceSearchSuggestionReply.setSuggestions: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (_suggestions, 0.._suggestions.len) |str_item, i|
            suggestions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = _suggestions.len,
            .data = suggestions_arr.ptr,
        };
        qtc.QPlaceSearchSuggestionReply_SetSuggestions(@ptrCast(self.ptr), suggestions_list);
    }

    /// ### DEPRECATED: Use `onSetSuggestions` instead
    ///
    pub const OnSetSuggestions = onSetSuggestions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#setSuggestions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, suggestions: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetSuggestions(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnSetSuggestions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSuggestions` instead
    ///
    pub const SuperSetSuggestions = superSetSuggestions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#setSuggestions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _suggestions: []const []const u8 `
    ///
    pub fn superSetSuggestions(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator, _suggestions: []const []const u8) void {
        const suggestions_arr = allocator.alloc(qtc.libqt_string, _suggestions.len) catch @panic("QPlaceSearchSuggestionReply.setSuggestions: Memory allocation failed");
        defer allocator.free(suggestions_arr);
        for (_suggestions, 0.._suggestions.len) |str_item, i|
            suggestions_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const suggestions_list = qtc.libqt_list{
            .len = _suggestions.len,
            .data = suggestions_arr.ptr,
        };
        qtc.QPlaceSearchSuggestionReply_SuperSetSuggestions(@ptrCast(self.ptr), suggestions_list);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchSuggestionReply.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchSuggestionReply.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn isFinished(self: QPlaceSearchSuggestionReply) bool {
        return qtc.QPlaceReply_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceReply_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchSuggestionReply.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ## Returns:
    ///
    /// ` qplacereply_enums.Error `
    ///
    pub fn error0(self: QPlaceSearchSuggestionReply) i32 {
        return qtc.QPlaceReply_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn finished(self: QPlaceSearchSuggestionReply) void {
        qtc.QPlaceReply_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply) callconv(.c) void) void {
        qtc.QPlaceReply_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentUpdated` instead
    ///
    pub const ContentUpdated = contentUpdated;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn contentUpdated(self: QPlaceSearchSuggestionReply) void {
        qtc.QPlaceReply_ContentUpdated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContentUpdated` instead
    ///
    pub const OnContentUpdated = onContentUpdated;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply) callconv(.c) void `
    ///
    pub fn onContentUpdated(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply) callconv(.c) void) void {
        qtc.QPlaceReply_Connect_ContentUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aborted` instead
    ///
    pub const Aborted = aborted;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn aborted(self: QPlaceSearchSuggestionReply) void {
        qtc.QPlaceReply_Aborted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAborted` instead
    ///
    pub const OnAborted = onAborted;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply) callconv(.c) void `
    ///
    pub fn onAborted(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply) callconv(.c) void) void {
        qtc.QPlaceReply_Connect_Aborted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    pub fn errorOccurred(self: QPlaceSearchSuggestionReply, errorVal: i32) void {
        qtc.QPlaceReply_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, i32) callconv(.c) void) void {
        qtc.QPlaceReply_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred2` instead
    ///
    pub const ErrorOccurred2 = errorOccurred2;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred2(self: QPlaceSearchSuggestionReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QPlaceReply_ErrorOccurred2(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred2` instead
    ///
    pub const OnErrorOccurred2 = onErrorOccurred2;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred2(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceReply_Connect_ErrorOccurred2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceSearchSuggestionReply.objectName: Memory allocation failed");
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPlaceSearchSuggestionReply, name: []const u8) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn isWidgetType(self: QPlaceSearchSuggestionReply) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn isWindowType(self: QPlaceSearchSuggestionReply) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn isQuickItemType(self: QPlaceSearchSuggestionReply) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn signalsBlocked(self: QPlaceSearchSuggestionReply) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPlaceSearchSuggestionReply, b: bool) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn thread(self: QPlaceSearchSuggestionReply) QThread {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPlaceSearchSuggestionReply, _thread: anytype) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPlaceSearchSuggestionReply, interval: i32) i32 {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPlaceSearchSuggestionReply, time: i64) i32 {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPlaceSearchSuggestionReply, id: i32) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPlaceSearchSuggestionReply, id: i32) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPlaceSearchSuggestionReply.children: Memory allocation failed");
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPlaceSearchSuggestionReply, _parent: anytype) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPlaceSearchSuggestionReply, filterObj: anytype) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPlaceSearchSuggestionReply, obj: anytype) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPlaceSearchSuggestionReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn disconnect3(self: QPlaceSearchSuggestionReply) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPlaceSearchSuggestionReply, receiver: anytype) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn dumpObjectTree(self: QPlaceSearchSuggestionReply) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn dumpObjectInfo(self: QPlaceSearchSuggestionReply) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPlaceSearchSuggestionReply, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPlaceSearchSuggestionReply, name: [:0]const u8) QVariant {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPlaceSearchSuggestionReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPlaceSearchSuggestionReply.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceSearchSuggestionReply.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn bindingStorage(self: QPlaceSearchSuggestionReply) QBindingStorage {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn bindingStorage2(self: QPlaceSearchSuggestionReply) QBindingStorage {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn destroyed(self: QPlaceSearchSuggestionReply) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply) callconv(.c) void) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn parent(self: QPlaceSearchSuggestionReply) QObject {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPlaceSearchSuggestionReply, classname: [:0]const u8) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn deleteLater(self: QPlaceSearchSuggestionReply) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPlaceSearchSuggestionReply, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPlaceSearchSuggestionReply, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPlaceSearchSuggestionReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPlaceSearchSuggestionReply, signal: [:0]const u8) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPlaceSearchSuggestionReply, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPlaceSearchSuggestionReply, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPlaceSearchSuggestionReply, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPlaceSearchSuggestionReply, param1: anytype) void {
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn abort(self: QPlaceSearchSuggestionReply) void {
        qtc.QPlaceSearchSuggestionReply_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAbort` instead
    ///
    pub const SuperAbort = superAbort;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn superAbort(self: QPlaceSearchSuggestionReply) void {
        qtc.QPlaceSearchSuggestionReply_SuperAbort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAbort` instead
    ///
    pub const OnAbort = onAbort;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAbort(self: QPlaceSearchSuggestionReply, callback: *const fn () callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnAbort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPlaceSearchSuggestionReply, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceSearchSuggestionReply_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPlaceSearchSuggestionReply, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceSearchSuggestionReply_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QEvent) callconv(.c) bool) void {
        qtc.QPlaceSearchSuggestionReply_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPlaceSearchSuggestionReply, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceSearchSuggestionReply_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPlaceSearchSuggestionReply, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceSearchSuggestionReply_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlaceSearchSuggestionReply_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPlaceSearchSuggestionReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlaceSearchSuggestionReply_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPlaceSearchSuggestionReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlaceSearchSuggestionReply_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QTimerEvent) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPlaceSearchSuggestionReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlaceSearchSuggestionReply_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPlaceSearchSuggestionReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlaceSearchSuggestionReply_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QChildEvent) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPlaceSearchSuggestionReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlaceSearchSuggestionReply_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPlaceSearchSuggestionReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlaceSearchSuggestionReply_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QEvent) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPlaceSearchSuggestionReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceSearchSuggestionReply_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPlaceSearchSuggestionReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceSearchSuggestionReply_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPlaceSearchSuggestionReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceSearchSuggestionReply_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPlaceSearchSuggestionReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceSearchSuggestionReply_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFinished` instead
    ///
    pub const SetFinished = setFinished;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _finished: bool `
    ///
    pub fn setFinished(self: QPlaceSearchSuggestionReply, _finished: bool) void {
        qtc.QPlaceSearchSuggestionReply_SetFinished(@ptrCast(self.ptr), _finished);
    }

    /// ### DEPRECATED: Use `superSetFinished` instead
    ///
    pub const SuperSetFinished = superSetFinished;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` _finished: bool `
    ///
    pub fn superSetFinished(self: QPlaceSearchSuggestionReply, _finished: bool) void {
        qtc.QPlaceSearchSuggestionReply_SuperSetFinished(@ptrCast(self.ptr), _finished);
    }

    /// ### DEPRECATED: Use `onSetFinished` instead
    ///
    pub const OnSetFinished = onSetFinished;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, finished: bool) callconv(.c) void `
    ///
    pub fn onSetFinished(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, bool) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnSetFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setError(self: QPlaceSearchSuggestionReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QPlaceSearchSuggestionReply_SetError(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetError(self: QPlaceSearchSuggestionReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QPlaceSearchSuggestionReply_SuperSetError(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

    /// Inherited from QPlaceReply
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetError(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceSearchSuggestionReply_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn sender(self: QPlaceSearchSuggestionReply) QObject {
        return .{ .ptr = qtc.QPlaceSearchSuggestionReply_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn superSender(self: QPlaceSearchSuggestionReply) QObject {
        return .{ .ptr = qtc.QPlaceSearchSuggestionReply_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPlaceSearchSuggestionReply, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlaceSearchSuggestionReply_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn senderSignalIndex(self: QPlaceSearchSuggestionReply) i32 {
        return qtc.QPlaceSearchSuggestionReply_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn superSenderSignalIndex(self: QPlaceSearchSuggestionReply) i32 {
        return qtc.QPlaceSearchSuggestionReply_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPlaceSearchSuggestionReply, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceSearchSuggestionReply_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPlaceSearchSuggestionReply, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceSearchSuggestionReply_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPlaceSearchSuggestionReply, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceSearchSuggestionReply_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlaceSearchSuggestionReply_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPlaceSearchSuggestionReply, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceSearchSuggestionReply_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPlaceSearchSuggestionReply, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceSearchSuggestionReply_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceSearchSuggestionReply`
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlaceSearchSuggestionReply_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    /// ` callback: *const fn (self: QPlaceSearchSuggestionReply, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPlaceSearchSuggestionReply, callback: *const fn (QPlaceSearchSuggestionReply, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#dtor.QPlaceSearchSuggestionReply)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceSearchSuggestionReply `
    ///
    pub fn delete(self: QPlaceSearchSuggestionReply) void {
        qtc.QPlaceSearchSuggestionReply_Delete(@ptrCast(self.ptr));
    }
};
