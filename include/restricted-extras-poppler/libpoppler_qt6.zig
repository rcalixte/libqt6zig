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

    /// ### DEPRECATED: Use `convertDate` instead
    ///
    pub const ConvertDate = convertDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` dateString: [:0]const u8 `
    ///
    pub fn convertDate(dateString: [:0]const u8) QDateTime {
        const dateString_Cstring = dateString.ptr;
        return .{ .ptr = qtc.Poppler_ConvertDate(dateString_Cstring) };
    }

    /// ### DEPRECATED: Use `isCmsAvailable` instead
    ///
    pub const IsCmsAvailable = isCmsAvailable;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn isCmsAvailable() bool {
        return qtc.Poppler_IsCmsAvailable();
    }

    /// ### DEPRECATED: Use `isOverprintPreviewAvailable` instead
    ///
    pub const IsOverprintPreviewAvailable = isOverprintPreviewAvailable;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn isOverprintPreviewAvailable() bool {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::TextBox object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` bBox: QRectF `
    ///
    pub fn new(_text: []const u8, bBox: anytype) Poppler__TextBox {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(bBox)._is_QRectF;
        return .{ .ptr = qtc.Poppler__TextBox_new(text_str, @ptrCast(bBox.ptr)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: Poppler__TextBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__TextBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__TextBox.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingBox` instead
    ///
    pub const BoundingBox = boundingBox;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn boundingBox(self: Poppler__TextBox) QRectF {
        return .{ .ptr = qtc.Poppler__TextBox_BoundingBox(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextWord` instead
    ///
    pub const NextWord = nextWord;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn nextWord(self: Poppler__TextBox) Poppler__TextBox {
        return .{ .ptr = qtc.Poppler__TextBox_NextWord(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `charBoundingBox` instead
    ///
    pub const CharBoundingBox = charBoundingBox;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    /// ` i: i32 `
    ///
    pub fn charBoundingBox(self: Poppler__TextBox, i: i32) QRectF {
        return .{ .ptr = qtc.Poppler__TextBox_CharBoundingBox(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `hasSpaceAfter` instead
    ///
    pub const HasSpaceAfter = hasSpaceAfter;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn hasSpaceAfter(self: Poppler__TextBox) bool {
        return qtc.Poppler__TextBox_HasSpaceAfter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__TextBox `
    ///
    pub fn delete(self: Poppler__TextBox) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::FontInfo object in C++ memory
    ///
    pub fn new() Poppler__FontInfo {
        return .{ .ptr = qtc.Poppler__FontInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Poppler::FontInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fi: Poppler__FontInfo `
    ///
    pub fn new2(fi: anytype) Poppler__FontInfo {
        comptime _ = @TypeOf(fi)._is_Poppler__FontInfo;
        return .{ .ptr = qtc.Poppler__FontInfo_new2(@ptrCast(fi.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FontInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `substituteName` instead
    ///
    pub const SubstituteName = substituteName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn substituteName(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_SubstituteName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FontInfo.substituteName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `file` instead
    ///
    pub const File = file;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn file(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_File(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FontInfo.file: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmbedded` instead
    ///
    pub const IsEmbedded = isEmbedded;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    pub fn isEmbedded(self: Poppler__FontInfo) bool {
        return qtc.Poppler__FontInfo_IsEmbedded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSubset` instead
    ///
    pub const IsSubset = isSubset;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    pub fn isSubset(self: Poppler__FontInfo) bool {
        return qtc.Poppler__FontInfo_IsSubset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: Poppler__FontInfo) i32 {
        return qtc.Poppler__FontInfo_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeName` instead
    ///
    pub const TypeName = typeName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn typeName(self: Poppler__FontInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FontInfo_TypeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FontInfo.typeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontInfo `
    ///
    /// ` fi: Poppler__FontInfo `
    ///
    pub fn operatorAssign(self: Poppler__FontInfo, fi: anytype) void {
        comptime _ = @TypeOf(fi)._is_Poppler__FontInfo;
        qtc.Poppler__FontInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(fi.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FontInfo `
    ///
    pub fn delete(self: Poppler__FontInfo) void {
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

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontIterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn next(self: Poppler__FontIterator, allocator: std.mem.Allocator) []Poppler__FontInfo {
        const _arr: qtc.libqt_list = qtc.Poppler__FontIterator_Next(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FontInfo, _arr.len) catch @panic("Poppler__FontIterator.next: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__FontInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `hasNext` instead
    ///
    pub const HasNext = hasNext;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontIterator `
    ///
    pub fn hasNext(self: Poppler__FontIterator) bool {
        return qtc.Poppler__FontIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentPage` instead
    ///
    pub const CurrentPage = currentPage;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FontIterator `
    ///
    pub fn currentPage(self: Poppler__FontIterator) i32 {
        return qtc.Poppler__FontIterator_CurrentPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FontIterator `
    ///
    pub fn delete(self: Poppler__FontIterator) void {
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

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__EmbeddedFile.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__EmbeddedFile.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn size(self: Poppler__EmbeddedFile) i32 {
        return qtc.Poppler__EmbeddedFile_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modDate` instead
    ///
    pub const ModDate = modDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn modDate(self: Poppler__EmbeddedFile) QDateTime {
        return .{ .ptr = qtc.Poppler__EmbeddedFile_ModDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createDate` instead
    ///
    pub const CreateDate = createDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn createDate(self: Poppler__EmbeddedFile) QDateTime {
        return .{ .ptr = qtc.Poppler__EmbeddedFile_CreateDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `checksum` instead
    ///
    pub const Checksum = checksum;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn checksum(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__EmbeddedFile_Checksum(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__EmbeddedFile.checksum: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__EmbeddedFile_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__EmbeddedFile.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: Poppler__EmbeddedFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__EmbeddedFile_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__EmbeddedFile.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn isValid(self: Poppler__EmbeddedFile) bool {
        return qtc.Poppler__EmbeddedFile_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__EmbeddedFile `
    ///
    pub fn delete(self: Poppler__EmbeddedFile) void {
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

    /// ### DEPRECATED: Use `renderToImage` instead
    ///
    pub const RenderToImage = renderToImage;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn renderToImage(self: Poppler__Page) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `renderToImage2` instead
    ///
    pub const RenderToImage2 = renderToImage2;

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
    pub fn renderToImage2(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, partialUpdateCallback: *const fn (QImage, QVariant) callconv(.c) void, shouldDoPartialUpdateCallback: *const fn (QVariant) callconv(.c) bool, payload: anytype) QImage {
        comptime _ = @TypeOf(payload)._is_QVariant;
        return .{ .ptr = qtc.Poppler__Page_RenderToImage2(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(@intFromPtr(partialUpdateCallback)), @bitCast(@intFromPtr(shouldDoPartialUpdateCallback)), @ptrCast(payload.ptr)) };
    }

    /// ### DEPRECATED: Use `renderToImage3` instead
    ///
    pub const RenderToImage3 = renderToImage3;

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
    pub fn renderToImage3(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, partialUpdateCallback: *const fn (QImage, QVariant) callconv(.c) void, shouldDoPartialUpdateCallback: *const fn (QVariant) callconv(.c) bool, shouldAbortRenderCallback: *const fn (QVariant) callconv(.c) bool, payload: anytype) QImage {
        comptime _ = @TypeOf(payload)._is_QVariant;
        return .{ .ptr = qtc.Poppler__Page_RenderToImage3(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(@intFromPtr(partialUpdateCallback)), @bitCast(@intFromPtr(shouldDoPartialUpdateCallback)), @bitCast(@intFromPtr(shouldAbortRenderCallback)), @ptrCast(payload.ptr)) };
    }

    /// ### DEPRECATED: Use `renderToPainter` instead
    ///
    pub const RenderToPainter = renderToPainter;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` painter: QPainter `
    ///
    pub fn renderToPainter(self: Poppler__Page, painter: anytype) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `thumbnail` instead
    ///
    pub const Thumbnail = thumbnail;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn thumbnail(self: Poppler__Page) QImage {
        return .{ .ptr = qtc.Poppler__Page_Thumbnail(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: Poppler__Page, allocator: std.mem.Allocator, rect: anytype, textLayout: i32) []const u8 {
        comptime _ = @TypeOf(rect)._is_QRectF;
        var _str = qtc.Poppler__Page_Text(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(textLayout));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Page.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text2` instead
    ///
    pub const Text2 = text2;

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
    pub fn text2(self: Poppler__Page, allocator: std.mem.Allocator, rect: anytype) []const u8 {
        comptime _ = @TypeOf(rect)._is_QRectF;
        var _str = qtc.Poppler__Page_Text2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Page.text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `search` instead
    ///
    pub const Search = search;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` _text: []const u8 `
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
    pub fn search(self: Poppler__Page, _text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.Poppler__Page_Search(@ptrCast(self.ptr), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `search2` instead
    ///
    pub const Search2 = search2;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn search2(self: Poppler__Page, allocator: std.mem.Allocator, _text: []const u8) []QRectF {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search2(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("Poppler__Page.search2: Memory allocation failed");
        const _data_val: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `textList` instead
    ///
    pub const TextList = textList;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textList(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__TextBox, _arr.len) catch @panic("Poppler__Page.textList: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `textList2` instead
    ///
    pub const TextList2 = textList2;

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
    pub fn textList2(self: Poppler__Page, allocator: std.mem.Allocator, rotate: i32, shouldAbortExtractionCallback: *const fn (QVariant) callconv(.c) bool, closure: anytype) []Poppler__TextBox {
        comptime _ = @TypeOf(closure)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList2(@ptrCast(self.ptr), @bitCast(rotate), @bitCast(@intFromPtr(shouldAbortExtractionCallback)), @ptrCast(closure.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__TextBox, _arr.len) catch @panic("Poppler__Page.textList2: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pageSizeF` instead
    ///
    pub const PageSizeF = pageSizeF;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn pageSizeF(self: Poppler__Page) QSizeF {
        return .{ .ptr = qtc.Poppler__Page_PageSizeF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pageSize` instead
    ///
    pub const PageSize = pageSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn pageSize(self: Poppler__Page) QSize {
        return .{ .ptr = qtc.Poppler__Page_PageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `transition` instead
    ///
    pub const Transition = transition;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn transition(self: Poppler__Page) Poppler__PageTransition {
        return .{ .ptr = qtc.Poppler__Page_Transition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` act: poppler_qt6_enums.PageAction `
    ///
    pub fn action(self: Poppler__Page, act: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__Page_Action(@ptrCast(self.ptr), @bitCast(act)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

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
    pub fn orientation(self: Poppler__Page) i32 {
        return qtc.Poppler__Page_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultCTM` instead
    ///
    pub const DefaultCTM = defaultCTM;

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
    pub fn defaultCTM(self: Poppler__Page, CTM: *f64, dpiX: f64, dpiY: f64, rotate: i32, upsideDown: bool) void {
        qtc.Poppler__Page_DefaultCTM(@ptrCast(self.ptr), @ptrCast(CTM), @bitCast(dpiX), @bitCast(dpiY), @bitCast(rotate), upsideDown);
    }

    /// ### DEPRECATED: Use `links` instead
    ///
    pub const Links = links;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn links(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Links(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("Poppler__Page.links: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotations` instead
    ///
    pub const Annotations = annotations;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn annotations(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Annotations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__Page.annotations: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotations2` instead
    ///
    pub const Annotations2 = annotations2;

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
    pub fn annotations2(self: Poppler__Page, allocator: std.mem.Allocator, subtypes: Set_i32) []Poppler__Annotation {
        const subtypes_count = subtypes.count();
        const subtypes_keys = allocator.alloc(i32, subtypes_count) catch @panic("Poppler__Page.annotations2: Memory allocation failed");
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
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__Page.annotations2: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAnnotation` instead
    ///
    pub const AddAnnotation = addAnnotation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` ann: Poppler__Annotation `
    ///
    pub fn addAnnotation(self: Poppler__Page, ann: anytype) void {
        comptime _ = @TypeOf(ann)._is_Poppler__Annotation;
        qtc.Poppler__Page_AddAnnotation(@ptrCast(self.ptr), @ptrCast(ann.ptr));
    }

    /// ### DEPRECATED: Use `removeAnnotation` instead
    ///
    pub const RemoveAnnotation = removeAnnotation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` ann: Poppler__Annotation `
    ///
    pub fn removeAnnotation(self: Poppler__Page, ann: anytype) void {
        comptime _ = @TypeOf(ann)._is_Poppler__Annotation;
        qtc.Poppler__Page_RemoveAnnotation(@ptrCast(self.ptr), @ptrCast(ann.ptr));
    }

    /// ### DEPRECATED: Use `formFields` instead
    ///
    pub const FormFields = formFields;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn formFields(self: Poppler__Page, allocator: std.mem.Allocator) []Poppler__FormField {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_FormFields(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FormField, _arr.len) catch @panic("Poppler__Page.formFields: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__FormField = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn duration(self: Poppler__Page) f64 {
        return qtc.Poppler__Page_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: Poppler__Page, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Page_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Page.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn index(self: Poppler__Page) i32 {
        return qtc.Poppler__Page_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `renderToImage1` instead
    ///
    pub const RenderToImage1 = renderToImage1;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` xres: f64 `
    ///
    pub fn renderToImage1(self: Poppler__Page, xres: f64) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage1(@ptrCast(self.ptr), @bitCast(xres)) };
    }

    /// ### DEPRECATED: Use `renderToImage22` instead
    ///
    pub const RenderToImage22 = renderToImage22;

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
    pub fn renderToImage22(self: Poppler__Page, xres: f64, yres: f64) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage22(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres)) };
    }

    /// ### DEPRECATED: Use `renderToImage32` instead
    ///
    pub const RenderToImage32 = renderToImage32;

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
    pub fn renderToImage32(self: Poppler__Page, xres: f64, yres: f64, x: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage32(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x)) };
    }

    /// ### DEPRECATED: Use `renderToImage4` instead
    ///
    pub const RenderToImage4 = renderToImage4;

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
    pub fn renderToImage4(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage4(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `renderToImage5` instead
    ///
    pub const RenderToImage5 = renderToImage5;

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
    pub fn renderToImage5(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage5(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w)) };
    }

    /// ### DEPRECATED: Use `renderToImage6` instead
    ///
    pub const RenderToImage6 = renderToImage6;

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
    pub fn renderToImage6(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage6(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `renderToImage7` instead
    ///
    pub const RenderToImage7 = renderToImage7;

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
    pub fn renderToImage7(self: Poppler__Page, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32) QImage {
        return .{ .ptr = qtc.Poppler__Page_RenderToImage7(@ptrCast(self.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate)) };
    }

    /// ### DEPRECATED: Use `renderToPainter2` instead
    ///
    pub const RenderToPainter2 = renderToPainter2;

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
    pub fn renderToPainter2(self: Poppler__Page, painter: anytype, xres: f64) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres));
    }

    /// ### DEPRECATED: Use `renderToPainter3` instead
    ///
    pub const RenderToPainter3 = renderToPainter3;

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
    pub fn renderToPainter3(self: Poppler__Page, painter: anytype, xres: f64, yres: f64) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres));
    }

    /// ### DEPRECATED: Use `renderToPainter4` instead
    ///
    pub const RenderToPainter4 = renderToPainter4;

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
    pub fn renderToPainter4(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x));
    }

    /// ### DEPRECATED: Use `renderToPainter5` instead
    ///
    pub const RenderToPainter5 = renderToPainter5;

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
    pub fn renderToPainter5(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter5(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `renderToPainter6` instead
    ///
    pub const RenderToPainter6 = renderToPainter6;

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
    pub fn renderToPainter6(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter6(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w));
    }

    /// ### DEPRECATED: Use `renderToPainter7` instead
    ///
    pub const RenderToPainter7 = renderToPainter7;

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
    pub fn renderToPainter7(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter7(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `renderToPainter8` instead
    ///
    pub const RenderToPainter8 = renderToPainter8;

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
    pub fn renderToPainter8(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter8(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate));
    }

    /// ### DEPRECATED: Use `renderToPainter9` instead
    ///
    pub const RenderToPainter9 = renderToPainter9;

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
    pub fn renderToPainter9(self: Poppler__Page, painter: anytype, xres: f64, yres: f64, x: i32, y: i32, w: i32, h: i32, rotate: i32, flags: i32) bool {
        comptime _ = @TypeOf(painter)._is_QPainter;
        return qtc.Poppler__Page_RenderToPainter9(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(xres), @bitCast(yres), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rotate), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `search7` instead
    ///
    pub const Search7 = search7;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` _text: []const u8 `
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
    pub fn search7(self: Poppler__Page, _text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32, flags: i32) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.Poppler__Page_Search7(@ptrCast(self.ptr), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `search8` instead
    ///
    pub const Search8 = search8;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` _text: []const u8 `
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
    pub fn search8(self: Poppler__Page, _text: []const u8, sLeft: *f64, sTop: *f64, sRight: *f64, sBottom: *f64, direction: i32, flags: i32, rotate: i32) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.Poppler__Page_Search8(@ptrCast(self.ptr), text_str, @ptrCast(sLeft), @ptrCast(sTop), @ptrCast(sRight), @ptrCast(sBottom), @bitCast(direction), @bitCast(flags), @bitCast(rotate));
    }

    /// ### DEPRECATED: Use `search22` instead
    ///
    pub const Search22 = search22;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    pub fn search22(self: Poppler__Page, allocator: std.mem.Allocator, _text: []const u8, flags: i32) []QRectF {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search22(@ptrCast(self.ptr), text_str, @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("Poppler__Page.search22: Memory allocation failed");
        const _data_val: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `search3` instead
    ///
    pub const Search3 = search3;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Page `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` flags: flag of poppler_qt6_enums.SearchFlag `
    ///
    /// ` rotate: poppler_qt6_enums.Rotation `
    ///
    pub fn search3(self: Poppler__Page, allocator: std.mem.Allocator, _text: []const u8, flags: i32, rotate: i32) []QRectF {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Poppler__Page_Search3(@ptrCast(self.ptr), text_str, @bitCast(flags), @bitCast(rotate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QRectF, _arr.len) catch @panic("Poppler__Page.search3: Memory allocation failed");
        const _data_val: [*]QtC.QRectF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `textList1` instead
    ///
    pub const TextList1 = textList1;

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
    pub fn textList1(self: Poppler__Page, allocator: std.mem.Allocator, rotate: i32) []Poppler__TextBox {
        const _arr: qtc.libqt_list = qtc.Poppler__Page_TextList1(@ptrCast(self.ptr), @bitCast(rotate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__TextBox, _arr.len) catch @panic("Poppler__Page.textList1: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__TextBox = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Page `
    ///
    pub fn delete(self: Poppler__Page) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::OutlineItem object in C++ memory
    ///
    pub fn new() Poppler__OutlineItem {
        return .{ .ptr = qtc.Poppler__OutlineItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Poppler::OutlineItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__OutlineItem `
    ///
    pub fn new2(other: anytype) Poppler__OutlineItem {
        comptime _ = @TypeOf(other)._is_Poppler__OutlineItem;
        return .{ .ptr = qtc.Poppler__OutlineItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` other: Poppler__OutlineItem `
    ///
    pub fn operatorAssign(self: Poppler__OutlineItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__OutlineItem;
        qtc.Poppler__OutlineItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn isNull(self: Poppler__OutlineItem) bool {
        return qtc.Poppler__OutlineItem_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__OutlineItem.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn isOpen(self: Poppler__OutlineItem) bool {
        return qtc.Poppler__OutlineItem_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `externalFileName` instead
    ///
    pub const ExternalFileName = externalFileName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn externalFileName(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_ExternalFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__OutlineItem.externalFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uri` instead
    ///
    pub const Uri = uri;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uri(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__OutlineItem_Uri(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__OutlineItem.uri: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn hasChildren(self: Poppler__OutlineItem) bool {
        return qtc.Poppler__OutlineItem_HasChildren(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Poppler__OutlineItem, allocator: std.mem.Allocator) []Poppler__OutlineItem {
        const _arr: qtc.libqt_list = qtc.Poppler__OutlineItem_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__OutlineItem, _arr.len) catch @panic("Poppler__OutlineItem.children: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__OutlineItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__OutlineItem `
    ///
    pub fn delete(self: Poppler__OutlineItem) void {
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

    /// ### DEPRECATED: Use `setColorDisplayProfile` instead
    ///
    pub const SetColorDisplayProfile = setColorDisplayProfile;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` outputProfileA: ?*anyopaque `
    ///
    pub fn setColorDisplayProfile(self: Poppler__Document, outputProfileA: ?*anyopaque) void {
        qtc.Poppler__Document_SetColorDisplayProfile(@ptrCast(self.ptr), @ptrCast(outputProfileA));
    }

    /// ### DEPRECATED: Use `setColorDisplayProfileName` instead
    ///
    pub const SetColorDisplayProfileName = setColorDisplayProfileName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setColorDisplayProfileName(self: Poppler__Document, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Poppler__Document_SetColorDisplayProfileName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `colorRgbProfile` instead
    ///
    pub const ColorRgbProfile = colorRgbProfile;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn colorRgbProfile(self: Poppler__Document) ?*anyopaque {
        return qtc.Poppler__Document_ColorRgbProfile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorDisplayProfile` instead
    ///
    pub const ColorDisplayProfile = colorDisplayProfile;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn colorDisplayProfile(self: Poppler__Document) ?*anyopaque {
        return qtc.Poppler__Document_ColorDisplayProfile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn load(filePath: []const u8) Poppler__Document {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Load(filePath_str) };
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn load2(device: anytype) Poppler__Document {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.Poppler__Document_Load2(@ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `loadFromData` instead
    ///
    pub const LoadFromData = loadFromData;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    pub fn loadFromData(fileContents: []u8) Poppler__Document {
        const fileContents_str = qtc.libqt_string{
            .len = fileContents.len,
            .data = fileContents.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_LoadFromData(fileContents_str) };
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` _index: i32 `
    ///
    pub fn page(self: Poppler__Document, _index: i32) Poppler__Page {
        return .{ .ptr = qtc.Poppler__Document_Page(@ptrCast(self.ptr), @bitCast(_index)) };
    }

    /// ### DEPRECATED: Use `page2` instead
    ///
    pub const Page2 = page2;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn page2(self: Poppler__Document, _label: []const u8) Poppler__Page {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Page2(@ptrCast(self.ptr), label_str) };
    }

    /// ### DEPRECATED: Use `numPages` instead
    ///
    pub const NumPages = numPages;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn numPages(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_NumPages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pageMode` instead
    ///
    pub const PageMode = pageMode;

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
    pub fn pageMode(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_PageMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pageLayout` instead
    ///
    pub const PageLayout = pageLayout;

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
    pub fn pageLayout(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_PageLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textDirection` instead
    ///
    pub const TextDirection = textDirection;

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
    pub fn textDirection(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_TextDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unlock` instead
    ///
    pub const Unlock = unlock;

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
    pub fn unlock(self: Poppler__Document, ownerPassword: []u8, userPassword: []u8) bool {
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

    /// ### DEPRECATED: Use `isLocked` instead
    ///
    pub const IsLocked = isLocked;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn isLocked(self: Poppler__Document) bool {
        return qtc.Poppler__Document_IsLocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn date(self: Poppler__Document, typeVal: []const u8) QDateTime {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Date(@ptrCast(self.ptr), typeVal_str) };
    }

    /// ### DEPRECATED: Use `setDate` instead
    ///
    pub const SetDate = setDate;

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
    pub fn setDate(self: Poppler__Document, key: []const u8, val: anytype) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(val)._is_QDateTime;
        return qtc.Poppler__Document_SetDate(@ptrCast(self.ptr), key_str, @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn creationDate(self: Poppler__Document) QDateTime {
        return .{ .ptr = qtc.Poppler__Document_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__Document, val: anytype) bool {
        comptime _ = @TypeOf(val)._is_QDateTime;
        return qtc.Poppler__Document_SetCreationDate(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn modificationDate(self: Poppler__Document) QDateTime {
        return .{ .ptr = qtc.Poppler__Document_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__Document, val: anytype) bool {
        comptime _ = @TypeOf(val)._is_QDateTime;
        return qtc.Poppler__Document_SetModificationDate(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `info` instead
    ///
    pub const Info = info;

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
    pub fn info(self: Poppler__Document, allocator: std.mem.Allocator, typeVal: []const u8) []const u8 {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        var _str = qtc.Poppler__Document_Info(@ptrCast(self.ptr), typeVal_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.info: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setInfo` instead
    ///
    pub const SetInfo = setInfo;

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
    pub fn setInfo(self: Poppler__Document, key: []const u8, val: []const u8) bool {
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

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn setTitle(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetTitle(@ptrCast(self.ptr), val_str);
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetAuthor(@ptrCast(self.ptr), val_str);
    }

    /// ### DEPRECATED: Use `subject` instead
    ///
    pub const Subject = subject;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subject(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Subject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.subject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSubject` instead
    ///
    pub const SetSubject = setSubject;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn setSubject(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetSubject(@ptrCast(self.ptr), val_str);
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keywords(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Keywords(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.keywords: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setKeywords` instead
    ///
    pub const SetKeywords = setKeywords;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn setKeywords(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetKeywords(@ptrCast(self.ptr), val_str);
    }

    /// ### DEPRECATED: Use `creator` instead
    ///
    pub const Creator = creator;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn creator(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Creator(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.creator: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCreator` instead
    ///
    pub const SetCreator = setCreator;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn setCreator(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetCreator(@ptrCast(self.ptr), val_str);
    }

    /// ### DEPRECATED: Use `producer` instead
    ///
    pub const Producer = producer;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn producer(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Producer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.producer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProducer` instead
    ///
    pub const SetProducer = setProducer;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` val: []const u8 `
    ///
    pub fn setProducer(self: Poppler__Document, val: []const u8) bool {
        const val_str = qtc.libqt_string{
            .len = val.len,
            .data = val.ptr,
        };
        return qtc.Poppler__Document_SetProducer(@ptrCast(self.ptr), val_str);
    }

    /// ### DEPRECATED: Use `removeInfo` instead
    ///
    pub const RemoveInfo = removeInfo;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn removeInfo(self: Poppler__Document) bool {
        return qtc.Poppler__Document_RemoveInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `infoKeys` instead
    ///
    pub const InfoKeys = infoKeys;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn infoKeys(self: Poppler__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_InfoKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Poppler__Document.infoKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Poppler__Document.infoKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEncrypted` instead
    ///
    pub const IsEncrypted = isEncrypted;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn isEncrypted(self: Poppler__Document) bool {
        return qtc.Poppler__Document_IsEncrypted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLinearized` instead
    ///
    pub const IsLinearized = isLinearized;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn isLinearized(self: Poppler__Document) bool {
        return qtc.Poppler__Document_IsLinearized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToPrint` instead
    ///
    pub const OkToPrint = okToPrint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToPrint(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToPrint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToPrintHighRes` instead
    ///
    pub const OkToPrintHighRes = okToPrintHighRes;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToPrintHighRes(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToPrintHighRes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToChange` instead
    ///
    pub const OkToChange = okToChange;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToChange(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToCopy` instead
    ///
    pub const OkToCopy = okToCopy;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToCopy(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToCopy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToAddNotes` instead
    ///
    pub const OkToAddNotes = okToAddNotes;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToAddNotes(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToAddNotes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToFillForm` instead
    ///
    pub const OkToFillForm = okToFillForm;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToFillForm(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToFillForm(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToCreateFormFields` instead
    ///
    pub const OkToCreateFormFields = okToCreateFormFields;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToCreateFormFields(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToCreateFormFields(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToExtractForAccessibility` instead
    ///
    pub const OkToExtractForAccessibility = okToExtractForAccessibility;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToExtractForAccessibility(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToExtractForAccessibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `okToAssemble` instead
    ///
    pub const OkToAssemble = okToAssemble;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn okToAssemble(self: Poppler__Document) bool {
        return qtc.Poppler__Document_OkToAssemble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getPdfVersion` instead
    ///
    pub const GetPdfVersion = getPdfVersion;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn getPdfVersion(self: Poppler__Document) Poppler__Document__PdfVersion {
        return .{ .ptr = qtc.Poppler__Document_GetPdfVersion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fonts` instead
    ///
    pub const Fonts = fonts;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fonts(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__FontInfo {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Fonts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FontInfo, _arr.len) catch @panic("Poppler__Document.fonts: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__FontInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `newFontIterator` instead
    ///
    pub const NewFontIterator = newFontIterator;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn newFontIterator(self: Poppler__Document) Poppler__FontIterator {
        return .{ .ptr = qtc.Poppler__Document_NewFontIterator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontData` instead
    ///
    pub const FontData = fontData;

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
    pub fn fontData(self: Poppler__Document, allocator: std.mem.Allocator, fi: anytype) []u8 {
        comptime _ = @TypeOf(fi)._is_Poppler__FontInfo;
        var _bytearray: qtc.libqt_string = qtc.Poppler__Document_FontData(@ptrCast(self.ptr), @ptrCast(fi.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__Document.fontData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `embeddedFiles` instead
    ///
    pub const EmbeddedFiles = embeddedFiles;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn embeddedFiles(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__EmbeddedFile {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_EmbeddedFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__EmbeddedFile, _arr.len) catch @panic("Poppler__Document.embeddedFiles: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__EmbeddedFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `hasEmbeddedFiles` instead
    ///
    pub const HasEmbeddedFiles = hasEmbeddedFiles;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn hasEmbeddedFiles(self: Poppler__Document) bool {
        return qtc.Poppler__Document_HasEmbeddedFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `outline` instead
    ///
    pub const Outline = outline;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn outline(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__OutlineItem {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Outline(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__OutlineItem, _arr.len) catch @panic("Poppler__Document.outline: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__OutlineItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `linkDestination` instead
    ///
    pub const LinkDestination = linkDestination;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn linkDestination(self: Poppler__Document, _name: []const u8) Poppler__LinkDestination {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_LinkDestination(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setPaperColor` instead
    ///
    pub const SetPaperColor = setPaperColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` color: QColor `
    ///
    pub fn setPaperColor(self: Poppler__Document, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__Document_SetPaperColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `paperColor` instead
    ///
    pub const PaperColor = paperColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn paperColor(self: Poppler__Document) QColor {
        return .{ .ptr = qtc.Poppler__Document_PaperColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRenderBackend` instead
    ///
    pub const SetRenderBackend = setRenderBackend;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` backend: poppler_qt6_enums.RenderBackend `
    ///
    pub fn setRenderBackend(self: Poppler__Document, backend: i32) void {
        qtc.Poppler__Document_SetRenderBackend(@ptrCast(self.ptr), @bitCast(backend));
    }

    /// ### DEPRECATED: Use `renderBackend` instead
    ///
    pub const RenderBackend = renderBackend;

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
    pub fn renderBackend(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_RenderBackend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableRenderBackends` instead
    ///
    pub const AvailableRenderBackends = availableRenderBackends;

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
    pub fn availableRenderBackends(allocator: std.mem.Allocator) Set_i32 {
        const _set: qtc.libqt_list = qtc.Poppler__Document_AvailableRenderBackends();
        var _ret: Set_i32 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("Poppler__Document.availableRenderBackends: Total capacity allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `setRenderHint` instead
    ///
    pub const SetRenderHint = setRenderHint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` hint: poppler_qt6_enums.RenderHint `
    ///
    pub fn setRenderHint(self: Poppler__Document, hint: i32) void {
        qtc.Poppler__Document_SetRenderHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `renderHints` instead
    ///
    pub const RenderHints = renderHints;

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
    pub fn renderHints(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_RenderHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `psConverter` instead
    ///
    pub const PsConverter = psConverter;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn psConverter(self: Poppler__Document) Poppler__PSConverter {
        return .{ .ptr = qtc.Poppler__Document_PsConverter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pdfConverter` instead
    ///
    pub const PdfConverter = pdfConverter;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn pdfConverter(self: Poppler__Document) Poppler__PDFConverter {
        return .{ .ptr = qtc.Poppler__Document_PdfConverter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metadata` instead
    ///
    pub const Metadata = metadata;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn metadata(self: Poppler__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Document_Metadata(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Document.metadata: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasOptionalContent` instead
    ///
    pub const HasOptionalContent = hasOptionalContent;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn hasOptionalContent(self: Poppler__Document) bool {
        return qtc.Poppler__Document_HasOptionalContent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `optionalContentModel` instead
    ///
    pub const OptionalContentModel = optionalContentModel;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn optionalContentModel(self: Poppler__Document) Poppler__OptContentModel {
        return .{ .ptr = qtc.Poppler__Document_OptionalContentModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `applyResetFormsLink` instead
    ///
    pub const ApplyResetFormsLink = applyResetFormsLink;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` link: Poppler__LinkResetForm `
    ///
    pub fn applyResetFormsLink(self: Poppler__Document, link: anytype) void {
        comptime _ = @TypeOf(link)._is_Poppler__LinkResetForm;
        qtc.Poppler__Document_ApplyResetFormsLink(@ptrCast(self.ptr), @ptrCast(link.ptr));
    }

    /// ### DEPRECATED: Use `scripts` instead
    ///
    pub const Scripts = scripts;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scripts(self: Poppler__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Scripts(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Poppler__Document.scripts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Poppler__Document.scripts: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` typeVal: poppler_qt6_enums.DocumentAdditionalActionsType `
    ///
    pub fn additionalAction(self: Poppler__Document, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__Document_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `formType` instead
    ///
    pub const FormType = formType;

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
    pub fn formType(self: Poppler__Document) i32 {
        return qtc.Poppler__Document_FormType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `formCalculateOrder` instead
    ///
    pub const FormCalculateOrder = formCalculateOrder;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn formCalculateOrder(self: Poppler__Document, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_FormCalculateOrder(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("Poppler__Document.formCalculateOrder: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `signatures` instead
    ///
    pub const Signatures = signatures;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signatures(self: Poppler__Document, allocator: std.mem.Allocator) []Poppler__FormFieldSignature {
        const _arr: qtc.libqt_list = qtc.Poppler__Document_Signatures(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__FormFieldSignature, _arr.len) catch @panic("Poppler__Document.signatures: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__FormFieldSignature = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `xrefWasReconstructed` instead
    ///
    pub const XrefWasReconstructed = xrefWasReconstructed;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn xrefWasReconstructed(self: Poppler__Document) bool {
        return qtc.Poppler__Document_XrefWasReconstructed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXRefReconstructedCallback` instead
    ///
    pub const SetXRefReconstructedCallback = setXRefReconstructedCallback;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn setXRefReconstructedCallback(self: Poppler__Document, callback: *const fn () callconv(.c) void) void {
        qtc.Poppler__Document_SetXRefReconstructedCallback(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `load22` instead
    ///
    pub const Load22 = load22;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn load22(filePath: []const u8, ownerPassword: []u8) Poppler__Document {
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

    /// ### DEPRECATED: Use `load3` instead
    ///
    pub const Load3 = load3;

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
    pub fn load3(filePath: []const u8, ownerPassword: []u8, userPassword: []u8) Poppler__Document {
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

    /// ### DEPRECATED: Use `load23` instead
    ///
    pub const Load23 = load23;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn load23(device: anytype, ownerPassword: []u8) Poppler__Document {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const ownerPassword_str = qtc.libqt_string{
            .len = ownerPassword.len,
            .data = ownerPassword.ptr,
        };
        return .{ .ptr = qtc.Poppler__Document_Load23(@ptrCast(device.ptr), ownerPassword_str) };
    }

    /// ### DEPRECATED: Use `load32` instead
    ///
    pub const Load32 = load32;

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
    pub fn load32(device: anytype, ownerPassword: []u8, userPassword: []u8) Poppler__Document {
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

    /// ### DEPRECATED: Use `loadFromData2` instead
    ///
    pub const LoadFromData2 = loadFromData2;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileContents: []u8 `
    ///
    /// ` ownerPassword: []u8 `
    ///
    pub fn loadFromData2(fileContents: []u8, ownerPassword: []u8) Poppler__Document {
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

    /// ### DEPRECATED: Use `loadFromData3` instead
    ///
    pub const LoadFromData3 = loadFromData3;

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
    pub fn loadFromData3(fileContents: []u8, ownerPassword: []u8, userPassword: []u8) Poppler__Document {
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

    /// ### DEPRECATED: Use `newFontIterator1` instead
    ///
    pub const NewFontIterator1 = newFontIterator1;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document `
    ///
    /// ` startPage: i32 `
    ///
    pub fn newFontIterator1(self: Poppler__Document, startPage: i32) Poppler__FontIterator {
        return .{ .ptr = qtc.Poppler__Document_NewFontIterator1(@ptrCast(self.ptr), @bitCast(startPage)) };
    }

    /// ### DEPRECATED: Use `setRenderHint2` instead
    ///
    pub const SetRenderHint2 = setRenderHint2;

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
    pub fn setRenderHint2(self: Poppler__Document, hint: i32, on: bool) void {
        qtc.Poppler__Document_SetRenderHint2(@ptrCast(self.ptr), @bitCast(hint), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Document `
    ///
    pub fn delete(self: Poppler__Document) void {
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

    /// ### DEPRECATED: Use `soundType` instead
    ///
    pub const SoundType = soundType;

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
    pub fn soundType(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_SoundType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: Poppler__SoundObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SoundObject_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SoundObject.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: Poppler__SoundObject, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__SoundObject_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__SoundObject.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `samplingRate` instead
    ///
    pub const SamplingRate = samplingRate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn samplingRate(self: Poppler__SoundObject) f64 {
        return qtc.Poppler__SoundObject_SamplingRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `channels` instead
    ///
    pub const Channels = channels;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn channels(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_Channels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bitsPerSample` instead
    ///
    pub const BitsPerSample = bitsPerSample;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn bitsPerSample(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_BitsPerSample(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `soundEncoding` instead
    ///
    pub const SoundEncoding = soundEncoding;

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
    pub fn soundEncoding(self: Poppler__SoundObject) i32 {
        return qtc.Poppler__SoundObject_SoundEncoding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__SoundObject `
    ///
    pub fn delete(self: Poppler__SoundObject) void {
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

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: Poppler__MovieObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MovieObject_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MovieObject.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn size(self: Poppler__MovieObject) QSize {
        return .{ .ptr = qtc.Poppler__MovieObject_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn rotation(self: Poppler__MovieObject) i32 {
        return qtc.Poppler__MovieObject_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showControls` instead
    ///
    pub const ShowControls = showControls;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn showControls(self: Poppler__MovieObject) bool {
        return qtc.Poppler__MovieObject_ShowControls(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `playMode` instead
    ///
    pub const PlayMode = playMode;

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
    pub fn playMode(self: Poppler__MovieObject) i32 {
        return qtc.Poppler__MovieObject_PlayMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showPosterImage` instead
    ///
    pub const ShowPosterImage = showPosterImage;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn showPosterImage(self: Poppler__MovieObject) bool {
        return qtc.Poppler__MovieObject_ShowPosterImage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `posterImage` instead
    ///
    pub const PosterImage = posterImage;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn posterImage(self: Poppler__MovieObject) QImage {
        return .{ .ptr = qtc.Poppler__MovieObject_PosterImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__MovieObject `
    ///
    pub fn delete(self: Poppler__MovieObject) void {
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

    /// ### DEPRECATED: Use `major` instead
    ///
    pub const Major = major;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    pub fn major(self: Poppler__Document__PdfVersion) i32 {
        return qtc.Poppler__Document__PdfVersion_Major(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMajor` instead
    ///
    pub const SetMajor = setMajor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    /// ` _major: i32 `
    ///
    pub fn setMajor(self: Poppler__Document__PdfVersion, _major: i32) void {
        qtc.Poppler__Document__PdfVersion_SetMajor(@ptrCast(self.ptr), @bitCast(_major));
    }

    /// ### DEPRECATED: Use `minor` instead
    ///
    pub const Minor = minor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    pub fn minor(self: Poppler__Document__PdfVersion) i32 {
        return qtc.Poppler__Document__PdfVersion_Minor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinor` instead
    ///
    pub const SetMinor = setMinor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    /// ` _minor: i32 `
    ///
    pub fn setMinor(self: Poppler__Document__PdfVersion, _minor: i32) void {
        qtc.Poppler__Document__PdfVersion_SetMinor(@ptrCast(self.ptr), @bitCast(_minor));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Document__PdfVersion `
    ///
    pub fn delete(self: Poppler__Document__PdfVersion) void {
        qtc.Poppler__Document__PdfVersion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
pub const enums = struct {
    pub const Type = enum {
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

    pub const Rotation = enum {
        pub const Rotate0: i32 = 0;
        pub const Rotate90: i32 = 1;
        pub const Rotate180: i32 = 2;
        pub const Rotate270: i32 = 3;
    };

    pub const PageAction = enum {
        pub const Opening: i32 = 0;
        pub const Closing: i32 = 1;
    };

    pub const TextLayout = enum {
        pub const PhysicalLayout: i32 = 0;
        pub const RawOrderLayout: i32 = 1;
    };

    pub const PainterFlag = enum {
        pub const NoPainterFlags: i32 = 0;
        pub const DontSaveAndRestore: i32 = 1;
    };

    pub const SearchDirection = enum {
        pub const FromTop: i32 = 0;
        pub const NextResult: i32 = 1;
        pub const PreviousResult: i32 = 2;
    };

    pub const SearchMode = enum {
        pub const CaseSensitive: i32 = 0;
        pub const CaseInsensitive: i32 = 1;
    };

    pub const SearchFlag = enum {
        pub const NoSearchFlags: i32 = 0;
        pub const IgnoreCase: i32 = 1;
        pub const WholeWords: i32 = 2;
        pub const IgnoreDiacritics: i32 = 4;
        pub const AcrossLines: i32 = 8;
    };

    pub const Orientation = enum {
        pub const Landscape: i32 = 0;
        pub const Portrait: i32 = 1;
        pub const Seascape: i32 = 2;
        pub const UpsideDown: i32 = 3;
    };

    pub const PageMode = enum {
        pub const UseNone: i32 = 0;
        pub const UseOutlines: i32 = 1;
        pub const UseThumbs: i32 = 2;
        pub const FullScreen: i32 = 3;
        pub const UseOC: i32 = 4;
        pub const UseAttach: i32 = 5;
    };

    pub const PageLayout = enum {
        pub const NoLayout: i32 = 0;
        pub const SinglePage: i32 = 1;
        pub const OneColumn: i32 = 2;
        pub const TwoColumnLeft: i32 = 3;
        pub const TwoColumnRight: i32 = 4;
        pub const TwoPageLeft: i32 = 5;
        pub const TwoPageRight: i32 = 6;
    };

    pub const RenderBackend = enum {
        pub const SplashBackend: i32 = 0;
        pub const QPainterBackend: i32 = 1;
    };

    pub const RenderHint = enum {
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

    pub const FormType = enum {
        pub const NoForm: i32 = 0;
        pub const AcroForm: i32 = 1;
        pub const XfaForm: i32 = 2;
    };

    pub const DocumentAdditionalActionsType = enum {
        pub const CloseDocument: i32 = 0;
        pub const SaveDocumentStart: i32 = 1;
        pub const SaveDocumentFinish: i32 = 2;
        pub const PrintDocumentStart: i32 = 3;
        pub const PrintDocumentFinish: i32 = 4;
    };

    pub const SoundType = enum {
        pub const External: i32 = 0;
        pub const Embedded: i32 = 1;
    };

    pub const SoundEncoding = enum {
        pub const Raw: i32 = 0;
        pub const Signed: i32 = 1;
        pub const MuLaw: i32 = 2;
        pub const ALaw: i32 = 3;
    };

    pub const PlayMode = enum {
        pub const PlayOnce: i32 = 0;
        pub const PlayOpen: i32 = 1;
        pub const PlayRepeat: i32 = 2;
        pub const PlayPalindrome: i32 = 3;
    };
};
