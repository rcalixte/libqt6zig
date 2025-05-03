const C = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qversionnumber.html
pub const qversionnumber = struct {
    /// New constructs a new QVersionNumber object.
    ///
    ///
    pub fn New() ?*C.QVersionNumber {
        return C.QVersionNumber_new();
    }

    /// New2 constructs a new QVersionNumber object.
    ///
    /// ``` seg: []i32 ```
    pub fn New2(seg: []i32) ?*C.QVersionNumber {
        const seg_list = C.struct_libqt_list{
            .len = seg.len,
            .data = seg.ptr,
        };

        return C.QVersionNumber_new2(seg_list);
    }

    /// New3 constructs a new QVersionNumber object.
    ///
    /// ``` maj: i32 ```
    pub fn New3(maj: i32) ?*C.QVersionNumber {
        return C.QVersionNumber_new3(@intCast(maj));
    }

    /// New4 constructs a new QVersionNumber object.
    ///
    /// ``` maj: i32, min: i32 ```
    pub fn New4(maj: i32, min: i32) ?*C.QVersionNumber {
        return C.QVersionNumber_new4(@intCast(maj), @intCast(min));
    }

    /// New5 constructs a new QVersionNumber object.
    ///
    /// ``` maj: i32, min: i32, mic: i32 ```
    pub fn New5(maj: i32, min: i32, mic: i32) ?*C.QVersionNumber {
        return C.QVersionNumber_new5(@intCast(maj), @intCast(min), @intCast(mic));
    }

    /// New6 constructs a new QVersionNumber object.
    ///
    /// ``` param1: ?*C.QVersionNumber ```
    pub fn New6(param1: ?*anyopaque) ?*C.QVersionNumber {
        return C.QVersionNumber_new6(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return C.QVersionNumber_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn IsNormalized(self: ?*anyopaque) bool {
        return C.QVersionNumber_IsNormalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return C.QVersionNumber_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return C.QVersionNumber_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return C.QVersionNumber_MicroVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn Normalized(self: ?*anyopaque) ?*C.QVersionNumber {
        return C.QVersionNumber_Normalized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segments)
    ///
    /// ``` self: ?*C.QVersionNumber, allocator: std.mem.Allocator ```
    pub fn Segments(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: C.struct_libqt_list = C.QVersionNumber_Segments(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
    ///
    /// ``` self: ?*C.QVersionNumber, index: i64 ```
    pub fn SegmentAt(self: ?*anyopaque, index: i64) i32 {
        return C.QVersionNumber_SegmentAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn SegmentCount(self: ?*anyopaque) i64 {
        return C.QVersionNumber_SegmentCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
    ///
    /// ``` self: ?*C.QVersionNumber, other: ?*C.QVersionNumber ```
    pub fn IsPrefixOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QVersionNumber_IsPrefixOf(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#compare)
    ///
    /// ``` v1: ?*C.QVersionNumber, v2: ?*C.QVersionNumber ```
    pub fn Compare(v1: ?*anyopaque, v2: ?*anyopaque) i32 {
        return C.QVersionNumber_Compare(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
    ///
    /// ``` v1: ?*C.QVersionNumber, v2: ?*C.QVersionNumber ```
    pub fn CommonPrefix(v1: ?*anyopaque, v2: ?*anyopaque) ?*C.QVersionNumber {
        return C.QVersionNumber_CommonPrefix(@ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#toString)
    ///
    /// ``` self: ?*C.QVersionNumber, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QVersionNumber_ToString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromString(stringVal: []const u8) ?*C.QVersionNumber {
        return C.QVersionNumber_FromString(@constCast(stringVal.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
    ///
    /// ``` stringVal: []const u8, suffixIndex: ?*i64 ```
    pub fn FromString2(stringVal: []const u8, suffixIndex: ?*anyopaque) ?*C.QVersionNumber {
        return C.QVersionNumber_FromString2(@constCast(stringVal.ptr), @intCast(suffixIndex));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QVersionNumber ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QVersionNumber_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtyperevision.html
pub const qtyperevision = struct {
    /// New constructs a new QTypeRevision object.
    ///
    /// ``` other: ?*C.QTypeRevision ```
    pub fn New(other: ?*anyopaque) ?*C.QTypeRevision {
        return C.QTypeRevision_new(@ptrCast(other));
    }

    /// New2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
    ///
    /// ``` other: ?*C.QTypeRevision ```
    pub fn New2(other: ?*anyopaque) ?*C.QTypeRevision {
        return C.QTypeRevision_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTypeRevision object.
    ///
    ///
    pub fn New3() ?*C.QTypeRevision {
        return C.QTypeRevision_new3();
    }

    /// New4 constructs a new QTypeRevision object.
    ///
    /// ``` param1: ?*C.QTypeRevision ```
    pub fn New4(param1: ?*anyopaque) ?*C.QTypeRevision {
        return C.QTypeRevision_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QTypeRevision, other: ?*QTypeRevision ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTypeRevision_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QTypeRevision, other: ?*QTypeRevision ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTypeRevision_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#zero)
    ///
    ///
    pub fn Zero() ?*C.QTypeRevision {
        return C.QTypeRevision_Zero();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
    ///
    /// ``` self: ?*C.QTypeRevision ```
    pub fn HasMajorVersion(self: ?*anyopaque) bool {
        return C.QTypeRevision_HasMajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
    ///
    /// ``` self: ?*C.QTypeRevision ```
    pub fn MajorVersion(self: ?*anyopaque) u8 {
        return C.QTypeRevision_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
    ///
    /// ``` self: ?*C.QTypeRevision ```
    pub fn HasMinorVersion(self: ?*anyopaque) bool {
        return C.QTypeRevision_HasMinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
    ///
    /// ``` self: ?*C.QTypeRevision ```
    pub fn MinorVersion(self: ?*anyopaque) u8 {
        return C.QTypeRevision_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
    ///
    /// ``` self: ?*C.QTypeRevision ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QTypeRevision_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTypeRevision ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTypeRevision_Delete(@ptrCast(self));
    }
};
