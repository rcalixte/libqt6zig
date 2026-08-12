const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html)
pub const QSslEllipticCurve = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslEllipticCurve,

    pub const _is_QSslEllipticCurve = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslEllipticCurve object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn new(other: anytype) QSslEllipticCurve {
        comptime _ = @TypeOf(other)._is_QSslEllipticCurve;
        return .{ .ptr = qtc.QSslEllipticCurve_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslEllipticCurve object and invalidate the source QSslEllipticCurve object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn new2(other: anytype) QSslEllipticCurve {
        comptime _ = @TypeOf(other)._is_QSslEllipticCurve;
        return .{ .ptr = qtc.QSslEllipticCurve_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSslEllipticCurve object in C++ memory
    ///
    pub fn new3() QSslEllipticCurve {
        return .{ .ptr = qtc.QSslEllipticCurve_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSslEllipticCurve object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSslEllipticCurve `
    ///
    pub fn new4(param1: anytype) QSslEllipticCurve {
        comptime _ = @TypeOf(param1)._is_QSslEllipticCurve;
        return .{ .ptr = qtc.QSslEllipticCurve_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn copyAssign(self: QSslEllipticCurve, other: QSslEllipticCurve) void {
        qtc.QSslEllipticCurve_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn moveAssign(self: QSslEllipticCurve, other: QSslEllipticCurve) void {
        qtc.QSslEllipticCurve_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromShortName` instead
    ///
    pub const FromShortName = fromShortName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromShortName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn fromShortName(name: []const u8) QSslEllipticCurve {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSslEllipticCurve_FromShortName(name_str) };
    }

    /// ### DEPRECATED: Use `fromLongName` instead
    ///
    pub const FromLongName = fromLongName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromLongName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn fromLongName(name: []const u8) QSslEllipticCurve {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSslEllipticCurve_FromLongName(name_str) };
    }

    /// ### DEPRECATED: Use `shortName` instead
    ///
    pub const ShortName = shortName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#shortName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortName(self: QSslEllipticCurve, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslEllipticCurve_ShortName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslEllipticCurve.shortName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `longName` instead
    ///
    pub const LongName = longName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#longName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn longName(self: QSslEllipticCurve, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslEllipticCurve_LongName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslEllipticCurve.longName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    pub fn isValid(self: QSslEllipticCurve) bool {
        return qtc.QSslEllipticCurve_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTlsNamedCurve` instead
    ///
    pub const IsTlsNamedCurve = isTlsNamedCurve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#isTlsNamedCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    pub fn isTlsNamedCurve(self: QSslEllipticCurve) bool {
        return qtc.QSslEllipticCurve_IsTlsNamedCurve(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#dtor.QSslEllipticCurve)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslEllipticCurve `
    ///
    pub fn delete(self: QSslEllipticCurve) void {
        qtc.QSslEllipticCurve_Delete(@ptrCast(self.ptr));
    }
};
