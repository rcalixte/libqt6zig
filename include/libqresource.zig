const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QLocale = @import("libqt6").QLocale;
const qresource_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html)
pub const QResource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QResource,

    pub const _is_QResource = {};

    /// New constructs a new QResource object.
    ///
    pub fn New() QResource {
        return .{ .ptr = qtc.QResource_new() };
    }

    /// New2 constructs a new QResource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn New2(file: []const u8) QResource {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QResource_new2(file_str) };
    }

    /// New3 constructs a new QResource object.
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` locale: QLocale `
    ///
    pub fn New3(file: []const u8, locale: anytype) QResource {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        comptime _ = @TypeOf(locale)._is_QLocale;
        return .{ .ptr = qtc.QResource_new3(file_str, @ptrCast(locale.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetFileName(self: QResource, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QResource_SetFileName(@ptrCast(self.ptr), file_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QResource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QResource_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qresource.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsoluteFilePath(self: QResource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QResource_AbsoluteFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qresource.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QResource, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QResource_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn Locale(self: QResource) QLocale {
        return .{ .ptr = qtc.QResource_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn IsValid(self: QResource) bool {
        return qtc.QResource_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#compressionAlgorithm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ## Returns:
    ///
    /// ` qresource_enums.Compression `
    ///
    pub fn CompressionAlgorithm(self: QResource) i32 {
        return qtc.QResource_CompressionAlgorithm(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn Size(self: QResource) i64 {
        return qtc.QResource_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn Data(self: QResource) ?*const u8 {
        return @ptrCast(qtc.QResource_Data(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#uncompressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn UncompressedSize(self: QResource) i64 {
        return qtc.QResource_UncompressedSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#uncompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UncompressedData(self: QResource, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QResource_UncompressedData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qresource.UncompressedData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn LastModified(self: QResource) QDateTime {
        return .{ .ptr = qtc.QResource_LastModified(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    pub fn RegisterResource(rccFilename: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        return qtc.QResource_RegisterResource(rccFilename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    pub fn UnregisterResource(rccFilename: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        return qtc.QResource_UnregisterResource(rccFilename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    pub fn RegisterResource2(rccData: *const u8) bool {
        return qtc.QResource_RegisterResource2(@ptrCast(rccData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    pub fn UnregisterResource2(rccData: *const u8) bool {
        return qtc.QResource_UnregisterResource2(@ptrCast(rccData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn RegisterResource22(rccFilename: []const u8, resourceRoot: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_RegisterResource22(rccFilename_str, resourceRoot_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn UnregisterResource22(rccFilename: []const u8, resourceRoot: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_UnregisterResource22(rccFilename_str, resourceRoot_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn RegisterResource23(rccData: *const u8, resourceRoot: []const u8) bool {
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_RegisterResource23(@ptrCast(rccData), resourceRoot_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn UnregisterResource23(rccData: *const u8, resourceRoot: []const u8) bool {
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_UnregisterResource23(@ptrCast(rccData), resourceRoot_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#dtor.QResource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QResource `
    ///
    pub fn Delete(self: QResource) void {
        qtc.QResource_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#public-types)
pub const enums = struct {
    pub const Compression = enum(i32) {
        pub const NoCompression: i32 = 0;
        pub const ZlibCompression: i32 = 1;
        pub const ZstdCompression: i32 = 2;
    };
};
