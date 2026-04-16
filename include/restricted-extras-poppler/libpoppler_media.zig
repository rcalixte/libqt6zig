const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSize = @import("libqt6").QSize;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
pub const Poppler__MediaRendition = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__MediaRendition,

    pub const _is_Poppler__MediaRendition = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn IsValid(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContentType(self: Poppler__MediaRendition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MediaRendition_ContentType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__mediarendition.ContentType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: Poppler__MediaRendition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MediaRendition_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__mediarendition.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn IsEmbedded(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_IsEmbedded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: Poppler__MediaRendition, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__MediaRendition_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__mediarendition.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn AutoPlay(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_AutoPlay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn ShowControls(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_ShowControls(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn RepeatCount(self: Poppler__MediaRendition) f32 {
        return qtc.Poppler__MediaRendition_RepeatCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn Size(self: Poppler__MediaRendition) QSize {
        return .{ .ptr = qtc.Poppler__MediaRendition_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn Delete(self: Poppler__MediaRendition) void {
        qtc.Poppler__MediaRendition_Delete(@ptrCast(self.ptr));
    }
};
