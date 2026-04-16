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

    /// New constructs a new QDBusArgument object.
    ///
    pub fn New() QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_new() };
    }

    /// New2 constructs a new QDBusArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusArgument `
    ///
    pub fn New2(other: anytype) QDBusArgument {
        comptime _ = @TypeOf(other)._is_QDBusArgument;
        return .{ .ptr = qtc.QDBusArgument_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` other: QDBusArgument `
    ///
    pub fn OperatorAssign(self: QDBusArgument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusArgument;
        qtc.QDBusArgument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` other: QDBusArgument `
    ///
    pub fn Swap(self: QDBusArgument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusArgument;
        qtc.QDBusArgument_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: u8 `
    ///
    pub fn OperatorShiftLeft(self: QDBusArgument, arg: u8) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: bool `
    ///
    pub fn OperatorShiftLeft2(self: QDBusArgument, arg: bool) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft2(@ptrCast(self.ptr), arg) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: i16 `
    ///
    pub fn OperatorShiftLeft3(self: QDBusArgument, arg: i16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft3(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: u16 `
    ///
    pub fn OperatorShiftLeft4(self: QDBusArgument, arg: u16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: i32 `
    ///
    pub fn OperatorShiftLeft5(self: QDBusArgument, arg: i32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: u32 `
    ///
    pub fn OperatorShiftLeft6(self: QDBusArgument, arg: u32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft6(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: isize `
    ///
    pub fn OperatorShiftLeft7(self: QDBusArgument, arg: isize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft7(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: usize `
    ///
    pub fn OperatorShiftLeft8(self: QDBusArgument, arg: usize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: f64 `
    ///
    pub fn OperatorShiftLeft9(self: QDBusArgument, arg: f64) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn OperatorShiftLeft10(self: QDBusArgument, arg: []const u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft10(@ptrCast(self.ptr), arg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusVariant `
    ///
    pub fn OperatorShiftLeft11(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusVariant;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft11(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusObjectPath `
    ///
    pub fn OperatorShiftLeft12(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusObjectPath;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft12(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusSignature `
    ///
    pub fn OperatorShiftLeft13(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusSignature;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft13(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusUnixFileDescriptor `
    ///
    pub fn OperatorShiftLeft14(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusUnixFileDescriptor;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft14(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

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
    pub fn OperatorShiftLeft15(self: QDBusArgument, allocator: std.mem.Allocator, arg: []const []const u8) QDBusArgument {
        const arg_arr = allocator.alloc(qtc.libqt_string, arg.len) catch @panic("qdbusargument.OperatorShiftLeft15: Memory allocation failed");
        defer allocator.free(arg_arr);
        for (arg, 0..arg.len) |item, i|
            arg_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arg_list = qtc.libqt_list{
            .len = arg.len,
            .data = arg_arr.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft15(@ptrCast(self.ptr), arg_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []u8 `
    ///
    pub fn OperatorShiftLeft16(self: QDBusArgument, arg: []u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftLeft16(@ptrCast(self.ptr), arg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn BeginStructure(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginStructure(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndStructure(self: QDBusArgument) void {
        qtc.QDBusArgument_EndStructure(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` elementMetaTypeId: i32 `
    ///
    pub fn BeginArray(self: QDBusArgument, elementMetaTypeId: i32) void {
        qtc.QDBusArgument_BeginArray(@ptrCast(self.ptr), @bitCast(elementMetaTypeId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` elementMetaType: QMetaType `
    ///
    pub fn BeginArray2(self: QDBusArgument, elementMetaType: anytype) void {
        comptime _ = @TypeOf(elementMetaType)._is_QMetaType;
        qtc.QDBusArgument_BeginArray2(@ptrCast(self.ptr), @ptrCast(elementMetaType.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndArray(self: QDBusArgument) void {
        qtc.QDBusArgument_EndArray(@ptrCast(self.ptr));
    }

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
    pub fn BeginMap(self: QDBusArgument, keyMetaTypeId: i32, valueMetaTypeId: i32) void {
        qtc.QDBusArgument_BeginMap(@ptrCast(self.ptr), @bitCast(keyMetaTypeId), @bitCast(valueMetaTypeId));
    }

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
    pub fn BeginMap2(self: QDBusArgument, keyMetaType: anytype, valueMetaType: anytype) void {
        comptime _ = @TypeOf(keyMetaType)._is_QMetaType;
        comptime _ = @TypeOf(valueMetaType)._is_QMetaType;
        qtc.QDBusArgument_BeginMap2(@ptrCast(self.ptr), @ptrCast(keyMetaType.ptr), @ptrCast(valueMetaType.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndMap(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn BeginMapEntry(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginMapEntry(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndMapEntry(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMapEntry(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#appendVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` v: QVariant `
    ///
    pub fn AppendVariant(self: QDBusArgument, v: anytype) void {
        comptime _ = @TypeOf(v)._is_QVariant;
        qtc.QDBusArgument_AppendVariant(@ptrCast(self.ptr), @ptrCast(v.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#currentSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentSignature(self: QDBusArgument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusArgument_CurrentSignature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusargument.CurrentSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn CurrentType(self: QDBusArgument) i32 {
        return qtc.QDBusArgument_CurrentType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *u8 `
    ///
    pub fn OperatorShiftRight(self: QDBusArgument, arg: *u8) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *bool `
    ///
    pub fn OperatorShiftRight2(self: QDBusArgument, arg: *bool) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight2(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *i16 `
    ///
    pub fn OperatorShiftRight3(self: QDBusArgument, arg: *i16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight3(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *u16 `
    ///
    pub fn OperatorShiftRight4(self: QDBusArgument, arg: *u16) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight4(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *i32 `
    ///
    pub fn OperatorShiftRight5(self: QDBusArgument, arg: *i32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight5(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *u32 `
    ///
    pub fn OperatorShiftRight6(self: QDBusArgument, arg: *u32) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight6(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *isize `
    ///
    pub fn OperatorShiftRight7(self: QDBusArgument, arg: *isize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight7(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *usize `
    ///
    pub fn OperatorShiftRight8(self: QDBusArgument, arg: *usize) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight8(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: *f64 `
    ///
    pub fn OperatorShiftRight9(self: QDBusArgument, arg: *f64) QDBusArgument {
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight9(@ptrCast(self.ptr), @ptrCast(arg)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn OperatorShiftRight10(self: QDBusArgument, arg: []const u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight10(@ptrCast(self.ptr), arg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusVariant `
    ///
    pub fn OperatorShiftRight11(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusVariant;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight11(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusObjectPath `
    ///
    pub fn OperatorShiftRight12(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusObjectPath;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight12(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusSignature `
    ///
    pub fn OperatorShiftRight13(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusSignature;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight13(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: QDBusUnixFileDescriptor `
    ///
    pub fn OperatorShiftRight14(self: QDBusArgument, arg: anytype) QDBusArgument {
        comptime _ = @TypeOf(arg)._is_QDBusUnixFileDescriptor;
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight14(@ptrCast(self.ptr), @ptrCast(arg.ptr)) };
    }

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
    pub fn OperatorShiftRight15(self: QDBusArgument, allocator: std.mem.Allocator, arg: []const []const u8) QDBusArgument {
        const arg_arr = allocator.alloc(qtc.libqt_string, arg.len) catch @panic("qdbusargument.OperatorShiftRight15: Memory allocation failed");
        defer allocator.free(arg_arr);
        for (arg, 0..arg.len) |item, i|
            arg_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arg_list = qtc.libqt_list{
            .len = arg.len,
            .data = arg_arr.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight15(@ptrCast(self.ptr), arg_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    /// ` arg: []u8 `
    ///
    pub fn OperatorShiftRight16(self: QDBusArgument, arg: []u8) QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.QDBusArgument_OperatorShiftRight16(@ptrCast(self.ptr), arg_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn BeginStructure2(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginStructure2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndStructure2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndStructure2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn BeginArray3(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginArray3(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndArray2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndArray2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn BeginMap3(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginMap3(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndMap2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMap2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn BeginMapEntry2(self: QDBusArgument) void {
        qtc.QDBusArgument_BeginMapEntry2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn EndMapEntry2(self: QDBusArgument) void {
        qtc.QDBusArgument_EndMapEntry2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn AtEnd(self: QDBusArgument) bool {
        return qtc.QDBusArgument_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#asVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn AsVariant(self: QDBusArgument) QVariant {
        return .{ .ptr = qtc.QDBusArgument_AsVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusargument.html#dtor.QDBusArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusArgument `
    ///
    pub fn Delete(self: QDBusArgument) void {
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
