const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoCoordinate = @import("libqt6").QGeoCoordinate;
const QVariant = @import("libqt6").QVariant;
const qgeomaneuver_enums = enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html)
pub const QGeoManeuver = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGeoManeuver,

    pub const _is_QGeoManeuver = {};

    /// New constructs a new QGeoManeuver object.
    ///
    pub fn New() QGeoManeuver {
        return .{ .ptr = qtc.QGeoManeuver_new() };
    }

    /// New2 constructs a new QGeoManeuver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoManeuver `
    ///
    pub fn New2(other: anytype) QGeoManeuver {
        comptime _ = @TypeOf(other)._is_QGeoManeuver;
        return .{ .ptr = qtc.QGeoManeuver_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` other: QGeoManeuver `
    ///
    pub fn OperatorAssign(self: QGeoManeuver, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoManeuver;
        qtc.QGeoManeuver_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` other: QGeoManeuver `
    ///
    pub fn Swap(self: QGeoManeuver, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoManeuver;
        qtc.QGeoManeuver_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn IsValid(self: QGeoManeuver) bool {
        return qtc.QGeoManeuver_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` position: QGeoCoordinate `
    ///
    pub fn SetPosition(self: QGeoManeuver, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QGeoCoordinate;
        qtc.QGeoManeuver_SetPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn Position(self: QGeoManeuver) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoManeuver_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setInstructionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` instructionText: []const u8 `
    ///
    pub fn SetInstructionText(self: QGeoManeuver, instructionText: []const u8) void {
        const instructionText_str = qtc.libqt_string{
            .len = instructionText.len,
            .data = instructionText.ptr,
        };
        qtc.QGeoManeuver_SetInstructionText(@ptrCast(self.ptr), instructionText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#instructionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstructionText(self: QGeoManeuver, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoManeuver_InstructionText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeomaneuver.InstructionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` direction: qgeomaneuver_enums.InstructionDirection `
    ///
    pub fn SetDirection(self: QGeoManeuver, direction: i32) void {
        qtc.QGeoManeuver_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ## Returns:
    ///
    /// ` qgeomaneuver_enums.InstructionDirection `
    ///
    pub fn Direction(self: QGeoManeuver) i32 {
        return qtc.QGeoManeuver_Direction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setTimeToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` secs: i32 `
    ///
    pub fn SetTimeToNextInstruction(self: QGeoManeuver, secs: i32) void {
        qtc.QGeoManeuver_SetTimeToNextInstruction(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#timeToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn TimeToNextInstruction(self: QGeoManeuver) i32 {
        return qtc.QGeoManeuver_TimeToNextInstruction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDistanceToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistanceToNextInstruction(self: QGeoManeuver, distance: f64) void {
        qtc.QGeoManeuver_SetDistanceToNextInstruction(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#distanceToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn DistanceToNextInstruction(self: QGeoManeuver) f64 {
        return qtc.QGeoManeuver_DistanceToNextInstruction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setWaypoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn SetWaypoint(self: QGeoManeuver, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoManeuver_SetWaypoint(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#waypoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn Waypoint(self: QGeoManeuver) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoManeuver_Waypoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` extendedAttributes: ArrayMap_constu8_QVariant `
    ///
    pub fn SetExtendedAttributes(self: QGeoManeuver, allocator: std.mem.Allocator, extendedAttributes: ArrayMap_constu8_QVariant) void {
        const extendedAttributes_count = extendedAttributes.count();
        const extendedAttributes_keys = allocator.alloc(qtc.libqt_string, extendedAttributes_count) catch @panic("qgeomaneuver.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_keys);
        const extendedAttributes_values = allocator.alloc(QtC.QVariant, extendedAttributes_count) catch @panic("qgeomaneuver.SetExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_values);
        var i: usize = 0;
        var extendedAttributes_it = extendedAttributes.iterator();
        while (extendedAttributes_it.next()) |it_entry| : (i += 1) {
            const extendedAttributes_key = it_entry.key_ptr.*;
            extendedAttributes_keys[i] = qtc.libqt_string{
                .len = extendedAttributes_key.len,
                .data = extendedAttributes_key.ptr,
            };
            extendedAttributes_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const extendedAttributes_map = qtc.libqt_map{
            .len = extendedAttributes_count,
            .keys = @ptrCast(extendedAttributes_keys.ptr),
            .values = @ptrCast(extendedAttributes_values.ptr),
        };
        qtc.QGeoManeuver_SetExtendedAttributes(@ptrCast(self.ptr), extendedAttributes_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: QGeoManeuver, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoManeuver_ExtendedAttributes(@ptrCast(self.ptr));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qgeomaneuver.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qgeomaneuver.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#dtor.QGeoManeuver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn Delete(self: QGeoManeuver) void {
        qtc.QGeoManeuver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#public-types)
pub const enums = struct {
    pub const InstructionDirection = enum(i32) {
        pub const NoDirection: i32 = 0;
        pub const DirectionForward: i32 = 1;
        pub const DirectionBearRight: i32 = 2;
        pub const DirectionLightRight: i32 = 3;
        pub const DirectionRight: i32 = 4;
        pub const DirectionHardRight: i32 = 5;
        pub const DirectionUTurnRight: i32 = 6;
        pub const DirectionUTurnLeft: i32 = 7;
        pub const DirectionHardLeft: i32 = 8;
        pub const DirectionLeft: i32 = 9;
        pub const DirectionLightLeft: i32 = 10;
        pub const DirectionBearLeft: i32 = 11;
    };
};
