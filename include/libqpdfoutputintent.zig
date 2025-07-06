const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qpdfoutputintent.html
pub const qpdfoutputintent = struct {
    /// New constructs a new QPdfOutputIntent object.
    ///
    ///
    pub fn New() QtC.QPdfOutputIntent {
        return qtc.QPdfOutputIntent_new();
    }

    /// New2 constructs a new QPdfOutputIntent object.
    ///
    /// ``` other: QtC.QPdfOutputIntent ```
    pub fn New2(other: ?*anyopaque) QtC.QPdfOutputIntent {
        return qtc.QPdfOutputIntent_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator=)
    ///
    /// ``` self: QtC.QPdfOutputIntent, other: QtC.QPdfOutputIntent ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfOutputIntent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
    ///
    /// ``` self: QtC.QPdfOutputIntent, other: QtC.QPdfOutputIntent ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfOutputIntent_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
    ///
    /// ``` self: QtC.QPdfOutputIntent, allocator: std.mem.Allocator ```
    pub fn OutputConditionIdentifier(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfOutputIntent_OutputConditionIdentifier(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputConditionIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
    ///
    /// ``` self: QtC.QPdfOutputIntent, identifier: []const u8 ```
    pub fn SetOutputConditionIdentifier(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.struct_libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputConditionIdentifier(@ptrCast(self), identifier_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
    ///
    /// ``` self: QtC.QPdfOutputIntent, allocator: std.mem.Allocator ```
    pub fn OutputCondition(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfOutputIntent_OutputCondition(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputCondition: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
    ///
    /// ``` self: QtC.QPdfOutputIntent, condition: []const u8 ```
    pub fn SetOutputCondition(self: ?*anyopaque, condition: []const u8) void {
        const condition_str = qtc.struct_libqt_string{
            .len = condition.len,
            .data = condition.ptr,
        };
        qtc.QPdfOutputIntent_SetOutputCondition(@ptrCast(self), condition_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
    ///
    /// ``` self: QtC.QPdfOutputIntent ```
    pub fn RegistryName(self: ?*anyopaque) QtC.QUrl {
        return qtc.QPdfOutputIntent_RegistryName(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
    ///
    /// ``` self: QtC.QPdfOutputIntent, name: QtC.QUrl ```
    pub fn SetRegistryName(self: ?*anyopaque, name: ?*anyopaque) void {
        qtc.QPdfOutputIntent_SetRegistryName(@ptrCast(self), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
    ///
    /// ``` self: QtC.QPdfOutputIntent ```
    pub fn OutputProfile(self: ?*anyopaque) QtC.QColorSpace {
        return qtc.QPdfOutputIntent_OutputProfile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
    ///
    /// ``` self: QtC.QPdfOutputIntent, profile: QtC.QColorSpace ```
    pub fn SetOutputProfile(self: ?*anyopaque, profile: ?*anyopaque) void {
        qtc.QPdfOutputIntent_SetOutputProfile(@ptrCast(self), @ptrCast(profile));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#dtor.QPdfOutputIntent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPdfOutputIntent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfOutputIntent_Delete(@ptrCast(self));
    }
};
