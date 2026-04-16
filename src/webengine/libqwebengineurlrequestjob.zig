const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebengineurlrequestjob_enums = enums;
const std = @import("std");
const ArrayMap_u8_Sliceu8 = std.array_hash_map.String([][]u8);
const ArrayMap_u8_u8 = std.array_hash_map.String([]u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html)
pub const QWebEngineUrlRequestJob = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineUrlRequestJob,

    pub const _is_QWebEngineUrlRequestJob = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn MetaObject(self: QWebEngineUrlRequestJob) QMetaObject {
        return .{ .ptr = qtc.QWebEngineUrlRequestJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebEngineUrlRequestJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineUrlRequestJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebEngineUrlRequestJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineUrlRequestJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineurlrequestjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn RequestUrl(self: QWebEngineUrlRequestJob) QUrl {
        return .{ .ptr = qtc.QWebEngineUrlRequestJob_RequestUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RequestMethod(self: QWebEngineUrlRequestJob, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineUrlRequestJob_RequestMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebengineurlrequestjob.RequestMethod: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#initiator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn Initiator(self: QWebEngineUrlRequestJob) QUrl {
        return .{ .ptr = qtc.QWebEngineUrlRequestJob_Initiator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RequestHeaders(self: QWebEngineUrlRequestJob, allocator: std.mem.Allocator) ArrayMap_u8_u8 {
        const _map: qtc.libqt_map = qtc.QWebEngineUrlRequestJob_RequestHeaders(@ptrCast(self.ptr));
        var _ret: ArrayMap_u8_u8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qwebengineurlrequestjob.RequestHeaders: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qwebengineurlrequestjob.RequestHeaders: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("qwebengineurlrequestjob.RequestHeaders: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn RequestBody(self: QWebEngineUrlRequestJob) QIODevice {
        return .{ .ptr = qtc.QWebEngineUrlRequestJob_RequestBody(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#reply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` contentType: []u8 `
    ///
    /// ` device: QIODevice `
    ///
    pub fn Reply(self: QWebEngineUrlRequestJob, contentType: []u8, device: anytype) void {
        const contentType_str = qtc.libqt_string{
            .len = contentType.len,
            .data = contentType.ptr,
        };
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QWebEngineUrlRequestJob_Reply(@ptrCast(self.ptr), contentType_str, @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#fail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` errorVal: qwebengineurlrequestjob_enums.Error `
    ///
    pub fn Fail(self: QWebEngineUrlRequestJob, errorVal: i32) void {
        qtc.QWebEngineUrlRequestJob_Fail(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#redirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` url: QUrl `
    ///
    pub fn Redirect(self: QWebEngineUrlRequestJob, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineUrlRequestJob_Redirect(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#setAdditionalResponseHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` additionalResponseHeaders: ArrayMap_u8_Sliceu8 `
    ///
    pub fn SetAdditionalResponseHeaders(self: QWebEngineUrlRequestJob, allocator: std.mem.Allocator, additionalResponseHeaders: ArrayMap_u8_Sliceu8) void {
        const additionalResponseHeaders_count = additionalResponseHeaders.count();
        const additionalResponseHeaders_keys = allocator.alloc(qtc.libqt_string, additionalResponseHeaders_count) catch @panic("qwebengineurlrequestjob.SetAdditionalResponseHeaders: Memory allocation failed");
        defer allocator.free(additionalResponseHeaders_keys);
        const additionalResponseHeaders_values = allocator.alloc(qtc.libqt_list, additionalResponseHeaders_count) catch @panic("qwebengineurlrequestjob.SetAdditionalResponseHeaders: Memory allocation failed");
        defer allocator.free(additionalResponseHeaders_values);
        const additionalResponseHeaders_inners = allocator.alloc([]qtc.libqt_string, additionalResponseHeaders_count) catch @panic("qwebengineurlrequestjob.SetAdditionalResponseHeaders: Memory allocation failed");
        defer {
            for (additionalResponseHeaders_inners) |additionalResponseHeaders_inner|
                allocator.free(additionalResponseHeaders_inner);
            allocator.free(additionalResponseHeaders_inners);
        }
        var i: usize = 0;
        var additionalResponseHeaders_it = additionalResponseHeaders.iterator();
        while (additionalResponseHeaders_it.next()) |it_entry| : (i += 1) {
            const additionalResponseHeaders_key = it_entry.key_ptr.*;
            additionalResponseHeaders_keys[i] = qtc.libqt_string{
                .len = additionalResponseHeaders_key.len,
                .data = additionalResponseHeaders_key.ptr,
            };
            additionalResponseHeaders_values[i].len = it_entry.value_ptr.*.len;
            const additionalResponseHeaders_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("qwebengineurlrequestjob.SetAdditionalResponseHeaders: Memory allocation failed");
            additionalResponseHeaders_inners[i] = additionalResponseHeaders_val;
            for (it_entry.value_ptr.*, 0..) |value, j|
                additionalResponseHeaders_val[j] = qtc.libqt_string{
                    .len = value.len,
                    .data = value.ptr,
                };
            additionalResponseHeaders_values[i].data = @ptrCast(additionalResponseHeaders_val.ptr);
        }
        const additionalResponseHeaders_map = qtc.libqt_map{
            .len = additionalResponseHeaders_count,
            .keys = @ptrCast(additionalResponseHeaders_keys.ptr),
            .values = @ptrCast(additionalResponseHeaders_values.ptr),
        };
        qtc.QWebEngineUrlRequestJob_SetAdditionalResponseHeaders(@ptrCast(self.ptr), additionalResponseHeaders_map);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineurlrequestjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineurlrequestjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebEngineUrlRequestJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebEngineUrlRequestJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebEngineUrlRequestJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineurlrequestjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebEngineUrlRequestJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn IsWidgetType(self: QWebEngineUrlRequestJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn IsWindowType(self: QWebEngineUrlRequestJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn IsQuickItemType(self: QWebEngineUrlRequestJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn SignalsBlocked(self: QWebEngineUrlRequestJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebEngineUrlRequestJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn Thread(self: QWebEngineUrlRequestJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebEngineUrlRequestJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebEngineUrlRequestJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebEngineUrlRequestJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebEngineUrlRequestJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebEngineUrlRequestJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEngineUrlRequestJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebengineurlrequestjob.Children: Memory allocation failed");
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebEngineUrlRequestJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebEngineUrlRequestJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebEngineUrlRequestJob, obj: anytype) void {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebEngineUrlRequestJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn Disconnect3(self: QWebEngineUrlRequestJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebEngineUrlRequestJob, receiver: anytype) bool {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn DumpObjectTree(self: QWebEngineUrlRequestJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn DumpObjectInfo(self: QWebEngineUrlRequestJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebEngineUrlRequestJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebEngineUrlRequestJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebEngineUrlRequestJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebengineurlrequestjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebengineurlrequestjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn BindingStorage(self: QWebEngineUrlRequestJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn BindingStorage2(self: QWebEngineUrlRequestJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn Destroyed(self: QWebEngineUrlRequestJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` callback: *const fn (self: QWebEngineUrlRequestJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebEngineUrlRequestJob, callback: *const fn (QWebEngineUrlRequestJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn Parent(self: QWebEngineUrlRequestJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebEngineUrlRequestJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn DeleteLater(self: QWebEngineUrlRequestJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebEngineUrlRequestJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebEngineUrlRequestJob, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebEngineUrlRequestJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebEngineUrlRequestJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebEngineUrlRequestJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebEngineUrlRequestJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebEngineUrlRequestJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebEngineUrlRequestJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` callback: *const fn (self: QWebEngineUrlRequestJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebEngineUrlRequestJob, callback: *const fn (QWebEngineUrlRequestJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    /// ` callback: *const fn (self: QWebEngineUrlRequestJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebEngineUrlRequestJob, callback: *const fn (QWebEngineUrlRequestJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#dtor.QWebEngineUrlRequestJob)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineUrlRequestJob `
    ///
    pub fn Delete(self: QWebEngineUrlRequestJob) void {
        qtc.QWebEngineUrlRequestJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const UrlNotFound: i32 = 1;
        pub const UrlInvalid: i32 = 2;
        pub const RequestAborted: i32 = 3;
        pub const RequestDenied: i32 = 4;
        pub const RequestFailed: i32 = 5;
    };
};
