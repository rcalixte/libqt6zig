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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfOutputIntent object in C++ memory
    ///
    pub fn new() QPdfOutputIntent {
        return .{ .ptr = qtc.QPdfOutputIntent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPdfOutputIntent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfOutputIntent `
    ///
    pub fn new2(other: anytype) QPdfOutputIntent {
        comptime _ = @TypeOf(other)._is_QPdfOutputIntent;
        return .{ .ptr = qtc.QPdfOutputIntent_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` other: QPdfOutputIntent `
    ///
    pub fn operatorAssign(self: QPdfOutputIntent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfOutputIntent;
        qtc.QPdfOutputIntent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` other: QPdfOutputIntent `
    ///
    pub fn swap(self: QPdfOutputIntent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPdfOutputIntent;
        qtc.QPdfOutputIntent_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `outputConditionIdentifier` instead
    ///
    pub const OutputConditionIdentifier = outputConditionIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn outputConditionIdentifier(self: QPdfOutputIntent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfOutputIntent_OutputConditionIdentifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfOutputIntent.outputConditionIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOutputConditionIdentifier` instead
    ///
    pub const SetOutputConditionIdentifier = setOutputConditionIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn setOutputConditionIdentifier(self: QPdfOutputIntent, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputConditionIdentifier(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `outputCondition` instead
    ///
    pub const OutputCondition = outputCondition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn outputCondition(self: QPdfOutputIntent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPdfOutputIntent_OutputCondition(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfOutputIntent.outputCondition: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOutputCondition` instead
    ///
    pub const SetOutputCondition = setOutputCondition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` condition: []const u8 `
    ///
    pub fn setOutputCondition(self: QPdfOutputIntent, condition: []const u8) void {
        const condition_str = qtc.libqt_string{
            .len = condition.len,
            .data = condition.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputCondition(@ptrCast(self.ptr), condition_str);
    }

    /// ### DEPRECATED: Use `registryName` instead
    ///
    pub const RegistryName = registryName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    pub fn registryName(self: QPdfOutputIntent) QUrl {
        return .{ .ptr = qtc.QPdfOutputIntent_RegistryName(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRegistryName` instead
    ///
    pub const SetRegistryName = setRegistryName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` name: QUrl `
    ///
    pub fn setRegistryName(self: QPdfOutputIntent, name: anytype) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        qtc.QPdfOutputIntent_SetRegistryName(@ptrCast(self.ptr), @ptrCast(name.ptr));
    }

    /// ### DEPRECATED: Use `outputProfile` instead
    ///
    pub const OutputProfile = outputProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    pub fn outputProfile(self: QPdfOutputIntent) QColorSpace {
        return .{ .ptr = qtc.QPdfOutputIntent_OutputProfile(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOutputProfile` instead
    ///
    pub const SetOutputProfile = setOutputProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfOutputIntent `
    ///
    /// ` profile: QColorSpace `
    ///
    pub fn setOutputProfile(self: QPdfOutputIntent, profile: anytype) void {
        comptime _ = @TypeOf(profile)._is_QColorSpace;
        qtc.QPdfOutputIntent_SetOutputProfile(@ptrCast(self.ptr), @ptrCast(profile.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#dtor.QPdfOutputIntent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfOutputIntent `
    ///
    pub fn delete(self: QPdfOutputIntent) void {
        qtc.QPdfOutputIntent_Delete(@ptrCast(self.ptr));
    }
};
