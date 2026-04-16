const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Poppler__Annotation = @import("libqt6").Poppler__Annotation;
const Poppler__FormField = @import("libqt6").Poppler__FormField;
const Poppler__FormFieldSignature = @import("libqt6").Poppler__FormFieldSignature;
const Poppler__Link = @import("libqt6").Poppler__Link;
const Poppler__LinkDestination = @import("libqt6").Poppler__LinkDestination;
const Poppler__LinkResetForm = @import("libqt6").Poppler__LinkResetForm;
const Poppler__OptContentModel = @import("libqt6").Poppler__OptContentModel;
const Poppler__PDFConverter = @import("libqt6").Poppler__PDFConverter;
const Poppler__PSConverter = @import("libqt6").Poppler__PSConverter;
const Poppler__PageTransition = @import("libqt6").Poppler__PageTransition;
const QColor = @import("libqt6").QColor;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const QPainter = @import("libqt6").QPainter;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QVariant = @import("libqt6").QVariant;
const poppler_annotation_enums = @import("libpoppler_annotation.zig").enums;
const poppler_qt6_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");
const Set_i32 = std.AutoHashMapUnmanaged(i32, void);

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
pub const Poppler = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler,

    pub const _is_Poppler = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn ConvertDate(param1: [:0]const u8) QDateTime {
        const param1_Cstring = param1.ptr;
        return .{ .ptr = qtc.Poppler_ConvertDate(param1_Cstring) };
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
pub const Poppler__TextBox = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__TextBox,

    pub const _is_Poppler__TextBox = {};

    /// New constructs a new Poppler::TextBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` bBox: QRectF `
    ///
    pub fn New(text: []const u8, bBox: anytype) Poppler__TextBox {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(bBox)._is_QRectF;
        return .{ .ptr = qtc.Poppler__TextBox_new(text_str, @ptrCast(bBox.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: Poppler__TextBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__TextBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textbox.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn BoundingBox(self: Poppler__TextBox) QRectF {
        return .{ .ptr = qtc.Poppler__TextBox_BoundingBox(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn NextWord(self: Poppler__TextBox) Poppler__TextBox {
        return .{ .ptr = qtc.Poppler__TextBox_NextWord(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    /// ` i: i32 `
    ///
    pub fn CharBoundingBox(self: Poppler__TextBox, i: i32) QRectF {
        return .{ .ptr = qtc.Poppler__TextBox_CharBoundingBox(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn HasSpaceAfter(self: Poppler__TextBox) bool {
        return qtc.Poppler__TextBox_HasSpaceAfter(@ptrCast(self.ptr));
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
    /// ` self: Poppler__TextBox `
    ///
    pub fn Delete(self: Poppler__TextBox) void {
        qtc.Poppler__TextBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
pub const Poppler__FontInfo = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FontInfo,

    pub const _is_Poppler__FontInfo = {};

    /// New constructs a new Poppler::FontInfo object.
    ///
    pub fn New() Poppler__FontInfo {
        return .{ .ptr = qtc.Poppler__FontInfo_new() };
    }

    /// New2 constructs a new Poppler::FontInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fi: Poppler__FontInfo `
    ///
    pub fn New2(fi: anytype) Poppler__FontInfo {
        comptime _ = @TypeOf(fi)._is_Poppler__FontInfo;
        return .{ .ptr = qtc.Poppler__FontInfo_new2(@ptrCast(fi.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubstituteName(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_SubstituteName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.SubstituteName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn File(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_File(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.File: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    pub fn IsEmbedded(self: Poppler__FontInfo) bool {
        return qtc.Poppler__FontInfo_IsEmbedded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    pub fn IsSubset(self: Poppler__FontInfo) bool {
        return qtc.Poppler__FontInfo_IsSubset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.Type `
    ///
    pub fn Type(self: Poppler__FontInfo) i32 {
        return qtc.Poppler__FontInfo_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypeName(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_TypeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fontinfo.TypeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` fi: Poppler__FontInfo `
    ///
    pub fn OperatorAssign(self: Poppler__FontInfo, fi: anytype) void {
        comptime _ = @TypeOf(fi)._is_Poppler__FontInfo;
        qtc.Poppler__FontInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(fi.ptr));
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
    /// ` self: Poppler__FontInfo `
    ///
    pub fn Delete(self: Poppler__FontInfo) void {
        qtc.Poppler__FontInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
pub const Poppler__FontIterator = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FontIterator,

    pub const _is_Poppler__FontIterator = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Next(self: Poppler__FontIterator, allocator: std.mem.Allocator) []Poppler__FontInfo {
        const _arr: qtc.libqt_list = qtc.Poppler__FontIterator_Next(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FontInfo, _arr.len) catch @panic("poppler__fontiterator.Next: Memory allocation failed");
        const _data: [*]QtC.Poppler__FontInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontIterator `
    ///
    pub fn HasNext(self: Poppler__FontIterator) bool {
        return qtc.Poppler__FontIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontIterator `
    ///
    pub fn CurrentPage(self: Poppler__FontIterator) i32 {
        return qtc.Poppler__FontIterator_CurrentPage(@ptrCast(self.ptr));
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
    /// ` self: Poppler__FontIterator `
    ///
    pub fn Delete(self: Poppler__FontIterator) void {
        qtc.Poppler__FontIterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
pub const Poppler__EmbeddedFile = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__EmbeddedFile,

    pub const _is_Poppler__EmbeddedFile = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__embeddedfile.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__embeddedfile.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn Size(self: Poppler__EmbeddedFile) i32 {
        return qtc.Poppler__EmbeddedFile_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn ModDate(self: Poppler__EmbeddedFile) QDateTime {
        return .{ .ptr = qtc.Poppler__EmbeddedFile_ModDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn CreateDate(self: Poppler__EmbeddedFile) QDateTime {
        return .{ .ptr = qtc.Poppler__EmbeddedFile_CreateDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Checksum(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__EmbeddedFile_Checksum(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__embeddedfile.Checksum: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__embeddedfile.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__EmbeddedFile_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__embeddedfile.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn IsValid(self: Poppler__EmbeddedFile) bool {
        return qtc.Poppler__EmbeddedFile_IsValid(@ptrCast(self.ptr));
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
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn Delete(self: Poppler__EmbeddedFile) void {
        qtc.Poppler__EmbeddedFile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
pub const Poppler__Page = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Page,

    pub const _is_Poppler__Page = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn RenderToImage(self: Poppler__Page) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    /// ` partialUpdateCallback: *const fn (funcparam1: QImage, funcparam2: QVariant) callconv(.c) void `
    ///
    /// ` shouldDoPartialUpdateCallback: *const fn (funcparam1: QVariant) callconv(.c) bool `
    ///
    /// ` payload: QVariant `
    ///
    pub fn RenderToImage2(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, partialUpdateCallback: *const fn (QImage, QVariant) callconv(.c) void, shouldDoPartialUpdateCallback: *const fn (QVariant) callconv(.c) bool, payload: anytype) QImage {
        comptime _ = @TypeOf(payload)._is_QVariant;
        return .{ .ptr = qtc.Poppler__Page_RenderToImage2(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(@intFromPtr(partialUpdateCallback)), @bitCast(@intFromPtr(shouldDoPartialUpdateCallback)), @ptrCast(payload.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    /// ` partialUpdateCallback: *const fn (funcparam1: QImage, funcparam2: QVariant) callconv(.c) void `
    ///
    /// ` shouldDoPartialUpdateCallback: *const fn (funcparam1: QVariant) callconv(.c) bool `
    ///
    /// ` shouldAbortRenderCallback: *const fn (funcparam1: QVariant) callconv(.c) bool `
    ///
    /// ` payload: QVariant `
    ///
    pub fn RenderToImage3(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, partialUpdateCallback: *const fn (QImage, QVariant) callconv(.c) void, shouldDoPartialUpdateCallback: *const fn (QVariant) callconv(.c) bool, shouldAbortRenderCallback: *const fn (QVariant) callconv(.c) bool, payload: anytype) QImage {
        comptime _ = @TypeOf(payload)._is_QVariant;
        return .{ .ptr = qtc.Poppler__Page_RenderToImage3(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(@intFromPtr(partialUpdateCallback)), @bitCast(@intFromPtr(shouldDoPartialUpdateCallback)), @bitCast(@intFromPtr(shouldAbortRenderCallback)), @ptrCast(payload.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
    ///
    pub fn RenderToPainter(self: Poppler__Page, painter: anytype) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn Thumbnail(self: Poppler__Page) QImage {
        return .{ .ptr = qtc.Poppler__Page_Thumbnail(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRectF `
    ///
    /// ` textLayout: poppler_qt6_enums.TextLayout `
    ///
    pub fn Text(self: Poppler__Page, allocator: std.mem.Allocator, rect: anytype, textLayout: i32) []const u8 {
        comptime _ = @TypeOf(rect)._is_QRectF;
        var _str = qtc.Poppler__Page_Text(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(textLayout));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__page.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Text2(self: Poppler__Page, allocator: std.mem.Allocator, rect: anytype) []const u8 {
        comptime _ = @TypeOf(rect)._is_QRectF;
        var _str = qtc.Poppler__Page_Text2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__page.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn Search(self: Poppler__Page, text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.Poppler__Page_Search(@ptrCast(self.ptr), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Search2(self: Poppler__Page, allocator: std.mem.Allocator, text: []const u8) []QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search2(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("poppler__page.Search2: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextList(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__TextBox, _arr.len) catch @panic("poppler__page.TextList: Memory allocation failed");
        const _data: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    /// ` shouldAbortExtractionCallback: *const fn (funcparam1: QVariant) callconv(.c) bool `
    ///
    /// ` closure: QVariant `
    ///
    pub fn TextList2(self: Poppler__Page, allocator: std.mem.Allocator, rotate: i32, shouldAbortExtractionCallback: *const fn (QVariant) callconv(.c) bool, closure: anytype) []Poppler__TextBox {
        comptime _ = @TypeOf(closure)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList2(@ptrCast(self.ptr), @bitCast(rotate), @bitCast(@intFromPtr(shouldAbortExtractionCallback)), @ptrCast(closure.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__TextBox, _arr.len) catch @panic("poppler__page.TextList2: Memory allocation failed");
        const _data: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn PageSizeF(self: Poppler__Page) QSizeF {
        return .{ .ptr = qtc.Poppler__Page_PageSizeF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn PageSize(self: Poppler__Page) QSize {
        return .{ .ptr = qtc.Poppler__Page_PageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn Transition(self: Poppler__Page) Poppler__PageTransition {
        return .{ .ptr = qtc.Poppler__Page_Transition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` act: poppler_qt6_enums.PageAction `
    ///
    pub fn Action(self: Poppler__Page, act: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__Page_Action(@ptrCast(self.ptr), @bitCast(act)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.Orientation `
    ///
    pub fn Orientation(self: Poppler__Page) i32 {
        return qtc.Poppler__Page_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn DefaultCTM(self: Poppler__Page, CTM: *f64, dpiX: f64, dpiY: f64, rotate: i32, upsideDown: bool) void {
        qtc.Poppler__Page_DefaultCTM(@ptrCast(self.ptr), @ptrCast(CTM), @bitCast(dpiX), @bitCast(dpiY), @bitCast(rotate), upsideDown);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Links(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Links(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__page.Links: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Annotations(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Annotations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__page.Annotations: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` subtypes: Set_i32 of poppler_annotation_enums.SubType `
    ///
    pub fn Annotations2(self: Poppler__Page, allocator: std.mem.Allocator, subtypes: Set_i32) []Poppler__Annotation {
        const subtypes_count = subtypes.count();
        const subtypes_keys = allocator.alloc(i32, subtypes_count) catch @panic("poppler__page.Annotations2: Memory allocation failed");
        defer allocator.free(subtypes_keys);
        var i: usize = 0;
        var subtypes_it = subtypes.iterator();
        while (subtypes_it.next()) |subtypes_item| : (i += 1)
            subtypes_keys[i] = @bitCast(subtypes_item.key_ptr.*);
        const subtypes_set = qtc.libqt_list{
            .len = subtypes_count,
            .data = subtypes_keys.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Annotations2(@ptrCast(self.ptr), subtypes_set);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__page.Annotations2: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` ann: Poppler__Annotation `
    ///
    pub fn AddAnnotation(self: Poppler__Page, ann: anytype) void {
        comptime _ = @TypeOf(ann)._is_Poppler__Annotation;
        qtc.Poppler__Page_AddAnnotation(@ptrCast(self.ptr), @ptrCast(ann.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` ann: Poppler__Annotation `
    ///
    pub fn RemoveAnnotation(self: Poppler__Page, ann: anytype) void {
        comptime _ = @TypeOf(ann)._is_Poppler__Annotation;
        qtc.Poppler__Page_RemoveAnnotation(@ptrCast(self.ptr), @ptrCast(ann.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormFields(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__FormField {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_FormFields(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FormField, _arr.len) catch @panic("poppler__page.FormFields: Memory allocation failed");
        const _data: [*]QtC.Poppler__FormField = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn Duration(self: Poppler__Page) f64 {
        return qtc.Poppler__Page_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: Poppler__Page, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Page_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__page.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn Index(self: Poppler__Page) i32 {
        return qtc.Poppler__Page_Index(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    pub fn RenderToImage1(self: Poppler__Page, xres: f64) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage1(@ptrCast(self.ptr), @bitCast(xres)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    pub fn RenderToImage22(self: Poppler__Page, xres: f64, yres: f64) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage22(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    pub fn RenderToImage32(self: Poppler__Page, xres: f64, yres: f64, x: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage32(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn RenderToImage4(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage4(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn RenderToImage5(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage5(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn RenderToImage6(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage6(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn RenderToImage7(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage7(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
    ///
    /// ` xres: f64 `
    ///
    pub fn RenderToPainter2(self: Poppler__Page, painter: anytype, xres: f64) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    pub fn RenderToPainter3(self: Poppler__Page, painter: anytype, xres: f64, yres: f64) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    pub fn RenderToPainter4(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
    ///
    /// ` xres: f64 `
    ///
    /// ` yres: f64 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn RenderToPainter5(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter5(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
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
    pub fn RenderToPainter6(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter6(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
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
    pub fn RenderToPainter7(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter7(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
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
    pub fn RenderToPainter8(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter8(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
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
    pub fn RenderToPainter9(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, flags: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter9(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn Search7(self: Poppler__Page, text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32, flags: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.Poppler__Page_Search7(@ptrCast(self.ptr), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
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
    pub fn Search8(self: Poppler__Page, text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32, flags: i32, rotate: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.Poppler__Page_Search8(@ptrCast(self.ptr), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction), @bitCast(flags), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    pub fn Search22(self: Poppler__Page, allocator: std.mem.Allocator, text: []const u8, flags: i32) []QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search22(@ptrCast(self.ptr), text_str, @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("poppler__page.Search22: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    pub fn Search3(self: Poppler__Page, allocator: std.mem.Allocator, text: []const u8, flags: i32, rotate: i32) []QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search3(@ptrCast(self.ptr), text_str, @bitCast(flags), @bitCast(rotate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("poppler__page.Search3: Memory allocation failed");
        const _data: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    pub fn TextList1(self: Poppler__Page, allocator: std.mem.Allocator, rotate: i32) []Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList1(@ptrCast(self.ptr), @bitCast(rotate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__TextBox, _arr.len) catch @panic("poppler__page.TextList1: Memory allocation failed");
        const _data: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__Page `
    ///
    pub fn Delete(self: Poppler__Page) void {
        qtc.Poppler__Page_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
pub const Poppler__OutlineItem = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__OutlineItem,

    pub const _is_Poppler__OutlineItem = {};

    /// New constructs a new Poppler::OutlineItem object.
    ///
    pub fn New() Poppler__OutlineItem {
        return .{ .ptr = qtc.Poppler__OutlineItem_new() };
    }

    /// New2 constructs a new Poppler::OutlineItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__OutlineItem `
    ///
    pub fn New2(other: anytype) Poppler__OutlineItem {
        comptime _ = @TypeOf(other)._is_Poppler__OutlineItem;
        return .{ .ptr = qtc.Poppler__OutlineItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` other: Poppler__OutlineItem `
    ///
    pub fn OperatorAssign(self: Poppler__OutlineItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__OutlineItem;
        qtc.Poppler__OutlineItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn IsNull(self: Poppler__OutlineItem) bool {
        return qtc.Poppler__OutlineItem_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__outlineitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn IsOpen(self: Poppler__OutlineItem) bool {
        return qtc.Poppler__OutlineItem_IsOpen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExternalFileName(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_ExternalFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__outlineitem.ExternalFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Uri(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_Uri(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__outlineitem.Uri: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn HasChildren(self: Poppler__OutlineItem) bool {
        return qtc.Poppler__OutlineItem_HasChildren(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []Poppler__OutlineItem {
        const _arr: qtc.libqt_list = qtc.Poppler__OutlineItem_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__OutlineItem, _arr.len) catch @panic("poppler__outlineitem.Children: Memory allocation failed");
        const _data: [*]QtC.Poppler__OutlineItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn Delete(self: Poppler__OutlineItem) void {
        qtc.Poppler__OutlineItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
pub const Poppler__Document = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Document,

    pub const _is_Poppler__Document = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` outputProfileA: ?*anyopaque `
    ///
    pub fn SetColorDisplayProfile(self: Poppler__Document, outputProfileA: ?*anyopaque) void {
        qtc.Poppler__Document_SetColorDisplayProfile(@ptrCast(self.ptr), @ptrCast(outputProfileA));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetColorDisplayProfileName(self: Poppler__Document, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__Document_SetColorDisplayProfileName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn ColorRgbProfile(self: Poppler__Document) ?*anyopaque {
        return qtc.Poppler__Document_ColorRgbProfile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn ColorDisplayProfile(self: Poppler__Document) ?*anyopaque {
        return qtc.Poppler__Document_ColorDisplayProfile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn Load(filePath: []const u8) Poppler__Document {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Load(filePath_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn Load2(device: anytype) Poppler__Document {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.Poppler__Document_Load2(@ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    pub fn LoadFromData(fileContents: []u8) Poppler__Document {
        const fileContents_str = qtc.libqt_string{
            .len = fileContents.len,
            .data = fileContents.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_LoadFromData(fileContents_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` index: i32 `
    ///
    pub fn Page(self: Poppler__Document, index: i32) Poppler__Page {
        return .{ .ptr = qtc.Poppler__Document_Page(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` label: []const u8 `
    ///
    pub fn Page2(self: Poppler__Document, label: []const u8) Poppler__Page {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Page2(@ptrCast(self.ptr), label_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn NumPages(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_NumPages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.PageMode `
    ///
    pub fn PageMode(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_PageMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.PageLayout `
    ///
    pub fn PageLayout(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_PageLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn TextDirection(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_TextDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` ownerPassword: []u8 `
    ///
    /// ` userPassword: []u8 `
    ///
    pub fn Unlock(self: Poppler__Document, ownerPassword: []u8, userPassword: []u8) bool {
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        const userPassword_str = qtc.libqt_string{
            .len = userPassword.len,
            .data = userPassword.ptr,
        };
        return qtc.Poppler__Document_Unlock(@ptrCast(self.ptr), ownerPassword_str, userPassword_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn IsLocked(self: Poppler__Document) bool {
        return qtc.Poppler__Document_IsLocked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn Date(self: Poppler__Document, typeVal: []const u8) QDateTime {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Date(@ptrCast(self.ptr), typeVal_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` key: []const u8 `
    ///
    /// ` val: QDateTime `
    ///
    pub fn SetDate(self: Poppler__Document, key: []const u8, val: anytype) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(val)._is_QDateTime;
        return qtc.Poppler__Document_SetDate(@ptrCast(self.ptr), key_str, @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn CreationDate(self: Poppler__Document) QDateTime {
        return .{ .ptr = qtc.Poppler__Document_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: QDateTime `
    ///
    pub fn SetCreationDate(self: Poppler__Document, val: anytype) bool {
        comptime _ = @TypeOf(val)._is_QDateTime;
        return qtc.Poppler__Document_SetCreationDate(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn ModificationDate(self: Poppler__Document) QDateTime {
        return .{ .ptr = qtc.Poppler__Document_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: QDateTime `
    ///
    pub fn SetModificationDate(self: Poppler__Document, val: anytype) bool {
        comptime _ = @TypeOf(val)._is_QDateTime;
        return qtc.Poppler__Document_SetModificationDate(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn Info(self: Poppler__Document, allocator: std.mem.Allocator, typeVal: []const u8) []const u8 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        var _str = qtc.Poppler__Document_Info(@ptrCast(self.ptr), typeVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Info: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` key: []const u8 `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetInfo(self: Poppler__Document, key: []const u8, val: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetInfo(@ptrCast(self.ptr), key_str, val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetTitle(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetTitle(@ptrCast(self.ptr), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetAuthor(@ptrCast(self.ptr), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subject(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetSubject(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetSubject(@ptrCast(self.ptr), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keywords(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Keywords(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Keywords: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetKeywords(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetKeywords(@ptrCast(self.ptr), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Creator(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Creator(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetCreator(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetCreator(@ptrCast(self.ptr), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Producer(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Producer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Producer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn SetProducer(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetProducer(@ptrCast(self.ptr), val_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn RemoveInfo(self: Poppler__Document) bool {
        return qtc.Poppler__Document_RemoveInfo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InfoKeys(self: Poppler__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_InfoKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Poppler__Document `
    ///
    pub fn IsEncrypted(self: Poppler__Document) bool {
        return qtc.Poppler__Document_IsEncrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn IsLinearized(self: Poppler__Document) bool {
        return qtc.Poppler__Document_IsLinearized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToPrint(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToPrint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToPrintHighRes(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToPrintHighRes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToChange(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToChange(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToCopy(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToCopy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToAddNotes(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToAddNotes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToFillForm(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToFillForm(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToCreateFormFields(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToCreateFormFields(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToExtractForAccessibility(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToExtractForAccessibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OkToAssemble(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToAssemble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn GetPdfVersion(self: Poppler__Document) Poppler__Document__PdfVersion {
        return .{ .ptr = qtc.Poppler__Document_GetPdfVersion(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Fonts(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__FontInfo {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Fonts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FontInfo, _arr.len) catch @panic("poppler__document.Fonts: Memory allocation failed");
        const _data: [*]QtC.Poppler__FontInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn NewFontIterator(self: Poppler__Document) Poppler__FontIterator {
        return .{ .ptr = qtc.Poppler__Document_NewFontIterator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fi: Poppler__FontInfo `
    ///
    pub fn FontData(self: Poppler__Document, allocator: std.mem.Allocator, fi: anytype) []u8 {
        comptime _ = @TypeOf(fi)._is_Poppler__FontInfo;
        var _bytearray: qtc.libqt_string = qtc.Poppler__Document_FontData(@ptrCast(self.ptr), @ptrCast(fi.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__document.FontData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmbeddedFiles(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__EmbeddedFile {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_EmbeddedFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__EmbeddedFile, _arr.len) catch @panic("poppler__document.EmbeddedFiles: Memory allocation failed");
        const _data: [*]QtC.Poppler__EmbeddedFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn HasEmbeddedFiles(self: Poppler__Document) bool {
        return qtc.Poppler__Document_HasEmbeddedFiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Outline(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__OutlineItem {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Outline(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__OutlineItem, _arr.len) catch @panic("poppler__document.Outline: Memory allocation failed");
        const _data: [*]QtC.Poppler__OutlineItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn LinkDestination(self: Poppler__Document, name: []const u8) Poppler__LinkDestination {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_LinkDestination(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPaperColor(self: Poppler__Document, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__Document_SetPaperColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn PaperColor(self: Poppler__Document) QColor {
        return .{ .ptr = qtc.Poppler__Document_PaperColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` backend: poppler_qt6_enums.RenderBackend `
    ///
    pub fn SetRenderBackend(self: Poppler__Document, backend: i32) void {
        qtc.Poppler__Document_SetRenderBackend(@ptrCast(self.ptr), @bitCast(backend));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.RenderBackend `
    ///
    pub fn RenderBackend(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_RenderBackend(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` Set_i32 of poppler_qt6_enums.RenderBackend `
    ///
    pub fn AvailableRenderBackends(allocator: std.mem.Allocator) Set_i32 {
        const _set: qtc.libqt_list = qtc.Poppler__Document_AvailableRenderBackends();
        var _ret: Set_i32 = .empty;
        const _data: [*]i32 = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, _data[i], {}) catch @panic("poppler__document.AvailableRenderBackends: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` hint: poppler_qt6_enums.RenderHint `
    ///
    pub fn SetRenderHint(self: Poppler__Document, hint: i32) void {
        qtc.Poppler__Document_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_qt6_enums.RenderHint `
    ///
    pub fn RenderHints(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_RenderHints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn PsConverter(self: Poppler__Document) Poppler__PSConverter {
        return .{ .ptr = qtc.Poppler__Document_PsConverter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn PdfConverter(self: Poppler__Document) Poppler__PDFConverter {
        return .{ .ptr = qtc.Poppler__Document_PdfConverter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Metadata(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Metadata(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__document.Metadata: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn HasOptionalContent(self: Poppler__Document) bool {
        return qtc.Poppler__Document_HasOptionalContent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn OptionalContentModel(self: Poppler__Document) Poppler__OptContentModel {
        return .{ .ptr = qtc.Poppler__Document_OptionalContentModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` link: Poppler__LinkResetForm `
    ///
    pub fn ApplyResetFormsLink(self: Poppler__Document, link: anytype) void {
        comptime _ = @TypeOf(link)._is_Poppler__LinkResetForm;
        qtc.Poppler__Document_ApplyResetFormsLink(@ptrCast(self.ptr), @ptrCast(link.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Scripts(self: Poppler__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Scripts(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Poppler__Document `
    ///
    /// ` typeVal: poppler_qt6_enums.DocumentAdditionalActionsType `
    ///
    pub fn AdditionalAction(self: Poppler__Document, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__Document_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.FormType `
    ///
    pub fn FormType(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_FormType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FormCalculateOrder(self: Poppler__Document, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_FormCalculateOrder(@ptrCast(self.ptr));
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
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signatures(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__FormFieldSignature {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Signatures(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FormFieldSignature, _arr.len) catch @panic("poppler__document.Signatures: Memory allocation failed");
        const _data: [*]QtC.Poppler__FormFieldSignature = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn XrefWasReconstructed(self: Poppler__Document) bool {
        return qtc.Poppler__Document_XrefWasReconstructed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn SetXRefReconstructedCallback(self: Poppler__Document, callback: *const fn () callconv(.c) void) void {
        qtc.Poppler__Document_SetXRefReconstructedCallback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn Load22(filePath: []const u8, ownerPassword: []u8) Poppler__Document {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Load22(filePath_str, ownerPassword_str) };
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
    pub fn Load3(filePath: []const u8, ownerPassword: []u8, userPassword: []u8) Poppler__Document {
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
        return .{ .ptr = qtc.Poppler__Document_Load3(filePath_str, ownerPassword_str, userPassword_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn Load23(device: anytype, ownerPassword: []u8) Poppler__Document {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Load23(@ptrCast(device.ptr), ownerPassword_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` ownerPassword: []u8 `
    ///
    /// ` userPassword: []u8 `
    ///
    pub fn Load32(device: anytype, ownerPassword: []u8, userPassword: []u8) Poppler__Document {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        const userPassword_str = qtc.libqt_string{
            .len = userPassword.len,
            .data = userPassword.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Load32(@ptrCast(device.ptr), ownerPassword_str, userPassword_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn LoadFromData2(fileContents: []u8, ownerPassword: []u8) Poppler__Document {
        const fileContents_str = qtc.libqt_string{
            .len = fileContents.len,
            .data = fileContents.ptr,
        };
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_LoadFromData2(fileContents_str, ownerPassword_str) };
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
    pub fn LoadFromData3(fileContents: []u8, ownerPassword: []u8, userPassword: []u8) Poppler__Document {
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
        return .{ .ptr = qtc.Poppler__Document_LoadFromData3(fileContents_str, ownerPassword_str, userPassword_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` startPage: i32 `
    ///
    pub fn NewFontIterator1(self: Poppler__Document, startPage: i32) Poppler__FontIterator {
        return .{ .ptr = qtc.Poppler__Document_NewFontIterator1(@ptrCast(self.ptr), @bitCast(startPage)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` hint: poppler_qt6_enums.RenderHint `
    ///
    /// ` on: bool `
    ///
    pub fn SetRenderHint2(self: Poppler__Document, hint: i32, on: bool) void {
        qtc.Poppler__Document_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), on);
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
    /// ` self: Poppler__Document `
    ///
    pub fn Delete(self: Poppler__Document) void {
        qtc.Poppler__Document_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
pub const Poppler__SoundObject = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__SoundObject,

    pub const _is_Poppler__SoundObject = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.SoundType `
    ///
    pub fn SoundType(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_SoundType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: Poppler__SoundObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SoundObject_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundobject.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: Poppler__SoundObject, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__SoundObject_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__soundobject.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn SamplingRate(self: Poppler__SoundObject) f64 {
        return qtc.Poppler__SoundObject_SamplingRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn Channels(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_Channels(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn BitsPerSample(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_BitsPerSample(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.SoundEncoding `
    ///
    pub fn SoundEncoding(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_SoundEncoding(@ptrCast(self.ptr));
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
    /// ` self: Poppler__SoundObject `
    ///
    pub fn Delete(self: Poppler__SoundObject) void {
        qtc.Poppler__SoundObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
pub const Poppler__MovieObject = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__MovieObject,

    pub const _is_Poppler__MovieObject = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: Poppler__MovieObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MovieObject_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieobject.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn Size(self: Poppler__MovieObject) QSize {
        return .{ .ptr = qtc.Poppler__MovieObject_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn Rotation(self: Poppler__MovieObject) i32 {
        return qtc.Poppler__MovieObject_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn ShowControls(self: Poppler__MovieObject) bool {
        return qtc.Poppler__MovieObject_ShowControls(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    /// ## Returns:
    ///
    /// ` poppler_qt6_enums.PlayMode `
    ///
    pub fn PlayMode(self: Poppler__MovieObject) i32 {
        return qtc.Poppler__MovieObject_PlayMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn ShowPosterImage(self: Poppler__MovieObject) bool {
        return qtc.Poppler__MovieObject_ShowPosterImage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn PosterImage(self: Poppler__MovieObject) QImage {
        return .{ .ptr = qtc.Poppler__MovieObject_PosterImage(@ptrCast(self.ptr)) };
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
    /// ` self: Poppler__MovieObject `
    ///
    pub fn Delete(self: Poppler__MovieObject) void {
        qtc.Poppler__MovieObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
pub const Poppler__Document__PdfVersion = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Document__PdfVersion,

    pub const _is_Poppler__Document__PdfVersion = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    pub fn Major(self: Poppler__Document__PdfVersion) i32 {
        return qtc.Poppler__Document__PdfVersion_Major(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    /// ` major: i32 `
    ///
    pub fn SetMajor(self: Poppler__Document__PdfVersion, major: i32) void {
        qtc.Poppler__Document__PdfVersion_SetMajor(@ptrCast(self.ptr), @bitCast(major));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    pub fn Minor(self: Poppler__Document__PdfVersion) i32 {
        return qtc.Poppler__Document__PdfVersion_Minor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    /// ` minor: i32 `
    ///
    pub fn SetMinor(self: Poppler__Document__PdfVersion, minor: i32) void {
        qtc.Poppler__Document__PdfVersion_SetMinor(@ptrCast(self.ptr), @bitCast(minor));
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
    /// ` self: Poppler__Document__PdfVersion `
    ///
    pub fn Delete(self: Poppler__Document__PdfVersion) void {
        qtc.Poppler__Document__PdfVersion_Delete(@ptrCast(self.ptr));
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
