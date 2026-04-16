const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColorSpace = @import("libqt6").QColorSpace;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html)
pub const QPdfOutputIntent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfOutputIntent,

    pub const _is_QPdfOutputIntent = {};

    /// New constructs a new QPdfOutputIntent object.
    ///
    pub fn New() QPdfOutputIntent {
        return .{ .ptr = qtc.QPdfOutputIntent_new() };
    }

    /// New2 constructs a new QPdfOutputIntent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfOutputIntent `
    ///
    pub fn New2(other: anytype) QPdfOutputIntent {
        comptime _ = @TypeOf(other)._is_QPdfOutputIntent;
        return .{ .ptr = qtc.QPdfOutputIntent_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` other: QPdfOutputIntent `
    ///
    pub fn OperatorAssign(self: QPdfOutputIntent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfOutputIntent;
        qtc.QPdfOutputIntent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` other: QPdfOutputIntent `
    ///
    pub fn Swap(self: QPdfOutputIntent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfOutputIntent;
        qtc.QPdfOutputIntent_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputConditionIdentifier(self: QPdfOutputIntent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfOutputIntent_OutputConditionIdentifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputConditionIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetOutputConditionIdentifier(self: QPdfOutputIntent, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputConditionIdentifier(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OutputCondition(self: QPdfOutputIntent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfOutputIntent_OutputCondition(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputCondition: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` condition: []const u8 `
    ///
    pub fn SetOutputCondition(self: QPdfOutputIntent, condition: []const u8) void {
        const condition_str = qtc.libqt_string{
            .len = condition.len,
            .data = condition.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputCondition(@ptrCast(self.ptr), condition_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    pub fn RegistryName(self: QPdfOutputIntent) QUrl {
        return .{ .ptr = qtc.QPdfOutputIntent_RegistryName(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` name: QUrl `
    ///
    pub fn SetRegistryName(self: QPdfOutputIntent, name: anytype) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        qtc.QPdfOutputIntent_SetRegistryName(@ptrCast(self.ptr), @ptrCast(name.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    pub fn OutputProfile(self: QPdfOutputIntent) QColorSpace {
        return .{ .ptr = qtc.QPdfOutputIntent_OutputProfile(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` profile: QColorSpace `
    ///
    pub fn SetOutputProfile(self: QPdfOutputIntent, profile: anytype) void {
        comptime _ = @TypeOf(profile)._is_QColorSpace;
        qtc.QPdfOutputIntent_SetOutputProfile(@ptrCast(self.ptr), @ptrCast(profile.ptr));
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
    /// ` self: QPdfOutputIntent `
    ///
    pub fn Delete(self: QPdfOutputIntent) void {
        qtc.QPdfOutputIntent_Delete(@ptrCast(self.ptr));
    }
};
