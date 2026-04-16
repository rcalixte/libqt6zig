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

    /// New constructs a new QPageRanges object.
    ///
    pub fn New() QPageRanges {
        return .{ .ptr = qtc.QPageRanges_new() };
    }

    /// New2 constructs a new QPageRanges object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageRanges `
    ///
    pub fn New2(other: anytype) QPageRanges {
        comptime _ = @TypeOf(other)._is_QPageRanges;
        return .{ .ptr = qtc.QPageRanges_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` other: QPageRanges `
    ///
    pub fn OperatorAssign(self: QPageRanges, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageRanges;
        qtc.QPageRanges_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` other: QPageRanges `
    ///
    pub fn Swap(self: QPageRanges, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPageRanges;
        qtc.QPageRanges_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#addPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn AddPage(self: QPageRanges, pageNumber: i32) void {
        qtc.QPageRanges_AddPage(@ptrCast(self.ptr), @bitCast(pageNumber));
    }

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
    pub fn AddRange(self: QPageRanges, from: i32, to: i32) void {
        qtc.QPageRanges_AddRange(@ptrCast(self.ptr), @bitCast(from), @bitCast(to));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#toRangeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRangeList(self: QPageRanges, allocator: std.mem.Allocator) []QPageRanges__Range {
        const _arr: qtc.libqt_list = qtc.QPageRanges_ToRangeList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPageRanges__Range, _arr.len) catch @panic("qpageranges.ToRangeList: Memory allocation failed");
        const _data: [*]QtC.QPageRanges__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn Clear(self: QPageRanges) void {
        qtc.QPageRanges_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QPageRanges, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPageRanges_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpageranges.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` ranges: []const u8 `
    ///
    pub fn FromString(ranges: []const u8) QPageRanges {
        const ranges_str = qtc.libqt_string{
            .len = ranges.len,
            .data = ranges.ptr,
        };
        return .{ .ptr = qtc.QPageRanges_FromString(ranges_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn Contains(self: QPageRanges, pageNumber: i32) bool {
        return qtc.QPageRanges_Contains(@ptrCast(self.ptr), @bitCast(pageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn IsEmpty(self: QPageRanges) bool {
        return qtc.QPageRanges_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#firstPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn FirstPage(self: QPageRanges) i32 {
        return qtc.QPageRanges_FirstPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#lastPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn LastPage(self: QPageRanges) i32 {
        return qtc.QPageRanges_LastPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges `
    ///
    pub fn Detach(self: QPageRanges) void {
        qtc.QPageRanges_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#dtor.QPageRanges)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageRanges `
    ///
    pub fn Delete(self: QPageRanges) void {
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

    /// New constructs a new QPageRanges::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn New(other: anytype) QPageRanges__Range {
        comptime _ = @TypeOf(other)._is_QPageRanges__Range;
        return .{ .ptr = qtc.QPageRanges__Range_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPageRanges::Range object and invalidates the source QPageRanges::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn New2(other: anytype) QPageRanges__Range {
        comptime _ = @TypeOf(other)._is_QPageRanges__Range;
        return .{ .ptr = qtc.QPageRanges__Range_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPageRanges::Range object.
    ///
    pub fn New3() QPageRanges__Range {
        return .{ .ptr = qtc.QPageRanges__Range_new3() };
    }

    /// New4 constructs a new QPageRanges::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPageRanges__Range `
    ///
    pub fn New4(param1: anytype) QPageRanges__Range {
        comptime _ = @TypeOf(param1)._is_QPageRanges__Range;
        return .{ .ptr = qtc.QPageRanges__Range_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn CopyAssign(self: QPageRanges__Range, other: QPageRanges__Range) void {
        qtc.QPageRanges__Range_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` other: QPageRanges__Range `
    ///
    pub fn MoveAssign(self: QPageRanges__Range, other: QPageRanges__Range) void {
        qtc.QPageRanges__Range_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#from-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    pub fn From(self: QPageRanges__Range) i32 {
        return qtc.QPageRanges__Range_From(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#from-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` from: i32 `
    ///
    pub fn SetFrom(self: QPageRanges__Range, from: i32) void {
        qtc.QPageRanges__Range_SetFrom(@ptrCast(self.ptr), @bitCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#to-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    pub fn To(self: QPageRanges__Range) i32 {
        return qtc.QPageRanges__Range_To(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#to-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` to: i32 `
    ///
    pub fn SetTo(self: QPageRanges__Range, to: i32) void {
        qtc.QPageRanges__Range_SetTo(@ptrCast(self.ptr), @bitCast(to));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPageRanges__Range `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn Contains(self: QPageRanges__Range, pageNumber: i32) bool {
        return qtc.QPageRanges__Range_Contains(@ptrCast(self.ptr), @bitCast(pageNumber));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPageRanges__Range `
    ///
    pub fn Delete(self: QPageRanges__Range) void {
        qtc.QPageRanges__Range_Delete(@ptrCast(self.ptr));
    }
};
