const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html)
pub const QPageRanges = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPageRanges,

    pub const _is_QPageRanges = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPageRanges object in C++ memory
    ///
    pub fn new() QPageRanges {
        return .{ .ptr = qtc.QPageRanges_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPageRanges object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageRanges `
    ///
    pub fn new2(other: anytype) QPageRanges {
        comptime _ = @TypeOf(other)._is_QPageRanges;
        return .{ .ptr = qtc.QPageRanges_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` other: QPageRanges `
    ///
    pub fn operatorAssign(self: QPageRanges, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageRanges;
        qtc.QPageRanges_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` other: QPageRanges `
    ///
    pub fn swap(self: QPageRanges, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageRanges;
        qtc.QPageRanges_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `addPage` instead
    ///
    pub const AddPage = addPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#addPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn addPage(self: QPageRanges, pageNumber: i32) void {
        qtc.QPageRanges_AddPage(@ptrCast(self.ptr), @bitCast(pageNumber));
    }

    /// ### DEPRECATED: Use `addRange` instead
    ///
    pub const AddRange = addRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#addRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn addRange(self: QPageRanges, from: i32, to: i32) void {
        qtc.QPageRanges_AddRange(@ptrCast(self.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### DEPRECATED: Use `toRangeList` instead
    ///
    pub const ToRangeList = toRangeList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#toRangeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toRangeList(self: QPageRanges, allocator: std.mem.Allocator) []QPageRanges__Range {
        const _arr: qtc.libqt_list = qtc.QPageRanges_ToRangeList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPageRanges__Range, _arr.len) catch @panic("QPageRanges.toRangeList: Memory allocation failed");
        const _data_val: [*]QtC.QPageRanges__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn clear(self: QPageRanges) void {
        qtc.QPageRanges_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QPageRanges, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPageRanges_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPageRanges.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` ranges: []const u8 `
    ///
    pub fn fromString(ranges: []const u8) QPageRanges {
        const ranges_str = qtc.libqt_string{
            .len = ranges.len,
            .data = ranges.ptr,
        };
        return .{ .ptr = qtc.QPageRanges_FromString(ranges_str) };
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn contains(self: QPageRanges, pageNumber: i32) bool {
        return qtc.QPageRanges_Contains(@ptrCast(self.ptr), @bitCast(pageNumber));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn isEmpty(self: QPageRanges) bool {
        return qtc.QPageRanges_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `firstPage` instead
    ///
    pub const FirstPage = firstPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#firstPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn firstPage(self: QPageRanges) i32 {
        return qtc.QPageRanges_FirstPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastPage` instead
    ///
    pub const LastPage = lastPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#lastPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn lastPage(self: QPageRanges) i32 {
        return qtc.QPageRanges_LastPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn detach(self: QPageRanges) void {
        qtc.QPageRanges_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#dtor.QPageRanges)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageRanges `
    ///
    pub fn delete(self: QPageRanges) void {
        qtc.QPageRanges_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html)
pub const QPageRanges__Range = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPageRanges__Range,

    pub const _is_QPageRanges__Range = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPageRanges::Range object in C++ memory
    ///
    pub fn new() QPageRanges__Range {
        return .{ .ptr = qtc.QPageRanges__Range_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPageRanges::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn new2(other: anytype) QPageRanges__Range {
        comptime _ = @TypeOf(other)._is_QPageRanges__Range;
        return .{ .ptr = qtc.QPageRanges__Range_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPageRanges::Range object and invalidate the source QPageRanges::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn new3(other: anytype) QPageRanges__Range {
        comptime _ = @TypeOf(other)._is_QPageRanges__Range;
        return .{ .ptr = qtc.QPageRanges__Range_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPageRanges::Range object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPageRanges__Range `
    ///
    pub fn new4(param1: anytype) QPageRanges__Range {
        comptime _ = @TypeOf(param1)._is_QPageRanges__Range;
        return .{ .ptr = qtc.QPageRanges__Range_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn copyAssign(self: QPageRanges__Range, other: QPageRanges__Range) void {
        qtc.QPageRanges__Range_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn moveAssign(self: QPageRanges__Range, other: QPageRanges__Range) void {
        qtc.QPageRanges__Range_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `from` instead
    ///
    pub const From = from;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#from-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    pub fn from(self: QPageRanges__Range) i32 {
        return qtc.QPageRanges__Range_From(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrom` instead
    ///
    pub const SetFrom = setFrom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#from-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` _from: i32 `
    ///
    pub fn setFrom(self: QPageRanges__Range, _from: i32) void {
        qtc.QPageRanges__Range_SetFrom(@ptrCast(self.ptr), @bitCast(_from));
    }

    /// ### DEPRECATED: Use `to` instead
    ///
    pub const To = to;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#to-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    pub fn to(self: QPageRanges__Range) i32 {
        return qtc.QPageRanges__Range_To(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTo` instead
    ///
    pub const SetTo = setTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#to-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` _to: i32 `
    ///
    pub fn setTo(self: QPageRanges__Range, _to: i32) void {
        qtc.QPageRanges__Range_SetTo(@ptrCast(self.ptr), @bitCast(_to));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn contains(self: QPageRanges__Range, pageNumber: i32) bool {
        return qtc.QPageRanges__Range_Contains(@ptrCast(self.ptr), @bitCast(pageNumber));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageRanges__Range `
    ///
    pub fn delete(self: QPageRanges__Range) void {
        qtc.QPageRanges__Range_Delete(@ptrCast(self.ptr));
    }
};
