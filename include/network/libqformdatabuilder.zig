const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qformdatapartbuilder.html
pub const qformdatapartbuilder = struct {
    /// New constructs a new QFormDataPartBuilder object.
    ///
    ///
    pub fn New() QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_new();
    }

    /// New2 constructs a new QFormDataPartBuilder object.
    ///
    /// ``` param1: QtC.QFormDataPartBuilder ```
    pub fn New2(param1: ?*anyopaque) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#swap)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, other: QtC.QFormDataPartBuilder ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFormDataPartBuilder_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, data: []const u8 ```
    pub fn SetBody(self: ?*anyopaque, data: []const u8) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_SetBody(@ptrCast(self), data.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, body: QtC.QIODevice ```
    pub fn SetBodyDevice(self: ?*anyopaque, body: ?*anyopaque) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_SetBodyDevice(@ptrCast(self), @ptrCast(body));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setHeaders)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, headers: QtC.QHttpHeaders ```
    pub fn SetHeaders(self: ?*anyopaque, headers: ?*anyopaque) QtC.QFormDataPartBuilder {
        return qtc.QFormDataPartBuilder_SetHeaders(@ptrCast(self), @ptrCast(headers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, data: []const u8, fileName: []const u8 ```
    pub fn SetBody2(self: ?*anyopaque, data: []const u8, fileName: []const u8) QtC.QFormDataPartBuilder {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFormDataPartBuilder_SetBody2(@ptrCast(self), data.ptr, fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBody)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, data: []const u8, fileName: []const u8, mimeType: []const u8 ```
    pub fn SetBody3(self: ?*anyopaque, data: []const u8, fileName: []const u8, mimeType: []const u8) QtC.QFormDataPartBuilder {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.QFormDataPartBuilder_SetBody3(@ptrCast(self), data.ptr, fileName_str, mimeType_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, body: QtC.QIODevice, fileName: []const u8 ```
    pub fn SetBodyDevice2(self: ?*anyopaque, body: ?*anyopaque, fileName: []const u8) QtC.QFormDataPartBuilder {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFormDataPartBuilder_SetBodyDevice2(@ptrCast(self), @ptrCast(body), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#setBodyDevice)
    ///
    /// ``` self: QtC.QFormDataPartBuilder, body: QtC.QIODevice, fileName: []const u8, mimeType: []const u8 ```
    pub fn SetBodyDevice3(self: ?*anyopaque, body: ?*anyopaque, fileName: []const u8, mimeType: []const u8) QtC.QFormDataPartBuilder {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.QFormDataPartBuilder_SetBodyDevice3(@ptrCast(self), @ptrCast(body), fileName_str, mimeType_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatapartbuilder.html#dtor.QFormDataPartBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFormDataPartBuilder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormDataPartBuilder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qformdatabuilder.html
pub const qformdatabuilder = struct {
    /// New constructs a new QFormDataBuilder object.
    ///
    ///
    pub fn New() QtC.QFormDataBuilder {
        return qtc.QFormDataBuilder_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatabuilder.html#swap)
    ///
    /// ``` self: QtC.QFormDataBuilder, other: QtC.QFormDataBuilder ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFormDataBuilder_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatabuilder.html#part)
    ///
    /// ``` self: QtC.QFormDataBuilder, name: []const u8 ```
    pub fn Part(self: ?*anyopaque, name: []const u8) QtC.QFormDataPartBuilder {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QFormDataBuilder_Part(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qformdatabuilder.html#dtor.QFormDataBuilder)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFormDataBuilder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFormDataBuilder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qformdatabuilder.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const Default: i32 = 0;
        pub const OmitRfc8187EncodedFilename: i32 = 1;
        pub const UseRfc7578PercentEncodedFilename: i32 = 2;
        pub const PreferLatin1EncodedFilename: i32 = 4;
        pub const StrictRfc7578: i32 = 3;
    };
};
