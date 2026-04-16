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

    /// New constructs a new QSslEllipticCurve object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn New(other: anytype) QSslEllipticCurve {
        comptime _ = @TypeOf(other)._is_QSslEllipticCurve;
        return .{ .ptr = qtc.QSslEllipticCurve_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QSslEllipticCurve object and invalidates the source QSslEllipticCurve object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn New2(other: anytype) QSslEllipticCurve {
        comptime _ = @TypeOf(other)._is_QSslEllipticCurve;
        return .{ .ptr = qtc.QSslEllipticCurve_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSslEllipticCurve object.
    ///
    pub fn New3() QSslEllipticCurve {
        return .{ .ptr = qtc.QSslEllipticCurve_new3() };
    }

    /// New4 constructs a new QSslEllipticCurve object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSslEllipticCurve `
    ///
    pub fn New4(param1: anytype) QSslEllipticCurve {
        comptime _ = @TypeOf(param1)._is_QSslEllipticCurve;
        return .{ .ptr = qtc.QSslEllipticCurve_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn CopyAssign(self: QSslEllipticCurve, other: QSslEllipticCurve) void {
        qtc.QSslEllipticCurve_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` other: QSslEllipticCurve `
    ///
    pub fn MoveAssign(self: QSslEllipticCurve, other: QSslEllipticCurve) void {
        qtc.QSslEllipticCurve_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromShortName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromShortName(name: []const u8) QSslEllipticCurve {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSslEllipticCurve_FromShortName(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromLongName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromLongName(name: []const u8) QSslEllipticCurve {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSslEllipticCurve_FromLongName(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#shortName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ShortName(self: QSslEllipticCurve, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslEllipticCurve_ShortName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslellipticcurve.ShortName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#longName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LongName(self: QSslEllipticCurve, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslEllipticCurve_LongName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslellipticcurve.LongName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    pub fn IsValid(self: QSslEllipticCurve) bool {
        return qtc.QSslEllipticCurve_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#isTlsNamedCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslEllipticCurve `
    ///
    pub fn IsTlsNamedCurve(self: QSslEllipticCurve) bool {
        return qtc.QSslEllipticCurve_IsTlsNamedCurve(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslellipticcurve.html#dtor.QSslEllipticCurve)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslEllipticCurve `
    ///
    pub fn Delete(self: QSslEllipticCurve) void {
        qtc.QSslEllipticCurve_Delete(@ptrCast(self.ptr));
    }
};
