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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoLocation object in C++ memory
    ///
    pub fn new() QGeoLocation {
        return .{ .ptr = qtc.QGeoLocation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoLocation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoLocation `
    ///
    pub fn new2(other: anytype) QGeoLocation {
        comptime _ = @TypeOf(other)._is_QGeoLocation;
        return .{ .ptr = qtc.QGeoLocation_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` other: QGeoLocation `
    ///
    pub fn operatorAssign(self: QGeoLocation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoLocation;
        qtc.QGeoLocation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` other: QGeoLocation `
    ///
    pub fn swap(self: QGeoLocation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoLocation;
        qtc.QGeoLocation_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `address` instead
    ///
    pub const Address = address;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn address(self: QGeoLocation) QGeoAddress {
        return .{ .ptr = qtc.QGeoLocation_Address(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAddress` instead
    ///
    pub const SetAddress = setAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` _address: QGeoAddress `
    ///
    pub fn setAddress(self: QGeoLocation, _address: anytype) void {
        comptime _ = @TypeOf(_address)._is_QGeoAddress;
        qtc.QGeoLocation_SetAddress(@ptrCast(self.ptr), @ptrCast(_address.ptr));
    }

    /// ### DEPRECATED: Use `coordinate` instead
    ///
    pub const Coordinate = coordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#coordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn coordinate(self: QGeoLocation) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoLocation_Coordinate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCoordinate` instead
    ///
    pub const SetCoordinate = setCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setCoordinate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` position: QGeoCoordinate `
    ///
    pub fn setCoordinate(self: QGeoLocation, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        qtc.QGeoLocation_SetCoordinate(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `boundingShape` instead
    ///
    pub const BoundingShape = boundingShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#boundingShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn boundingShape(self: QGeoLocation) QGeoShape {
        return .{ .ptr = qtc.QGeoLocation_BoundingShape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundingShape` instead
    ///
    pub const SetBoundingShape = setBoundingShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setBoundingShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` shape: QGeoShape `
    ///
    pub fn setBoundingShape(self: QGeoLocation, shape: anytype) void {
        comptime _ = @TypeOf(shape)._is_QGeoShape;
        qtc.QGeoLocation_SetBoundingShape(@ptrCast(self.ptr), @ptrCast(shape.ptr));
    }

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: QGeoLocation, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoLocation_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QGeoLocation.extendedAttributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QGeoLocation.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setExtendedAttributes` instead
    ///
    pub const SetExtendedAttributes = setExtendedAttributes;

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
    pub fn setExtendedAttributes(self: QGeoLocation, allocator: std.mem.Allocator, data: ArrayMap_constu8_QVariant) void {
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("QGeoLocation.setExtendedAttributes: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("QGeoLocation.setExtendedAttributes: Memory allocation failed");
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

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn isEmpty(self: QGeoLocation) bool {
        return qtc.QGeoLocation_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#dtor.QGeoLocation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoLocation `
    ///
    pub fn delete(self: QGeoLocation) void {
        qtc.QGeoLocation_Delete(@ptrCast(self.ptr));
    }
};
