const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html)
pub const qgeolocation = struct {
    /// New constructs a new QGeoLocation object.
    ///
    pub fn New() QtC.QGeoLocation {
        return qtc.QGeoLocation_new();
    }

    /// New2 constructs a new QGeoLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoLocation `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoLocation {
        return qtc.QGeoLocation_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` other: QtC.QGeoLocation `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoLocation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` other: QtC.QGeoLocation `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoLocation_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    pub fn Address(self: ?*anyopaque) QtC.QGeoAddress {
        return qtc.QGeoLocation_Address(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` address: QtC.QGeoAddress `
    ///
    pub fn SetAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QGeoLocation_SetAddress(@ptrCast(self), @ptrCast(address));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#coordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    pub fn Coordinate(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoLocation_Coordinate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` position: QtC.QGeoCoordinate `
    ///
    pub fn SetCoordinate(self: ?*anyopaque, position: ?*anyopaque) void {
        qtc.QGeoLocation_SetCoordinate(@ptrCast(self), @ptrCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#boundingShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    pub fn BoundingShape(self: ?*anyopaque) QtC.QGeoShape {
        return qtc.QGeoLocation_BoundingShape(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setBoundingShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` shape: QtC.QGeoShape `
    ///
    pub fn SetBoundingShape(self: ?*anyopaque, shape: ?*anyopaque) void {
        qtc.QGeoLocation_SetBoundingShape(@ptrCast(self), @ptrCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QGeoLocation_ExtendedAttributes(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qgeolocation.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qgeolocation.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    /// ` data: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetExtendedAttributes(self: ?*anyopaque, data: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const data_keys = allocator.alloc(qtc.libqt_string, data.count()) catch @panic("qgeolocation.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data.count()) catch @panic("qgeolocation.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            data_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const data_map = qtc.libqt_map{
            .len = data.count(),
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        qtc.QGeoLocation_SetExtendedAttributes(@ptrCast(self), data_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGeoLocation_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#dtor.QGeoLocation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGeoLocation `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGeoLocation_Delete(@ptrCast(self));
    }
};
