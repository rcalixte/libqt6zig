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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVersionNumber object in C++ memory
    ///
    pub fn new() QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVersionNumber object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` args: []i32 `
    ///
    pub fn new2(args: []i32) QVersionNumber {
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args.ptr,
        };
        return .{ .ptr = qtc.QVersionNumber_new2(args_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QVersionNumber object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    pub fn new3(maj: i32) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new3(@bitCast(maj)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QVersionNumber object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    /// ` min: i32 `
    ///
    pub fn new4(maj: i32, min: i32) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new4(@bitCast(maj), @bitCast(min)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QVersionNumber object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` maj: i32 `
    ///
    /// ` min: i32 `
    ///
    /// ` mic: i32 `
    ///
    pub fn new5(maj: i32, min: i32, mic: i32) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_new5(@bitCast(maj), @bitCast(min), @bitCast(mic)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QVersionNumber object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QVersionNumber `
    ///
    pub fn new6(param1: anytype) QVersionNumber {
        comptime _ = @TypeOf(param1)._is_QVersionNumber;
        return .{ .ptr = qtc.QVersionNumber_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn isNull(self: QVersionNumber) bool {
        return qtc.QVersionNumber_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNormalized` instead
    ///
    pub const IsNormalized = isNormalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn isNormalized(self: QVersionNumber) bool {
        return qtc.QVersionNumber_IsNormalized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `majorVersion` instead
    ///
    pub const MajorVersion = majorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn majorVersion(self: QVersionNumber) i32 {
        return qtc.QVersionNumber_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minorVersion` instead
    ///
    pub const MinorVersion = minorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn minorVersion(self: QVersionNumber) i32 {
        return qtc.QVersionNumber_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `microVersion` instead
    ///
    pub const MicroVersion = microVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn microVersion(self: QVersionNumber) i32 {
        return qtc.QVersionNumber_MicroVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `normalized` instead
    ///
    pub const Normalized = normalized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn normalized(self: QVersionNumber) QVersionNumber {
        return .{ .ptr = qtc.QVersionNumber_Normalized(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `segments` instead
    ///
    pub const Segments = segments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn segments(self: QVersionNumber, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QVersionNumber_Segments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QVersionNumber.segments: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `segmentAt` instead
    ///
    pub const SegmentAt = segmentAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` index: isize `
    ///
    pub fn segmentAt(self: QVersionNumber, index: isize) i32 {
        return qtc.QVersionNumber_SegmentAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `segmentCount` instead
    ///
    pub const SegmentCount = segmentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn segmentCount(self: QVersionNumber) isize {
        return qtc.QVersionNumber_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPrefixOf` instead
    ///
    pub const IsPrefixOf = isPrefixOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` other: QVersionNumber `
    ///
    pub fn isPrefixOf(self: QVersionNumber, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QVersionNumber;
        return qtc.QVersionNumber_IsPrefixOf(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVersionNumber `
    ///
    /// ` v2: QVersionNumber `
    ///
    pub fn compare(v1: anytype, v2: anytype) i32 {
        comptime _ = @TypeOf(v1)._is_QVersionNumber;
        comptime _ = @TypeOf(v2)._is_QVersionNumber;
        return qtc.QVersionNumber_Compare(@ptrCast(v1.ptr), @ptrCast(v2.ptr));
    }

    /// ### DEPRECATED: Use `commonPrefix` instead
    ///
    pub const CommonPrefix = commonPrefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` v1: QVersionNumber `
    ///
    /// ` v2: QVersionNumber `
    ///
    pub fn commonPrefix(v1: anytype, v2: anytype) QVersionNumber {
        comptime _ = @TypeOf(v1)._is_QVersionNumber;
        comptime _ = @TypeOf(v2)._is_QVersionNumber;
        return .{ .ptr = qtc.QVersionNumber_CommonPrefix(@ptrCast(v1.ptr), @ptrCast(v2.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVersionNumber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QVersionNumber, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVersionNumber_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVersionNumber.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QVersionNumber {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QVersionNumber_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `fromString2` instead
    ///
    pub const FromString2 = fromString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` suffixIndex: *isize `
    ///
    pub fn fromString2(string: []const u8, suffixIndex: *isize) QVersionNumber {
        switch (builtin.target.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QVersionNumber_FromString2(string_str, @ptrCast(suffixIndex)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#dtor.QVersionNumber)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVersionNumber `
    ///
    pub fn delete(self: QVersionNumber) void {
        qtc.QVersionNumber_Delete(@ptrCast(self.ptr));
    }
};
