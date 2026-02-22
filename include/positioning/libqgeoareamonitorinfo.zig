const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html)
pub const qgeoareamonitorinfo = struct {
    /// New constructs a new QGeoAreaMonitorInfo object.
    ///
    pub fn New() QtC.QGeoAreaMonitorInfo {
        return qtc.QGeoAreaMonitorInfo_new();
    }

    /// New2 constructs a new QGeoAreaMonitorInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoAreaMonitorInfo {
        return qtc.QGeoAreaMonitorInfo_new2(@ptrCast(other));
    }

    /// New3 constructs a new QGeoAreaMonitorInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(name: []const u8) QtC.QGeoAreaMonitorInfo {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QGeoAreaMonitorInfo_new3(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` other: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoAreaMonitorInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` other: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoAreaMonitorInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGeoAreaMonitorInfo_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#identifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Identifier(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoAreaMonitorInfo_Identifier(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeoareamonitorinfo.Identifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoAreaMonitorInfo_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#area)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn Area(self: ?*anyopaque) QtC.QGeoShape {
        return qtc.QGeoAreaMonitorInfo_Area(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` newShape: QtC.QGeoShape `
    ///
    pub fn SetArea(self: ?*anyopaque, newShape: ?*anyopaque) void {
        qtc.QGeoAreaMonitorInfo_SetArea(@ptrCast(self), @ptrCast(newShape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#expiration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn Expiration(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QGeoAreaMonitorInfo_Expiration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setExpiration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` expiry: QtC.QDateTime `
    ///
    pub fn SetExpiration(self: ?*anyopaque, expiry: ?*anyopaque) void {
        qtc.QGeoAreaMonitorInfo_SetExpiration(@ptrCast(self), @ptrCast(expiry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn IsPersistent(self: ?*anyopaque) bool {
        return qtc.QGeoAreaMonitorInfo_IsPersistent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` isPersistent: bool `
    ///
    pub fn SetPersistent(self: ?*anyopaque, isPersistent: bool) void {
        qtc.QGeoAreaMonitorInfo_SetPersistent(@ptrCast(self), isPersistent);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#notificationParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NotificationParameters(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QGeoAreaMonitorInfo_NotificationParameters(@ptrCast(self));
        var _ret: arraymap_constu8_qtcqvariant = .empty;
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
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qgeoareamonitorinfo.NotificationParameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setNotificationParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    /// ` parameters: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetNotificationParameters(self: ?*anyopaque, parameters: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        qtc.QGeoAreaMonitorInfo_SetNotificationParameters(@ptrCast(self), parameters_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QGeoAreaMonitorInfo_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#dtor.QGeoAreaMonitorInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoAreaMonitorInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoAreaMonitorInfo_Delete(@ptrCast(self));
    }
};
