const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_cqvariant = std.AutoHashMapUnmanaged(i32, ?*C.QVariant);
pub const struct_u8_u8 = struct { first: []u8, second: []u8 };

/// https://doc.qt.io/qt-6/qnetworkcachemetadata.html
pub const qnetworkcachemetadata = struct {
    /// New constructs a new QNetworkCacheMetaData object.
    ///
    ///
    pub fn New() ?*C.QNetworkCacheMetaData {
        return C.QNetworkCacheMetaData_new();
    }

    /// New2 constructs a new QNetworkCacheMetaData object.
    ///
    /// ``` other: ?*C.QNetworkCacheMetaData ```
    pub fn New2(other: ?*anyopaque) ?*C.QNetworkCacheMetaData {
        return C.QNetworkCacheMetaData_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator=)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, other: ?*C.QNetworkCacheMetaData ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QNetworkCacheMetaData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, other: ?*C.QNetworkCacheMetaData ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QNetworkCacheMetaData_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator==)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, other: ?*C.QNetworkCacheMetaData ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QNetworkCacheMetaData_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator!=)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, other: ?*C.QNetworkCacheMetaData ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QNetworkCacheMetaData_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QNetworkCacheMetaData_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData ```
    pub fn Url(self: ?*anyopaque) ?*C.QUrl {
        return C.QNetworkCacheMetaData_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, url: ?*C.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        C.QNetworkCacheMetaData_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, allocator: std.mem.Allocator ```
    pub fn RawHeaders(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_u8_u8 {
        const _arr: C.struct_libqt_list = C.QNetworkCacheMetaData_RawHeaders(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_pair[_i].first));
                C.libqt_free(_pair[_i].first);

                C.libqt_string_free(@ptrCast(&_pair[_i].second));
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_u8_u8, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_u8_u8 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, headers: []struct_u8_u8 ```
    pub fn SetRawHeaders(self: ?*anyopaque, headers: []struct_u8_u8) void {
        const headers_list = C.struct_libqt_list{
            .len = headers.len,
            .data = headers.ptr,
        };
        C.QNetworkCacheMetaData_SetRawHeaders(@ptrCast(self), headers_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData ```
    pub fn LastModified(self: ?*anyopaque) ?*C.QDateTime {
        return C.QNetworkCacheMetaData_LastModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, dateTime: ?*C.QDateTime ```
    pub fn SetLastModified(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        C.QNetworkCacheMetaData_SetLastModified(@ptrCast(self), @ptrCast(dateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData ```
    pub fn ExpirationDate(self: ?*anyopaque) ?*C.QDateTime {
        return C.QNetworkCacheMetaData_ExpirationDate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, dateTime: ?*C.QDateTime ```
    pub fn SetExpirationDate(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        C.QNetworkCacheMetaData_SetExpirationDate(@ptrCast(self), @ptrCast(dateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData ```
    pub fn SaveToDisk(self: ?*anyopaque) bool {
        return C.QNetworkCacheMetaData_SaveToDisk(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setSaveToDisk)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, allow: bool ```
    pub fn SetSaveToDisk(self: ?*anyopaque, allow: bool) void {
        C.QNetworkCacheMetaData_SetSaveToDisk(@ptrCast(self), allow);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#attributes)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, allocator: std.mem.Allocator ```
    pub fn Attributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_cqvariant {
        const _map: C.struct_libqt_map = C.QNetworkCacheMetaData_Attributes(@ptrCast(self));
        var _ret: map_i32_cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*C.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setAttributes)
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData, attributes: map_i32_cqvariant, allocator: std.mem.Allocator ```
    pub fn SetAttributes(self: ?*anyopaque, attributes: map_i32_cqvariant, allocator: std.mem.Allocator) void {
        const attributes_keys = allocator.alloc(i32, attributes.count()) catch @panic("Memory allocation failed");
        defer allocator.free(attributes_keys);
        const attributes_values = allocator.alloc(?*C.QVariant, attributes.count()) catch @panic("Memory allocation failed");
        defer allocator.free(attributes_values);
        var _i: usize = 0;
        var attributes_it = attributes.iterator();
        while (attributes_it.next()) |entry| {
            const key = entry.key_ptr.*;
            attributes_keys[_i] = @intCast(key);
            attributes_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const attributes_map = C.struct_libqt_map{
            .len = attributes.count(),
            .keys = @ptrCast(attributes_keys.ptr),
            .values = @ptrCast(attributes_values.ptr),
        };
        C.QNetworkCacheMetaData_SetAttributes(@ptrCast(self), attributes_map);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QNetworkCacheMetaData ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QNetworkCacheMetaData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractnetworkcache.html
pub const qabstractnetworkcache = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QAbstractNetworkCache_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractNetworkCache, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QAbstractNetworkCache_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QAbstractNetworkCache, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAbstractNetworkCache_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QAbstractNetworkCache_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#metaData)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, url: ?*C.QUrl ```
    pub fn MetaData(self: ?*anyopaque, url: ?*anyopaque) ?*C.QNetworkCacheMetaData {
        return C.QAbstractNetworkCache_MetaData(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#updateMetaData)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, metaData: ?*C.QNetworkCacheMetaData ```
    pub fn UpdateMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        C.QAbstractNetworkCache_UpdateMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#data)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, url: ?*C.QUrl ```
    pub fn Data(self: ?*anyopaque, url: ?*anyopaque) ?*C.QIODevice {
        return C.QAbstractNetworkCache_Data(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#remove)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, url: ?*C.QUrl ```
    pub fn Remove(self: ?*anyopaque, url: ?*anyopaque) bool {
        return C.QAbstractNetworkCache_Remove(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#cacheSize)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn CacheSize(self: ?*anyopaque) i64 {
        return C.QAbstractNetworkCache_CacheSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#prepare)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, metaData: ?*C.QNetworkCacheMetaData ```
    pub fn Prepare(self: ?*anyopaque, metaData: ?*anyopaque) ?*C.QIODevice {
        return C.QAbstractNetworkCache_Prepare(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#insert)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, device: ?*C.QIODevice ```
    pub fn Insert(self: ?*anyopaque, device: ?*anyopaque) void {
        C.QAbstractNetworkCache_Insert(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#clear)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QAbstractNetworkCache_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAbstractNetworkCache_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAbstractNetworkCache_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractNetworkCache, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractNetworkCache ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractNetworkCache_Delete(@ptrCast(self));
    }
};
