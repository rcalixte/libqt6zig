const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qversionnumber.html
pub const qversionnumber = struct {
    /// New constructs a new QVersionNumber object.
    ///
    ///
    pub fn New() QtC.QVersionNumber {
        return qtc.QVersionNumber_new();
    }

    /// New2 constructs a new QVersionNumber object.
    ///
    /// ``` seg: []i32 ```
    pub fn New2(seg: []i32) QtC.QVersionNumber {
        const seg_list = qtc.struct_libqt_list{
            .len = seg.len,
            .data = seg.ptr,
        };

        return qtc.QVersionNumber_new2(seg_list);
    }

    /// New3 constructs a new QVersionNumber object.
    ///
    /// ``` maj: i32 ```
    pub fn New3(maj: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new3(@intCast(maj));
    }

    /// New4 constructs a new QVersionNumber object.
    ///
    /// ``` maj: i32, min: i32 ```
    pub fn New4(maj: i32, min: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new4(@intCast(maj), @intCast(min));
    }

    /// New5 constructs a new QVersionNumber object.
    ///
    /// ``` maj: i32, min: i32, mic: i32 ```
    pub fn New5(maj: i32, min: i32, mic: i32) QtC.QVersionNumber {
        return qtc.QVersionNumber_new5(@intCast(maj), @intCast(min), @intCast(mic));
    }

    /// New6 constructs a new QVersionNumber object.
    ///
    /// ``` param1: QtC.QVersionNumber ```
    pub fn New6(param1: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_new6(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn IsNormalized(self: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsNormalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QVersionNumber_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QVersionNumber_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QVersionNumber_MicroVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn Normalized(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segments)
    ///
    /// ``` self: QtC.QVersionNumber, allocator: std.mem.Allocator ```
    pub fn Segments(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QVersionNumber_Segments(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qversionnumber.Segments: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
    ///
    /// ``` self: QtC.QVersionNumber, index: i64 ```
    pub fn SegmentAt(self: ?*anyopaque, index: i64) i32 {
        return qtc.QVersionNumber_SegmentAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn SegmentCount(self: ?*anyopaque) i64 {
        return qtc.QVersionNumber_SegmentCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
    ///
    /// ``` self: QtC.QVersionNumber, other: QtC.QVersionNumber ```
    pub fn IsPrefixOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVersionNumber_IsPrefixOf(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#compare)
    ///
    /// ``` v1: QtC.QVersionNumber, v2: QtC.QVersionNumber ```
    pub fn Compare(v1: ?*anyopaque, v2: ?*anyopaque) i32 {
        return qtc.QVersionNumber_Compare(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
    ///
    /// ``` v1: QtC.QVersionNumber, v2: QtC.QVersionNumber ```
    pub fn CommonPrefix(v1: ?*anyopaque, v2: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_CommonPrefix(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#toString)
    ///
    /// ``` self: QtC.QVersionNumber, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVersionNumber_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qversionnumber.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromString(stringVal: []const u8) QtC.QVersionNumber {
        return qtc.QVersionNumber_FromString(@constCast(stringVal.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ``` stringVal: []const u8, suffixIndex: ?*i64 ```
    pub fn FromString2(stringVal: []const u8, suffixIndex: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QVersionNumber_FromString2(@constCast(stringVal.ptr), @intCast(suffixIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#dtor.QVersionNumber)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVersionNumber ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVersionNumber_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtyperevision.html
pub const qtyperevision = struct {
    /// New constructs a new QTypeRevision object.
    ///
    /// ``` other: QtC.QTypeRevision ```
    pub fn New(other: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new(@ptrCast(other));
    }

    /// New2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
    ///
    /// ``` other: QtC.QTypeRevision ```
    pub fn New2(other: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTypeRevision object.
    ///
    ///
    pub fn New3() QtC.QTypeRevision {
        return qtc.QTypeRevision_new3();
    }

    /// New4 constructs a new QTypeRevision object.
    ///
    /// ``` param1: QtC.QTypeRevision ```
    pub fn New4(param1: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTypeRevision, other: QtC.QTypeRevision ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTypeRevision_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTypeRevision, other: QtC.QTypeRevision ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTypeRevision_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#zero)
    ///
    ///
    pub fn Zero() QtC.QTypeRevision {
        return qtc.QTypeRevision_Zero();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
    ///
    /// ``` self: QtC.QTypeRevision ```
    pub fn HasMajorVersion(self: ?*anyopaque) bool {
        return qtc.QTypeRevision_HasMajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
    ///
    /// ``` self: QtC.QTypeRevision ```
    pub fn MajorVersion(self: ?*anyopaque) u8 {
        return qtc.QTypeRevision_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
    ///
    /// ``` self: QtC.QTypeRevision ```
    pub fn HasMinorVersion(self: ?*anyopaque) bool {
        return qtc.QTypeRevision_HasMinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
    ///
    /// ``` self: QtC.QTypeRevision ```
    pub fn MinorVersion(self: ?*anyopaque) u8 {
        return qtc.QTypeRevision_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
    ///
    /// ``` self: QtC.QTypeRevision ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTypeRevision_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#dtor.QTypeRevision)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTypeRevision ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTypeRevision_Delete(@ptrCast(self));
    }
};
