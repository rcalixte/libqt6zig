const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const qpagesize_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)
pub const QPageSize = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPageSize,

    pub const _is_QPageSize = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPageSize object in C++ memory
    ///
    pub fn new() QPageSize {
        return .{ .ptr = qtc.QPageSize_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    pub fn new2(pageSizeId: i32) QPageSize {
        return .{ .ptr = qtc.QPageSize_new2(@bitCast(pageSizeId)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pointSize: QSize `
    ///
    pub fn new3(pointSize: anytype) QPageSize {
        comptime _ = @TypeOf(pointSize)._is_QSize;
        return .{ .ptr = qtc.QPageSize_new3(@ptrCast(pointSize.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSizeF `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    pub fn new4(_size: anytype, units: i32) QPageSize {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        return .{ .ptr = qtc.QPageSize_new4(@ptrCast(_size.ptr), @bitCast(units)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageSize `
    ///
    pub fn new5(other: anytype) QPageSize {
        comptime _ = @TypeOf(other)._is_QPageSize;
        return .{ .ptr = qtc.QPageSize_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pointSize: QSize `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new6(pointSize: anytype, _name: []const u8) QPageSize {
        comptime _ = @TypeOf(pointSize)._is_QSize;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QPageSize_new6(@ptrCast(pointSize.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pointSize: QSize `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` matchPolicy: qpagesize_enums.SizeMatchPolicy `
    ///
    pub fn new7(pointSize: anytype, _name: []const u8, matchPolicy: i32) QPageSize {
        comptime _ = @TypeOf(pointSize)._is_QSize;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QPageSize_new7(@ptrCast(pointSize.ptr), name_str, @bitCast(matchPolicy)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSizeF `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new8(_size: anytype, units: i32, _name: []const u8) QPageSize {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QPageSize_new8(@ptrCast(_size.ptr), @bitCast(units), name_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QPageSize object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSizeF `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` matchPolicy: qpagesize_enums.SizeMatchPolicy `
    ///
    pub fn new9(_size: anytype, units: i32, _name: []const u8, matchPolicy: i32) QPageSize {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QPageSize_new9(@ptrCast(_size.ptr), @bitCast(units), name_str, @bitCast(matchPolicy)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` other: QPageSize `
    ///
    pub fn operatorAssign(self: QPageSize, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageSize;
        qtc.QPageSize_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` other: QPageSize `
    ///
    pub fn swap(self: QPageSize, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageSize;
        qtc.QPageSize_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEquivalentTo` instead
    ///
    pub const IsEquivalentTo = isEquivalentTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#isEquivalentTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` other: QPageSize `
    ///
    pub fn isEquivalentTo(self: QPageSize, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPageSize;
        return qtc.QPageSize_IsEquivalentTo(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    pub fn isValid(self: QPageSize) bool {
        return qtc.QPageSize_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: QPageSize, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPageSize_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPageSize.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QPageSize, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPageSize_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPageSize.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.PageSizeId `
    ///
    pub fn id(self: QPageSize) i32 {
        return qtc.QPageSize_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowsId` instead
    ///
    pub const WindowsId = windowsId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    pub fn windowsId(self: QPageSize) i32 {
        return qtc.QPageSize_WindowsId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `definitionSize` instead
    ///
    pub const DefinitionSize = definitionSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    pub fn definitionSize(self: QPageSize) QSizeF {
        return .{ .ptr = qtc.QPageSize_DefinitionSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `definitionUnits` instead
    ///
    pub const DefinitionUnits = definitionUnits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.Unit `
    ///
    pub fn definitionUnits(self: QPageSize) i32 {
        return qtc.QPageSize_DefinitionUnits(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    pub fn size(self: QPageSize, units: i32) QSizeF {
        return .{ .ptr = qtc.QPageSize_Size(@ptrCast(self.ptr), @bitCast(units)) };
    }

    /// ### DEPRECATED: Use `sizePoints` instead
    ///
    pub const SizePoints = sizePoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    pub fn sizePoints(self: QPageSize) QSize {
        return .{ .ptr = qtc.QPageSize_SizePoints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizePixels` instead
    ///
    pub const SizePixels = sizePixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` resolution: i32 `
    ///
    pub fn sizePixels(self: QPageSize, resolution: i32) QSize {
        return .{ .ptr = qtc.QPageSize_SizePixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    pub fn rect(self: QPageSize, units: i32) QRectF {
        return .{ .ptr = qtc.QPageSize_Rect(@ptrCast(self.ptr), @bitCast(units)) };
    }

    /// ### DEPRECATED: Use `rectPoints` instead
    ///
    pub const RectPoints = rectPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#rectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    pub fn rectPoints(self: QPageSize) QRect {
        return .{ .ptr = qtc.QPageSize_RectPoints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rectPixels` instead
    ///
    pub const RectPixels = rectPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#rectPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageSize `
    ///
    /// ` resolution: i32 `
    ///
    pub fn rectPixels(self: QPageSize, resolution: i32) QRect {
        return .{ .ptr = qtc.QPageSize_RectPixels(@ptrCast(self.ptr), @bitCast(resolution)) };
    }

    /// ### DEPRECATED: Use `key2` instead
    ///
    pub const Key2 = key2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    pub fn key2(allocator: std.mem.Allocator, pageSizeId: i32) []const u8 {
        var _str = qtc.QPageSize_Key2(@bitCast(pageSizeId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPageSize.key2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name2` instead
    ///
    pub const Name2 = name2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    pub fn name2(allocator: std.mem.Allocator, pageSizeId: i32) []const u8 {
        var _str = qtc.QPageSize_Name2(@bitCast(pageSizeId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPageSize.name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id2` instead
    ///
    pub const Id2 = id2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` pointSize: QSize `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.PageSizeId `
    ///
    pub fn id2(pointSize: anytype) i32 {
        comptime _ = @TypeOf(pointSize)._is_QSize;
        return qtc.QPageSize_Id2(@ptrCast(pointSize.ptr));
    }

    /// ### DEPRECATED: Use `id3` instead
    ///
    pub const Id3 = id3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSizeF `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.PageSizeId `
    ///
    pub fn id3(_size: anytype, units: i32) i32 {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        return qtc.QPageSize_Id3(@ptrCast(_size.ptr), @bitCast(units));
    }

    /// ### DEPRECATED: Use `id4` instead
    ///
    pub const Id4 = id4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` _windowsId: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.PageSizeId `
    ///
    pub fn id4(_windowsId: i32) i32 {
        return qtc.QPageSize_Id4(@bitCast(_windowsId));
    }

    /// ### DEPRECATED: Use `windowsId2` instead
    ///
    pub const WindowsId2 = windowsId2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    pub fn windowsId2(pageSizeId: i32) i32 {
        return qtc.QPageSize_WindowsId2(@bitCast(pageSizeId));
    }

    /// ### DEPRECATED: Use `definitionSize2` instead
    ///
    pub const DefinitionSize2 = definitionSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    pub fn definitionSize2(pageSizeId: i32) QSizeF {
        return .{ .ptr = qtc.QPageSize_DefinitionSize2(@bitCast(pageSizeId)) };
    }

    /// ### DEPRECATED: Use `definitionUnits2` instead
    ///
    pub const DefinitionUnits2 = definitionUnits2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.Unit `
    ///
    pub fn definitionUnits2(pageSizeId: i32) i32 {
        return qtc.QPageSize_DefinitionUnits2(@bitCast(pageSizeId));
    }

    /// ### DEPRECATED: Use `size2` instead
    ///
    pub const Size2 = size2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    pub fn size2(pageSizeId: i32, units: i32) QSizeF {
        return .{ .ptr = qtc.QPageSize_Size2(@bitCast(pageSizeId), @bitCast(units)) };
    }

    /// ### DEPRECATED: Use `sizePoints2` instead
    ///
    pub const SizePoints2 = sizePoints2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    pub fn sizePoints2(pageSizeId: i32) QSize {
        return .{ .ptr = qtc.QPageSize_SizePoints2(@bitCast(pageSizeId)) };
    }

    /// ### DEPRECATED: Use `sizePixels2` instead
    ///
    pub const SizePixels2 = sizePixels2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` pageSizeId: qpagesize_enums.PageSizeId `
    ///
    /// ` resolution: i32 `
    ///
    pub fn sizePixels2(pageSizeId: i32, resolution: i32) QSize {
        return .{ .ptr = qtc.QPageSize_SizePixels2(@bitCast(pageSizeId), @bitCast(resolution)) };
    }

    /// ### DEPRECATED: Use `id22` instead
    ///
    pub const Id22 = id22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` pointSize: QSize `
    ///
    /// ` matchPolicy: qpagesize_enums.SizeMatchPolicy `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.PageSizeId `
    ///
    pub fn id22(pointSize: anytype, matchPolicy: i32) i32 {
        comptime _ = @TypeOf(pointSize)._is_QSize;
        return qtc.QPageSize_Id22(@ptrCast(pointSize.ptr), @bitCast(matchPolicy));
    }

    /// ### DEPRECATED: Use `id32` instead
    ///
    pub const Id32 = id32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSizeF `
    ///
    /// ` units: qpagesize_enums.Unit `
    ///
    /// ` matchPolicy: qpagesize_enums.SizeMatchPolicy `
    ///
    /// ## Returns:
    ///
    /// ` qpagesize_enums.PageSizeId `
    ///
    pub fn id32(_size: anytype, units: i32, matchPolicy: i32) i32 {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        return qtc.QPageSize_Id32(@ptrCast(_size.ptr), @bitCast(units), @bitCast(matchPolicy));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#dtor.QPageSize)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageSize `
    ///
    pub fn delete(self: QPageSize) void {
        qtc.QPageSize_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpagesize.html#public-types)
pub const enums = struct {
    pub const PageSizeId = enum {
        pub const Letter: i32 = 0;
        pub const Legal: i32 = 1;
        pub const Executive: i32 = 2;
        pub const A0: i32 = 3;
        pub const A1: i32 = 4;
        pub const A2: i32 = 5;
        pub const A3: i32 = 6;
        pub const A4: i32 = 7;
        pub const A5: i32 = 8;
        pub const A6: i32 = 9;
        pub const A7: i32 = 10;
        pub const A8: i32 = 11;
        pub const A9: i32 = 12;
        pub const A10: i32 = 13;
        pub const B0: i32 = 14;
        pub const B1: i32 = 15;
        pub const B2: i32 = 16;
        pub const B3: i32 = 17;
        pub const B4: i32 = 18;
        pub const B5: i32 = 19;
        pub const B6: i32 = 20;
        pub const B7: i32 = 21;
        pub const B8: i32 = 22;
        pub const B9: i32 = 23;
        pub const B10: i32 = 24;
        pub const C5E: i32 = 25;
        pub const Comm10E: i32 = 26;
        pub const DLE: i32 = 27;
        pub const Folio: i32 = 28;
        pub const Ledger: i32 = 29;
        pub const Tabloid: i32 = 30;
        pub const Custom: i32 = 31;
        pub const A3Extra: i32 = 32;
        pub const A4Extra: i32 = 33;
        pub const A4Plus: i32 = 34;
        pub const A4Small: i32 = 35;
        pub const A5Extra: i32 = 36;
        pub const B5Extra: i32 = 37;
        pub const JisB0: i32 = 38;
        pub const JisB1: i32 = 39;
        pub const JisB2: i32 = 40;
        pub const JisB3: i32 = 41;
        pub const JisB4: i32 = 42;
        pub const JisB5: i32 = 43;
        pub const JisB6: i32 = 44;
        pub const JisB7: i32 = 45;
        pub const JisB8: i32 = 46;
        pub const JisB9: i32 = 47;
        pub const JisB10: i32 = 48;
        pub const AnsiC: i32 = 49;
        pub const AnsiD: i32 = 50;
        pub const AnsiE: i32 = 51;
        pub const LegalExtra: i32 = 52;
        pub const LetterExtra: i32 = 53;
        pub const LetterPlus: i32 = 54;
        pub const LetterSmall: i32 = 55;
        pub const TabloidExtra: i32 = 56;
        pub const ArchA: i32 = 57;
        pub const ArchB: i32 = 58;
        pub const ArchC: i32 = 59;
        pub const ArchD: i32 = 60;
        pub const ArchE: i32 = 61;
        pub const Imperial7x9: i32 = 62;
        pub const Imperial8x10: i32 = 63;
        pub const Imperial9x11: i32 = 64;
        pub const Imperial9x12: i32 = 65;
        pub const Imperial10x11: i32 = 66;
        pub const Imperial10x13: i32 = 67;
        pub const Imperial10x14: i32 = 68;
        pub const Imperial12x11: i32 = 69;
        pub const Imperial15x11: i32 = 70;
        pub const ExecutiveStandard: i32 = 71;
        pub const Note: i32 = 72;
        pub const Quarto: i32 = 73;
        pub const Statement: i32 = 74;
        pub const SuperA: i32 = 75;
        pub const SuperB: i32 = 76;
        pub const Postcard: i32 = 77;
        pub const DoublePostcard: i32 = 78;
        pub const Prc16K: i32 = 79;
        pub const Prc32K: i32 = 80;
        pub const Prc32KBig: i32 = 81;
        pub const FanFoldUS: i32 = 82;
        pub const FanFoldGerman: i32 = 83;
        pub const FanFoldGermanLegal: i32 = 84;
        pub const EnvelopeB4: i32 = 85;
        pub const EnvelopeB5: i32 = 86;
        pub const EnvelopeB6: i32 = 87;
        pub const EnvelopeC0: i32 = 88;
        pub const EnvelopeC1: i32 = 89;
        pub const EnvelopeC2: i32 = 90;
        pub const EnvelopeC3: i32 = 91;
        pub const EnvelopeC4: i32 = 92;
        pub const EnvelopeC6: i32 = 93;
        pub const EnvelopeC65: i32 = 94;
        pub const EnvelopeC7: i32 = 95;
        pub const Envelope9: i32 = 96;
        pub const Envelope11: i32 = 97;
        pub const Envelope12: i32 = 98;
        pub const Envelope14: i32 = 99;
        pub const EnvelopeMonarch: i32 = 100;
        pub const EnvelopePersonal: i32 = 101;
        pub const EnvelopeChou3: i32 = 102;
        pub const EnvelopeChou4: i32 = 103;
        pub const EnvelopeInvite: i32 = 104;
        pub const EnvelopeItalian: i32 = 105;
        pub const EnvelopeKaku2: i32 = 106;
        pub const EnvelopeKaku3: i32 = 107;
        pub const EnvelopePrc1: i32 = 108;
        pub const EnvelopePrc2: i32 = 109;
        pub const EnvelopePrc3: i32 = 110;
        pub const EnvelopePrc4: i32 = 111;
        pub const EnvelopePrc5: i32 = 112;
        pub const EnvelopePrc6: i32 = 113;
        pub const EnvelopePrc7: i32 = 114;
        pub const EnvelopePrc8: i32 = 115;
        pub const EnvelopePrc9: i32 = 116;
        pub const EnvelopePrc10: i32 = 117;
        pub const EnvelopeYou4: i32 = 118;
        pub const LastPageSize: i32 = 118;
        pub const AnsiA: i32 = 0;
        pub const AnsiB: i32 = 29;
        pub const EnvelopeC5: i32 = 25;
        pub const EnvelopeDL: i32 = 27;
        pub const Envelope10: i32 = 26;
    };

    pub const Unit = enum {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
    };

    pub const SizeMatchPolicy = enum {
        pub const FuzzyMatch: i32 = 0;
        pub const FuzzyOrientationMatch: i32 = 1;
        pub const ExactMatch: i32 = 2;
    };
};
