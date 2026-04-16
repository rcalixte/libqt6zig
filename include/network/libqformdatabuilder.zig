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

    /// New constructs a new QFormDataPartBuilder object.
    ///
    pub fn New() QFormDataPartBuilder {
        return .{ .ptr = qtc.QFormDataPartBuilder_new() };
    }

    /// New2 constructs a new QFormDataPartBuilder object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFormDataPartBuilder `
    ///
    pub fn New2(param1: anytype) QFormDataPartBuilder {
        comptime _ = @TypeOf(param1)._is_QFormDataPartBuilder;
        return .{ .ptr = qtc.QFormDataPartBuilder_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` other: QFormDataPartBuilder `
    ///
    pub fn Swap(self: QFormDataPartBuilder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFormDataPartBuilder;
        qtc.QFormDataPartBuilder_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetBody(self: QFormDataPartBuilder, data: []u8) QFormDataPartBuilder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBody(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` body: QIODevice `
    ///
    pub fn SetBodyDevice(self: QFormDataPartBuilder, body: anytype) QFormDataPartBuilder {
        comptime _ = @TypeOf(body)._is_QIODevice;
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBodyDevice(@ptrCast(self.ptr), @ptrCast(body.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    /// ` headers: QHttpHeaders `
    ///
    pub fn SetHeaders(self: QFormDataPartBuilder, headers: anytype) QFormDataPartBuilder {
        comptime _ = @TypeOf(headers)._is_QHttpHeaders;
        return .{ .ptr = qtc.QFormDataPartBuilder_SetHeaders(@ptrCast(self.ptr), @ptrCast(headers.ptr)) };
    }

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
    pub fn SetBody2(self: QFormDataPartBuilder, data: []u8, fileName: []const u8) QFormDataPartBuilder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBody2(@ptrCast(self.ptr), data_str, fileName.ptr) };
    }

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
    pub fn SetBody3(self: QFormDataPartBuilder, data: []u8, fileName: []const u8, mimeType: []const u8) QFormDataPartBuilder {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBody3(@ptrCast(self.ptr), data_str, fileName.ptr, mimeType.ptr) };
    }

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
    pub fn SetBodyDevice2(self: QFormDataPartBuilder, body: anytype, fileName: []const u8) QFormDataPartBuilder {
        comptime _ = @TypeOf(body)._is_QIODevice;
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBodyDevice2(@ptrCast(self.ptr), @ptrCast(body.ptr), fileName.ptr) };
    }

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
    pub fn SetBodyDevice3(self: QFormDataPartBuilder, body: anytype, fileName: []const u8, mimeType: []const u8) QFormDataPartBuilder {
        comptime _ = @TypeOf(body)._is_QIODevice;
        return .{ .ptr = qtc.QFormDataPartBuilder_SetBodyDevice3(@ptrCast(self.ptr), @ptrCast(body.ptr), fileName.ptr, mimeType.ptr) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatapartbuilder.html#dtor.QFormDataPartBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormDataPartBuilder `
    ///
    pub fn Delete(self: QFormDataPartBuilder) void {
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

    /// New constructs a new QFormDataBuilder object.
    ///
    pub fn New() QFormDataBuilder {
        return .{ .ptr = qtc.QFormDataBuilder_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    /// ` other: QFormDataBuilder `
    ///
    pub fn Swap(self: QFormDataBuilder, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFormDataBuilder;
        qtc.QFormDataBuilder_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Part(self: QFormDataBuilder, name: []const u8) QFormDataPartBuilder {
        return .{ .ptr = qtc.QFormDataBuilder_Part(@ptrCast(self.ptr), name.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#buildMultiPart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    pub fn BuildMultiPart(self: QFormDataBuilder) QHttpMultiPart {
        return .{ .ptr = qtc.QFormDataBuilder_BuildMultiPart(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#buildMultiPart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFormDataBuilder `
    ///
    /// ` options: flag of qformdatabuilder_enums.Option `
    ///
    pub fn BuildMultiPart1(self: QFormDataBuilder, options: i32) QHttpMultiPart {
        return .{ .ptr = qtc.QFormDataBuilder_BuildMultiPart1(@ptrCast(self.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qformdatabuilder.html#dtor.QFormDataBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFormDataBuilder `
    ///
    pub fn Delete(self: QFormDataBuilder) void {
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
