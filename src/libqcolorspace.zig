const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColorTransform = @import("libqt6").QColorTransform;
const QPointF = @import("libqt6").QPointF;
const QVariant = @import("libqt6").QVariant;
const qcolorspace_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)
pub const QColorSpace = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QColorSpace,

    pub const _is_QColorSpace = {};

    /// New constructs a new QColorSpace object.
    ///
    pub fn New() QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new() };
    }

    /// New2 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` namedColorSpace: qcolorspace_enums.NamedColorSpace `
    ///
    pub fn New2(namedColorSpace: i32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new2(@bitCast(namedColorSpace)) };
    }

    /// New3 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn New3(whitePoint: anytype, transferFunction: i32) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new3(@ptrCast(whitePoint.ptr), @bitCast(transferFunction)) };
    }

    /// New4 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn New4(whitePoint: anytype, transferFunctionTable: []u16) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_new4(@ptrCast(whitePoint.ptr), transferFunctionTable_list) };
    }

    /// New5 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` primaries: qcolorspace_enums.Primaries `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn New5(primaries: i32, transferFunction: i32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new5(@bitCast(primaries), @bitCast(transferFunction)) };
    }

    /// New6 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` primaries: qcolorspace_enums.Primaries `
    ///
    /// ` gamma: f32 `
    ///
    pub fn New6(primaries: i32, gamma: f32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new6(@bitCast(primaries), @bitCast(gamma)) };
    }

    /// New7 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` primaries: qcolorspace_enums.Primaries `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn New7(primaries: i32, transferFunctionTable: []u16) QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_new7(@bitCast(primaries), transferFunctionTable_list) };
    }

    /// New8 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn New8(whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, transferFunction: i32) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new8(@ptrCast(whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), @bitCast(transferFunction)) };
    }

    /// New9 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn New9(whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, transferFunctionTable: []u16) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_new9(@ptrCast(whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), transferFunctionTable_list) };
    }

    /// New10 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` redTransferFunctionTable: []u16 `
    ///
    /// ` greenTransferFunctionTable: []u16 `
    ///
    /// ` blueTransferFunctionTable: []u16 `
    ///
    pub fn New10(whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
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
        return .{ .ptr = qtc.QColorSpace_new10(@ptrCast(whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list) };
    }

    /// New11 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn New11(colorSpace: anytype) QColorSpace {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QColorSpace_new11(@ptrCast(colorSpace.ptr)) };
    }

    /// New12 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` gamma: f32 `
    ///
    pub fn New12(whitePoint: anytype, transferFunction: i32, gamma: f32) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new12(@ptrCast(whitePoint.ptr), @bitCast(transferFunction), @bitCast(gamma)) };
    }

    /// New13 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` primaries: qcolorspace_enums.Primaries `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` gamma: f32 `
    ///
    pub fn New13(primaries: i32, transferFunction: i32, gamma: f32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new13(@bitCast(primaries), @bitCast(transferFunction), @bitCast(gamma)) };
    }

    /// New14 constructs a new QColorSpace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` gamma: f32 `
    ///
    pub fn New14(whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, transferFunction: i32, gamma: f32) QColorSpace {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new14(@ptrCast(whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), @bitCast(transferFunction), @bitCast(gamma)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn OperatorAssign(self: QColorSpace, colorSpace: anytype) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QColorSpace_OperatorAssign(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn Swap(self: QColorSpace, colorSpace: anytype) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QColorSpace_Swap(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#primaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ## Returns:
    ///
    /// ` qcolorspace_enums.Primaries `
    ///
    pub fn Primaries(self: QColorSpace) i32 {
        return qtc.QColorSpace_Primaries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ## Returns:
    ///
    /// ` qcolorspace_enums.TransferFunction `
    ///
    pub fn TransferFunction(self: QColorSpace) i32 {
        return qtc.QColorSpace_TransferFunction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#gamma)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn Gamma(self: QColorSpace) f32 {
        return qtc.QColorSpace_Gamma(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QColorSpace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QColorSpace_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcolorspace.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: QColorSpace, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QColorSpace_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn SetTransferFunction(self: QColorSpace, transferFunction: i32) void {
        qtc.QColorSpace_SetTransferFunction(@ptrCast(self.ptr), @bitCast(transferFunction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn SetTransferFunction2(self: QColorSpace, transferFunctionTable: []u16) void {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        qtc.QColorSpace_SetTransferFunction2(@ptrCast(self.ptr), transferFunctionTable_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` redTransferFunctionTable: []u16 `
    ///
    /// ` greenTransferFunctionTable: []u16 `
    ///
    /// ` blueTransferFunctionTable: []u16 `
    ///
    pub fn SetTransferFunctions(self: QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) void {
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
        qtc.QColorSpace_SetTransferFunctions(@ptrCast(self.ptr), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn WithTransferFunction(self: QColorSpace, transferFunction: i32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_WithTransferFunction(@ptrCast(self.ptr), @bitCast(transferFunction)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn WithTransferFunction2(self: QColorSpace, transferFunctionTable: []u16) QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_WithTransferFunction2(@ptrCast(self.ptr), transferFunctionTable_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` redTransferFunctionTable: []u16 `
    ///
    /// ` greenTransferFunctionTable: []u16 `
    ///
    /// ` blueTransferFunctionTable: []u16 `
    ///
    pub fn WithTransferFunctions(self: QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QColorSpace {
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
        return .{ .ptr = qtc.QColorSpace_WithTransferFunctions(@ptrCast(self.ptr), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` primariesId: qcolorspace_enums.Primaries `
    ///
    pub fn SetPrimaries(self: QColorSpace, primariesId: i32) void {
        qtc.QColorSpace_SetPrimaries(@ptrCast(self.ptr), @bitCast(primariesId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    pub fn SetPrimaries2(self: QColorSpace, whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype) void {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        qtc.QColorSpace_SetPrimaries2(@ptrCast(self.ptr), @ptrCast(whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setWhitePoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` whitePoint: QPointF `
    ///
    pub fn SetWhitePoint(self: QColorSpace, whitePoint: anytype) void {
        comptime _ = @TypeOf(whitePoint)._is_QPointF;
        qtc.QColorSpace_SetWhitePoint(@ptrCast(self.ptr), @ptrCast(whitePoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#whitePoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn WhitePoint(self: QColorSpace) QPointF {
        return .{ .ptr = qtc.QColorSpace_WhitePoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ## Returns:
    ///
    /// ` qcolorspace_enums.TransformModel `
    ///
    pub fn TransformModel(self: QColorSpace) u8 {
        return qtc.QColorSpace_TransformModel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#colorModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ## Returns:
    ///
    /// ` qcolorspace_enums.ColorModel `
    ///
    pub fn ColorModel(self: QColorSpace) u8 {
        return qtc.QColorSpace_ColorModel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn Detach(self: QColorSpace) void {
        qtc.QColorSpace_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn IsValid(self: QColorSpace) bool {
        return qtc.QColorSpace_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValidTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn IsValidTarget(self: QColorSpace) bool {
        return qtc.QColorSpace_IsValidTarget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` iccProfile: []u8 `
    ///
    pub fn FromIccProfile(iccProfile: []u8) QColorSpace {
        const iccProfile_str = qtc.libqt_string{
            .len = iccProfile.len,
            .data = iccProfile.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_FromIccProfile(iccProfile_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IccProfile(self: QColorSpace, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QColorSpace_IccProfile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcolorspace.IccProfile: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformationToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` colorspace: QColorSpace `
    ///
    pub fn TransformationToColorSpace(self: QColorSpace, colorspace: anytype) QColorTransform {
        comptime _ = @TypeOf(colorspace)._is_QColorSpace;
        return .{ .ptr = qtc.QColorSpace_TransformationToColorSpace(@ptrCast(self.ptr), @ptrCast(colorspace.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn ToQVariant(self: QColorSpace) QVariant {
        return .{ .ptr = qtc.QColorSpace_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` gamma: f32 `
    ///
    pub fn SetTransferFunction22(self: QColorSpace, transferFunction: i32, gamma: f32) void {
        qtc.QColorSpace_SetTransferFunction22(@ptrCast(self.ptr), @bitCast(transferFunction), @bitCast(gamma));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` gamma: f32 `
    ///
    pub fn WithTransferFunction22(self: QColorSpace, transferFunction: i32, gamma: f32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_WithTransferFunction22(@ptrCast(self.ptr), @bitCast(transferFunction), @bitCast(gamma)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#dtor.QColorSpace)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QColorSpace `
    ///
    pub fn Delete(self: QColorSpace) void {
        qtc.QColorSpace_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)
pub const enums = struct {
    pub const NamedColorSpace = enum(i32) {
        pub const SRgb: i32 = 1;
        pub const SRgbLinear: i32 = 2;
        pub const AdobeRgb: i32 = 3;
        pub const DisplayP3: i32 = 4;
        pub const ProPhotoRgb: i32 = 5;
        pub const Bt2020: i32 = 6;
        pub const Bt2100Pq: i32 = 7;
        pub const Bt2100Hlg: i32 = 8;
    };

    pub const Primaries = enum(i32) {
        pub const Custom: i32 = 0;
        pub const SRgb: i32 = 1;
        pub const AdobeRgb: i32 = 2;
        pub const DciP3D65: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
        pub const Bt2020: i32 = 5;
    };

    pub const TransferFunction = enum(i32) {
        pub const Custom: i32 = 0;
        pub const Linear: i32 = 1;
        pub const Gamma: i32 = 2;
        pub const SRgb: i32 = 3;
        pub const ProPhotoRgb: i32 = 4;
        pub const Bt2020: i32 = 5;
        pub const St2084: i32 = 6;
        pub const Hlg: i32 = 7;
    };

    pub const TransformModel = enum(u8) {
        pub const ThreeComponentMatrix: u8 = 0;
        pub const ElementListProcessing: u8 = 1;
    };

    pub const ColorModel = enum(u8) {
        pub const Undefined: u8 = 0;
        pub const Rgb: u8 = 1;
        pub const Gray: u8 = 2;
        pub const Cmyk: u8 = 3;
    };
};
