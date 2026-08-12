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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGeoManeuver object in C++ memory
    ///
    pub fn new() QGeoManeuver {
        return .{ .ptr = qtc.QGeoManeuver_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGeoManeuver object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QGeoManeuver `
    ///
    pub fn new2(other: anytype) QGeoManeuver {
        comptime _ = @TypeOf(other)._is_QGeoManeuver;
        return .{ .ptr = qtc.QGeoManeuver_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` other: QGeoManeuver `
    ///
    pub fn operatorAssign(self: QGeoManeuver, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoManeuver;
        qtc.QGeoManeuver_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` other: QGeoManeuver `
    ///
    pub fn swap(self: QGeoManeuver, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QGeoManeuver;
        qtc.QGeoManeuver_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn isValid(self: QGeoManeuver) bool {
        return qtc.QGeoManeuver_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` _position: QGeoCoordinate `
    ///
    pub fn setPosition(self: QGeoManeuver, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QGeoCoordinate;
        qtc.QGeoManeuver_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn position(self: QGeoManeuver) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoManeuver_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInstructionText` instead
    ///
    pub const SetInstructionText = setInstructionText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setInstructionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` _instructionText: []const u8 `
    ///
    pub fn setInstructionText(self: QGeoManeuver, _instructionText: []const u8) void {
        const instructionText_str = qtc.libqt_string{
            .len = _instructionText.len,
            .data = _instructionText.ptr,
        };
        qtc.QGeoManeuver_SetInstructionText(@ptrCast(self.ptr), instructionText_str);
    }

    /// ### DEPRECATED: Use `instructionText` instead
    ///
    pub const InstructionText = instructionText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#instructionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn instructionText(self: QGeoManeuver, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGeoManeuver_InstructionText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGeoManeuver.instructionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` _direction: qgeomaneuver_enums.InstructionDirection `
    ///
    pub fn setDirection(self: QGeoManeuver, _direction: i32) void {
        qtc.QGeoManeuver_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

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
    pub fn direction(self: QGeoManeuver) i32 {
        return qtc.QGeoManeuver_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimeToNextInstruction` instead
    ///
    pub const SetTimeToNextInstruction = setTimeToNextInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setTimeToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` secs: i32 `
    ///
    pub fn setTimeToNextInstruction(self: QGeoManeuver, secs: i32) void {
        qtc.QGeoManeuver_SetTimeToNextInstruction(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `timeToNextInstruction` instead
    ///
    pub const TimeToNextInstruction = timeToNextInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#timeToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn timeToNextInstruction(self: QGeoManeuver) i32 {
        return qtc.QGeoManeuver_TimeToNextInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDistanceToNextInstruction` instead
    ///
    pub const SetDistanceToNextInstruction = setDistanceToNextInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDistanceToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` distance: f64 `
    ///
    pub fn setDistanceToNextInstruction(self: QGeoManeuver, distance: f64) void {
        qtc.QGeoManeuver_SetDistanceToNextInstruction(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### DEPRECATED: Use `distanceToNextInstruction` instead
    ///
    pub const DistanceToNextInstruction = distanceToNextInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#distanceToNextInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn distanceToNextInstruction(self: QGeoManeuver) f64 {
        return qtc.QGeoManeuver_DistanceToNextInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWaypoint` instead
    ///
    pub const SetWaypoint = setWaypoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setWaypoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` coordinate: QGeoCoordinate `
    ///
    pub fn setWaypoint(self: QGeoManeuver, coordinate: anytype) void {
        comptime _ = @TypeOf(coordinate)._is_QGeoCoordinate;
        qtc.QGeoManeuver_SetWaypoint(@ptrCast(self.ptr), @ptrCast(coordinate.ptr));
    }

    /// ### DEPRECATED: Use `waypoint` instead
    ///
    pub const Waypoint = waypoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#waypoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn waypoint(self: QGeoManeuver) QGeoCoordinate {
        return .{ .ptr = qtc.QGeoManeuver_Waypoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExtendedAttributes` instead
    ///
    pub const SetExtendedAttributes = setExtendedAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setExtendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _extendedAttributes: ArrayMap_constu8_QVariant `
    ///
    pub fn setExtendedAttributes(self: QGeoManeuver, allocator: std.mem.Allocator, _extendedAttributes: ArrayMap_constu8_QVariant) void {
        const extendedAttributes_count = _extendedAttributes.count();
        const extendedAttributes_keys = allocator.alloc(qtc.libqt_string, extendedAttributes_count) catch @panic("QGeoManeuver.setExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_keys);
        const extendedAttributes_values = allocator.alloc(QtC.QVariant, extendedAttributes_count) catch @panic("QGeoManeuver.setExtendedAttributes: Memory allocation failed");
        defer allocator.free(extendedAttributes_values);
        var i: usize = 0;
        var extendedAttributes_it = _extendedAttributes.iterator();
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

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGeoManeuver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: QGeoManeuver, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QGeoManeuver_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QGeoManeuver.extendedAttributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QGeoManeuver.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#dtor.QGeoManeuver)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGeoManeuver `
    ///
    pub fn delete(self: QGeoManeuver) void {
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
