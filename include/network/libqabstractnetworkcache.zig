const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, QVariant);
const Struct_u8_u8 = struct { first: []u8, second: []u8 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html)
pub const QNetworkCacheMetaData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkCacheMetaData,

    pub const _is_QNetworkCacheMetaData = {};

    /// New constructs a new QNetworkCacheMetaData object.
    ///
    pub fn New() QNetworkCacheMetaData {
        return .{ .ptr = qtc.QNetworkCacheMetaData_new() };
    }

    /// New2 constructs a new QNetworkCacheMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn New2(other: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QNetworkCacheMetaData_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn OperatorAssign(self: QNetworkCacheMetaData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        qtc.QNetworkCacheMetaData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn Swap(self: QNetworkCacheMetaData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        qtc.QNetworkCacheMetaData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn OperatorEqual(self: QNetworkCacheMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        return qtc.QNetworkCacheMetaData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn OperatorNotEqual(self: QNetworkCacheMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        return qtc.QNetworkCacheMetaData_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn IsValid(self: QNetworkCacheMetaData) bool {
        return qtc.QNetworkCacheMetaData_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn Url(self: QNetworkCacheMetaData) QUrl {
        return .{ .ptr = qtc.QNetworkCacheMetaData_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: QNetworkCacheMetaData, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkCacheMetaData_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RawHeaders(self: QNetworkCacheMetaData, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkCacheMetaData_RawHeaders(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("qnetworkcachemetadata.RawHeaders: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("qnetworkcachemetadata.RawHeaders: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("qnetworkcachemetadata.RawHeaders: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headers: []Struct_u8_u8 `
    ///
    pub fn SetRawHeaders(self: QNetworkCacheMetaData, allocator: std.mem.Allocator, headers: []Struct_u8_u8) void {
        const headers_pairs = allocator.alloc(qtc.libqt_pair, headers.len) catch @panic("qnetworkcachemetadata.SetRawHeaders: Memory allocation failed");
        defer allocator.free(headers_pairs);
        const headers_str = allocator.alloc(qtc.libqt_string, headers.len * 2) catch @panic("qnetworkcachemetadata.SetRawHeaders: Memory allocation failed");
        defer allocator.free(headers_str);
        for (headers, 0..) |headers_item, i| {
            headers_str[i * 2] = qtc.libqt_string{
                .len = headers_item.first.len,
                .data = headers_item.first.ptr,
            };
            headers_str[i * 2 + 1] = qtc.libqt_string{
                .len = headers_item.second.len,
                .data = headers_item.second.ptr,
            };
            headers_pairs[i] = qtc.libqt_pair{
                .first = @ptrCast(&headers_str[i * 2]),
                .second = @ptrCast(&headers_str[i * 2 + 1]),
            };
        }
        const headers_list = qtc.libqt_list{
            .len = headers.len,
            .data = @ptrCast(headers_pairs.ptr),
        };
        qtc.QNetworkCacheMetaData_SetRawHeaders(@ptrCast(self.ptr), headers_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn Headers(self: QNetworkCacheMetaData) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkCacheMetaData_Headers(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` headers: QHttpHeaders `
    ///
    pub fn SetHeaders(self: QNetworkCacheMetaData, headers: anytype) void {
        comptime _ = @TypeOf(headers)._is_QHttpHeaders;
        qtc.QNetworkCacheMetaData_SetHeaders(@ptrCast(self.ptr), @ptrCast(headers.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn LastModified(self: QNetworkCacheMetaData) QDateTime {
        return .{ .ptr = qtc.QNetworkCacheMetaData_LastModified(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SetLastModified(self: QNetworkCacheMetaData, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QNetworkCacheMetaData_SetLastModified(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn ExpirationDate(self: QNetworkCacheMetaData) QDateTime {
        return .{ .ptr = qtc.QNetworkCacheMetaData_ExpirationDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SetExpirationDate(self: QNetworkCacheMetaData, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QNetworkCacheMetaData_SetExpirationDate(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn SaveToDisk(self: QNetworkCacheMetaData) bool {
        return qtc.QNetworkCacheMetaData_SaveToDisk(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setSaveToDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allow: bool `
    ///
    pub fn SetSaveToDisk(self: QNetworkCacheMetaData, allow: bool) void {
        qtc.QNetworkCacheMetaData_SetSaveToDisk(@ptrCast(self.ptr), allow);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` Map_i32_QVariant (key: qnetworkrequest_enums.Attribute) `
    ///
    pub fn Attributes(self: QNetworkCacheMetaData, allocator: std.mem.Allocator) Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QNetworkCacheMetaData_Attributes(@ptrCast(self.ptr));
        var _ret: Map_i32_QVariant = .empty;
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qnetworkcachemetadata.Attributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` attributes: Map_i32_QVariant (key: qnetworkrequest_enums.Attribute) `
    ///
    pub fn SetAttributes(self: QNetworkCacheMetaData, allocator: std.mem.Allocator, attributes: Map_i32_QVariant) void {
        const attributes_count = attributes.count();
        const attributes_keys = allocator.alloc(i32, attributes_count) catch @panic("qnetworkcachemetadata.SetAttributes: Memory allocation failed");
        defer allocator.free(attributes_keys);
        const attributes_values = allocator.alloc(QtC.QVariant, attributes_count) catch @panic("qnetworkcachemetadata.SetAttributes: Memory allocation failed");
        defer allocator.free(attributes_values);
        var i: usize = 0;
        var attributes_it = attributes.iterator();
        while (attributes_it.next()) |it_entry| : (i += 1) {
            const attributes_key = it_entry.key_ptr.*;
            attributes_keys[i] = @bitCast(attributes_key);
            attributes_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const attributes_map = qtc.libqt_map{
            .len = attributes_count,
            .keys = @ptrCast(attributes_keys.ptr),
            .values = @ptrCast(attributes_values.ptr),
        };
        qtc.QNetworkCacheMetaData_SetAttributes(@ptrCast(self.ptr), attributes_map);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#dtor.QNetworkCacheMetaData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn Delete(self: QNetworkCacheMetaData) void {
        qtc.QNetworkCacheMetaData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html)
pub const QAbstractNetworkCache = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractNetworkCache,

    pub const _is_QAbstractNetworkCache = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn MetaObject(self: QAbstractNetworkCache) QMetaObject {
        return .{ .ptr = qtc.QAbstractNetworkCache_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractNetworkCache, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractNetworkCache_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractNetworkCache, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractNetworkCache_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn MetaData(self: QAbstractNetworkCache, url: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QAbstractNetworkCache_MetaData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#updateMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` metaData: QNetworkCacheMetaData `
    ///
    pub fn UpdateMetaData(self: QAbstractNetworkCache, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QNetworkCacheMetaData;
        qtc.QAbstractNetworkCache_UpdateMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn Data(self: QAbstractNetworkCache, url: anytype) QIODevice {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QAbstractNetworkCache_Data(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn Remove(self: QAbstractNetworkCache, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QAbstractNetworkCache_Remove(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#cacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn CacheSize(self: QAbstractNetworkCache) i64 {
        return qtc.QAbstractNetworkCache_CacheSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` metaData: QNetworkCacheMetaData `
    ///
    pub fn Prepare(self: QAbstractNetworkCache, metaData: anytype) QIODevice {
        comptime _ = @TypeOf(metaData)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QAbstractNetworkCache_Prepare(@ptrCast(self.ptr), @ptrCast(metaData.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` device: QIODevice `
    ///
    pub fn Insert(self: QAbstractNetworkCache, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QAbstractNetworkCache_Insert(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn Clear(self: QAbstractNetworkCache) void {
        qtc.QAbstractNetworkCache_Clear(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractNetworkCache, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractNetworkCache, watched: anytype, event: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractNetworkCache, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractnetworkcache.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractNetworkCache, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn IsWidgetType(self: QAbstractNetworkCache) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn IsWindowType(self: QAbstractNetworkCache) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn IsQuickItemType(self: QAbstractNetworkCache) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn SignalsBlocked(self: QAbstractNetworkCache) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractNetworkCache, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn Thread(self: QAbstractNetworkCache) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractNetworkCache, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractNetworkCache, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractNetworkCache, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractNetworkCache, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractNetworkCache, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractNetworkCache, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstractnetworkcache.Children: Memory allocation failed");
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractNetworkCache, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractNetworkCache, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractNetworkCache, obj: anytype) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractNetworkCache, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn Disconnect3(self: QAbstractNetworkCache) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractNetworkCache, receiver: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn DumpObjectTree(self: QAbstractNetworkCache) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn DumpObjectInfo(self: QAbstractNetworkCache) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractNetworkCache, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractNetworkCache, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractNetworkCache, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn BindingStorage(self: QAbstractNetworkCache) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn BindingStorage2(self: QAbstractNetworkCache) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn Destroyed(self: QAbstractNetworkCache) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` callback: *const fn (self: QAbstractNetworkCache) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractNetworkCache, callback: *const fn (QAbstractNetworkCache) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn Parent(self: QAbstractNetworkCache) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractNetworkCache, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn DeleteLater(self: QAbstractNetworkCache) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractNetworkCache, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractNetworkCache, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractNetworkCache, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractNetworkCache, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractNetworkCache, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractNetworkCache, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractNetworkCache, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractNetworkCache, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` callback: *const fn (self: QAbstractNetworkCache, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractNetworkCache, callback: *const fn (QAbstractNetworkCache, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` callback: *const fn (self: QAbstractNetworkCache, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractNetworkCache, callback: *const fn (QAbstractNetworkCache, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#dtor.QAbstractNetworkCache)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn Delete(self: QAbstractNetworkCache) void {
        qtc.QAbstractNetworkCache_Delete(@ptrCast(self.ptr));
    }
};
