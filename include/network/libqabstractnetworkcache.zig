const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const struct_u8_u8 = struct { first: []u8, second: []u8 };

/// https://doc.qt.io/qt-6/qnetworkcachemetadata.html
pub const qnetworkcachemetadata = struct {
    /// New constructs a new QNetworkCacheMetaData object.
    ///
    ///
    pub fn New() QtC.QNetworkCacheMetaData {
        return qtc.QNetworkCacheMetaData_new();
    }

    /// New2 constructs a new QNetworkCacheMetaData object.
    ///
    /// ``` other: QtC.QNetworkCacheMetaData ```
    pub fn New2(other: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QNetworkCacheMetaData_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator=)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, other: QtC.QNetworkCacheMetaData ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, other: QtC.QNetworkCacheMetaData ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator==)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, other: QtC.QNetworkCacheMetaData ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCacheMetaData_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator!=)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, other: QtC.QNetworkCacheMetaData ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCacheMetaData_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QNetworkCacheMetaData_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QNetworkCacheMetaData_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, allocator: std.mem.Allocator ```
    pub fn RawHeaders(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_u8_u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkCacheMetaData_RawHeaders(@ptrCast(self));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_pair[i].first));
                qtc.libqt_free(_pair[i].first);

                qtc.libqt_string_free(@ptrCast(&_pair[i].second));
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_u8_u8, _arr.len) catch @panic("qnetworkcachemetadata.RawHeaders: Memory allocation failed");
        const _data: [*]struct_u8_u8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, headers: []struct_u8_u8 ```
    pub fn SetRawHeaders(self: ?*anyopaque, headers: []struct_u8_u8) void {
        const headers_list = qtc.struct_libqt_list{
            .len = headers.len,
            .data = headers.ptr,
        };
        qtc.QNetworkCacheMetaData_SetRawHeaders(@ptrCast(self), headers_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#headers)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn Headers(self: ?*anyopaque) QtC.QHttpHeaders {
        return qtc.QNetworkCacheMetaData_Headers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setHeaders)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, headers: QtC.QHttpHeaders ```
    pub fn SetHeaders(self: ?*anyopaque, headers: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetHeaders(@ptrCast(self), @ptrCast(headers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn LastModified(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QNetworkCacheMetaData_LastModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, dateTime: QtC.QDateTime ```
    pub fn SetLastModified(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetLastModified(@ptrCast(self), @ptrCast(dateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn ExpirationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QNetworkCacheMetaData_ExpirationDate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, dateTime: QtC.QDateTime ```
    pub fn SetExpirationDate(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_SetExpirationDate(@ptrCast(self), @ptrCast(dateTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn SaveToDisk(self: ?*anyopaque) bool {
        return qtc.QNetworkCacheMetaData_SaveToDisk(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setSaveToDisk)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, allow: bool ```
    pub fn SetSaveToDisk(self: ?*anyopaque, allow: bool) void {
        qtc.QNetworkCacheMetaData_SetSaveToDisk(@ptrCast(self), allow);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#attributes)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, allocator: std.mem.Allocator ```
    pub fn Attributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QNetworkCacheMetaData_Attributes(@ptrCast(self));
        var _ret: map_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("qnetworkcachemetadata.Attributes: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setAttributes)
    ///
    /// ``` self: QtC.QNetworkCacheMetaData, attributes: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetAttributes(self: ?*anyopaque, attributes: map_i32_qtcqvariant, allocator: std.mem.Allocator) void {
        const attributes_keys = allocator.alloc(i32, attributes.count()) catch @panic("qnetworkcachemetadata.SetAttributes: Memory allocation failed");
        defer allocator.free(attributes_keys);
        const attributes_values = allocator.alloc(QtC.QVariant, attributes.count()) catch @panic("qnetworkcachemetadata.SetAttributes: Memory allocation failed");
        defer allocator.free(attributes_values);
        var i: usize = 0;
        var attributes_it = attributes.iterator();
        while (attributes_it.next()) |entry| {
            const key = entry.key_ptr.*;
            attributes_keys[i] = @intCast(key);
            attributes_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const attributes_map = qtc.struct_libqt_map{
            .len = attributes.count(),
            .keys = @ptrCast(attributes_keys.ptr),
            .values = @ptrCast(attributes_values.ptr),
        };
        qtc.QNetworkCacheMetaData_SetAttributes(@ptrCast(self), attributes_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#dtor.QNetworkCacheMetaData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkCacheMetaData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkCacheMetaData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractnetworkcache.html
pub const qabstractnetworkcache = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractNetworkCache_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractNetworkCache, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractNetworkCache_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractNetworkCache, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractNetworkCache_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAbstractNetworkCache_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#metaData)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, url: QtC.QUrl ```
    pub fn MetaData(self: ?*anyopaque, url: ?*anyopaque) QtC.QNetworkCacheMetaData {
        return qtc.QAbstractNetworkCache_MetaData(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#updateMetaData)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, metaData: QtC.QNetworkCacheMetaData ```
    pub fn UpdateMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_UpdateMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#data)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, url: QtC.QUrl ```
    pub fn Data(self: ?*anyopaque, url: ?*anyopaque) QtC.QIODevice {
        return qtc.QAbstractNetworkCache_Data(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#remove)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, url: QtC.QUrl ```
    pub fn Remove(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QAbstractNetworkCache_Remove(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#cacheSize)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn CacheSize(self: ?*anyopaque) i64 {
        return qtc.QAbstractNetworkCache_CacheSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#prepare)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, metaData: QtC.QNetworkCacheMetaData ```
    pub fn Prepare(self: ?*anyopaque, metaData: ?*anyopaque) QtC.QIODevice {
        return qtc.QAbstractNetworkCache_Prepare(@ptrCast(self), @ptrCast(metaData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#insert)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, device: QtC.QIODevice ```
    pub fn Insert(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_Insert(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#clear)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractNetworkCache_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractNetworkCache_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstractnetworkcache.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAbstractNetworkCache, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstractnetworkcache.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstractnetworkcache.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractNetworkCache, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractNetworkCache, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#dtor.QAbstractNetworkCache)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractNetworkCache ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractNetworkCache_Delete(@ptrCast(self));
    }
};
