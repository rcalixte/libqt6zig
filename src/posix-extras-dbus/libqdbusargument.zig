const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusObjectPath = @import("libqt6").QDBusObjectPath;
const QDBusSignature = @import("libqt6").QDBusSignature;
const QDBusUnixFileDescriptor = @import("libqt6").QDBusUnixFileDescriptor;
const QDBusVariant = @import("libqt6").QDBusVariant;
const QMetaType = @import("libqt6").QMetaType;
const QVariant = @import("libqt6").QVariant;
const qdbusargument_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html)
pub const QDBusArgument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusArgument,

    pub const _is_QDBusArgument = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusArgument object in C++ memory
    ///
    pub fn new() QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusArgument `
    ///
    pub fn new2(other: anytype) QDBusArgument {
        comptime _ = @TypeOf(other)._is_QDBusArgument;
        return .{ .ptr = qtc.QDBusArgument_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` other: QDBusArgument `
    ///
    pub fn operatorAssign(self: QDBusArgument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusArgument;
        qtc.QDBusArgument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` other: QDBusArgument `
    ///
    pub fn swap(self: QDBusArgument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusArgument;
        qtc.QDBusArgument_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: u8 `
    ///
    pub fn operatorShiftLeft(self: QDBusArgument, arg: u8) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: bool `
    ///
    pub fn operatorShiftLeft2(self: QDBusArgument, arg: bool) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft2(@ptrCast(self.ptr), arg) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft3` instead
    ///
    pub const OperatorShiftLeft3 = operatorShiftLeft3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: i16 `
    ///
    pub fn operatorShiftLeft3(self: QDBusArgument, arg: i16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft3(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft4` instead
    ///
    pub const OperatorShiftLeft4 = operatorShiftLeft4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: u16 `
    ///
    pub fn operatorShiftLeft4(self: QDBusArgument, arg: u16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft5` instead
    ///
    pub const OperatorShiftLeft5 = operatorShiftLeft5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: i32 `
    ///
    pub fn operatorShiftLeft5(self: QDBusArgument, arg: i32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft6` instead
    ///
    pub const OperatorShiftLeft6 = operatorShiftLeft6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: u32 `
    ///
    pub fn operatorShiftLeft6(self: QDBusArgument, arg: u32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft6(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft7` instead
    ///
    pub const OperatorShiftLeft7 = operatorShiftLeft7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: isize `
    ///
    pub fn operatorShiftLeft7(self: QDBusArgument, arg: isize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft7(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft8` instead
    ///
    pub const OperatorShiftLeft8 = operatorShiftLeft8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: usize `
    ///
    pub fn operatorShiftLeft8(self: QDBusArgument, arg: usize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft9` instead
    ///
    pub const OperatorShiftLeft9 = operatorShiftLeft9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: f64 `
    ///
    pub fn operatorShiftLeft9(self: QDBusArgument, arg: f64) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft10` instead
    ///
    pub const OperatorShiftLeft10 = operatorShiftLeft10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn operatorShiftLeft10(self: QDBusArgument, arg: []const u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft10(@ptrCast(self.ptr), arg_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft11` instead
    ///
    pub const OperatorShiftLeft11 = operatorShiftLeft11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusVariant `
    ///
    pub fn operatorShiftLeft11(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusVariant;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft11(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft12` instead
    ///
    pub const OperatorShiftLeft12 = operatorShiftLeft12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusObjectPath `
    ///
    pub fn operatorShiftLeft12(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusObjectPath;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft12(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft13` instead
    ///
    pub const OperatorShiftLeft13 = operatorShiftLeft13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusSignature `
    ///
    pub fn operatorShiftLeft13(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusSignature;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft13(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft14` instead
    ///
    pub const OperatorShiftLeft14 = operatorShiftLeft14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusUnixFileDescriptor `
    ///
    pub fn operatorShiftLeft14(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusUnixFileDescriptor;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft14(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft15` instead
    ///
    pub const OperatorShiftLeft15 = operatorShiftLeft15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` arg: []const []const u8 `
    ///
    pub fn operatorShiftLeft15(self: QDBusArgument, allocator: std.mem.Allocator, arg: []const []const u8) QDBusArgument {
        const arg_arr = allocator.alloc(qtc.libqt_string, arg.len) catch @panic("QDBusArgument.operatorShiftLeft15: Memory allocation failed");
        defer allocator.free(arg_arr);
        for (arg, 0..arg.len) |str_item, i|
            arg_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arg_list = qtc.libqt_list{
            .len = arg.len,
            .data = arg_arr.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft15(@ptrCast(self.ptr), arg_list) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft16` instead
    ///
    pub const OperatorShiftLeft16 = operatorShiftLeft16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []u8 `
    ///
    pub fn operatorShiftLeft16(self: QDBusArgument, arg: []u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft16(@ptrCast(self.ptr), arg_str) };
    }

    /// ### DEPRECATED: Use `beginStructure` instead
    ///
    pub const BeginStructure = beginStructure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn beginStructure(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginStructure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endStructure` instead
    ///
    pub const EndStructure = endStructure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endStructure(self: QDBusArgument) void {
        qtc.QDBusArgument_EndStructure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginArray` instead
    ///
    pub const BeginArray = beginArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` elementMetaTypeId: i32 `
    ///
    pub fn beginArray(self: QDBusArgument, elementMetaTypeId: i32) void {
        qtc.QDBusArgument_BeginArray(@ptrCast(self.ptr), @bitCast(elementMetaTypeId));
    }

    /// ### DEPRECATED: Use `beginArray2` instead
    ///
    pub const BeginArray2 = beginArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` elementMetaType: QMetaType `
    ///
    pub fn beginArray2(self: QDBusArgument, elementMetaType: anytype) void {
        comptime _ = @TypeOf(elementMetaType)._is_QMetaType;
        qtc.QDBusArgument_BeginArray2(@ptrCast(self.ptr), @ptrCast(elementMetaType.ptr));
    }

    /// ### DEPRECATED: Use `endArray` instead
    ///
    pub const EndArray = endArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endArray(self: QDBusArgument) void {
        qtc.QDBusArgument_EndArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginMap` instead
    ///
    pub const BeginMap = beginMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` keyMetaTypeId: i32 `
    ///
    /// ` valueMetaTypeId: i32 `
    ///
    pub fn beginMap(self: QDBusArgument, keyMetaTypeId: i32, valueMetaTypeId: i32) void {
        qtc.QDBusArgument_BeginMap(@ptrCast(self.ptr), @bitCast(keyMetaTypeId), @bitCast(valueMetaTypeId));
    }

    /// ### DEPRECATED: Use `beginMap2` instead
    ///
    pub const BeginMap2 = beginMap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` keyMetaType: QMetaType `
    ///
    /// ` valueMetaType: QMetaType `
    ///
    pub fn beginMap2(self: QDBusArgument, keyMetaType: anytype, valueMetaType: anytype) void {
        comptime _ = @TypeOf(keyMetaType)._is_QMetaType;
        comptime _ = @TypeOf(valueMetaType)._is_QMetaType;
        qtc.QDBusArgument_BeginMap2(@ptrCast(self.ptr), @ptrCast(keyMetaType.ptr), @ptrCast(valueMetaType.ptr));
    }

    /// ### DEPRECATED: Use `endMap` instead
    ///
    pub const EndMap = endMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endMap(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginMapEntry` instead
    ///
    pub const BeginMapEntry = beginMapEntry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn beginMapEntry(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginMapEntry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endMapEntry` instead
    ///
    pub const EndMapEntry = endMapEntry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endMapEntry(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMapEntry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `appendVariant` instead
    ///
    pub const AppendVariant = appendVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#appendVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` v: QVariant `
    ///
    pub fn appendVariant(self: QDBusArgument, v: anytype) void {
        comptime _ = @TypeOf(v)._is_QVariant;
        qtc.QDBusArgument_AppendVariant(@ptrCast(self.ptr), @ptrCast(v.ptr));
    }

    /// ### DEPRECATED: Use `currentSignature` instead
    ///
    pub const CurrentSignature = currentSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#currentSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentSignature(self: QDBusArgument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusArgument_CurrentSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusArgument.currentSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentType` instead
    ///
    pub const CurrentType = currentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#currentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ## Returns:
    ///
    /// ` qdbusargument_enums.ElementType `
    ///
    pub fn currentType(self: QDBusArgument) i32 {
        return qtc.QDBusArgument_CurrentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorShiftRight` instead
    ///
    pub const OperatorShiftRight = operatorShiftRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *u8 `
    ///
    pub fn operatorShiftRight(self: QDBusArgument, arg: *u8) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight2` instead
    ///
    pub const OperatorShiftRight2 = operatorShiftRight2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *bool `
    ///
    pub fn operatorShiftRight2(self: QDBusArgument, arg: *bool) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight2(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight3` instead
    ///
    pub const OperatorShiftRight3 = operatorShiftRight3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *i16 `
    ///
    pub fn operatorShiftRight3(self: QDBusArgument, arg: *i16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight3(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight4` instead
    ///
    pub const OperatorShiftRight4 = operatorShiftRight4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *u16 `
    ///
    pub fn operatorShiftRight4(self: QDBusArgument, arg: *u16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight4(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight5` instead
    ///
    pub const OperatorShiftRight5 = operatorShiftRight5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *i32 `
    ///
    pub fn operatorShiftRight5(self: QDBusArgument, arg: *i32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight5(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight6` instead
    ///
    pub const OperatorShiftRight6 = operatorShiftRight6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *u32 `
    ///
    pub fn operatorShiftRight6(self: QDBusArgument, arg: *u32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight6(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight7` instead
    ///
    pub const OperatorShiftRight7 = operatorShiftRight7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *isize `
    ///
    pub fn operatorShiftRight7(self: QDBusArgument, arg: *isize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight7(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight8` instead
    ///
    pub const OperatorShiftRight8 = operatorShiftRight8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *usize `
    ///
    pub fn operatorShiftRight8(self: QDBusArgument, arg: *usize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight8(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight9` instead
    ///
    pub const OperatorShiftRight9 = operatorShiftRight9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *f64 `
    ///
    pub fn operatorShiftRight9(self: QDBusArgument, arg: *f64) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight9(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight10` instead
    ///
    pub const OperatorShiftRight10 = operatorShiftRight10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn operatorShiftRight10(self: QDBusArgument, arg: []const u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight10(@ptrCast(self.ptr), arg_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight11` instead
    ///
    pub const OperatorShiftRight11 = operatorShiftRight11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusVariant `
    ///
    pub fn operatorShiftRight11(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusVariant;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight11(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight12` instead
    ///
    pub const OperatorShiftRight12 = operatorShiftRight12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusObjectPath `
    ///
    pub fn operatorShiftRight12(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusObjectPath;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight12(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight13` instead
    ///
    pub const OperatorShiftRight13 = operatorShiftRight13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusSignature `
    ///
    pub fn operatorShiftRight13(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusSignature;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight13(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight14` instead
    ///
    pub const OperatorShiftRight14 = operatorShiftRight14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusUnixFileDescriptor `
    ///
    pub fn operatorShiftRight14(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusUnixFileDescriptor;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight14(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight15` instead
    ///
    pub const OperatorShiftRight15 = operatorShiftRight15;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` arg: []const []const u8 `
    ///
    pub fn operatorShiftRight15(self: QDBusArgument, allocator: std.mem.Allocator, arg: []const []const u8) QDBusArgument {
        const arg_arr = allocator.alloc(qtc.libqt_string, arg.len) catch @panic("QDBusArgument.operatorShiftRight15: Memory allocation failed");
        defer allocator.free(arg_arr);
        for (arg, 0..arg.len) |str_item, i|
            arg_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arg_list = qtc.libqt_list{
            .len = arg.len,
            .data = arg_arr.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight15(@ptrCast(self.ptr), arg_list) };
    }

    /// ### DEPRECATED: Use `operatorShiftRight16` instead
    ///
    pub const OperatorShiftRight16 = operatorShiftRight16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []u8 `
    ///
    pub fn operatorShiftRight16(self: QDBusArgument, arg: []u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight16(@ptrCast(self.ptr), arg_str) };
    }

    /// ### DEPRECATED: Use `beginStructure2` instead
    ///
    pub const BeginStructure2 = beginStructure2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn beginStructure2(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginStructure2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endStructure2` instead
    ///
    pub const EndStructure2 = endStructure2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endStructure2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndStructure2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginArray3` instead
    ///
    pub const BeginArray3 = beginArray3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn beginArray3(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginArray3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endArray2` instead
    ///
    pub const EndArray2 = endArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endArray2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndArray2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginMap3` instead
    ///
    pub const BeginMap3 = beginMap3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn beginMap3(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginMap3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endMap2` instead
    ///
    pub const EndMap2 = endMap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endMap2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMap2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginMapEntry2` instead
    ///
    pub const BeginMapEntry2 = beginMapEntry2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn beginMapEntry2(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginMapEntry2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endMapEntry2` instead
    ///
    pub const EndMapEntry2 = endMapEntry2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn endMapEntry2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMapEntry2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn atEnd(self: QDBusArgument) bool {
        return qtc.QDBusArgument_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `asVariant` instead
    ///
    pub const AsVariant = asVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#asVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn asVariant(self: QDBusArgument) QVariant {
        return .{ .ptr = qtc.QDBusArgument_AsVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#dtor.QDBusArgument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn delete(self: QDBusArgument) void {
        qtc.QDBusArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#public-types)
pub const enums = struct {
    pub const ElementType = enum(i32) {
        pub const BasicType: i32 = 0;
        pub const VariantType: i32 = 1;
        pub const ArrayType: i32 = 2;
        pub const StructureType: i32 = 3;
        pub const MapType: i32 = 4;
        pub const MapEntryType: i32 = 5;
        pub const UnknownType: i32 = -1;
    };
};
