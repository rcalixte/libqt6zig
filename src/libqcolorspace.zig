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
    /// ``` whitePoint: QtC.QPointF, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn New3(whitePoint: QtC.QPointF, transferFunction: i64) QtC.QColorSpace {
        return qtc.QColorSpace_new3(@ptrCast(whitePoint), @intCast(transferFunction));
    }

    /// New4 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, transferFunctionTable: []u16 ```
    pub fn New4(whitePoint: QtC.QPointF, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new4(@ptrCast(whitePoint), transferFunctionTable_list);
    }

    /// New5 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn New5(primaries: i64, transferFunction: i64) QtC.QColorSpace {
        return qtc.QColorSpace_new5(@intCast(primaries), @intCast(transferFunction));
    }

    /// New6 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, gamma: f32 ```
    pub fn New6(primaries: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new6(@intCast(primaries), @floatCast(gamma));
    }

    /// New7 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, transferFunctionTable: []u16 ```
    pub fn New7(primaries: i64, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new7(@intCast(primaries), transferFunctionTable_list);
    }

    /// New8 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, transferFunction: qcolorspace_enums.TransferFunction ```
    pub fn New8(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunction: i64) QtC.QColorSpace {
        return qtc.QColorSpace_new8(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @intCast(transferFunction));
    }

    /// New9 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, transferFunctionTable: []u16 ```
    pub fn New9(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new9(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), transferFunctionTable_list);
    }

    /// New10 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16 ```
    pub fn New10(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QtC.QColorSpace {
        const redTransferFunctionTable_list = qtc.libqt_list{
            .len = redTransferFunctionTable.len,
            .data = redTransferFunctionTable.ptr,
        };
        const greenTransferFunctionTable_list = qtc.libqt_list{
            .len = greenTransferFunctionTable.len,
            .data = greenTransferFunctionTable.ptr,
        };
        const blueTransferFunctionTable_list = qtc.libqt_list{
            .len = blueTransferFunctionTable.len,
            .data = blueTransferFunctionTable.ptr,
        };

        return qtc.QColorSpace_new10(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
    }

    /// New11 constructs a new QColorSpace object.
    ///
    /// ``` colorSpace: QtC.QColorSpace ```
    pub fn New11(colorSpace: ?*anyopaque) QtC.QColorSpace {
        return qtc.QColorSpace_new11(@ptrCast(colorSpace));
    }

    /// New12 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn New12(whitePoint: QtC.QPointF, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new12(@ptrCast(whitePoint), @intCast(transferFunction), @floatCast(gamma));
    }

    /// New13 constructs a new QColorSpace object.
    ///
    /// ``` primaries: qcolorspace_enums.Primaries, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn New13(primaries: i64, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new13(@intCast(primaries), @intCast(transferFunction), @floatCast(gamma));
    }

    /// New14 constructs a new QColorSpace object.
    ///
    /// ``` whitePoint: QtC.QPointF, redPoint: QtC.QPointF, greenPoint: QtC.QPointF, bluePoint: QtC.QPointF, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn New14(whitePoint: ?*anyopaque, redPoint: ?*anyopaque, greenPoint: ?*anyopaque, bluePoint: ?*anyopaque, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_new14(@ptrCast(whitePoint), @ptrCast(redPoint), @ptrCast(greenPoint), @ptrCast(bluePoint), @intCast(transferFunction), @floatCast(gamma));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#operator-eq)
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
    ///
    /// Returns: ``` qcolorspace_enums.Primaries ```
    pub fn Primaries(self: ?*anyopaque) i64 {
        return qtc.QColorSpace_Primaries(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#transferFunction)
    ///
    /// ``` self: QtC.QColorSpace ```
    ///
    /// Returns: ``` qcolorspace_enums.TransferFunction ```
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
        const description_str = qtc.libqt_string{
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
    pub fn SetTransferFunction2(self: ?*anyopaque, transferFunctionTable: []u16) void {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        qtc.QColorSpace_SetTransferFunction2(@ptrCast(self), transferFunctionTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunctions)
    ///
    /// ``` self: QtC.QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16 ```
    pub fn SetTransferFunctions(self: ?*anyopaque, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) void {
        const redTransferFunctionTable_list = qtc.libqt_list{
            .len = redTransferFunctionTable.len,
            .data = redTransferFunctionTable.ptr,
        };
        const greenTransferFunctionTable_list = qtc.libqt_list{
            .len = greenTransferFunctionTable.len,
            .data = greenTransferFunctionTable.ptr,
        };
        const blueTransferFunctionTable_list = qtc.libqt_list{
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
    pub fn WithTransferFunction2(self: ?*anyopaque, transferFunctionTable: []u16) QtC.QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return qtc.QColorSpace_WithTransferFunction2(@ptrCast(self), transferFunctionTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunctions)
    ///
    /// ``` self: QtC.QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16 ```
    pub fn WithTransferFunctions(self: ?*anyopaque, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QtC.QColorSpace {
        const redTransferFunctionTable_list = qtc.libqt_list{
            .len = redTransferFunctionTable.len,
            .data = redTransferFunctionTable.ptr,
        };
        const greenTransferFunctionTable_list = qtc.libqt_list{
            .len = greenTransferFunctionTable.len,
            .data = greenTransferFunctionTable.ptr,
        };
        const blueTransferFunctionTable_list = qtc.libqt_list{
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setWhitePoint)
    ///
    /// ``` self: QtC.QColorSpace, whitePoint: QtC.QPointF ```
    pub fn SetWhitePoint(self: ?*anyopaque, whitePoint: QtC.QPointF) void {
        qtc.QColorSpace_SetWhitePoint(@ptrCast(self), @ptrCast(whitePoint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#whitePoint)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn WhitePoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QColorSpace_WhitePoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#transformModel)
    ///
    /// ``` self: QtC.QColorSpace ```
    ///
    /// Returns: ``` qcolorspace_enums.TransformModel ```
    pub fn TransformModel(self: ?*anyopaque) i64 {
        return qtc.QColorSpace_TransformModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#colorModel)
    ///
    /// ``` self: QtC.QColorSpace ```
    ///
    /// Returns: ``` qcolorspace_enums.ColorModel ```
    pub fn ColorModel(self: ?*anyopaque) i64 {
        return qtc.QColorSpace_ColorModel(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#isValidTarget)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn IsValidTarget(self: ?*anyopaque) bool {
        return qtc.QColorSpace_IsValidTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
    ///
    /// ``` iccProfile: []u8 ```
    pub fn FromIccProfile(iccProfile: []u8) QtC.QColorSpace {
        const iccProfile_str = qtc.libqt_string{
            .len = iccProfile.len,
            .data = iccProfile.ptr,
        };
        return qtc.QColorSpace_FromIccProfile(iccProfile_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
    ///
    /// ``` self: QtC.QColorSpace, allocator: std.mem.Allocator ```
    pub fn IccProfile(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QColorSpace_IccProfile(@ptrCast(self));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#operator)
    ///
    /// ``` self: QtC.QColorSpace ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QColorSpace_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn SetTransferFunction22(self: ?*anyopaque, transferFunction: i64, gamma: f32) void {
        qtc.QColorSpace_SetTransferFunction22(@ptrCast(self), @intCast(transferFunction), @floatCast(gamma));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ``` self: QtC.QColorSpace, transferFunction: qcolorspace_enums.TransferFunction, gamma: f32 ```
    pub fn WithTransferFunction22(self: ?*anyopaque, transferFunction: i64, gamma: f32) QtC.QColorSpace {
        return qtc.QColorSpace_WithTransferFunction22(@ptrCast(self), @intCast(transferFunction), @floatCast(gamma));
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
        pub const Bt2020: i32 = 6;
        pub const Bt2100Pq: i32 = 7;
        pub const Bt2100Hlg: i32 = 8;
    };

    pub const Primaries = enum {
        pub const Custom: i32 = 0;
        pub const SRgb: i32 = 1;
        pub const AdobeRgb: i32 = 2;
        pub const DciP3D65: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
        pub const Bt2020: i32 = 5;
    };

    pub const TransferFunction = enum {
        pub const Custom: i32 = 0;
        pub const Linear: i32 = 1;
        pub const Gamma: i32 = 2;
        pub const SRgb: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
        pub const Bt2020: i32 = 5;
        pub const St2084: i32 = 6;
        pub const Hlg: i32 = 7;
    };

    pub const TransformModel = enum {
        pub const ThreeComponentMatrix: u8 = 0;
        pub const ElementListProcessing: u8 = 1;
    };

    pub const ColorModel = enum {
        pub const Undefined: u8 = 0;
        pub const Rgb: u8 = 1;
        pub const Gray: u8 = 2;
        pub const Cmyk: u8 = 3;
    };
};
