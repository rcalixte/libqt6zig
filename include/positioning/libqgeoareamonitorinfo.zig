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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoAreaMonitorInfo object in C++ memory
    ///
    pub fn new() QGeoAreaMonitorInfo {
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoAreaMonitorInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoAreaMonitorInfo `
    ///
    pub fn new2(other: anytype) QGeoAreaMonitorInfo {
        comptime _ = @TypeOf(other)._is_QGeoAreaMonitorInfo;
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGeoAreaMonitorInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new3(_name: []const u8) QGeoAreaMonitorInfo {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_new3(name_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` other: QGeoAreaMonitorInfo `
    ///
    pub fn operatorAssign(self: QGeoAreaMonitorInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAreaMonitorInfo;
        qtc.QGeoAreaMonitorInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` other: QGeoAreaMonitorInfo `
    ///
    pub fn swap(self: QGeoAreaMonitorInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoAreaMonitorInfo;
        qtc.QGeoAreaMonitorInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QGeoAreaMonitorInfo, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QGeoAreaMonitorInfo_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `identifier` instead
    ///
    pub const Identifier = identifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#identifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn identifier(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorInfo_Identifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoAreaMonitorInfo.identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn isValid(self: QGeoAreaMonitorInfo) bool {
        return qtc.QGeoAreaMonitorInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `area` instead
    ///
    pub const Area = area;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#area)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn area(self: QGeoAreaMonitorInfo) QGeoShape {
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_Area(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setArea` instead
    ///
    pub const SetArea = setArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` newShape: QGeoShape `
    ///
    pub fn setArea(self: QGeoAreaMonitorInfo, newShape: anytype) void {
        comptime _ = @TypeOf(newShape)._is_QGeoShape;
        qtc.QGeoAreaMonitorInfo_SetArea(@ptrCast(self.ptr), @ptrCast(newShape.ptr));
    }

    /// ### DEPRECATED: Use `expiration` instead
    ///
    pub const Expiration = expiration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#expiration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn expiration(self: QGeoAreaMonitorInfo) QDateTime {
        return .{ .ptr = qtc.QGeoAreaMonitorInfo_Expiration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExpiration` instead
    ///
    pub const SetExpiration = setExpiration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setExpiration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` expiry: QDateTime `
    ///
    pub fn setExpiration(self: QGeoAreaMonitorInfo, expiry: anytype) void {
        comptime _ = @TypeOf(expiry)._is_QDateTime;
        qtc.QGeoAreaMonitorInfo_SetExpiration(@ptrCast(self.ptr), @ptrCast(expiry.ptr));
    }

    /// ### DEPRECATED: Use `isPersistent` instead
    ///
    pub const IsPersistent = isPersistent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn isPersistent(self: QGeoAreaMonitorInfo) bool {
        return qtc.QGeoAreaMonitorInfo_IsPersistent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPersistent` instead
    ///
    pub const SetPersistent = setPersistent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` _isPersistent: bool `
    ///
    pub fn setPersistent(self: QGeoAreaMonitorInfo, _isPersistent: bool) void {
        qtc.QGeoAreaMonitorInfo_SetPersistent(@ptrCast(self.ptr), _isPersistent);
    }

    /// ### DEPRECATED: Use `notificationParameters` instead
    ///
    pub const NotificationParameters = notificationParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#notificationParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn notificationParameters(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoAreaMonitorInfo_NotificationParameters(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QGeoAreaMonitorInfo.notificationParameters: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QGeoAreaMonitorInfo.notificationParameters: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setNotificationParameters` instead
    ///
    pub const SetNotificationParameters = setNotificationParameters;

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
    pub fn setNotificationParameters(self: QGeoAreaMonitorInfo, allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) void {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QGeoAreaMonitorInfo.setNotificationParameters: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QGeoAreaMonitorInfo.setNotificationParameters: Memory allocation failed");
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

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn detach(self: QGeoAreaMonitorInfo) void {
        qtc.QGeoAreaMonitorInfo_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#dtor.QGeoAreaMonitorInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoAreaMonitorInfo `
    ///
    pub fn delete(self: QGeoAreaMonitorInfo) void {
        qtc.QGeoAreaMonitorInfo_Delete(@ptrCast(self.ptr));
    }
};
