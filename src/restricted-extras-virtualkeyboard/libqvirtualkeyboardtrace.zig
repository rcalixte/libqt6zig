const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html)
pub const QVirtualKeyboardTrace = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVirtualKeyboardTrace,

    pub const _is_QVirtualKeyboardTrace = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVirtualKeyboardTrace object in C++ memory
    ///
    pub fn new() QVirtualKeyboardTrace {
        return .{ .ptr = qtc.QVirtualKeyboardTrace_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVirtualKeyboardTrace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVirtualKeyboardTrace {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVirtualKeyboardTrace_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn metaObject(self: QVirtualKeyboardTrace) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardTrace_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVirtualKeyboardTrace, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVirtualKeyboardTrace_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn superMetaObject(self: QVirtualKeyboardTrace) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardTrace_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVirtualKeyboardTrace, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardTrace_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVirtualKeyboardTrace_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVirtualKeyboardTrace, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardTrace_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVirtualKeyboardTrace, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardTrace_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVirtualKeyboardTrace_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QVirtualKeyboardTrace, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardTrace_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QVirtualKeyboardTrace_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardTrace.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `traceId` instead
    ///
    pub const TraceId = traceId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#traceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn traceId(self: QVirtualKeyboardTrace) i32 {
        return qtc.QVirtualKeyboardTrace_TraceId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTraceId` instead
    ///
    pub const SetTraceId = setTraceId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setTraceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` id: i32 `
    ///
    pub fn setTraceId(self: QVirtualKeyboardTrace, id: i32) void {
        qtc.QVirtualKeyboardTrace_SetTraceId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `channels` instead
    ///
    pub const Channels = channels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn channels(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_Channels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QVirtualKeyboardTrace.channels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardTrace.channels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setChannels` instead
    ///
    pub const SetChannels = setChannels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setChannels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _channels: []const []const u8 `
    ///
    pub fn setChannels(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator, _channels: []const []const u8) void {
        const channels_arr = allocator.alloc(qtc.libqt_string, _channels.len) catch @panic("QVirtualKeyboardTrace.setChannels: Memory allocation failed");
        defer allocator.free(channels_arr);
        for (_channels, 0.._channels.len) |str_item, i|
            channels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const channels_list = qtc.libqt_list{
            .len = _channels.len,
            .data = channels_arr.ptr,
        };
        qtc.QVirtualKeyboardTrace_SetChannels(@ptrCast(self.ptr), channels_list);
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn length(self: QVirtualKeyboardTrace) i32 {
        return qtc.QVirtualKeyboardTrace_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn points(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVirtualKeyboardTrace.points: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addPoint` instead
    ///
    pub const AddPoint = addPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` point: QPointF `
    ///
    pub fn addPoint(self: QVirtualKeyboardTrace, point: anytype) i32 {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QVirtualKeyboardTrace_AddPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setChannelData` instead
    ///
    pub const SetChannelData = setChannelData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setChannelData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` channel: []const u8 `
    ///
    /// ` index: i32 `
    ///
    /// ` data: QVariant `
    ///
    pub fn setChannelData(self: QVirtualKeyboardTrace, channel: []const u8, index: i32, data: anytype) void {
        const channel_str = qtc.libqt_string{
            .len = channel.len,
            .data = channel.ptr,
        };
        comptime _ = @TypeOf(data)._is_QVariant;
        qtc.QVirtualKeyboardTrace_SetChannelData(@ptrCast(self.ptr), channel_str, @bitCast(index), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `channelData` instead
    ///
    pub const ChannelData = channelData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` channel: []const u8 `
    ///
    pub fn channelData(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator, channel: []const u8) []QVariant {
        const channel_str = qtc.libqt_string{
            .len = channel.len,
            .data = channel.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_ChannelData(@ptrCast(self.ptr), channel_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVirtualKeyboardTrace.channelData: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isFinal` instead
    ///
    pub const IsFinal = isFinal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#isFinal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn isFinal(self: QVirtualKeyboardTrace) bool {
        return qtc.QVirtualKeyboardTrace_IsFinal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFinal` instead
    ///
    pub const SetFinal = setFinal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setFinal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` final: bool `
    ///
    pub fn setFinal(self: QVirtualKeyboardTrace, final: bool) void {
        qtc.QVirtualKeyboardTrace_SetFinal(@ptrCast(self.ptr), final);
    }

    /// ### DEPRECATED: Use `isCanceled` instead
    ///
    pub const IsCanceled = isCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn isCanceled(self: QVirtualKeyboardTrace) bool {
        return qtc.QVirtualKeyboardTrace_IsCanceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCanceled` instead
    ///
    pub const SetCanceled = setCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` canceled: bool `
    ///
    pub fn setCanceled(self: QVirtualKeyboardTrace, canceled: bool) void {
        qtc.QVirtualKeyboardTrace_SetCanceled(@ptrCast(self.ptr), canceled);
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn opacity(self: QVirtualKeyboardTrace) f64 {
        return qtc.QVirtualKeyboardTrace_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QVirtualKeyboardTrace, _opacity: f64) void {
        qtc.QVirtualKeyboardTrace_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `startHideTimer` instead
    ///
    pub const StartHideTimer = startHideTimer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#startHideTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` delayMs: i32 `
    ///
    pub fn startHideTimer(self: QVirtualKeyboardTrace, delayMs: i32) void {
        qtc.QVirtualKeyboardTrace_StartHideTimer(@ptrCast(self.ptr), @bitCast(delayMs));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#timerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVirtualKeyboardTrace, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVirtualKeyboardTrace_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QTimerEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVirtualKeyboardTrace, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVirtualKeyboardTrace_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `traceIdChanged` instead
    ///
    pub const TraceIdChanged = traceIdChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#traceIdChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _traceId: i32 `
    ///
    pub fn traceIdChanged(self: QVirtualKeyboardTrace, _traceId: i32) void {
        qtc.QVirtualKeyboardTrace_TraceIdChanged(@ptrCast(self.ptr), @bitCast(_traceId));
    }

    /// ### DEPRECATED: Use `onTraceIdChanged` instead
    ///
    pub const OnTraceIdChanged = onTraceIdChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#traceIdChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, traceId: i32) callconv(.c) void `
    ///
    pub fn onTraceIdChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_Connect_TraceIdChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelsChanged` instead
    ///
    pub const ChannelsChanged = channelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn channelsChanged(self: QVirtualKeyboardTrace) void {
        qtc.QVirtualKeyboardTrace_ChannelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChannelsChanged` instead
    ///
    pub const OnChannelsChanged = onChannelsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace) callconv(.c) void `
    ///
    pub fn onChannelsChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_Connect_ChannelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lengthChanged` instead
    ///
    pub const LengthChanged = lengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#lengthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _length: i32 `
    ///
    pub fn lengthChanged(self: QVirtualKeyboardTrace, _length: i32) void {
        qtc.QVirtualKeyboardTrace_LengthChanged(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `onLengthChanged` instead
    ///
    pub const OnLengthChanged = onLengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#lengthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, length: i32) callconv(.c) void `
    ///
    pub fn onLengthChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, i32) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_Connect_LengthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finalChanged` instead
    ///
    pub const FinalChanged = finalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#finalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _isFinal: bool `
    ///
    pub fn finalChanged(self: QVirtualKeyboardTrace, _isFinal: bool) void {
        qtc.QVirtualKeyboardTrace_FinalChanged(@ptrCast(self.ptr), _isFinal);
    }

    /// ### DEPRECATED: Use `onFinalChanged` instead
    ///
    pub const OnFinalChanged = onFinalChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#finalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, isFinal: bool) callconv(.c) void `
    ///
    pub fn onFinalChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, bool) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_Connect_FinalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceledChanged` instead
    ///
    pub const CanceledChanged = canceledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#canceledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _isCanceled: bool `
    ///
    pub fn canceledChanged(self: QVirtualKeyboardTrace, _isCanceled: bool) void {
        qtc.QVirtualKeyboardTrace_CanceledChanged(@ptrCast(self.ptr), _isCanceled);
    }

    /// ### DEPRECATED: Use `onCanceledChanged` instead
    ///
    pub const OnCanceledChanged = onCanceledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#canceledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, isCanceled: bool) callconv(.c) void `
    ///
    pub fn onCanceledChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, bool) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_Connect_CanceledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn opacityChanged(self: QVirtualKeyboardTrace, _opacity: f64) void {
        qtc.QVirtualKeyboardTrace_OpacityChanged(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, opacity: f64) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, f64) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QVirtualKeyboardTrace_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardTrace.tr2: Memory allocation failed");
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
        var _str = qtc.QVirtualKeyboardTrace_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardTrace.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `points1` instead
    ///
    pub const Points1 = points1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: i32 `
    ///
    pub fn points1(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator, pos: i32) []QVariant {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_Points1(@ptrCast(self.ptr), @bitCast(pos));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVirtualKeyboardTrace.points1: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `points2` instead
    ///
    pub const Points2 = points2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn points2(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator, pos: i32, count: i32) []QVariant {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_Points2(@ptrCast(self.ptr), @bitCast(pos), @bitCast(count));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVirtualKeyboardTrace.points2: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `channelData2` instead
    ///
    pub const ChannelData2 = channelData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` channel: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    pub fn channelData2(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator, channel: []const u8, pos: i32) []QVariant {
        const channel_str = qtc.libqt_string{
            .len = channel.len,
            .data = channel.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_ChannelData2(@ptrCast(self.ptr), channel_str, @bitCast(pos));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVirtualKeyboardTrace.channelData2: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `channelData3` instead
    ///
    pub const ChannelData3 = channelData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` channel: []const u8 `
    ///
    /// ` pos: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn channelData3(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator, channel: []const u8, pos: i32, count: i32) []QVariant {
        const channel_str = qtc.libqt_string{
            .len = channel.len,
            .data = channel.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardTrace_ChannelData3(@ptrCast(self.ptr), channel_str, @bitCast(pos), @bitCast(count));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QVirtualKeyboardTrace.channelData3: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardTrace.objectName: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVirtualKeyboardTrace, name: []const u8) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn isWidgetType(self: QVirtualKeyboardTrace) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn isWindowType(self: QVirtualKeyboardTrace) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn isQuickItemType(self: QVirtualKeyboardTrace) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn signalsBlocked(self: QVirtualKeyboardTrace) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVirtualKeyboardTrace, b: bool) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn thread(self: QVirtualKeyboardTrace) QThread {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVirtualKeyboardTrace, _thread: anytype) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVirtualKeyboardTrace, interval: i32) i32 {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVirtualKeyboardTrace, time: i64) i32 {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVirtualKeyboardTrace, id: i32) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVirtualKeyboardTrace, id: i32) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVirtualKeyboardTrace.children: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVirtualKeyboardTrace, _parent: anytype) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVirtualKeyboardTrace, filterObj: anytype) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVirtualKeyboardTrace, obj: anytype) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVirtualKeyboardTrace, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn disconnect3(self: QVirtualKeyboardTrace) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVirtualKeyboardTrace, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn dumpObjectTree(self: QVirtualKeyboardTrace) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn dumpObjectInfo(self: QVirtualKeyboardTrace) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVirtualKeyboardTrace, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVirtualKeyboardTrace, name: [:0]const u8) QVariant {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVirtualKeyboardTrace, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVirtualKeyboardTrace.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardTrace.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn bindingStorage(self: QVirtualKeyboardTrace) QBindingStorage {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn bindingStorage2(self: QVirtualKeyboardTrace) QBindingStorage {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn destroyed(self: QVirtualKeyboardTrace) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn parent(self: QVirtualKeyboardTrace) QObject {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVirtualKeyboardTrace, classname: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn deleteLater(self: QVirtualKeyboardTrace) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVirtualKeyboardTrace, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVirtualKeyboardTrace, time: i64, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVirtualKeyboardTrace, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVirtualKeyboardTrace, signal: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVirtualKeyboardTrace, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVirtualKeyboardTrace, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVirtualKeyboardTrace, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVirtualKeyboardTrace, param1: anytype) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QObject) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVirtualKeyboardTrace, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardTrace_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVirtualKeyboardTrace, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardTrace_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QEvent) callconv(.c) bool) void {
        qtc.QVirtualKeyboardTrace_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVirtualKeyboardTrace, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardTrace_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVirtualKeyboardTrace, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVirtualKeyboardTrace_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVirtualKeyboardTrace_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVirtualKeyboardTrace, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVirtualKeyboardTrace_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVirtualKeyboardTrace, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVirtualKeyboardTrace_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QChildEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVirtualKeyboardTrace, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVirtualKeyboardTrace_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVirtualKeyboardTrace, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVirtualKeyboardTrace_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QEvent) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVirtualKeyboardTrace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardTrace_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVirtualKeyboardTrace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardTrace_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QMetaMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVirtualKeyboardTrace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardTrace_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVirtualKeyboardTrace, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVirtualKeyboardTrace_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QMetaMethod) callconv(.c) void) void {
        qtc.QVirtualKeyboardTrace_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn sender(self: QVirtualKeyboardTrace) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardTrace_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn superSender(self: QVirtualKeyboardTrace) QObject {
        return .{ .ptr = qtc.QVirtualKeyboardTrace_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVirtualKeyboardTrace, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVirtualKeyboardTrace_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn senderSignalIndex(self: QVirtualKeyboardTrace) i32 {
        return qtc.QVirtualKeyboardTrace_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn superSenderSignalIndex(self: QVirtualKeyboardTrace) i32 {
        return qtc.QVirtualKeyboardTrace_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVirtualKeyboardTrace, callback: *const fn () callconv(.c) i32) void {
        qtc.QVirtualKeyboardTrace_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVirtualKeyboardTrace, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVirtualKeyboardTrace_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVirtualKeyboardTrace, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVirtualKeyboardTrace_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVirtualKeyboardTrace_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVirtualKeyboardTrace, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVirtualKeyboardTrace_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVirtualKeyboardTrace, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVirtualKeyboardTrace_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVirtualKeyboardTrace`
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, QMetaMethod) callconv(.c) bool) void {
        qtc.QVirtualKeyboardTrace_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardTrace `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardTrace, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVirtualKeyboardTrace, callback: *const fn (QVirtualKeyboardTrace, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#dtor.QVirtualKeyboardTrace)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVirtualKeyboardTrace `
    ///
    pub fn delete(self: QVirtualKeyboardTrace) void {
        qtc.QVirtualKeyboardTrace_Delete(@ptrCast(self.ptr));
    }
};
