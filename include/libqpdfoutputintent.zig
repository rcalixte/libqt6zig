const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html)
pub const qpdfoutputintent = struct {
    /// New constructs a new QPdfOutputIntent object.
    ///
    pub fn New() QtC.QPdfOutputIntent {
        return qtc.QPdfOutputIntent_new();
    }

    /// New2 constructs a new QPdfOutputIntent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPdfOutputIntent `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPdfOutputIntent {
        return qtc.QPdfOutputIntent_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` other: QtC.QPdfOutputIntent `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfOutputIntent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` other: QtC.QPdfOutputIntent `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfOutputIntent_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputConditionIdentifier(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfOutputIntent_OutputConditionIdentifier(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputConditionIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetOutputConditionIdentifier(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputConditionIdentifier(@ptrCast(self), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputCondition(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfOutputIntent_OutputCondition(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputCondition: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` condition: []const u8 `
    ///
    pub fn SetOutputCondition(self: ?*anyopaque, condition: []const u8) void {
        const condition_str = qtc.libqt_string{
            .len = condition.len,
            .data = condition.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputCondition(@ptrCast(self), condition_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    pub fn RegistryName(self: ?*anyopaque) QtC.QUrl {
        return qtc.QPdfOutputIntent_RegistryName(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` name: QtC.QUrl `
    ///
    pub fn SetRegistryName(self: ?*anyopaque, name: ?*anyopaque) void {
        qtc.QPdfOutputIntent_SetRegistryName(@ptrCast(self), @ptrCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    pub fn OutputProfile(self: ?*anyopaque) QtC.QColorSpace {
        return qtc.QPdfOutputIntent_OutputProfile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    /// ` profile: QtC.QColorSpace `
    ///
    pub fn SetOutputProfile(self: ?*anyopaque, profile: ?*anyopaque) void {
        qtc.QPdfOutputIntent_SetOutputProfile(@ptrCast(self), @ptrCast(profile));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#dtor.QPdfOutputIntent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPdfOutputIntent `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPdfOutputIntent_Delete(@ptrCast(self));
    }
};
