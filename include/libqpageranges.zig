const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html)
pub const qpageranges = struct {
    /// New constructs a new QPageRanges object.
    ///
    pub fn New() QtC.QPageRanges {
        return qtc.QPageRanges_new();
    }

    /// New2 constructs a new QPageRanges object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPageRanges `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPageRanges {
        return qtc.QPageRanges_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` other: QtC.QPageRanges `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` other: QtC.QPageRanges `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#addPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn AddPage(self: ?*anyopaque, pageNumber: i32) void {
        qtc.QPageRanges_AddPage(@ptrCast(self), @intCast(pageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#addRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` from: i32 `
    ///
    /// ` to: i32 `
    ///
    pub fn AddRange(self: ?*anyopaque, from: i32, to: i32) void {
        qtc.QPageRanges_AddRange(@ptrCast(self), @intCast(from), @intCast(to));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#toRangeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRangeList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPageRanges__Range {
        const _arr: qtc.libqt_list = qtc.QPageRanges_ToRangeList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPageRanges__Range, _arr.len) catch @panic("qpageranges.ToRangeList: Memory allocation failed");
        const _data: [*]QtC.QPageRanges__Range = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPageRanges_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPageRanges_ToString(@ptrCast(self));
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
    pub fn FromString(ranges: []const u8) QtC.QPageRanges {
        const ranges_str = qtc.libqt_string{
            .len = ranges.len,
            .data = ranges.ptr,
        };
        return qtc.QPageRanges_FromString(ranges_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn Contains(self: ?*anyopaque, pageNumber: i32) bool {
        return qtc.QPageRanges_Contains(@ptrCast(self), @intCast(pageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPageRanges_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#firstPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    pub fn FirstPage(self: ?*anyopaque) i32 {
        return qtc.QPageRanges_FirstPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#lastPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    pub fn LastPage(self: ?*anyopaque) i32 {
        return qtc.QPageRanges_LastPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPageRanges_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges.html#dtor.QPageRanges)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPageRanges `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageRanges_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html)
pub const qpageranges__range = struct {
    /// New constructs a new QPageRanges::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPageRanges__Range `
    ///
    pub fn New(other: ?*anyopaque) QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new(@ptrCast(other));
    }

    /// New2 constructs a new QPageRanges::Range object and invalidates the source QPageRanges::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPageRanges__Range `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPageRanges::Range object.
    ///
    pub fn New3() QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new3();
    }

    /// New4 constructs a new QPageRanges::Range object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPageRanges__Range `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QPageRanges__Range {
        return qtc.QPageRanges__Range_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    /// ` other: QtC.QPageRanges__Range `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges__Range_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    /// ` other: QtC.QPageRanges__Range `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageRanges__Range_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#from-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    pub fn From(self: ?*anyopaque) i32 {
        return qtc.QPageRanges__Range_From(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#from-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    /// ` from: i32 `
    ///
    pub fn SetFrom(self: ?*anyopaque, from: i32) void {
        qtc.QPageRanges__Range_SetFrom(@ptrCast(self), @intCast(from));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#to-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    pub fn To(self: ?*anyopaque) i32 {
        return qtc.QPageRanges__Range_To(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#to-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    /// ` to: i32 `
    ///
    pub fn SetTo(self: ?*anyopaque, to: i32) void {
        qtc.QPageRanges__Range_SetTo(@ptrCast(self), @intCast(to));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpageranges-range.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    /// ` pageNumber: i32 `
    ///
    pub fn Contains(self: ?*anyopaque, pageNumber: i32) bool {
        return qtc.QPageRanges__Range_Contains(@ptrCast(self), @intCast(pageNumber));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPageRanges__Range `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageRanges__Range_Delete(@ptrCast(self));
    }
};
