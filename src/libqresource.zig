const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qresource_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qresource.html
pub const qresource = struct {
    /// New constructs a new QResource object.
    ///
    ///
    pub fn New() QtC.QResource {
        return qtc.QResource_new();
    }

    /// New2 constructs a new QResource object.
    ///
    /// ``` file: []const u8 ```
    pub fn New2(file: []const u8) QtC.QResource {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QResource_new2(file_str);
    }

    /// New3 constructs a new QResource object.
    ///
    /// ``` file: []const u8, locale: QtC.QLocale ```
    pub fn New3(file: []const u8, locale: ?*anyopaque) QtC.QResource {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };

        return qtc.QResource_new3(file_str, @ptrCast(locale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setFileName)
    ///
    /// ``` self: QtC.QResource, file: []const u8 ```
    pub fn SetFileName(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.QResource_SetFileName(@ptrCast(self), file_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#fileName)
    ///
    /// ``` self: QtC.QResource, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QResource_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qresource.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#absoluteFilePath)
    ///
    /// ``` self: QtC.QResource, allocator: std.mem.Allocator ```
    pub fn AbsoluteFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QResource_AbsoluteFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qresource.AbsoluteFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setLocale)
    ///
    /// ``` self: QtC.QResource, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QResource_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#locale)
    ///
    /// ``` self: QtC.QResource ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QResource_Locale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#isValid)
    ///
    /// ``` self: QtC.QResource ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QResource_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#compressionAlgorithm)
    ///
    /// ``` self: QtC.QResource ```
    ///
    /// Returns: ``` qresource_enums.Compression ```
    pub fn CompressionAlgorithm(self: ?*anyopaque) i64 {
        return qtc.QResource_CompressionAlgorithm(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#size)
    ///
    /// ``` self: QtC.QResource ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QResource_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#data)
    ///
    /// ``` self: QtC.QResource ```
    pub fn Data(self: ?*anyopaque) ?*const u8 {
        return @ptrCast(qtc.QResource_Data(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedSize)
    ///
    /// ``` self: QtC.QResource ```
    pub fn UncompressedSize(self: ?*anyopaque) i64 {
        return qtc.QResource_UncompressedSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedData)
    ///
    /// ``` self: QtC.QResource, allocator: std.mem.Allocator ```
    pub fn UncompressedData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QResource_UncompressedData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qresource.UncompressedData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#lastModified)
    ///
    /// ``` self: QtC.QResource ```
    pub fn LastModified(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QResource_LastModified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ``` rccFilename: []const u8 ```
    pub fn RegisterResource(rccFilename: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        return qtc.QResource_RegisterResource(rccFilename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ``` rccFilename: []const u8 ```
    pub fn UnregisterResource(rccFilename: []const u8) bool {
        const rccFilename_str = qtc.libqt_string{
            .len = rccFilename.len,
            .data = rccFilename.ptr,
        };
        return qtc.QResource_UnregisterResource(rccFilename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ``` rccData: *const u8 ```
    pub fn RegisterResource2(rccData: *const u8) bool {
        return qtc.QResource_RegisterResource2(@ptrCast(rccData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ``` rccData: *const u8 ```
    pub fn UnregisterResource2(rccData: *const u8) bool {
        return qtc.QResource_UnregisterResource2(@ptrCast(rccData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ``` rccFilename: []const u8, resourceRoot: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ``` rccFilename: []const u8, resourceRoot: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
    ///
    /// ``` rccData: *const u8, resourceRoot: []const u8 ```
    pub fn RegisterResource23(rccData: *const u8, resourceRoot: []const u8) bool {
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_RegisterResource23(@ptrCast(rccData), resourceRoot_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
    ///
    /// ``` rccData: *const u8, resourceRoot: []const u8 ```
    pub fn UnregisterResource23(rccData: *const u8, resourceRoot: []const u8) bool {
        const resourceRoot_str = qtc.libqt_string{
            .len = resourceRoot.len,
            .data = resourceRoot.ptr,
        };
        return qtc.QResource_UnregisterResource23(@ptrCast(rccData), resourceRoot_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#dtor.QResource)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QResource ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QResource_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qresource.html#types
pub const enums = struct {
    pub const Compression = enum {
        pub const NoCompression: i32 = 0;
        pub const ZlibCompression: i32 = 1;
        pub const ZstdCompression: i32 = 2;
    };
};
