const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const builtin = @import("builtin");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)
pub const qversionnumber = struct {
    /// New constructs a new QVersionNumber object.
    ///
    pub fn New() QtC.QVersionNumber {
        return qtc.QVersionNumber_new();
    }

    /// New2 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` args: []i32 `
    ///
    pub fn New2(args: []i32) QtC.QVersionNumber {
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args.ptr,
        };

        return qtc.QVersionNumber_new2(args_list);
    }

    /// New3 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    pub fn New3(maj: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new3(@bitCast(maj));
    }

    /// New4 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    /// ` min: i32 `
    ///
    pub fn New4(maj: i32, min: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new4(@bitCast(maj), @bitCast(min));
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
    pub fn New5(maj: i32, min: i32, mic: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new5(@bitCast(maj), @bitCast(min), @bitCast(mic));
    }

    /// New6 constructs a new QVersionNumber object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QVersionNumber `
    ///
    pub fn New6(param1: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_new6(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn IsNormalized(self: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsNormalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QVersionNumber_MajorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QVersionNumber_MinorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QVersionNumber_MicroVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn Normalized(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_Normalized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Segments(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVersionNumber_Segments(@ptrCast(self));
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
    /// ` self: QtC.QVersionNumber `
    ///
    /// ` index: i64 `
    ///
    pub fn SegmentAt(self: ?*anyopaque, index: i64) i32 {
        return qtc.QVersionNumber_SegmentAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn SegmentCount(self: ?*anyopaque) i64 {
        return qtc.QVersionNumber_SegmentCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    /// ` other: QtC.QVersionNumber `
    ///
    pub fn IsPrefixOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsPrefixOf(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVersionNumber `
    ///
    /// ` v2: QtC.QVersionNumber `
    ///
    pub fn Compare(v1: ?*anyopaque, v2: ?*anyopaque) i32 {
        return qtc.QVersionNumber_Compare(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QtC.QVersionNumber `
    ///
    /// ` v2: QtC.QVersionNumber `
    ///
    pub fn CommonPrefix(v1: ?*anyopaque, v2: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_CommonPrefix(@ptrCast(v1), @ptrCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QVersionNumber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVersionNumber_ToString(@ptrCast(self));
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
    pub fn FromString(stringVal: []const u8) QtC.QVersionNumber {
        return qtc.QVersionNumber_FromString(stringVal.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` suffixIndex: *i64 `
    ///
    pub fn FromString2(stringVal: []const u8, suffixIndex: *i64) QtC.QVersionNumber {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return qtc.QVersionNumber_FromString2(stringVal.ptr, @ptrCast(suffixIndex));
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
    /// ` self: QtC.QVersionNumber `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QVersionNumber_Delete(@ptrCast(self));
    }
};
