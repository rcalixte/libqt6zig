const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPlaceContent = @import("libqt6").QPlaceContent;
const QPlaceContentRequest = @import("libqt6").QPlaceContentRequest;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");
const ArrayMap_i32_QPlaceContent = std.array_hash_map.Auto(i32, QPlaceContent);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html)
pub const QPlaceContentReply = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceContentReply,

    pub const _is_QPlaceContentReply = {};
    pub const _is_QPlaceReply = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceContentReply object in C++ memory
    ///
    pub fn new() QPlaceContentReply {
        return .{ .ptr = qtc.QPlaceContentReply_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceContentReply object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPlaceContentReply_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    pub fn metaObject(self: QPlaceContentReply) QMetaObject {
        return .{ .ptr = qtc.QPlaceContentReply_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPlaceContentReply, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlaceContentReply_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn superMetaObject(self: QPlaceContentReply) QMetaObject {
        return .{ .ptr = qtc.QPlaceContentReply_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPlaceContentReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceContentReply_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlaceContentReply_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPlaceContentReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceContentReply_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QPlaceContentReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceContentReply_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlaceContentReply_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QPlaceContentReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceContentReply_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContentReply.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ## Returns:
    ///
    /// ` qplacereply_enums.Type `
    ///
    pub fn type0(self: QPlaceContentReply) i32 {
        return qtc.QPlaceContentReply_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QPlaceContentReply, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceContentReply_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ## Returns:
    ///
    /// ` qplacereply_enums.Type `
    ///
    pub fn superType(self: QPlaceContentReply) i32 {
        return qtc.QPlaceContentReply_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `content` instead
    ///
    pub const Content = content;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#content)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn content(self: QPlaceContentReply, allocator: std.mem.Allocator) ArrayMap_i32_QPlaceContent {
        const _map: qtc.libqt_map = qtc.QPlaceContentReply_Content(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QPlaceContent = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPlaceContentReply.content: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QPlaceContent = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `totalCount` instead
    ///
    pub const TotalCount = totalCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#totalCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    pub fn totalCount(self: QPlaceContentReply) i32 {
        return qtc.QPlaceContentReply_TotalCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    pub fn request(self: QPlaceContentReply) QPlaceContentRequest {
        return .{ .ptr = qtc.QPlaceContentReply_Request(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousPageRequest` instead
    ///
    pub const PreviousPageRequest = previousPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#previousPageRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    pub fn previousPageRequest(self: QPlaceContentReply) QPlaceContentRequest {
        return .{ .ptr = qtc.QPlaceContentReply_PreviousPageRequest(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextPageRequest` instead
    ///
    pub const NextPageRequest = nextPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#nextPageRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    pub fn nextPageRequest(self: QPlaceContentReply) QPlaceContentRequest {
        return .{ .ptr = qtc.QPlaceContentReply_NextPageRequest(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContent` instead
    ///
    pub const SetContent = setContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _content: ArrayMap_i32_QPlaceContent `
    ///
    pub fn setContent(self: QPlaceContentReply, allocator: std.mem.Allocator, _content: ArrayMap_i32_QPlaceContent) void {
        const content_count = _content.count();
        const content_keys = allocator.alloc(i32, content_count) catch @panic("QPlaceContentReply.setContent: Memory allocation failed");
        defer allocator.free(content_keys);
        const content_values = allocator.alloc(QtC.QPlaceContent, content_count) catch @panic("QPlaceContentReply.setContent: Memory allocation failed");
        defer allocator.free(content_values);
        var i: usize = 0;
        var content_it = _content.iterator();
        while (content_it.next()) |it_entry| : (i += 1) {
            const content_key = it_entry.key_ptr.*;
            content_keys[i] = @bitCast(content_key);
            content_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const content_map = qtc.libqt_map{
            .len = content_count,
            .keys = @ptrCast(content_keys.ptr),
            .values = @ptrCast(content_values.ptr),
        };
        qtc.QPlaceContentReply_SetContent(@ptrCast(self.ptr), content_map);
    }

    /// ### DEPRECATED: Use `onSetContent` instead
    ///
    pub const OnSetContent = onSetContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setContent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, content: qtc.libqt_map (ArrayMap_i32_QPlaceContent)) callconv(.c) void `
    ///
    pub fn onSetContent(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, qtc.libqt_map) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetContent` instead
    ///
    pub const SuperSetContent = superSetContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setContent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _content: ArrayMap_i32_QPlaceContent `
    ///
    pub fn superSetContent(self: QPlaceContentReply, allocator: std.mem.Allocator, _content: ArrayMap_i32_QPlaceContent) void {
        const content_count = _content.count();
        const content_keys = allocator.alloc(i32, content_count) catch @panic("QPlaceContentReply.setContent: Memory allocation failed");
        defer allocator.free(content_keys);
        const content_values = allocator.alloc(QtC.QPlaceContent, content_count) catch @panic("QPlaceContentReply.setContent: Memory allocation failed");
        defer allocator.free(content_values);
        var i: usize = 0;
        var content_it = _content.iterator();
        while (content_it.next()) |it_entry| : (i += 1) {
            const content_key = it_entry.key_ptr.*;
            content_keys[i] = @bitCast(content_key);
            content_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const content_map = qtc.libqt_map{
            .len = content_count,
            .keys = @ptrCast(content_keys.ptr),
            .values = @ptrCast(content_values.ptr),
        };
        qtc.QPlaceContentReply_SuperSetContent(@ptrCast(self.ptr), content_map);
    }

    /// ### DEPRECATED: Use `setTotalCount` instead
    ///
    pub const SetTotalCount = setTotalCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setTotalCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` total: i32 `
    ///
    pub fn setTotalCount(self: QPlaceContentReply, total: i32) void {
        qtc.QPlaceContentReply_SetTotalCount(@ptrCast(self.ptr), @bitCast(total));
    }

    /// ### DEPRECATED: Use `onSetTotalCount` instead
    ///
    pub const OnSetTotalCount = onSetTotalCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setTotalCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, total: i32) callconv(.c) void `
    ///
    pub fn onSetTotalCount(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, i32) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetTotalCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTotalCount` instead
    ///
    pub const SuperSetTotalCount = superSetTotalCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setTotalCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` total: i32 `
    ///
    pub fn superSetTotalCount(self: QPlaceContentReply, total: i32) void {
        qtc.QPlaceContentReply_SuperSetTotalCount(@ptrCast(self.ptr), @bitCast(total));
    }

    /// ### DEPRECATED: Use `setRequest` instead
    ///
    pub const SetRequest = setRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` _request: QPlaceContentRequest `
    ///
    pub fn setRequest(self: QPlaceContentReply, _request: anytype) void {
        comptime _ = @TypeOf(_request)._is_QPlaceContentRequest;
        qtc.QPlaceContentReply_SetRequest(@ptrCast(self.ptr), @ptrCast(_request.ptr));
    }

    /// ### DEPRECATED: Use `onSetRequest` instead
    ///
    pub const OnSetRequest = onSetRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, request: QPlaceContentRequest) callconv(.c) void `
    ///
    pub fn onSetRequest(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QPlaceContentRequest) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetRequest` instead
    ///
    pub const SuperSetRequest = superSetRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` _request: QPlaceContentRequest `
    ///
    pub fn superSetRequest(self: QPlaceContentReply, _request: anytype) void {
        comptime _ = @TypeOf(_request)._is_QPlaceContentRequest;
        qtc.QPlaceContentReply_SuperSetRequest(@ptrCast(self.ptr), @ptrCast(_request.ptr));
    }

    /// ### DEPRECATED: Use `setPreviousPageRequest` instead
    ///
    pub const SetPreviousPageRequest = setPreviousPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setPreviousPageRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` previous: QPlaceContentRequest `
    ///
    pub fn setPreviousPageRequest(self: QPlaceContentReply, previous: anytype) void {
        comptime _ = @TypeOf(previous)._is_QPlaceContentRequest;
        qtc.QPlaceContentReply_SetPreviousPageRequest(@ptrCast(self.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onSetPreviousPageRequest` instead
    ///
    pub const OnSetPreviousPageRequest = onSetPreviousPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setPreviousPageRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, previous: QPlaceContentRequest) callconv(.c) void `
    ///
    pub fn onSetPreviousPageRequest(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QPlaceContentRequest) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetPreviousPageRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPreviousPageRequest` instead
    ///
    pub const SuperSetPreviousPageRequest = superSetPreviousPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setPreviousPageRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` previous: QPlaceContentRequest `
    ///
    pub fn superSetPreviousPageRequest(self: QPlaceContentReply, previous: anytype) void {
        comptime _ = @TypeOf(previous)._is_QPlaceContentRequest;
        qtc.QPlaceContentReply_SuperSetPreviousPageRequest(@ptrCast(self.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `setNextPageRequest` instead
    ///
    pub const SetNextPageRequest = setNextPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setNextPageRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` next: QPlaceContentRequest `
    ///
    pub fn setNextPageRequest(self: QPlaceContentReply, next: anytype) void {
        comptime _ = @TypeOf(next)._is_QPlaceContentRequest;
        qtc.QPlaceContentReply_SetNextPageRequest(@ptrCast(self.ptr), @ptrCast(next.ptr));
    }

    /// ### DEPRECATED: Use `onSetNextPageRequest` instead
    ///
    pub const OnSetNextPageRequest = onSetNextPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setNextPageRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, next: QPlaceContentRequest) callconv(.c) void `
    ///
    pub fn onSetNextPageRequest(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QPlaceContentRequest) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetNextPageRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetNextPageRequest` instead
    ///
    pub const SuperSetNextPageRequest = superSetNextPageRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setNextPageRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentReply `
    ///
    /// ` next: QPlaceContentRequest `
    ///
    pub fn superSetNextPageRequest(self: QPlaceContentReply, next: anytype) void {
        comptime _ = @TypeOf(next)._is_QPlaceContentRequest;
        qtc.QPlaceContentReply_SuperSetNextPageRequest(@ptrCast(self.ptr), @ptrCast(next.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContentReply.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContentReply.tr3: Memory allocation failed");
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn isFinished(self: QPlaceContentReply) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QPlaceContentReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceReply_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContentReply.errorString: Memory allocation failed");
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
    /// ` self: QPlaceContentReply `
    ///
    /// ## Returns:
    ///
    /// ` qplacereply_enums.Error `
    ///
    pub fn error0(self: QPlaceContentReply) i32 {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn finished(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn contentUpdated(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply) callconv(.c) void `
    ///
    pub fn onContentUpdated(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn aborted(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply) callconv(.c) void `
    ///
    pub fn onAborted(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    pub fn errorOccurred(self: QPlaceContentReply, errorVal: i32) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, i32) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn errorOccurred2(self: QPlaceContentReply, errorVal: i32, _errorString: []const u8) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred2(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, i32, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPlaceContentReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContentReply.objectName: Memory allocation failed");
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPlaceContentReply, name: []const u8) void {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn isWidgetType(self: QPlaceContentReply) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn isWindowType(self: QPlaceContentReply) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn isQuickItemType(self: QPlaceContentReply) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn signalsBlocked(self: QPlaceContentReply) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPlaceContentReply, b: bool) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn thread(self: QPlaceContentReply) QThread {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPlaceContentReply, _thread: anytype) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPlaceContentReply, interval: i32) i32 {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPlaceContentReply, time: i64) i32 {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPlaceContentReply, id: i32) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPlaceContentReply, id: i32) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPlaceContentReply, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPlaceContentReply.children: Memory allocation failed");
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPlaceContentReply, _parent: anytype) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPlaceContentReply, filterObj: anytype) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPlaceContentReply, obj: anytype) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPlaceContentReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn disconnect3(self: QPlaceContentReply) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPlaceContentReply, receiver: anytype) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn dumpObjectTree(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn dumpObjectInfo(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPlaceContentReply, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPlaceContentReply, name: [:0]const u8) QVariant {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPlaceContentReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPlaceContentReply.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceContentReply.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn bindingStorage(self: QPlaceContentReply) QBindingStorage {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn bindingStorage2(self: QPlaceContentReply) QBindingStorage {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn destroyed(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn parent(self: QPlaceContentReply) QObject {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPlaceContentReply, classname: [:0]const u8) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn deleteLater(self: QPlaceContentReply) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPlaceContentReply, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPlaceContentReply, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPlaceContentReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPlaceContentReply, signal: [:0]const u8) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPlaceContentReply, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPlaceContentReply, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPlaceContentReply, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPlaceContentReply, param1: anytype) void {
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QObject) callconv(.c) void) void {
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn abort(self: QPlaceContentReply) void {
        qtc.QPlaceContentReply_Abort(@ptrCast(self.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn superAbort(self: QPlaceContentReply) void {
        qtc.QPlaceContentReply_SuperAbort(@ptrCast(self.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAbort(self: QPlaceContentReply, callback: *const fn () callconv(.c) void) void {
        qtc.QPlaceContentReply_OnAbort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPlaceContentReply, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceContentReply_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPlaceContentReply, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceContentReply_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QEvent) callconv(.c) bool) void {
        qtc.QPlaceContentReply_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPlaceContentReply, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceContentReply_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPlaceContentReply, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceContentReply_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlaceContentReply_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPlaceContentReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlaceContentReply_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPlaceContentReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlaceContentReply_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QTimerEvent) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPlaceContentReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlaceContentReply_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPlaceContentReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlaceContentReply_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QChildEvent) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPlaceContentReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlaceContentReply_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPlaceContentReply, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlaceContentReply_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QEvent) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPlaceContentReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceContentReply_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPlaceContentReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceContentReply_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPlaceContentReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceContentReply_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPlaceContentReply, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceContentReply_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _finished: bool `
    ///
    pub fn setFinished(self: QPlaceContentReply, _finished: bool) void {
        qtc.QPlaceContentReply_SetFinished(@ptrCast(self.ptr), _finished);
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` _finished: bool `
    ///
    pub fn superSetFinished(self: QPlaceContentReply, _finished: bool) void {
        qtc.QPlaceContentReply_SuperSetFinished(@ptrCast(self.ptr), _finished);
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, finished: bool) callconv(.c) void `
    ///
    pub fn onSetFinished(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, bool) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setError(self: QPlaceContentReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QPlaceContentReply_SetError(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetError(self: QPlaceContentReply, errorVal: i32, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QPlaceContentReply_SuperSetError(@ptrCast(self.ptr), @bitCast(errorVal), errorString_str);
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetError(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceContentReply_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn sender(self: QPlaceContentReply) QObject {
        return .{ .ptr = qtc.QPlaceContentReply_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn superSender(self: QPlaceContentReply) QObject {
        return .{ .ptr = qtc.QPlaceContentReply_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPlaceContentReply, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlaceContentReply_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn senderSignalIndex(self: QPlaceContentReply) i32 {
        return qtc.QPlaceContentReply_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    pub fn superSenderSignalIndex(self: QPlaceContentReply) i32 {
        return qtc.QPlaceContentReply_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPlaceContentReply, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceContentReply_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPlaceContentReply, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceContentReply_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPlaceContentReply, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceContentReply_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlaceContentReply_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPlaceContentReply, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceContentReply_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPlaceContentReply, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceContentReply_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceContentReply`
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlaceContentReply_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceContentReply `
    ///
    /// ` callback: *const fn (self: QPlaceContentReply, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPlaceContentReply, callback: *const fn (QPlaceContentReply, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#dtor.QPlaceContentReply)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceContentReply `
    ///
    pub fn delete(self: QPlaceContentReply) void {
        qtc.QPlaceContentReply_Delete(@ptrCast(self.ptr));
    }
};
