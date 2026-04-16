const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QGeoShape = @import("libqt6").QGeoShape;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html)
pub const QGeoAreaMonitorInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoAreaMonitorInfo,

    pub const _is_QGeoAreaMonitorInfo = {};

    /// New constructs a new QGeoAreaMonitorInfo object.
    ///
    pub fn New() QGeoAreaMonitorInfo {
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_new() };
    }

    /// New2 constructs a new QGeoAreaMonitorInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoAreaMonitorInfo `
    ///
    pub fn New2(other: anytype) QGeoAreaMonitorInfo {
        comptime _ = @TypeOf(other)._is_QGeoAreaMonitorInfo;
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QGeoAreaMonitorInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) QGeoAreaMonitorInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_new3(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` other: QGeoAreaMonitorInfo `
    ///
    pub fn OperatorAssign(self: QGeoAreaMonitorInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAreaMonitorInfo;
        qtc.QGeoAreaMonitorInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` other: QGeoAreaMonitorInfo `
    ///
    pub fn Swap(self: QGeoAreaMonitorInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAreaMonitorInfo;
        qtc.QGeoAreaMonitorInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QGeoAreaMonitorInfo, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGeoAreaMonitorInfo_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#identifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Identifier(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorInfo_Identifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorinfo.Identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn IsValid(self: QGeoAreaMonitorInfo) bool {
        return qtc.QGeoAreaMonitorInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#area)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn Area(self: QGeoAreaMonitorInfo) QGeoShape {
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_Area(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` newShape: QGeoShape `
    ///
    pub fn SetArea(self: QGeoAreaMonitorInfo, newShape: anytype) void {
        comptime _ = @TypeOf(newShape)._is_QGeoShape;
        qtc.QGeoAreaMonitorInfo_SetArea(@ptrCast(self.ptr), @ptrCast(newShape.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#expiration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn Expiration(self: QGeoAreaMonitorInfo) QDateTime {
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_Expiration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setExpiration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` expiry: QDateTime `
    ///
    pub fn SetExpiration(self: QGeoAreaMonitorInfo, expiry: anytype) void {
        comptime _ = @TypeOf(expiry)._is_QDateTime;
        qtc.QGeoAreaMonitorInfo_SetExpiration(@ptrCast(self.ptr), @ptrCast(expiry.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn IsPersistent(self: QGeoAreaMonitorInfo) bool {
        return qtc.QGeoAreaMonitorInfo_IsPersistent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` isPersistent: bool `
    ///
    pub fn SetPersistent(self: QGeoAreaMonitorInfo, isPersistent: bool) void {
        qtc.QGeoAreaMonitorInfo_SetPersistent(@ptrCast(self.ptr), isPersistent);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#notificationParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NotificationParameters(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoAreaMonitorInfo_NotificationParameters(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qgeoareamonitorinfo.NotificationParameters: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qgeoareamonitorinfo.NotificationParameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setNotificationParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn SetNotificationParameters(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) void {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qgeoareamonitorinfo.SetNotificationParameters: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qgeoareamonitorinfo.SetNotificationParameters: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |it_entry| : (i += 1) {
            const parameters_key = it_entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = parameters_key.len,
                .data = parameters_key.ptr,
            };
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        qtc.QGeoAreaMonitorInfo_SetNotificationParameters(@ptrCast(self.ptr), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn Detach(self: QGeoAreaMonitorInfo) void {
        qtc.QGeoAreaMonitorInfo_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#dtor.QGeoAreaMonitorInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn Delete(self: QGeoAreaMonitorInfo) void {
        qtc.QGeoAreaMonitorInfo_Delete(@ptrCast(self.ptr));
    }
};
