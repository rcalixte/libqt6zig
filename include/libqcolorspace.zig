const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcolorspace_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcolorspace.html
pub const qcolorspace = struct {
    /// New constructs a new QColorSpace object.
    ///
    ///
    pub fn New() QtC.QColorSpace {
        return qtc.QColorSpace_new();
    }

    /// New2 constructs a new QColorSpace object.
    ///
    /// ``` namedColorSpace: qcolorspace_enums.NamedColorSpace ```
    pub fn New2(namedColorSpace: i64) QtC.QColorSpace {
        return qtc.QColorSpace_new2(@intCast(namedColorSpace));
    }

    /// New3 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn New3(primaries: i64, transferFunction: i64) QtC.QColorSpace {
        return qtc.QColorSpace_new3(@intCast(primaries), @intCast(transferFunction));
    }

    /// New4 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, gamma: f32 ```
    pub fn New4(primaries: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new4(@intCast(primaries), @floatCast(gamma));
    }

    /// New5 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, transferFunctionTable: []u16 ```
    pub fn New5(primaries: i64, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.struct_libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new5(@intCast(primaries), transferFunctionTable_list);
    }

    /// New6 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn New6(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunction: i64) QtC.QColorSpace {
        return qtc.QColorSpace_new6(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @intCast(transferFunction));
    }

    /// New7 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, transferFunctionTable: []u16 ```
    pub fn New7(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.struct_libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new7(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), transferFunctionTable_list);
    }

    /// New8 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16 ```
    pub fn New8(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QtC.QColorSpace {
        const redTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = redTransferFunctionTable.len,
            .data = redTransferFunctionTable.ptr,
        };
        const greenTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = greenTransferFunctionTable.len,
            .data = greenTransferFunctionTable.ptr,
        };
        const blueTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = blueTransferFunctionTable.len,
            .data = blueTransferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new8(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
    }

    /// New9 constructs a new QColorSpace object.
    ///
    /// ``` colorSpace: QtC.QColorSpace ```
    pub fn New9(colorSpace: ?*anyopaque) QtC.QColorSpace {
        return qtc.QColorSpace_new9(@ptrCast(colorSpace));
    }

    /// New10 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn New10(primaries: i64, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new10(@intCast(primaries), @intCast(transferFunction), @floatCast(gamma));
    }

    /// New11 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn New11(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new11(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @intCast(transferFunction), @floatCast(gamma));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#operator=)
    ///
    /// ``` self: QtC.QColorSpace, colorSpace: QtC.QColorSpace ```
    pub fn OperatorAssign(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QColorSpace_OperatorAssign(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#swap)
    ///
    /// ``` self: QtC.QColorSpace, colorSpace: QtC.QColorSpace ```
    pub fn Swap(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QColorSpace_Swap(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#primaries)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn Primaries(self: ?*anyopaque) i64 {
        return qtc.QColorSpace_Primaries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#transferFunction)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn TransferFunction(self: ?*anyopaque) i64 {
        return qtc.QColorSpace_TransferFunction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#gamma)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn Gamma(self: ?*anyopaque) f32 {
        return qtc.QColorSpace_Gamma(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#description)
    ///
    /// ``` self: QtC.QColorSpace, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorSpace_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolorspace.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setDescription)
    ///
    /// ``` self: QtC.QColorSpace, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QColorSpace_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn SetTransferFunction(self: ?*anyopaque, transferFunction: i64) void {
        qtc.QColorSpace_SetTransferFunction(@ptrCast(self), @intCast(transferFunction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunctionTable: []u16 ```
    pub fn SetTransferFunctionWithTransferFunctionTable(self: ?*anyopaque, transferFunctionTable: []u16) void {
        const transferFunctionTable_list = qtc.struct_libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        qtc.QColorSpace_SetTransferFunctionWithTransferFunctionTable(@ptrCast(self), transferFunctionTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunctions)
    ///
    /// ``` self: QtC.QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16 ```
    pub fn SetTransferFunctions(self: ?*anyopaque, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) void {
        const redTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = redTransferFunctionTable.len,
            .data = redTransferFunctionTable.ptr,
        };
        const greenTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = greenTransferFunctionTable.len,
            .data = greenTransferFunctionTable.ptr,
        };
        const blueTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = blueTransferFunctionTable.len,
            .data = blueTransferFunctionTable.ptr,
        };
        qtc.QColorSpace_SetTransferFunctions(@ptrCast(self), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn WithTransferFunction(self: ?*anyopaque, transferFunction: i64) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunction(@ptrCast(self), @intCast(transferFunction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunctionTable: []u16 ```
    pub fn WithTransferFunctionWithTransferFunctionTable(self: ?*anyopaque, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.struct_libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return qtc.QColorSpace_WithTransferFunctionWithTransferFunctionTable(@ptrCast(self), transferFunctionTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunctions)
    ///
    /// ``` self: QtC.QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16 ```
    pub fn WithTransferFunctions(self: ?*anyopaque, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QtC.QColorSpace {
        const redTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = redTransferFunctionTable.len,
            .data = redTransferFunctionTable.ptr,
        };
        const greenTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = greenTransferFunctionTable.len,
            .data = greenTransferFunctionTable.ptr,
        };
        const blueTransferFunctionTable_list = qtc.struct_libqt_list{
            .len = blueTransferFunctionTable.len,
            .data = blueTransferFunctionTable.ptr,
        };
        return qtc.QColorSpace_WithTransferFunctions(@ptrCast(self), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
    ///
    /// ``` self: QtC.QColorSpace, primariesId: qcolorspace_enums.Primaries ```
    pub fn SetPrimaries(self: ?*anyopaque, primariesId: i64) void {
        qtc.QColorSpace_SetPrimaries(@ptrCast(self), @intCast(primariesId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
    ///
    /// ``` self: QtC.QColorSpace, whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF ```
    pub fn SetPrimaries2(self: ?*anyopaque, whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque) void {
        qtc.QColorSpace_SetPrimaries2(@ptrCast(self), @ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#detach)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QColorSpace_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#isValid)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QColorSpace_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
    ///
    /// ``` iccProfile: []u8 ```
    pub fn FromIccProfile(iccProfile: []u8) QtC.QColorSpace {
        const iccProfile_str = qtc.struct_libqt_string{
            .len = iccProfile.len,
            .data = iccProfile.ptr,
        };
        return qtc.QColorSpace_FromIccProfile(iccProfile_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
    ///
    /// ``` self: QtC.QColorSpace, allocator: std.mem.Allocator ```
    pub fn IccProfile(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QColorSpace_IccProfile(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcolorspace.IccProfile: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#transformationToColorSpace)
    ///
    /// ``` self: QtC.QColorSpace, colorspace: QtC.QColorSpace ```
    pub fn TransformationToColorSpace(self: ?*anyopaque, colorspace: ?*anyopaque) QtC.QColorTransform {
        return qtc.QColorSpace_TransformationToColorSpace(@ptrCast(self), @ptrCast(colorspace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#operator QVariant)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QColorSpace_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn SetTransferFunction2(self: ?*anyopaque, transferFunction: i64, gamma: f32) void {
        qtc.QColorSpace_SetTransferFunction2(@ptrCast(self), @intCast(transferFunction), @floatCast(gamma));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn WithTransferFunction2(self: ?*anyopaque, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunction2(@ptrCast(self), @intCast(transferFunction), @floatCast(gamma));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#dtor.QColorSpace)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColorSpace_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcolorspace.html#types
pub const enums = struct {
    pub const NamedColorSpace = enum {
        pub const SRgb: i32 = 1;
        pub const SRgbLinear: i32 = 2;
        pub const AdobeRgb: i32 = 3;
        pub const DisplayP3: i32 = 4;
        pub const ProPhotoRgb: i32 = 5;
    };

    pub const Primaries = enum {
        pub const Custom: i32 = 0;
        pub const SRgb: i32 = 1;
        pub const AdobeRgb: i32 = 2;
        pub const DciP3D65: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
    };

    pub const TransferFunction = enum {
        pub const Custom: i32 = 0;
        pub const Linear: i32 = 1;
        pub const Gamma: i32 = 2;
        pub const SRgb: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
    };
};
