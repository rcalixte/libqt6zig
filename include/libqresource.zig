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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QResource object in C++ memory
    ///
    pub fn new() QResource {
        return .{ .ptr = qtc.QResource_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QResource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn new2(file: []const u8) QResource {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.QResource_new2(file_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QResource object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn new3(file: []const u8, _locale: anytype) QResource {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        comptime _ = @TypeOf(_locale)._is_QLocale;
        return .{ .ptr = qtc.QResource_new3(file_str, @ptrCast(_locale.ptr)) };
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` file: []const u8 `
    ///
    pub fn setFileName(self: QResource, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QResource_SetFileName(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QResource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QResource_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QResource.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `absoluteFilePath` instead
    ///
    pub const AbsoluteFilePath = absoluteFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#absoluteFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absoluteFilePath(self: QResource, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QResource_AbsoluteFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QResource.absoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QResource, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QResource_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn locale(self: QResource) QLocale {
        return .{ .ptr = qtc.QResource_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn isValid(self: QResource) bool {
        return qtc.QResource_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `compressionAlgorithm` instead
    ///
    pub const CompressionAlgorithm = compressionAlgorithm;

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
    pub fn compressionAlgorithm(self: QResource) i32 {
        return qtc.QResource_CompressionAlgorithm(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn size(self: QResource) i64 {
        return qtc.QResource_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn data(self: QResource) ?*const u8 {
        return @ptrCast(qtc.QResource_Data(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `uncompressedSize` instead
    ///
    pub const UncompressedSize = uncompressedSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#uncompressedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn uncompressedSize(self: QResource) i64 {
        return qtc.QResource_UncompressedSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uncompressedData` instead
    ///
    pub const UncompressedData = uncompressedData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#uncompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uncompressedData(self: QResource, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QResource_UncompressedData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QResource.uncompressedData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lastModified` instead
    ///
    pub const LastModified = lastModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#lastModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QResource `
    ///
    pub fn lastModified(self: QResource) QDateTime {
        return .{ .ptr = qtc.QResource_LastModified(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `registerResource` instead
    ///
    pub const RegisterResource = registerResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    pub fn registerResource(rccFilename: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        return qtc.QResource_RegisterResource(rccFilename_str);
    }

    /// ### DEPRECATED: Use `unregisterResource` instead
    ///
    pub const UnregisterResource = unregisterResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    pub fn unregisterResource(rccFilename: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        return qtc.QResource_UnregisterResource(rccFilename_str);
    }

    /// ### DEPRECATED: Use `registerResource2` instead
    ///
    pub const RegisterResource2 = registerResource2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    pub fn registerResource2(rccData: *const u8) bool {
        return qtc.QResource_RegisterResource2(@ptrCast(rccData));
    }

    /// ### DEPRECATED: Use `unregisterResource2` instead
    ///
    pub const UnregisterResource2 = unregisterResource2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    pub fn unregisterResource2(rccData: *const u8) bool {
        return qtc.QResource_UnregisterResource2(@ptrCast(rccData));
    }

    /// ### DEPRECATED: Use `registerResource22` instead
    ///
    pub const RegisterResource22 = registerResource22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn registerResource22(rccFilename: []const u8, resourceRoot: []const u8) bool {
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

    /// ### DEPRECATED: Use `unregisterResource22` instead
    ///
    pub const UnregisterResource22 = unregisterResource22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccFilename: []const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn unregisterResource22(rccFilename: []const u8, resourceRoot: []const u8) bool {
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

    /// ### DEPRECATED: Use `registerResource23` instead
    ///
    pub const RegisterResource23 = registerResource23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn registerResource23(rccData: *const u8, resourceRoot: []const u8) bool {
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_RegisterResource23(@ptrCast(rccData), resourceRoot_str);
    }

    /// ### DEPRECATED: Use `unregisterResource23` instead
    ///
    pub const UnregisterResource23 = unregisterResource23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` rccData: *const u8 `
    ///
    /// ` resourceRoot: []const u8 `
    ///
    pub fn unregisterResource23(rccData: *const u8, resourceRoot: []const u8) bool {
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_UnregisterResource23(@ptrCast(rccData), resourceRoot_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qresource.html#dtor.QResource)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QResource `
    ///
    pub fn delete(self: QResource) void {
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
