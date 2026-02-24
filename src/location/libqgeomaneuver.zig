const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgeomaneuver_enums = enums;
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html)
pub const qgeomaneuver = struct {
    /// New constructs a new QGeoManeuver object.
    ///
    pub fn New() QtC.QGeoManeuver {
        return qtc.QGeoManeuver_new();
    }

    /// New2 constructs a new QGeoManeuver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QGeoManeuver `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QGeoManeuver {
        return qtc.QGeoManeuver_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` other: QtC.QGeoManeuver `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoManeuver_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` other: QtC.QGeoManeuver `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QGeoManeuver_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QGeoManeuver_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` position: QtC.QGeoCoordinate `
    ///
    pub fn SetPosition(self: ?*anyopaque, position: ?*anyopaque) void {
        qtc.QGeoManeuver_SetPosition(@ptrCast(self), @ptrCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoManeuver_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setInstructionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` instructionText: []const u8 `
    ///
    pub fn SetInstructionText(self: ?*anyopaque, instructionText: []const u8) void {
        const instructionText_str = qtc.libqt_string{
            .len = instructionText.len,
            .data = instructionText.ptr,
        };
        qtc.QGeoManeuver_SetInstructionText(@ptrCast(self), instructionText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#instructionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstructionText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoManeuver_InstructionText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgeomaneuver.InstructionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` direction: qgeomaneuver_enums.InstructionDirection `
    ///
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QGeoManeuver_SetDirection(@ptrCast(self), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ## Returns:
    ///
    /// ` qgeomaneuver_enums.InstructionDirection `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QGeoManeuver_Direction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setTimeToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` secs: i32 `
    ///
    pub fn SetTimeToNextInstruction(self: ?*anyopaque, secs: i32) void {
        qtc.QGeoManeuver_SetTimeToNextInstruction(@ptrCast(self), @bitCast(secs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#timeToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    pub fn TimeToNextInstruction(self: ?*anyopaque) i32 {
        return qtc.QGeoManeuver_TimeToNextInstruction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDistanceToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetDistanceToNextInstruction(self: ?*anyopaque, distance: f64) void {
        qtc.QGeoManeuver_SetDistanceToNextInstruction(@ptrCast(self), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#distanceToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    pub fn DistanceToNextInstruction(self: ?*anyopaque) f64 {
        return qtc.QGeoManeuver_DistanceToNextInstruction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setWaypoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` coordinate: QtC.QGeoCoordinate `
    ///
    pub fn SetWaypoint(self: ?*anyopaque, coordinate: ?*anyopaque) void {
        qtc.QGeoManeuver_SetWaypoint(@ptrCast(self), @ptrCast(coordinate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#waypoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    pub fn Waypoint(self: ?*anyopaque) QtC.QGeoCoordinate {
        return qtc.QGeoManeuver_Waypoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` extendedAttributes: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetExtendedAttributes(self: ?*anyopaque, extendedAttributes: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
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
            extendedAttributes_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const extendedAttributes_map = qtc.libqt_map{
            .len = extendedAttributes_count,
            .keys = @ptrCast(extendedAttributes_keys.ptr),
            .values = @ptrCast(extendedAttributes_values.ptr),
        };
        qtc.QGeoManeuver_SetExtendedAttributes(@ptrCast(self), extendedAttributes_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) arraymap_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QGeoManeuver_ExtendedAttributes(@ptrCast(self));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qgeomaneuver.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qgeomaneuver.ExtendedAttributes: Memory allocation failed");
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
    /// ` self: QtC.QGeoManeuver `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGeoManeuver_Delete(@ptrCast(self));
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
