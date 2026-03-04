const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_annotation_enums = @import("libpoppler_annotation.zig").enums;
const poppler_qt6_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");
const set_i32 = std.AutoHashMapUnmanaged(i32, void);

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
pub const poppler = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn ConvertDate(param1: [:0]const u8) QtC.QDateTime {
        const param1_Cstring = param1.ptr;
        return qtc.Poppler_ConvertDate(param1_Cstring);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn IsCmsAvailable() bool {
        return qtc.Poppler_IsCmsAvailable();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn IsOverprintPreviewAvailable() bool {
        return qtc.Poppler_IsOverprintPreviewAvailable();
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
pub const poppler__textbox = struct {
    /// New constructs a new Poppler::TextBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` bBox: QtC.QRectF `
    ///
    pub fn New(text: []const u8, bBox: ?*anyopaque) QtC.Poppler__TextBox {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.Poppler__TextBox_new(text_str, @ptrCast(bBox));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__TextBox_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textbox.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextBox `
    ///
    pub fn BoundingBox(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__TextBox_BoundingBox(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextBox `
    ///
    pub fn NextWord(self: ?*anyopaque) QtC.Poppler__TextBox {
        return qtc.Poppler__TextBox_NextWord(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextBox `
    ///
    /// ` i: i32 `
    ///
    pub fn CharBoundingBox(self: ?*anyopaque, i: i32) QtC.QRectF {
        return qtc.Poppler__TextBox_CharBoundingBox(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextBox `
    ///
    pub fn HasSpaceAfter(self: ?*anyopaque) bool {
        return qtc.Poppler__TextBox_HasSpaceAfter(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__TextBox `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__TextBox_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
pub const poppler__fontinfo = struct {
    /// New constructs a new Poppler::FontInfo object.
    ///
    pub fn New() QtC.Poppler__FontInfo {
        return qtc.Poppler__FontInfo_new();
    }

    /// New2 constructs a new Poppler::FontInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fi: QtC.Poppler__FontInfo `
    ///
    pub fn New2(fi: ?*anyopaque) QtC.Poppler__FontInfo {
        return qtc.Poppler__FontInfo_new2(@ptrCast(fi));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubstituteName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_SubstituteName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.SubstituteName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn File(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_File(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.File: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    pub fn IsEmbedded(self: ?*anyopaque) bool {
        return qtc.Poppler__FontInfo_IsEmbedded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    pub fn IsSubset(self: ?*anyopaque) bool {
        return qtc.Poppler__FontInfo_IsSubset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__FontInfo_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_TypeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.TypeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    /// ` fi: QtC.Poppler__FontInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, fi: ?*anyopaque) void {
        qtc.Poppler__FontInfo_OperatorAssign(@ptrCast(self), @ptrCast(fi));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FontInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FontInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
pub const poppler__fontiterator = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Next(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__FontInfo {
        const _arr: qtc.libqt_list = qtc.Poppler__FontIterator_Next(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__FontInfo, _arr.len) catch @panic("poppler__fontiterator.Next: Memory allocation failed");
        const _data: [*]QtC.Poppler__FontInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontIterator `
    ///
    pub fn HasNext(self: ?*anyopaque) bool {
        return qtc.Poppler__FontIterator_HasNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FontIterator `
    ///
    pub fn CurrentPage(self: ?*anyopaque) i32 {
        return qtc.Poppler__FontIterator_CurrentPage(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FontIterator `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FontIterator_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
pub const poppler__embeddedfile = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__embeddedfile.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__embeddedfile.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.Poppler__EmbeddedFile_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    pub fn ModDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__EmbeddedFile_ModDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    pub fn CreateDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__EmbeddedFile_CreateDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Checksum(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__EmbeddedFile_Checksum(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__embeddedfile.Checksum: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__embeddedfile.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__EmbeddedFile_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__embeddedfile.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Poppler__EmbeddedFile_IsValid(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__EmbeddedFile `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__EmbeddedFile_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
pub const poppler__page = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn RenderToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` partialUpdateCallback: *const fn (funcparam1: QtC.QImage, funcparam2: QtC.QVariant) callconv(.c) void `
    ///
    /// ` shouldDoPartialUpdateCallback: *const fn (funcparam1: QtC.QVariant) callconv(.c) bool `
    ///
    /// ` payload: QtC.QVariant `
    ///
    pub fn RenderToImage2(self: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, partialUpdateCallback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void, shouldDoPartialUpdateCallback: *const fn (?*anyopaque) callconv(.c) bool, payload: ?*anyopaque) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage2(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(@intFromPtr(partialUpdateCallback)), @bitCast(@intFromPtr(shouldDoPartialUpdateCallback)), @ptrCast(payload));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` partialUpdateCallback: *const fn (funcparam1: QtC.QImage, funcparam2: QtC.QVariant) callconv(.c) void `
    ///
    /// ` shouldDoPartialUpdateCallback: *const fn (funcparam1: QtC.QVariant) callconv(.c) bool `
    ///
    /// ` shouldAbortRenderCallback: *const fn (funcparam1: QtC.QVariant) callconv(.c) bool `
    ///
    /// ` payload: QtC.QVariant `
    ///
    pub fn RenderToImage3(self: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, partialUpdateCallback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void, shouldDoPartialUpdateCallback: *const fn (?*anyopaque) callconv(.c) bool, shouldAbortRenderCallback: *const fn (?*anyopaque) callconv(.c) bool, payload: ?*anyopaque) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage3(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(@intFromPtr(partialUpdateCallback)), @bitCast(@intFromPtr(shouldDoPartialUpdateCallback)), @bitCast(@intFromPtr(shouldAbortRenderCallback)), @ptrCast(payload));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn RenderToPainter(self: ?*anyopaque, painter: ?*anyopaque) bool {
        return qtc.Poppler__Page_RenderToPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn Thumbnail(self: ?*anyopaque) QtC.QImage {
        return qtc.Poppler__Page_Thumbnail(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` textLayout: poppler_qt6_enums.TextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, rect: ?*anyopaque, textLayout: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Page_Text(@ptrCast(self), @ptrCast(rect), @bitCast(textLayout));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__page.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text2(self: ?*anyopaque, rect: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Page_Text2(@ptrCast(self), @ptrCast(rect));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__page.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` text: []const u8 `
    ///
    /// ` sLeft: *f64 `
    ///
    /// ` sTop: *f64 `
    ///
    /// ` sRight: *f64 `
    ///
    /// ` sBottom: *f64 `
    ///
    /// ` direction: poppler_qt6_enums.SearchDirection `
    ///
    pub fn Search(self: ?*anyopaque, text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.Poppler__Page_Search(@ptrCast(self), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` text: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Search2(self: ?*anyopaque, text: []const u8, allocator: std.mem.Allocator) []QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search2(@ptrCast(self), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QRectF, _arr.len) catch @panic("poppler__page.Search2: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__TextBox, _arr.len) catch @panic("poppler__page.TextList: Memory allocation failed");
        const _data: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` shouldAbortExtractionCallback: *const fn (funcparam1: QtC.QVariant) callconv(.c) bool `
    ///
    /// ` closure: QtC.QVariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextList2(self: ?*anyopaque, rotate: i32, shouldAbortExtractionCallback: *const fn (?*anyopaque) callconv(.c) bool, closure: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList2(@ptrCast(self), @bitCast(rotate), @bitCast(@intFromPtr(shouldAbortExtractionCallback)), @ptrCast(closure));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__TextBox, _arr.len) catch @panic("poppler__page.TextList2: Memory allocation failed");
        const _data: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn PageSizeF(self: ?*anyopaque) QtC.QSizeF {
        return qtc.Poppler__Page_PageSizeF(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn PageSize(self: ?*anyopaque) QtC.QSize {
        return qtc.Poppler__Page_PageSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn Transition(self: ?*anyopaque) QtC.Poppler__PageTransition {
        return qtc.Poppler__Page_Transition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` act: poppler_qt6_enums.PageAction `
    ///
    pub fn Action(self: ?*anyopaque, act: i32) QtC.Poppler__Link {
        return qtc.Poppler__Page_Action(@ptrCast(self), @bitCast(act));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.Poppler__Page_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` CTM: *f64 `
    ///
    /// ` dpiX: f64 `
    ///
    /// ` dpiY: f64 `
    ///
    /// ` rotate: i32 `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn DefaultCTM(self: ?*anyopaque, CTM: *f64, dpiX: f64, dpiY: f64, rotate: i32, upsideDown: bool) void {
        qtc.Poppler__Page_DefaultCTM(@ptrCast(self), @ptrCast(CTM), @bitCast(dpiX), @bitCast(dpiY), @bitCast(rotate), upsideDown);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Links(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Links(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__page.Links: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Annotations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Annotations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__page.Annotations: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` subtypes: set_i32 of poppler_annotation_enums.SubType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Annotations2(self: ?*anyopaque, subtypes: set_i32, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const subtypes_count = subtypes.count();
        const subtypes_keys = allocator.alloc(i32, subtypes_count) catch @panic("poppler__page.Annotations2: Memory allocation failed");
        defer allocator.free(subtypes_keys);
        var i: usize = 0;
        var subtypes_it = subtypes.iterator();
        while (subtypes_it.next()) |subtypes_item| : (i += 1) {
            const subtypes_key = subtypes_item.key_ptr.*;
            subtypes_keys[i] = @bitCast(subtypes_key);
        }
        const subtypes_set = qtc.libqt_list{
            .len = subtypes_count,
            .data = subtypes_keys.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Annotations2(@ptrCast(self), subtypes_set);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__page.Annotations2: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` ann: QtC.Poppler__Annotation `
    ///
    pub fn AddAnnotation(self: ?*anyopaque, ann: ?*anyopaque) void {
        qtc.Poppler__Page_AddAnnotation(@ptrCast(self), @ptrCast(ann));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` ann: QtC.Poppler__Annotation `
    ///
    pub fn RemoveAnnotation(self: ?*anyopaque, ann: ?*anyopaque) void {
        qtc.Poppler__Page_RemoveAnnotation(@ptrCast(self), @ptrCast(ann));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormFields(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__FormField {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_FormFields(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__FormField, _arr.len) catch @panic("poppler__page.FormFields: Memory allocation failed");
        const _data: [*]QtC.Poppler__FormField = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn Duration(self: ?*anyopaque) f64 {
        return qtc.Poppler__Page_Duration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Page_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__page.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn Index(self: ?*anyopaque) i32 {
        return qtc.Poppler__Page_Index(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    pub fn RenderToImage1(self: ?*anyopaque, xres: f64) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage1(@ptrCast(self), @bitCast(xres));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    pub fn RenderToImage22(self: ?*anyopaque, xres: f64, yres: f64) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage22(@ptrCast(self), @bitCast(xres), @bitCast(yres));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    pub fn RenderToImage32(self: ?*anyopaque, xres: f64, yres: f64, x: i32) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage32(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn RenderToImage4(self: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage4(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn RenderToImage5(self: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage5(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn RenderToImage6(self: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage6(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    pub fn RenderToImage7(self: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32) QtC.QImage {
        return qtc.Poppler__Page_RenderToImage7(@ptrCast(self), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    pub fn RenderToPainter2(self: ?*anyopaque, painter: ?*anyopaque, xres: f64) bool {
        return qtc.Poppler__Page_RenderToPainter2(@ptrCast(self), @ptrCast(painter), @bitCast(xres));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    pub fn RenderToPainter3(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64) bool {
        return qtc.Poppler__Page_RenderToPainter3(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    pub fn RenderToPainter4(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64, x: i32) bool {
        return qtc.Poppler__Page_RenderToPainter4(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres), @bitCast(x));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn RenderToPainter5(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32) bool {
        return qtc.Poppler__Page_RenderToPainter5(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn RenderToPainter6(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32) bool {
        return qtc.Poppler__Page_RenderToPainter6(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn RenderToPainter7(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32) bool {
        return qtc.Poppler__Page_RenderToPainter7(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    pub fn RenderToPainter8(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32) bool {
        return qtc.Poppler__Page_RenderToPainter8(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` flags: flag of poppler_qt6_enums.PainterFlag `
    ///
    pub fn RenderToPainter9(self: ?*anyopaque, painter: ?*anyopaque, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, flags: i32) bool {
        return qtc.Poppler__Page_RenderToPainter9(@ptrCast(self), @ptrCast(painter), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` text: []const u8 `
    ///
    /// ` sLeft: *f64 `
    ///
    /// ` sTop: *f64 `
    ///
    /// ` sRight: *f64 `
    ///
    /// ` sBottom: *f64 `
    ///
    /// ` direction: poppler_qt6_enums.SearchDirection `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    pub fn Search7(self: ?*anyopaque, text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32, flags: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.Poppler__Page_Search7(@ptrCast(self), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` text: []const u8 `
    ///
    /// ` sLeft: *f64 `
    ///
    /// ` sTop: *f64 `
    ///
    /// ` sRight: *f64 `
    ///
    /// ` sBottom: *f64 `
    ///
    /// ` direction: poppler_qt6_enums.SearchDirection `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    pub fn Search8(self: ?*anyopaque, text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32, flags: i32, rotate: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.Poppler__Page_Search8(@ptrCast(self), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction), @bitCast(flags), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Search22(self: ?*anyopaque, text: []const u8, flags: i32, allocator: std.mem.Allocator) []QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search22(@ptrCast(self), text_str, @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QRectF, _arr.len) catch @panic("poppler__page.Search22: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Search3(self: ?*anyopaque, text: []const u8, flags: i32, rotate: i32, allocator: std.mem.Allocator) []QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search3(@ptrCast(self), text_str, @bitCast(flags), @bitCast(rotate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QRectF, _arr.len) catch @panic("poppler__page.Search3: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextList1(self: ?*anyopaque, rotate: i32, allocator: std.mem.Allocator) []QtC.Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList1(@ptrCast(self), @bitCast(rotate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__TextBox, _arr.len) catch @panic("poppler__page.TextList1: Memory allocation failed");
        const _data: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__Page `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Page_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
pub const poppler__outlineitem = struct {
    /// New constructs a new Poppler::OutlineItem object.
    ///
    pub fn New() QtC.Poppler__OutlineItem {
        return qtc.Poppler__OutlineItem_new();
    }

    /// New2 constructs a new Poppler::OutlineItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Poppler__OutlineItem `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Poppler__OutlineItem {
        return qtc.Poppler__OutlineItem_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    /// ` other: QtC.Poppler__OutlineItem `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__OutlineItem_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.Poppler__OutlineItem_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__outlineitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.Poppler__OutlineItem_IsOpen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExternalFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_ExternalFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__outlineitem.ExternalFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Uri(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_Uri(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__outlineitem.Uri: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    pub fn HasChildren(self: ?*anyopaque) bool {
        return qtc.Poppler__OutlineItem_HasChildren(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__OutlineItem {
        const _arr: qtc.libqt_list = qtc.Poppler__OutlineItem_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__OutlineItem, _arr.len) catch @panic("poppler__outlineitem.Children: Memory allocation failed");
        const _data: [*]QtC.Poppler__OutlineItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__OutlineItem `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__OutlineItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
pub const poppler__document = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` outputProfileA: ?*anyopaque `
    ///
    pub fn SetColorDisplayProfile(self: ?*anyopaque, outputProfileA: ?*anyopaque) void {
        qtc.Poppler__Document_SetColorDisplayProfile(@ptrCast(self), @ptrCast(outputProfileA));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetColorDisplayProfileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__Document_SetColorDisplayProfileName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn ColorRgbProfile(self: ?*anyopaque) ?*anyopaque {
        return qtc.Poppler__Document_ColorRgbProfile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn ColorDisplayProfile(self: ?*anyopaque) ?*anyopaque {
        return qtc.Poppler__Document_ColorDisplayProfile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn Load(filePath: []const u8) QtC.Poppler__Document {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        return qtc.Poppler__Document_Load(filePath_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn Load2(device: ?*anyopaque) QtC.Poppler__Document {
        return qtc.Poppler__Document_Load2(@ptrCast(device));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    pub fn LoadFromData(fileContents: []u8) QtC.Poppler__Document {
        const fileContents_str = qtc.libqt_string{
            .len = fileContents.len,
            .data = fileContents.ptr,
        };
        return qtc.Poppler__Document_LoadFromData(fileContents_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` index: i32 `
    ///
    pub fn Page(self: ?*anyopaque, index: i32) QtC.Poppler__Page {
        return qtc.Poppler__Document_Page(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` label: []const u8 `
    ///
    pub fn Page2(self: ?*anyopaque, label: []const u8) QtC.Poppler__Page {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return qtc.Poppler__Document_Page2(@ptrCast(self), label_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn NumPages(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_NumPages(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.PageMode `
    ///
    pub fn PageMode(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_PageMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.PageLayout `
    ///
    pub fn PageLayout(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_PageLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn TextDirection(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_TextDirection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` ownerPassword: []u8 `
    ///
    /// ` userPassword: []u8 `
    ///
    pub fn Unlock(self: ?*anyopaque, ownerPassword: []u8, userPassword: []u8) bool {
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        const userPassword_str = qtc.libqt_string{
            .len = userPassword.len,
            .data = userPassword.ptr,
        };
        return qtc.Poppler__Document_Unlock(@ptrCast(self), ownerPassword_str, userPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn IsLocked(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_IsLocked(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn Date(self: ?*anyopaque, typeVal: []const u8) QtC.QDateTime {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return qtc.Poppler__Document_Date(@ptrCast(self), typeVal_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` key: []const u8 `
    ///
    /// ` val: QtC.QDateTime `
    ///
    pub fn SetDate(self: ?*anyopaque, key: []const u8, val: ?*anyopaque) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Poppler__Document_SetDate(@ptrCast(self), key_str, @ptrCast(val));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Document_CreationDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, val: ?*anyopaque) bool {
        return qtc.Poppler__Document_SetCreationDate(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Document_ModificationDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, val: ?*anyopaque) bool {
        return qtc.Poppler__Document_SetModificationDate(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` typeVal: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Info(self: ?*anyopaque, typeVal: []const u8, allocator: std.mem.Allocator) []const u8 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        var _str = qtc.Poppler__Document_Info(@ptrCast(self), typeVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Info: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` key: []const u8 `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetInfo(self: ?*anyopaque, key: []const u8, val: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetInfo(@ptrCast(self), key_str, val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetTitle(@ptrCast(self), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Author(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetAuthor(@ptrCast(self), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Subject(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetSubject(self: ?*anyopaque, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetSubject(@ptrCast(self), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keywords(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Keywords(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Keywords: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetKeywords(self: ?*anyopaque, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetKeywords(@ptrCast(self), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Creator(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Creator(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetCreator(self: ?*anyopaque, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetCreator(@ptrCast(self), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Producer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Producer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Producer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetProducer(self: ?*anyopaque, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetProducer(@ptrCast(self), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn RemoveInfo(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_RemoveInfo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InfoKeys(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_InfoKeys(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("poppler__document.InfoKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("poppler__document.InfoKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn IsEncrypted(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_IsEncrypted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn IsLinearized(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_IsLinearized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToPrint(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToPrint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToPrintHighRes(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToPrintHighRes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToChange(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToChange(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToCopy(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToCopy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToAddNotes(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToAddNotes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToFillForm(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToFillForm(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToCreateFormFields(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToCreateFormFields(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToExtractForAccessibility(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToExtractForAccessibility(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OkToAssemble(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_OkToAssemble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn GetPdfVersion(self: ?*anyopaque) QtC.Poppler__Document__PdfVersion {
        return qtc.Poppler__Document_GetPdfVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Fonts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__FontInfo {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Fonts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__FontInfo, _arr.len) catch @panic("poppler__document.Fonts: Memory allocation failed");
        const _data: [*]QtC.Poppler__FontInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn NewFontIterator(self: ?*anyopaque) QtC.Poppler__FontIterator {
        return qtc.Poppler__Document_NewFontIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` fi: QtC.Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontData(self: ?*anyopaque, fi: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__Document_FontData(@ptrCast(self), @ptrCast(fi));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__document.FontData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmbeddedFiles(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__EmbeddedFile {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_EmbeddedFiles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__EmbeddedFile, _arr.len) catch @panic("poppler__document.EmbeddedFiles: Memory allocation failed");
        const _data: [*]QtC.Poppler__EmbeddedFile = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn HasEmbeddedFiles(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_HasEmbeddedFiles(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Outline(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__OutlineItem {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Outline(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__OutlineItem, _arr.len) catch @panic("poppler__document.Outline: Memory allocation failed");
        const _data: [*]QtC.Poppler__OutlineItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn LinkDestination(self: ?*anyopaque, name: []const u8) QtC.Poppler__LinkDestination {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.Poppler__Document_LinkDestination(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetPaperColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__Document_SetPaperColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn PaperColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__Document_PaperColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` backend: poppler_qt6_enums.RenderBackend `
    ///
    pub fn SetRenderBackend(self: ?*anyopaque, backend: i32) void {
        qtc.Poppler__Document_SetRenderBackend(@ptrCast(self), @bitCast(backend));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.RenderBackend `
    ///
    pub fn RenderBackend(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_RenderBackend(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` set_i32 of poppler_qt6_enums.RenderBackend `
    ///
    pub fn AvailableRenderBackends(allocator: std.mem.Allocator) set_i32 {
        const _set: qtc.libqt_list = qtc.Poppler__Document_AvailableRenderBackends();
        var _ret: set_i32 = .empty;
        const _data: [*]i32 = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i], {}) catch @panic("poppler__document.AvailableRenderBackends: Set insertion failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` hint: poppler_qt6_enums.RenderHint `
    ///
    pub fn SetRenderHint(self: ?*anyopaque, hint: i32) void {
        qtc.Poppler__Document_SetRenderHint(@ptrCast(self), @bitCast(hint));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_qt6_enums.RenderHint `
    ///
    pub fn RenderHints(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_RenderHints(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn PsConverter(self: ?*anyopaque) QtC.Poppler__PSConverter {
        return qtc.Poppler__Document_PsConverter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn PdfConverter(self: ?*anyopaque) QtC.Poppler__PDFConverter {
        return qtc.Poppler__Document_PdfConverter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Metadata(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Metadata(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Metadata: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn HasOptionalContent(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_HasOptionalContent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn OptionalContentModel(self: ?*anyopaque) QtC.Poppler__OptContentModel {
        return qtc.Poppler__Document_OptionalContentModel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` link: QtC.Poppler__LinkResetForm `
    ///
    pub fn ApplyResetFormsLink(self: ?*anyopaque, link: ?*anyopaque) void {
        qtc.Poppler__Document_ApplyResetFormsLink(@ptrCast(self), @ptrCast(link));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Scripts(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Scripts(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("poppler__document.Scripts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("poppler__document.Scripts: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` typeVal: poppler_qt6_enums.DocumentAdditionalActionsType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__Document_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.FormType `
    ///
    pub fn FormType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document_FormType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormCalculateOrder(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_FormCalculateOrder(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("poppler__document.FormCalculateOrder: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signatures(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__FormFieldSignature {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Signatures(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__FormFieldSignature, _arr.len) catch @panic("poppler__document.Signatures: Memory allocation failed");
        const _data: [*]QtC.Poppler__FormFieldSignature = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn XrefWasReconstructed(self: ?*anyopaque) bool {
        return qtc.Poppler__Document_XrefWasReconstructed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn Load22(filePath: []const u8, ownerPassword: []u8) QtC.Poppler__Document {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return qtc.Poppler__Document_Load22(filePath_str, ownerPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    /// ` userPassword: []u8 `
    ///
    pub fn Load3(filePath: []const u8, ownerPassword: []u8, userPassword: []u8) QtC.Poppler__Document {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        const userPassword_str = qtc.libqt_string{
            .len = userPassword.len,
            .data = userPassword.ptr,
        };
        return qtc.Poppler__Document_Load3(filePath_str, ownerPassword_str, userPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn Load23(device: ?*anyopaque, ownerPassword: []u8) QtC.Poppler__Document {
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return qtc.Poppler__Document_Load23(@ptrCast(device), ownerPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` ownerPassword: []u8 `
    ///
    /// ` userPassword: []u8 `
    ///
    pub fn Load32(device: ?*anyopaque, ownerPassword: []u8, userPassword: []u8) QtC.Poppler__Document {
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        const userPassword_str = qtc.libqt_string{
            .len = userPassword.len,
            .data = userPassword.ptr,
        };
        return qtc.Poppler__Document_Load32(@ptrCast(device), ownerPassword_str, userPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn LoadFromData2(fileContents: []u8, ownerPassword: []u8) QtC.Poppler__Document {
        const fileContents_str = qtc.libqt_string{
            .len = fileContents.len,
            .data = fileContents.ptr,
        };
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return qtc.Poppler__Document_LoadFromData2(fileContents_str, ownerPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    /// ` userPassword: []u8 `
    ///
    pub fn LoadFromData3(fileContents: []u8, ownerPassword: []u8, userPassword: []u8) QtC.Poppler__Document {
        const fileContents_str = qtc.libqt_string{
            .len = fileContents.len,
            .data = fileContents.ptr,
        };
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        const userPassword_str = qtc.libqt_string{
            .len = userPassword.len,
            .data = userPassword.ptr,
        };
        return qtc.Poppler__Document_LoadFromData3(fileContents_str, ownerPassword_str, userPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` startPage: i32 `
    ///
    pub fn NewFontIterator1(self: ?*anyopaque, startPage: i32) QtC.Poppler__FontIterator {
        return qtc.Poppler__Document_NewFontIterator1(@ptrCast(self), @bitCast(startPage));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    /// ` hint: poppler_qt6_enums.RenderHint `
    ///
    /// ` on: bool `
    ///
    pub fn SetRenderHint2(self: ?*anyopaque, hint: i32, on: bool) void {
        qtc.Poppler__Document_SetRenderHint2(@ptrCast(self), @bitCast(hint), on);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__Document `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Document_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
pub const poppler__soundobject = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.SoundType `
    ///
    pub fn SoundType(self: ?*anyopaque) i32 {
        return qtc.Poppler__SoundObject_SoundType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SoundObject_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundobject.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__SoundObject_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__soundobject.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    pub fn SamplingRate(self: ?*anyopaque) f64 {
        return qtc.Poppler__SoundObject_SamplingRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    pub fn Channels(self: ?*anyopaque) i32 {
        return qtc.Poppler__SoundObject_Channels(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    pub fn BitsPerSample(self: ?*anyopaque) i32 {
        return qtc.Poppler__SoundObject_BitsPerSample(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.SoundEncoding `
    ///
    pub fn SoundEncoding(self: ?*anyopaque) i32 {
        return qtc.Poppler__SoundObject_SoundEncoding(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__SoundObject `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__SoundObject_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
pub const poppler__movieobject = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MovieObject_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieobject.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.Poppler__MovieObject_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    pub fn Rotation(self: ?*anyopaque) i32 {
        return qtc.Poppler__MovieObject_Rotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    pub fn ShowControls(self: ?*anyopaque) bool {
        return qtc.Poppler__MovieObject_ShowControls(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.PlayMode `
    ///
    pub fn PlayMode(self: ?*anyopaque) i32 {
        return qtc.Poppler__MovieObject_PlayMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    pub fn ShowPosterImage(self: ?*anyopaque) bool {
        return qtc.Poppler__MovieObject_ShowPosterImage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    pub fn PosterImage(self: ?*anyopaque) QtC.QImage {
        return qtc.Poppler__MovieObject_PosterImage(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__MovieObject `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__MovieObject_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
pub const poppler__document__pdfversion = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document__PdfVersion `
    ///
    pub fn Major(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document__PdfVersion_Major(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document__PdfVersion `
    ///
    /// ` major: i32 `
    ///
    pub fn SetMajor(self: ?*anyopaque, major: i32) void {
        qtc.Poppler__Document__PdfVersion_SetMajor(@ptrCast(self), @bitCast(major));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document__PdfVersion `
    ///
    pub fn Minor(self: ?*anyopaque) i32 {
        return qtc.Poppler__Document__PdfVersion_Minor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Document__PdfVersion `
    ///
    /// ` minor: i32 `
    ///
    pub fn SetMinor(self: ?*anyopaque, minor: i32) void {
        qtc.Poppler__Document__PdfVersion_SetMinor(@ptrCast(self), @bitCast(minor));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__Document__PdfVersion `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Document__PdfVersion_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Type1: i32 = 1;
        pub const Type1C: i32 = 2;
        pub const Type1COT: i32 = 3;
        pub const Type3: i32 = 4;
        pub const TrueType: i32 = 5;
        pub const TrueTypeOT: i32 = 6;
        pub const CIDType0: i32 = 7;
        pub const CIDType0C: i32 = 8;
        pub const CIDType0COT: i32 = 9;
        pub const CIDTrueType: i32 = 10;
        pub const CIDTrueTypeOT: i32 = 11;
    };

    pub const Rotation = enum(i32) {
        pub const Rotate0: i32 = 0;
        pub const Rotate90: i32 = 1;
        pub const Rotate180: i32 = 2;
        pub const Rotate270: i32 = 3;
    };

    pub const PageAction = enum(i32) {
        pub const Opening: i32 = 0;
        pub const Closing: i32 = 1;
    };

    pub const TextLayout = enum(i32) {
        pub const PhysicalLayout: i32 = 0;
        pub const RawOrderLayout: i32 = 1;
    };

    pub const PainterFlag = enum(i32) {
        pub const NoPainterFlags: i32 = 0;
        pub const DontSaveAndRestore: i32 = 1;
    };

    pub const SearchDirection = enum(i32) {
        pub const FromTop: i32 = 0;
        pub const NextResult: i32 = 1;
        pub const PreviousResult: i32 = 2;
    };

    pub const SearchMode = enum(i32) {
        pub const CaseSensitive: i32 = 0;
        pub const CaseInsensitive: i32 = 1;
    };

    pub const SearchFlag = enum(i32) {
        pub const NoSearchFlags: i32 = 0;
        pub const IgnoreCase: i32 = 1;
        pub const WholeWords: i32 = 2;
        pub const IgnoreDiacritics: i32 = 4;
        pub const AcrossLines: i32 = 8;
    };

    pub const Orientation = enum(i32) {
        pub const Landscape: i32 = 0;
        pub const Portrait: i32 = 1;
        pub const Seascape: i32 = 2;
        pub const UpsideDown: i32 = 3;
    };

    pub const PageMode = enum(i32) {
        pub const UseNone: i32 = 0;
        pub const UseOutlines: i32 = 1;
        pub const UseThumbs: i32 = 2;
        pub const FullScreen: i32 = 3;
        pub const UseOC: i32 = 4;
        pub const UseAttach: i32 = 5;
    };

    pub const PageLayout = enum(i32) {
        pub const NoLayout: i32 = 0;
        pub const SinglePage: i32 = 1;
        pub const OneColumn: i32 = 2;
        pub const TwoColumnLeft: i32 = 3;
        pub const TwoColumnRight: i32 = 4;
        pub const TwoPageLeft: i32 = 5;
        pub const TwoPageRight: i32 = 6;
    };

    pub const RenderBackend = enum(i32) {
        pub const SplashBackend: i32 = 0;
        pub const QPainterBackend: i32 = 1;
    };

    pub const RenderHint = enum(i32) {
        pub const Antialiasing: i32 = 1;
        pub const TextAntialiasing: i32 = 2;
        pub const TextHinting: i32 = 4;
        pub const TextSlightHinting: i32 = 8;
        pub const OverprintPreview: i32 = 16;
        pub const ThinLineSolid: i32 = 32;
        pub const ThinLineShape: i32 = 64;
        pub const IgnorePaperColor: i32 = 128;
        pub const HideAnnotations: i32 = 256;
    };

    pub const FormType = enum(i32) {
        pub const NoForm: i32 = 0;
        pub const AcroForm: i32 = 1;
        pub const XfaForm: i32 = 2;
    };

    pub const DocumentAdditionalActionsType = enum(i32) {
        pub const CloseDocument: i32 = 0;
        pub const SaveDocumentStart: i32 = 1;
        pub const SaveDocumentFinish: i32 = 2;
        pub const PrintDocumentStart: i32 = 3;
        pub const PrintDocumentFinish: i32 = 4;
    };

    pub const SoundType = enum(i32) {
        pub const External: i32 = 0;
        pub const Embedded: i32 = 1;
    };

    pub const SoundEncoding = enum(i32) {
        pub const Raw: i32 = 0;
        pub const Signed: i32 = 1;
        pub const MuLaw: i32 = 2;
        pub const ALaw: i32 = 3;
    };

    pub const PlayMode = enum(i32) {
        pub const PlayOnce: i32 = 0;
        pub const PlayOpen: i32 = 1;
        pub const PlayRepeat: i32 = 2;
        pub const PlayPalindrome: i32 = 3;
    };
};
