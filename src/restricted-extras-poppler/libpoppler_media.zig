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

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn isValid(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contentType` instead
    ///
    pub const ContentType = contentType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contentType(self: Poppler__MediaRendition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MediaRendition_ContentType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MediaRendition.contentType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: Poppler__MediaRendition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MediaRendition_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MediaRendition.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmbedded` instead
    ///
    pub const IsEmbedded = isEmbedded;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn isEmbedded(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_IsEmbedded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: Poppler__MediaRendition, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__MediaRendition_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__MediaRendition.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `autoPlay` instead
    ///
    pub const AutoPlay = autoPlay;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn autoPlay(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_AutoPlay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showControls` instead
    ///
    pub const ShowControls = showControls;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn showControls(self: Poppler__MediaRendition) bool {
        return qtc.Poppler__MediaRendition_ShowControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repeatCount` instead
    ///
    pub const RepeatCount = repeatCount;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn repeatCount(self: Poppler__MediaRendition) f32 {
        return qtc.Poppler__MediaRendition_RepeatCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn size(self: Poppler__MediaRendition) QSize {
        return .{ .ptr = qtc.Poppler__MediaRendition_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__MediaRendition `
    ///
    pub fn delete(self: Poppler__MediaRendition) void {
        qtc.Poppler__MediaRendition_Delete(@ptrCast(self.ptr));
    }
};
