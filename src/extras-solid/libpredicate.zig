const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const predicate_enums = enums;
const std = @import("std");
const set_i32 = std.AutoHashMapUnmanaged(i32, void);

/// https://api.kde.org/solid-predicate.html
pub const solid__predicate = struct {
    /// New constructs a new Solid::Predicate object.
    ///
    ///
    pub fn New() QtC.Solid__Predicate {
        return qtc.Solid__Predicate_new();
    }

    /// New2 constructs a new Solid::Predicate object.
    ///
    /// ``` other: QtC.Solid__Predicate ```
    pub fn New2(other: ?*anyopaque) QtC.Solid__Predicate {
        return qtc.Solid__Predicate_new2(@ptrCast(other));
    }

    /// New3 constructs a new Solid::Predicate object.
    ///
    /// ``` ifaceType: *const deviceinterface_enums.Type, property: []const u8, value: QtC.QVariant ```
    pub fn New3(ifaceType: *const i32, property: []const u8, value: ?*anyopaque) QtC.Solid__Predicate {
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };

        return qtc.Solid__Predicate_new3(@ptrCast(ifaceType), property_str, @ptrCast(value));
    }

    /// New4 constructs a new Solid::Predicate object.
    ///
    /// ``` ifaceName: []const u8, property: []const u8, value: QtC.QVariant ```
    pub fn New4(ifaceName: []const u8, property: []const u8, value: ?*anyopaque) QtC.Solid__Predicate {
        const ifaceName_str = qtc.libqt_string{
            .len = ifaceName.len,
            .data = ifaceName.ptr,
        };
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };

        return qtc.Solid__Predicate_new4(ifaceName_str, property_str, @ptrCast(value));
    }

    /// New5 constructs a new Solid::Predicate object.
    ///
    /// ``` ifaceType: *const deviceinterface_enums.Type ```
    pub fn New5(ifaceType: *const i32) QtC.Solid__Predicate {
        return qtc.Solid__Predicate_new5(@ptrCast(ifaceType));
    }

    /// New6 constructs a new Solid::Predicate object.
    ///
    /// ``` ifaceName: []const u8 ```
    pub fn New6(ifaceName: []const u8) QtC.Solid__Predicate {
        const ifaceName_str = qtc.libqt_string{
            .len = ifaceName.len,
            .data = ifaceName.ptr,
        };

        return qtc.Solid__Predicate_new6(ifaceName_str);
    }

    /// New7 constructs a new Solid::Predicate object.
    ///
    /// ``` ifaceType: *const deviceinterface_enums.Type, property: []const u8, value: QtC.QVariant, compOperator: predicate_enums.ComparisonOperator ```
    pub fn New7(ifaceType: *const i32, property: []const u8, value: ?*anyopaque, compOperator: i32) QtC.Solid__Predicate {
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };

        return qtc.Solid__Predicate_new7(@ptrCast(ifaceType), property_str, @ptrCast(value), @intCast(compOperator));
    }

    /// New8 constructs a new Solid::Predicate object.
    ///
    /// ``` ifaceName: []const u8, property: []const u8, value: QtC.QVariant, compOperator: predicate_enums.ComparisonOperator ```
    pub fn New8(ifaceName: []const u8, property: []const u8, value: ?*anyopaque, compOperator: i32) QtC.Solid__Predicate {
        const ifaceName_str = qtc.libqt_string{
            .len = ifaceName.len,
            .data = ifaceName.ptr,
        };
        const property_str = qtc.libqt_string{
            .len = property.len,
            .data = property.ptr,
        };

        return qtc.Solid__Predicate_new8(ifaceName_str, property_str, @ptrCast(value), @intCast(compOperator));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-eq)
    ///
    /// ``` self: QtC.Solid__Predicate, other: QtC.Solid__Predicate ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Solid__Predicate_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-and)
    ///
    /// ``` self: QtC.Solid__Predicate, other: QtC.Solid__Predicate ```
    pub fn OperatorBitwiseAnd(self: ?*anyopaque, other: ?*anyopaque) QtC.Solid__Predicate {
        return qtc.Solid__Predicate_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-and-eq)
    ///
    /// ``` self: QtC.Solid__Predicate, other: QtC.Solid__Predicate ```
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Solid__Predicate_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-7c)
    ///
    /// ``` self: QtC.Solid__Predicate, other: QtC.Solid__Predicate ```
    pub fn OperatorBitwiseOr(self: ?*anyopaque, other: ?*anyopaque) QtC.Solid__Predicate {
        return qtc.Solid__Predicate_OperatorBitwiseOr(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-7c-eq)
    ///
    /// ``` self: QtC.Solid__Predicate, other: QtC.Solid__Predicate ```
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Solid__Predicate_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#isValid)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Solid__Predicate_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#matches)
    ///
    /// ``` self: QtC.Solid__Predicate, device: QtC.Solid__Device ```
    pub fn Matches(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.Solid__Predicate_Matches(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#usedTypes)
    ///
    /// ``` self: QtC.Solid__Predicate, allocator: std.mem.Allocator ```
    pub fn UsedTypes(self: ?*anyopaque, allocator: std.mem.Allocator) set_i32 {
        const _set: qtc.libqt_list = qtc.Solid__Predicate_UsedTypes(@ptrCast(self));
        var _ret: set_i32 = .empty;
        const _data: [*]i32 = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i], {}) catch @panic("solid::predicate.UsedTypes: Set insertion failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#toString)
    ///
    /// ``` self: QtC.Solid__Predicate, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__Predicate_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::predicate.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#fromString)
    ///
    /// ``` predicate: []const u8 ```
    pub fn FromString(predicate: []const u8) QtC.Solid__Predicate {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        return qtc.Solid__Predicate_FromString(predicate_str);
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#type)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    ///
    /// Returns: ``` predicate_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Solid__Predicate_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#interfaceType)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    ///
    /// Returns: ``` deviceinterface_enums.Type ```
    pub fn InterfaceType(self: ?*anyopaque) i32 {
        return qtc.Solid__Predicate_InterfaceType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#propertyName)
    ///
    /// ``` self: QtC.Solid__Predicate, allocator: std.mem.Allocator ```
    pub fn PropertyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Solid__Predicate_PropertyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid::predicate.PropertyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#matchingValue)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    pub fn MatchingValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.Solid__Predicate_MatchingValue(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#comparisonOperator)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    ///
    /// Returns: ``` predicate_enums.ComparisonOperator ```
    pub fn ComparisonOperator(self: ?*anyopaque) i32 {
        return qtc.Solid__Predicate_ComparisonOperator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#firstOperand)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    pub fn FirstOperand(self: ?*anyopaque) QtC.Solid__Predicate {
        return qtc.Solid__Predicate_FirstOperand(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/solid-predicate.html#secondOperand)
    ///
    /// ``` self: QtC.Solid__Predicate ```
    pub fn SecondOperand(self: ?*anyopaque) QtC.Solid__Predicate {
        return qtc.Solid__Predicate_SecondOperand(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Solid__Predicate ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Solid__Predicate_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/solid-predicate.html#types
pub const enums = struct {
    pub const ComparisonOperator = enum {
        pub const Equals: i32 = 0;
        pub const Mask: i32 = 1;
    };

    pub const Type = enum {
        pub const PropertyCheck: i32 = 0;
        pub const Conjunction: i32 = 1;
        pub const Disjunction: i32 = 2;
        pub const InterfaceCheck: i32 = 3;
    };
};
