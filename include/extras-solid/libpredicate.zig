const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const Solid__Device = @import("libqt6").Solid__Device;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const predicate_enums = enums;
const std = @import("std");
const Set_i32 = std.AutoHashMapUnmanaged(i32, void);

/// ### [Upstream resources](https://api.kde.org/solid-predicate.html)
pub const Solid__Predicate = extern struct {
    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Solid__Predicate,

    pub const _is_Solid__Predicate = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    pub fn new() Solid__Predicate {
        return .{ .ptr = qtc.Solid__Predicate_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Solid__Predicate `
    ///
    pub fn new2(other: anytype) Solid__Predicate {
        comptime _ = @TypeOf(other)._is_Solid__Predicate;
        return .{ .ptr = qtc.Solid__Predicate_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ifaceType: *const deviceinterface_enums.Type `
    ///
    /// ` property: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn new3(ifaceType: *const i32, property: []const u8, value: anytype) Solid__Predicate {
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.Solid__Predicate_new3(@ptrCast(ifaceType), property_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ifaceName: []const u8 `
    ///
    /// ` property: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn new4(ifaceName: []const u8, property: []const u8, value: anytype) Solid__Predicate {
        const ifaceName_str = qtc.libqt_string{
            .len = ifaceName.len,
            .data = ifaceName.ptr,
        };
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.Solid__Predicate_new4(ifaceName_str, property_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ifaceType: *const deviceinterface_enums.Type `
    ///
    pub fn new5(ifaceType: *const i32) Solid__Predicate {
        return .{ .ptr = qtc.Solid__Predicate_new5(@ptrCast(ifaceType)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ifaceName: []const u8 `
    ///
    pub fn new6(ifaceName: []const u8) Solid__Predicate {
        const ifaceName_str = qtc.libqt_string{
            .len = ifaceName.len,
            .data = ifaceName.ptr,
        };
        return .{ .ptr = qtc.Solid__Predicate_new6(ifaceName_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ifaceType: *const deviceinterface_enums.Type `
    ///
    /// ` property: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` compOperator: predicate_enums.ComparisonOperator `
    ///
    pub fn new7(ifaceType: *const i32, property: []const u8, value: anytype, compOperator: i32) Solid__Predicate {
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.Solid__Predicate_new7(@ptrCast(ifaceType), property_str, @ptrCast(value.ptr), @bitCast(compOperator)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new Solid::Predicate object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` ifaceName: []const u8 `
    ///
    /// ` property: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` compOperator: predicate_enums.ComparisonOperator `
    ///
    pub fn new8(ifaceName: []const u8, property: []const u8, value: anytype, compOperator: i32) Solid__Predicate {
        const ifaceName_str = qtc.libqt_string{
            .len = ifaceName.len,
            .data = ifaceName.ptr,
        };
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.Solid__Predicate_new8(ifaceName_str, property_str, @ptrCast(value.ptr), @bitCast(compOperator)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` other: Solid__Predicate `
    ///
    pub fn operatorAssign(self: Solid__Predicate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Solid__Predicate;
        qtc.Solid__Predicate_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAnd` instead
    ///
    pub const OperatorBitwiseAnd = operatorBitwiseAnd;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#operator-and)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` other: Solid__Predicate `
    ///
    pub fn operatorBitwiseAnd(self: Solid__Predicate, other: anytype) Solid__Predicate {
        comptime _ = @TypeOf(other)._is_Solid__Predicate;
        return .{ .ptr = qtc.Solid__Predicate_OperatorBitwiseAnd(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` other: Solid__Predicate `
    ///
    pub fn operatorBitwiseAndAssign(self: Solid__Predicate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Solid__Predicate;
        qtc.Solid__Predicate_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOr` instead
    ///
    pub const OperatorBitwiseOr = operatorBitwiseOr;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#operator-7c)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` other: Solid__Predicate `
    ///
    pub fn operatorBitwiseOr(self: Solid__Predicate, other: anytype) Solid__Predicate {
        comptime _ = @TypeOf(other)._is_Solid__Predicate;
        return .{ .ptr = qtc.Solid__Predicate_OperatorBitwiseOr(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` other: Solid__Predicate `
    ///
    pub fn operatorBitwiseOrAssign(self: Solid__Predicate, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Solid__Predicate;
        qtc.Solid__Predicate_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    pub fn isValid(self: Solid__Predicate) bool {
        return qtc.Solid__Predicate_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `matches` instead
    ///
    pub const Matches = matches;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` device: Solid__Device `
    ///
    pub fn matches(self: Solid__Predicate, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_Solid__Device;
        return qtc.Solid__Predicate_Matches(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `usedTypes` instead
    ///
    pub const UsedTypes = usedTypes;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#usedTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` Set_i32 of deviceinterface_enums.Type `
    ///
    pub fn usedTypes(self: Solid__Predicate, allocator: std.mem.Allocator) Set_i32 {
        const _set: qtc.libqt_list = qtc.Solid__Predicate_UsedTypes(@ptrCast(self.ptr));
        var _ret: Set_i32 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("Solid__Predicate.usedTypes: Total capacity allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: Solid__Predicate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Predicate_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Predicate.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` predicate: []const u8 `
    ///
    pub fn fromString(predicate: []const u8) Solid__Predicate {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        return .{ .ptr = qtc.Solid__Predicate_FromString(predicate_str) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ## Returns:
    ///
    /// ` predicate_enums.Type `
    ///
    pub fn type0(self: Solid__Predicate) i32 {
        return qtc.Solid__Predicate_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `interfaceType` instead
    ///
    pub const InterfaceType = interfaceType;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#interfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ## Returns:
    ///
    /// ` deviceinterface_enums.Type `
    ///
    pub fn interfaceType(self: Solid__Predicate) i32 {
        return qtc.Solid__Predicate_InterfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyName` instead
    ///
    pub const PropertyName = propertyName;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#propertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn propertyName(self: Solid__Predicate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Predicate_PropertyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Predicate.propertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `matchingValue` instead
    ///
    pub const MatchingValue = matchingValue;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#matchingValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    pub fn matchingValue(self: Solid__Predicate) QVariant {
        return .{ .ptr = qtc.Solid__Predicate_MatchingValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `comparisonOperator` instead
    ///
    pub const ComparisonOperator = comparisonOperator;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#comparisonOperator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    /// ## Returns:
    ///
    /// ` predicate_enums.ComparisonOperator `
    ///
    pub fn comparisonOperator(self: Solid__Predicate) i32 {
        return qtc.Solid__Predicate_ComparisonOperator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `firstOperand` instead
    ///
    pub const FirstOperand = firstOperand;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#firstOperand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    pub fn firstOperand(self: Solid__Predicate) Solid__Predicate {
        return .{ .ptr = qtc.Solid__Predicate_FirstOperand(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `secondOperand` instead
    ///
    pub const SecondOperand = secondOperand;

    /// ### [Upstream resources](https://api.kde.org/solid-predicate.html#secondOperand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Predicate `
    ///
    pub fn secondOperand(self: Solid__Predicate) Solid__Predicate {
        return .{ .ptr = qtc.Solid__Predicate_SecondOperand(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__Predicate `
    ///
    pub fn delete(self: Solid__Predicate) void {
        qtc.Solid__Predicate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/solid-predicate.html#public-types)
pub const enums = struct {
    pub const ComparisonOperator = enum(i32) {
        pub const Equals: i32 = 0;
        pub const Mask: i32 = 1;
    };

    pub const Type = enum(i32) {
        pub const PropertyCheck: i32 = 0;
        pub const Conjunction: i32 = 1;
        pub const Disjunction: i32 = 2;
        pub const InterfaceCheck: i32 = 3;
    };
};
