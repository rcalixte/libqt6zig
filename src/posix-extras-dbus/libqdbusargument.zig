const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbusargument_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbusargument.html
pub const qdbusargument = struct {
    /// New constructs a new QDBusArgument object.
    ///
    ///
    pub fn New() QtC.QDBusArgument {
        return qtc.QDBusArgument_new();
    }

    /// New2 constructs a new QDBusArgument object.
    ///
    /// ``` other: QtC.QDBusArgument ```
    pub fn New2(other: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusArgument, other: QtC.QDBusArgument ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusArgument_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#swap)
    ///
    /// ``` self: QtC.QDBusArgument, other: QtC.QDBusArgument ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusArgument_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: u8 ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, arg: u8) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: bool ```
    pub fn OperatorShiftLeft2(self: ?*anyopaque, arg: bool) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft2(@ptrCast(self), arg);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: i16 ```
    pub fn OperatorShiftLeft3(self: ?*anyopaque, arg: i16) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft3(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: u16 ```
    pub fn OperatorShiftLeft4(self: ?*anyopaque, arg: u16) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft4(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: i32 ```
    pub fn OperatorShiftLeft5(self: ?*anyopaque, arg: i32) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft5(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: u32 ```
    pub fn OperatorShiftLeft6(self: ?*anyopaque, arg: u32) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft6(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: i64 ```
    pub fn OperatorShiftLeft7(self: ?*anyopaque, arg: i64) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft7(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: u64 ```
    pub fn OperatorShiftLeft8(self: ?*anyopaque, arg: u64) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft8(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: f64 ```
    pub fn OperatorShiftLeft9(self: ?*anyopaque, arg: f64) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft9(@ptrCast(self), @floatCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: []const u8 ```
    pub fn OperatorShiftLeft10(self: ?*anyopaque, arg: []const u8) QtC.QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return qtc.QDBusArgument_OperatorShiftLeft10(@ptrCast(self), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusVariant ```
    pub fn OperatorShiftLeft11(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft11(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusObjectPath ```
    pub fn OperatorShiftLeft12(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft12(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusSignature ```
    pub fn OperatorShiftLeft13(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft13(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusUnixFileDescriptor ```
    pub fn OperatorShiftLeft14(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftLeft14(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: [][]const u8, allocator: std.mem.Allocator ```
    pub fn OperatorShiftLeft15(self: ?*anyopaque, arg: [][]const u8, allocator: std.mem.Allocator) QtC.QDBusArgument {
        var arg_arr = allocator.alloc(qtc.libqt_string, arg.len) catch @panic("qdbusargument.OperatorShiftLeft15: Memory allocation failed");
        defer allocator.free(arg_arr);
        for (arg, 0..arg.len) |item, i| {
            arg_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arg_list = qtc.libqt_list{
            .len = arg.len,
            .data = arg_arr.ptr,
        };
        return qtc.QDBusArgument_OperatorShiftLeft15(@ptrCast(self), arg_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: []u8 ```
    pub fn OperatorShiftLeft16(self: ?*anyopaque, arg: []u8) QtC.QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return qtc.QDBusArgument_OperatorShiftLeft16(@ptrCast(self), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn BeginStructure(self: ?*anyopaque) void {
        qtc.QDBusArgument_BeginStructure(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndStructure(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndStructure(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ``` self: QtC.QDBusArgument, elementMetaTypeId: i32 ```
    pub fn BeginArray(self: ?*anyopaque, elementMetaTypeId: i32) void {
        qtc.QDBusArgument_BeginArray(@ptrCast(self), @intCast(elementMetaTypeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ``` self: QtC.QDBusArgument, elementMetaType: QtC.QMetaType ```
    pub fn BeginArray2(self: ?*anyopaque, elementMetaType: QtC.QMetaType) void {
        qtc.QDBusArgument_BeginArray2(@ptrCast(self), @ptrCast(elementMetaType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndArray(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ``` self: QtC.QDBusArgument, keyMetaTypeId: i32, valueMetaTypeId: i32 ```
    pub fn BeginMap(self: ?*anyopaque, keyMetaTypeId: i32, valueMetaTypeId: i32) void {
        qtc.QDBusArgument_BeginMap(@ptrCast(self), @intCast(keyMetaTypeId), @intCast(valueMetaTypeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ``` self: QtC.QDBusArgument, keyMetaType: QtC.QMetaType, valueMetaType: QtC.QMetaType ```
    pub fn BeginMap2(self: ?*anyopaque, keyMetaType: QtC.QMetaType, valueMetaType: QtC.QMetaType) void {
        qtc.QDBusArgument_BeginMap2(@ptrCast(self), @ptrCast(keyMetaType), @ptrCast(valueMetaType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndMap(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndMap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn BeginMapEntry(self: ?*anyopaque) void {
        qtc.QDBusArgument_BeginMapEntry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndMapEntry(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndMapEntry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#appendVariant)
    ///
    /// ``` self: QtC.QDBusArgument, v: QtC.QVariant ```
    pub fn AppendVariant(self: ?*anyopaque, v: ?*anyopaque) void {
        qtc.QDBusArgument_AppendVariant(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#currentSignature)
    ///
    /// ``` self: QtC.QDBusArgument, allocator: std.mem.Allocator ```
    pub fn CurrentSignature(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusArgument_CurrentSignature(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusargument.CurrentSignature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#currentType)
    ///
    /// ``` self: QtC.QDBusArgument ```
    ///
    /// Returns: ``` qdbusargument_enums.ElementType ```
    pub fn CurrentType(self: ?*anyopaque) i32 {
        return qtc.QDBusArgument_CurrentType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *u8 ```
    pub fn OperatorShiftRight(self: ?*anyopaque, arg: *u8) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *bool ```
    pub fn OperatorShiftRight2(self: ?*anyopaque, arg: *bool) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight2(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *i16 ```
    pub fn OperatorShiftRight3(self: ?*anyopaque, arg: *i16) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight3(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *u16 ```
    pub fn OperatorShiftRight4(self: ?*anyopaque, arg: *u16) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight4(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *i32 ```
    pub fn OperatorShiftRight5(self: ?*anyopaque, arg: *i32) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight5(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *u32 ```
    pub fn OperatorShiftRight6(self: ?*anyopaque, arg: *u32) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight6(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *i64 ```
    pub fn OperatorShiftRight7(self: ?*anyopaque, arg: *i64) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight7(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *u64 ```
    pub fn OperatorShiftRight8(self: ?*anyopaque, arg: *u64) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight8(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: *f64 ```
    pub fn OperatorShiftRight9(self: ?*anyopaque, arg: *f64) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight9(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: []const u8 ```
    pub fn OperatorShiftRight10(self: ?*anyopaque, arg: []const u8) QtC.QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return qtc.QDBusArgument_OperatorShiftRight10(@ptrCast(self), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusVariant ```
    pub fn OperatorShiftRight11(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight11(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusObjectPath ```
    pub fn OperatorShiftRight12(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight12(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusSignature ```
    pub fn OperatorShiftRight13(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight13(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: QtC.QDBusUnixFileDescriptor ```
    pub fn OperatorShiftRight14(self: ?*anyopaque, arg: ?*anyopaque) QtC.QDBusArgument {
        return qtc.QDBusArgument_OperatorShiftRight14(@ptrCast(self), @ptrCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: [][]const u8, allocator: std.mem.Allocator ```
    pub fn OperatorShiftRight15(self: ?*anyopaque, arg: [][]const u8, allocator: std.mem.Allocator) QtC.QDBusArgument {
        var arg_arr = allocator.alloc(qtc.libqt_string, arg.len) catch @panic("qdbusargument.OperatorShiftRight15: Memory allocation failed");
        defer allocator.free(arg_arr);
        for (arg, 0..arg.len) |item, i| {
            arg_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arg_list = qtc.libqt_list{
            .len = arg.len,
            .data = arg_arr.ptr,
        };
        return qtc.QDBusArgument_OperatorShiftRight15(@ptrCast(self), arg_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDBusArgument, arg: []u8 ```
    pub fn OperatorShiftRight16(self: ?*anyopaque, arg: []u8) QtC.QDBusArgument {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return qtc.QDBusArgument_OperatorShiftRight16(@ptrCast(self), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn BeginStructure2(self: ?*anyopaque) void {
        qtc.QDBusArgument_BeginStructure2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndStructure2(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndStructure2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn BeginArray3(self: ?*anyopaque) void {
        qtc.QDBusArgument_BeginArray3(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndArray2(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndArray2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn BeginMap3(self: ?*anyopaque) void {
        qtc.QDBusArgument_BeginMap3(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndMap2(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndMap2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn BeginMapEntry2(self: ?*anyopaque) void {
        qtc.QDBusArgument_BeginMapEntry2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn EndMapEntry2(self: ?*anyopaque) void {
        qtc.QDBusArgument_EndMapEntry2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#atEnd)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QDBusArgument_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#asVariant)
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn AsVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QDBusArgument_AsVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#dtor.QDBusArgument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusArgument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdbusargument.html#types
pub const enums = struct {
    pub const ElementType = enum {
        pub const BasicType: i32 = 0;
        pub const VariantType: i32 = 1;
        pub const ArrayType: i32 = 2;
        pub const StructureType: i32 = 3;
        pub const MapType: i32 = 4;
        pub const MapEntryType: i32 = 5;
        pub const UnknownType: i32 = -1;
    };
};
