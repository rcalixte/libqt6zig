const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QHttpMultiPart = @import("libqt6").QHttpMultiPart;
const QIODevice = @import("libqt6").QIODevice;
const qformdatabuilder_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html)
pub const QFormDataPartBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFormDataPartBuilder,

    pub const _is_QFormDataPartBuilder = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFormDataPartBuilder object in C++ memory
    ///
    pub fn new() QFormDataPartBuilder {
        return .{ .ptr = qtc.QFormDataPartBuilder_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFormDataPartBuilder object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFormDataPartBuilder `
    ///
    pub fn new2(param1: anytype) QFormDataPartBuilder {
        comptime _ = @TypeOf(param1)._is_QFormDataPartBuilder;
        return .{ .ptr = qtc.QFormDataPartBuilder_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` other: QFormDataPartBuilder `
    ///
    pub fn swap(self: QFormDataPartBuilder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFormDataPartBuilder;
        qtc.QFormDataPartBuilder_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setBody` instead
    ///
    pub const SetBody = setBody;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` data: []u8 `
    ///
    pub fn setBody(self: QFormDataPartBuilder, data: []u8) QFormDataPartBuilder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBody(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `setBodyDevice` instead
    ///
    pub const SetBodyDevice = setBodyDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` body: QIODevice `
    ///
    pub fn setBodyDevice(self: QFormDataPartBuilder, body: anytype) QFormDataPartBuilder {
        comptime _ = @TypeOf(body)._is_QIODevice;
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBodyDevice(@ptrCast(self.ptr), @ptrCast(body.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeaders` instead
    ///
    pub const SetHeaders = setHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` headers: QHttpHeaders `
    ///
    pub fn setHeaders(self: QFormDataPartBuilder, headers: anytype) QFormDataPartBuilder {
        comptime _ = @TypeOf(headers)._is_QHttpHeaders;
        return .{ .ptr = qtc.QFormDataPartBuilder_SetHeaders(@ptrCast(self.ptr), @ptrCast(headers.ptr)) };
    }

    /// ### DEPRECATED: Use `setBody2` instead
    ///
    pub const SetBody2 = setBody2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` data: []u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setBody2(self: QFormDataPartBuilder, data: []u8, fileName: []const u8) QFormDataPartBuilder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBody2(@ptrCast(self.ptr), data_str, fileName_str) };
    }

    /// ### DEPRECATED: Use `setBody3` instead
    ///
    pub const SetBody3 = setBody3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` data: []u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn setBody3(self: QFormDataPartBuilder, data: []u8, fileName: []const u8, mimeType: []const u8) QFormDataPartBuilder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBody3(@ptrCast(self.ptr), data_str, fileName_str, mimeType_str) };
    }

    /// ### DEPRECATED: Use `setBodyDevice2` instead
    ///
    pub const SetBodyDevice2 = setBodyDevice2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` body: QIODevice `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setBodyDevice2(self: QFormDataPartBuilder, body: anytype, fileName: []const u8) QFormDataPartBuilder {
        comptime _ = @TypeOf(body)._is_QIODevice;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBodyDevice2(@ptrCast(self.ptr), @ptrCast(body.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `setBodyDevice3` instead
    ///
    pub const SetBodyDevice3 = setBodyDevice3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` body: QIODevice `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn setBodyDevice3(self: QFormDataPartBuilder, body: anytype, fileName: []const u8, mimeType: []const u8) QFormDataPartBuilder {
        comptime _ = @TypeOf(body)._is_QIODevice;
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBodyDevice3(@ptrCast(self.ptr), @ptrCast(body.ptr), fileName_str, mimeType_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#dtor.QFormDataPartBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    pub fn delete(self: QFormDataPartBuilder) void {
        qtc.QFormDataPartBuilder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html)
pub const QFormDataBuilder = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFormDataBuilder,

    pub const _is_QFormDataBuilder = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFormDataBuilder object in C++ memory
    ///
    pub fn new() QFormDataBuilder {
        return .{ .ptr = qtc.QFormDataBuilder_new() };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    /// ` other: QFormDataBuilder `
    ///
    pub fn swap(self: QFormDataBuilder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFormDataBuilder;
        qtc.QFormDataBuilder_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `part` instead
    ///
    pub const Part = part;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn part(self: QFormDataBuilder, name: []const u8) QFormDataPartBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QFormDataBuilder_Part(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `buildMultiPart` instead
    ///
    pub const BuildMultiPart = buildMultiPart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#buildMultiPart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    pub fn buildMultiPart(self: QFormDataBuilder) QHttpMultiPart {
        return .{ .ptr = qtc.QFormDataBuilder_BuildMultiPart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `buildMultiPart1` instead
    ///
    pub const BuildMultiPart1 = buildMultiPart1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#buildMultiPart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    /// ` options: flag of qformdatabuilder_enums.Option `
    ///
    pub fn buildMultiPart1(self: QFormDataBuilder, options: i32) QHttpMultiPart {
        return .{ .ptr = qtc.QFormDataBuilder_BuildMultiPart1(@ptrCast(self.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#dtor.QFormDataBuilder)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormDataBuilder `
    ///
    pub fn delete(self: QFormDataBuilder) void {
        qtc.QFormDataBuilder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#public-types)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const Default: i32 = 0;
        pub const OmitRfc8187EncodedFilename: i32 = 1;
        pub const UseRfc7578PercentEncodedFilename: i32 = 2;
        pub const PreferLatin1EncodedFilename: i32 = 4;
        pub const StrictRfc7578: i32 = 3;
    };
};
