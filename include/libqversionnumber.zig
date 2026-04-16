const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const builtin = @import("builtin");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)
pub const QVersionNumber = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVersionNumber,

    pub const _is_QVersionNumber = {};

    /// New constructs a new QVersionNumber object.
    ///
    pub fn New() QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new() };
    }

    /// New2 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` args: []i32 `
    ///
    pub fn New2(args: []i32) QVersionNumber {
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args.ptr,
        };
        return .{ .ptr = qtc.QVersionNumber_new2(args_list) };
    }

    /// New3 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    pub fn New3(maj: i32) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new3(@bitCast(maj)) };
    }

    /// New4 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    /// ` min: i32 `
    ///
    pub fn New4(maj: i32, min: i32) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new4(@bitCast(maj), @bitCast(min)) };
    }

    /// New5 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    /// ` min: i32 `
    ///
    /// ` mic: i32 `
    ///
    pub fn New5(maj: i32, min: i32, mic: i32) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new5(@bitCast(maj), @bitCast(min), @bitCast(mic)) };
    }

    /// New6 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVersionNumber `
    ///
    pub fn New6(param1: anytype) QVersionNumber {
        comptime _ = @TypeOf(param1)._is_QVersionNumber;
        return .{ .ptr = qtc.QVersionNumber_new6(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn IsNull(self: QVersionNumber) bool {
        return qtc.QVersionNumber_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn IsNormalized(self: QVersionNumber) bool {
        return qtc.QVersionNumber_IsNormalized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn MajorVersion(self: QVersionNumber) i32 {
        return qtc.QVersionNumber_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn MinorVersion(self: QVersionNumber) i32 {
        return qtc.QVersionNumber_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn MicroVersion(self: QVersionNumber) i32 {
        return qtc.QVersionNumber_MicroVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn Normalized(self: QVersionNumber) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Segments(self: QVersionNumber, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVersionNumber_Segments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qversionnumber.Segments: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` index: isize `
    ///
    pub fn SegmentAt(self: QVersionNumber, index: isize) i32 {
        return qtc.QVersionNumber_SegmentAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn SegmentCount(self: QVersionNumber) isize {
        return qtc.QVersionNumber_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` other: QVersionNumber `
    ///
    pub fn IsPrefixOf(self: QVersionNumber, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QVersionNumber;
        return qtc.QVersionNumber_IsPrefixOf(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVersionNumber `
    ///
    /// ` v2: QVersionNumber `
    ///
    pub fn Compare(v1: anytype, v2: anytype) i32 {
        comptime _ = @TypeOf(v1)._is_QVersionNumber;
        comptime _ = @TypeOf(v2)._is_QVersionNumber;
        return qtc.QVersionNumber_Compare(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVersionNumber `
    ///
    /// ` v2: QVersionNumber `
    ///
    pub fn CommonPrefix(v1: anytype, v2: anytype) QVersionNumber {
        comptime _ = @TypeOf(v1)._is_QVersionNumber;
        comptime _ = @TypeOf(v2)._is_QVersionNumber;
        return .{ .ptr = qtc.QVersionNumber_CommonPrefix(@ptrCast(v1.ptr), @ptrCast(v2.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QVersionNumber, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVersionNumber_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qversionnumber.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString(stringVal: []const u8) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_FromString(stringVal.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` suffixIndex: *isize `
    ///
    pub fn FromString2(stringVal: []const u8, suffixIndex: *isize) QVersionNumber {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return .{ .ptr = qtc.QVersionNumber_FromString2(stringVal.ptr, @ptrCast(suffixIndex)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#dtor.QVersionNumber)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn Delete(self: QVersionNumber) void {
        qtc.QVersionNumber_Delete(@ptrCast(self.ptr));
    }
};
