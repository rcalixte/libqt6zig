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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkCacheMetaData object in C++ memory
    ///
    pub fn new() QNetworkCacheMetaData {
        return .{ .ptr = qtc.QNetworkCacheMetaData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkCacheMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn new2(other: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QNetworkCacheMetaData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn operatorAssign(self: QNetworkCacheMetaData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        qtc.QNetworkCacheMetaData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn swap(self: QNetworkCacheMetaData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        qtc.QNetworkCacheMetaData_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn operatorEqual(self: QNetworkCacheMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        return qtc.QNetworkCacheMetaData_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` other: QNetworkCacheMetaData `
    ///
    pub fn operatorNotEqual(self: QNetworkCacheMetaData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCacheMetaData;
        return qtc.QNetworkCacheMetaData_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn isValid(self: QNetworkCacheMetaData) bool {
        return qtc.QNetworkCacheMetaData_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn url(self: QNetworkCacheMetaData) QUrl {
        return .{ .ptr = qtc.QNetworkCacheMetaData_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: QNetworkCacheMetaData, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QNetworkCacheMetaData_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `rawHeaders` instead
    ///
    pub const RawHeaders = rawHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rawHeaders(self: QNetworkCacheMetaData, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkCacheMetaData_RawHeaders(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("QNetworkCacheMetaData.rawHeaders: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("QNetworkCacheMetaData.rawHeaders: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("QNetworkCacheMetaData.rawHeaders: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRawHeaders` instead
    ///
    pub const SetRawHeaders = setRawHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _headers: []Struct_u8_u8 `
    ///
    pub fn setRawHeaders(self: QNetworkCacheMetaData, allocator: std.mem.Allocator, _headers: []Struct_u8_u8) void {
        const headers_pairs = allocator.alloc(qtc.libqt_pair, _headers.len) catch @panic("QNetworkCacheMetaData.setRawHeaders: Memory allocation failed");
        defer allocator.free(headers_pairs);
        const headers_str = allocator.alloc(qtc.libqt_string, _headers.len * 2) catch @panic("QNetworkCacheMetaData.setRawHeaders: Memory allocation failed");
        defer allocator.free(headers_str);
        for (_headers, 0..) |headers_item, i| {
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
            .len = _headers.len,
            .data = @ptrCast(headers_pairs.ptr),
        };
        qtc.QNetworkCacheMetaData_SetRawHeaders(@ptrCast(self.ptr), headers_list);
    }

    /// ### DEPRECATED: Use `headers` instead
    ///
    pub const Headers = headers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn headers(self: QNetworkCacheMetaData) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkCacheMetaData_Headers(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeaders` instead
    ///
    pub const SetHeaders = setHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` _headers: QHttpHeaders `
    ///
    pub fn setHeaders(self: QNetworkCacheMetaData, _headers: anytype) void {
        comptime _ = @TypeOf(_headers)._is_QHttpHeaders;
        qtc.QNetworkCacheMetaData_SetHeaders(@ptrCast(self.ptr), @ptrCast(_headers.ptr));
    }

    /// ### DEPRECATED: Use `lastModified` instead
    ///
    pub const LastModified = lastModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn lastModified(self: QNetworkCacheMetaData) QDateTime {
        return .{ .ptr = qtc.QNetworkCacheMetaData_LastModified(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastModified` instead
    ///
    pub const SetLastModified = setLastModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn setLastModified(self: QNetworkCacheMetaData, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QNetworkCacheMetaData_SetLastModified(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### DEPRECATED: Use `expirationDate` instead
    ///
    pub const ExpirationDate = expirationDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn expirationDate(self: QNetworkCacheMetaData) QDateTime {
        return .{ .ptr = qtc.QNetworkCacheMetaData_ExpirationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExpirationDate` instead
    ///
    pub const SetExpirationDate = setExpirationDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn setExpirationDate(self: QNetworkCacheMetaData, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QNetworkCacheMetaData_SetExpirationDate(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### DEPRECATED: Use `saveToDisk` instead
    ///
    pub const SaveToDisk = saveToDisk;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn saveToDisk(self: QNetworkCacheMetaData) bool {
        return qtc.QNetworkCacheMetaData_SaveToDisk(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSaveToDisk` instead
    ///
    pub const SetSaveToDisk = setSaveToDisk;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setSaveToDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allow: bool `
    ///
    pub fn setSaveToDisk(self: QNetworkCacheMetaData, allow: bool) void {
        qtc.QNetworkCacheMetaData_SetSaveToDisk(@ptrCast(self.ptr), allow);
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

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
    pub fn attributes(self: QNetworkCacheMetaData, allocator: std.mem.Allocator) Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QNetworkCacheMetaData_Attributes(@ptrCast(self.ptr));
        var _ret: Map_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QNetworkCacheMetaData.attributes: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttributes` instead
    ///
    pub const SetAttributes = setAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _attributes: Map_i32_QVariant (key: qnetworkrequest_enums.Attribute) `
    ///
    pub fn setAttributes(self: QNetworkCacheMetaData, allocator: std.mem.Allocator, _attributes: Map_i32_QVariant) void {
        const attributes_count = _attributes.count();
        const attributes_keys = allocator.alloc(i32, attributes_count) catch @panic("QNetworkCacheMetaData.setAttributes: Memory allocation failed");
        defer allocator.free(attributes_keys);
        const attributes_values = allocator.alloc(QtC.QVariant, attributes_count) catch @panic("QNetworkCacheMetaData.setAttributes: Memory allocation failed");
        defer allocator.free(attributes_values);
        var i: usize = 0;
        var attributes_it = _attributes.iterator();
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#dtor.QNetworkCacheMetaData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkCacheMetaData `
    ///
    pub fn delete(self: QNetworkCacheMetaData) void {
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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn metaObject(self: QAbstractNetworkCache) QMetaObject {
        return .{ .ptr = qtc.QAbstractNetworkCache_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstractNetworkCache, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractNetworkCache_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QAbstractNetworkCache, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractNetworkCache_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractNetworkCache.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _url: QUrl `
    ///
    pub fn metaData(self: QAbstractNetworkCache, _url: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QAbstractNetworkCache_MetaData(@ptrCast(self.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `updateMetaData` instead
    ///
    pub const UpdateMetaData = updateMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#updateMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _metaData: QNetworkCacheMetaData `
    ///
    pub fn updateMetaData(self: QAbstractNetworkCache, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QNetworkCacheMetaData;
        qtc.QAbstractNetworkCache_UpdateMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _url: QUrl `
    ///
    pub fn data(self: QAbstractNetworkCache, _url: anytype) QIODevice {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QAbstractNetworkCache_Data(@ptrCast(self.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _url: QUrl `
    ///
    pub fn remove(self: QAbstractNetworkCache, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.QAbstractNetworkCache_Remove(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `cacheSize` instead
    ///
    pub const CacheSize = cacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#cacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn cacheSize(self: QAbstractNetworkCache) i64 {
        return qtc.QAbstractNetworkCache_CacheSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepare` instead
    ///
    pub const Prepare = prepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _metaData: QNetworkCacheMetaData `
    ///
    pub fn prepare(self: QAbstractNetworkCache, _metaData: anytype) QIODevice {
        comptime _ = @TypeOf(_metaData)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QAbstractNetworkCache_Prepare(@ptrCast(self.ptr), @ptrCast(_metaData.ptr)) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` device: QIODevice `
    ///
    pub fn insert(self: QAbstractNetworkCache, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QAbstractNetworkCache_Insert(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn clear(self: QAbstractNetworkCache) void {
        qtc.QAbstractNetworkCache_Clear(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractNetworkCache.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractNetworkCache.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstractNetworkCache, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstractNetworkCache, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstractNetworkCache, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractNetworkCache.objectName: Memory allocation failed");
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstractNetworkCache, name: []const u8) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn isWidgetType(self: QAbstractNetworkCache) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn isWindowType(self: QAbstractNetworkCache) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn isQuickItemType(self: QAbstractNetworkCache) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn signalsBlocked(self: QAbstractNetworkCache) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstractNetworkCache, b: bool) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn thread(self: QAbstractNetworkCache) QThread {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstractNetworkCache, _thread: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstractNetworkCache, interval: i32) i32 {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstractNetworkCache, time: i64) i32 {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstractNetworkCache, id: i32) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstractNetworkCache, id: i32) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstractNetworkCache, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstractNetworkCache.children: Memory allocation failed");
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstractNetworkCache, _parent: anytype) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstractNetworkCache, filterObj: anytype) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstractNetworkCache, obj: anytype) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstractNetworkCache, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn disconnect3(self: QAbstractNetworkCache) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstractNetworkCache, receiver: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn dumpObjectTree(self: QAbstractNetworkCache) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn dumpObjectInfo(self: QAbstractNetworkCache) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstractNetworkCache, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstractNetworkCache, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstractNetworkCache, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAbstractNetworkCache.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractNetworkCache.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn bindingStorage(self: QAbstractNetworkCache) QBindingStorage {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn bindingStorage2(self: QAbstractNetworkCache) QBindingStorage {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn destroyed(self: QAbstractNetworkCache) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` callback: *const fn (self: QAbstractNetworkCache) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstractNetworkCache, callback: *const fn (QAbstractNetworkCache) callconv(.c) void) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn parent(self: QAbstractNetworkCache) QObject {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstractNetworkCache, classname: [:0]const u8) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn deleteLater(self: QAbstractNetworkCache) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstractNetworkCache, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstractNetworkCache, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstractNetworkCache, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstractNetworkCache, signal: [:0]const u8) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstractNetworkCache, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstractNetworkCache, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstractNetworkCache, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstractNetworkCache, param1: anytype) void {
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` callback: *const fn (self: QAbstractNetworkCache, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstractNetworkCache, callback: *const fn (QAbstractNetworkCache, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractNetworkCache `
    ///
    /// ` callback: *const fn (self: QAbstractNetworkCache, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstractNetworkCache, callback: *const fn (QAbstractNetworkCache, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#dtor.QAbstractNetworkCache)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractNetworkCache `
    ///
    pub fn delete(self: QAbstractNetworkCache) void {
        qtc.QAbstractNetworkCache_Delete(@ptrCast(self.ptr));
    }
};
