const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoAddress = @import("libqt6").QGeoAddress;
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QGeoShape = @import("libqt6").QGeoShape;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html)
pub const QGeoLocation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoLocation,

    pub const _is_QGeoLocation = {};

    /// New constructs a new QGeoLocation object.
    ///
    pub fn New() QGeoLocation {
        return .{ .ptr = qtc.QGeoLocation_new() };
    }

    /// New2 constructs a new QGeoLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoLocation `
    ///
    pub fn New2(other: anytype) QGeoLocation {
        comptime _ = @TypeOf(other)._is_QGeoLocation;
        return .{ .ptr = qtc.QGeoLocation_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` other: QGeoLocation `
    ///
    pub fn OperatorAssign(self: QGeoLocation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoLocation;
        qtc.QGeoLocation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` other: QGeoLocation `
    ///
    pub fn Swap(self: QGeoLocation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoLocation;
        qtc.QGeoLocation_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn Address(self: QGeoLocation) QGeoAddress {
        return .{ .ptr = qtc.QGeoLocation_Address(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` address: QGeoAddress `
    ///
    pub fn SetAddress(self: QGeoLocation, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QGeoAddress;
        qtc.QGeoLocation_SetAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#coordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn Coordinate(self: QGeoLocation) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoLocation_Coordinate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` position: QGeoCoordinate `
    ///
    pub fn SetCoordinate(self: QGeoLocation, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        qtc.QGeoLocation_SetCoordinate(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#boundingShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn BoundingShape(self: QGeoLocation) QGeoShape {
        return .{ .ptr = qtc.QGeoLocation_BoundingShape(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setBoundingShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` shape: QGeoShape `
    ///
    pub fn SetBoundingShape(self: QGeoLocation, shape: anytype) void {
        comptime _ = @TypeOf(shape)._is_QGeoShape;
        qtc.QGeoLocation_SetBoundingShape(@ptrCast(self.ptr), @ptrCast(shape.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: QGeoLocation, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoLocation_ExtendedAttributes(@ptrCast(self.ptr));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qgeolocation.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qgeolocation.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: ArrayMap_constu8_QVariant `
    ///
    pub fn SetExtendedAttributes(self: QGeoLocation, allocator: std.mem.Allocator, data: ArrayMap_constu8_QVariant) void {
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("qgeolocation.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("qgeolocation.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        qtc.QGeoLocation_SetExtendedAttributes(@ptrCast(self.ptr), data_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn IsEmpty(self: QGeoLocation) bool {
        return qtc.QGeoLocation_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#dtor.QGeoLocation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn Delete(self: QGeoLocation) void {
        qtc.QGeoLocation_Delete(@ptrCast(self.ptr));
    }
};
