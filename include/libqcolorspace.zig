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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    pub fn new() QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` namedColorSpace: qcolorspace_enums.NamedColorSpace `
    ///
    pub fn new2(namedColorSpace: i32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new2(@bitCast(namedColorSpace)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn new3(_whitePoint: anytype, _transferFunction: i32) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new3(@ptrCast(_whitePoint.ptr), @bitCast(_transferFunction)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn new4(_whitePoint: anytype, transferFunctionTable: []u16) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_new4(@ptrCast(_whitePoint.ptr), transferFunctionTable_list) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _primaries: qcolorspace_enums.Primaries `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn new5(_primaries: i32, _transferFunction: i32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new5(@bitCast(_primaries), @bitCast(_transferFunction)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _primaries: qcolorspace_enums.Primaries `
    ///
    /// ` _gamma: f32 `
    ///
    pub fn new6(_primaries: i32, _gamma: f32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new6(@bitCast(_primaries), @bitCast(_gamma)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _primaries: qcolorspace_enums.Primaries `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn new7(_primaries: i32, transferFunctionTable: []u16) QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_new7(@bitCast(_primaries), transferFunctionTable_list) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn new8(_whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, _transferFunction: i32) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new8(@ptrCast(_whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), @bitCast(_transferFunction)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn new9(_whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, transferFunctionTable: []u16) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_new9(@ptrCast(_whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), transferFunctionTable_list) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
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
    pub fn new10(_whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
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
        return .{ .ptr = qtc.QColorSpace_new10(@ptrCast(_whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn new11(colorSpace: anytype) QColorSpace {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QColorSpace_new11(@ptrCast(colorSpace.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` _gamma: f32 `
    ///
    pub fn new12(_whitePoint: anytype, _transferFunction: i32, _gamma: f32) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new12(@ptrCast(_whitePoint.ptr), @bitCast(_transferFunction), @bitCast(_gamma)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _primaries: qcolorspace_enums.Primaries `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` _gamma: f32 `
    ///
    pub fn new13(_primaries: i32, _transferFunction: i32, _gamma: f32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_new13(@bitCast(_primaries), @bitCast(_transferFunction), @bitCast(_gamma)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QColorSpace object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` _gamma: f32 `
    ///
    pub fn new14(_whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype, _transferFunction: i32, _gamma: f32) QColorSpace {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        return .{ .ptr = qtc.QColorSpace_new14(@ptrCast(_whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr), @bitCast(_transferFunction), @bitCast(_gamma)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn operatorAssign(self: QColorSpace, colorSpace: anytype) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QColorSpace_OperatorAssign(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn swap(self: QColorSpace, colorSpace: anytype) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QColorSpace_Swap(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr));
    }

    /// ### DEPRECATED: Use `primaries` instead
    ///
    pub const Primaries = primaries;

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
    pub fn primaries(self: QColorSpace) i32 {
        return qtc.QColorSpace_Primaries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transferFunction` instead
    ///
    pub const TransferFunction = transferFunction;

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
    pub fn transferFunction(self: QColorSpace) i32 {
        return qtc.QColorSpace_TransferFunction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `gamma` instead
    ///
    pub const Gamma = gamma;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#gamma)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn gamma(self: QColorSpace) f32 {
        return qtc.QColorSpace_Gamma(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QColorSpace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QColorSpace_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QColorSpace.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: QColorSpace, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.QColorSpace_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `setTransferFunction` instead
    ///
    pub const SetTransferFunction = setTransferFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn setTransferFunction(self: QColorSpace, _transferFunction: i32) void {
        qtc.QColorSpace_SetTransferFunction(@ptrCast(self.ptr), @bitCast(_transferFunction));
    }

    /// ### DEPRECATED: Use `setTransferFunction2` instead
    ///
    pub const SetTransferFunction2 = setTransferFunction2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn setTransferFunction2(self: QColorSpace, transferFunctionTable: []u16) void {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        qtc.QColorSpace_SetTransferFunction2(@ptrCast(self.ptr), transferFunctionTable_list);
    }

    /// ### DEPRECATED: Use `setTransferFunctions` instead
    ///
    pub const SetTransferFunctions = setTransferFunctions;

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
    pub fn setTransferFunctions(self: QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) void {
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

    /// ### DEPRECATED: Use `withTransferFunction` instead
    ///
    pub const WithTransferFunction = withTransferFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    pub fn withTransferFunction(self: QColorSpace, _transferFunction: i32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_WithTransferFunction(@ptrCast(self.ptr), @bitCast(_transferFunction)) };
    }

    /// ### DEPRECATED: Use `withTransferFunction2` instead
    ///
    pub const WithTransferFunction2 = withTransferFunction2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` transferFunctionTable: []u16 `
    ///
    pub fn withTransferFunction2(self: QColorSpace, transferFunctionTable: []u16) QColorSpace {
        const transferFunctionTable_list = qtc.libqt_list{
            .len = transferFunctionTable.len,
            .data = transferFunctionTable.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_WithTransferFunction2(@ptrCast(self.ptr), transferFunctionTable_list) };
    }

    /// ### DEPRECATED: Use `withTransferFunctions` instead
    ///
    pub const WithTransferFunctions = withTransferFunctions;

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
    pub fn withTransferFunctions(self: QColorSpace, redTransferFunctionTable: []u16, greenTransferFunctionTable: []u16, blueTransferFunctionTable: []u16) QColorSpace {
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

    /// ### DEPRECATED: Use `setPrimaries` instead
    ///
    pub const SetPrimaries = setPrimaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` primariesId: qcolorspace_enums.Primaries `
    ///
    pub fn setPrimaries(self: QColorSpace, primariesId: i32) void {
        qtc.QColorSpace_SetPrimaries(@ptrCast(self.ptr), @bitCast(primariesId));
    }

    /// ### DEPRECATED: Use `setPrimaries2` instead
    ///
    pub const SetPrimaries2 = setPrimaries2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _whitePoint: QPointF `
    ///
    /// ` redPoint: QPointF `
    ///
    /// ` greenPoint: QPointF `
    ///
    /// ` bluePoint: QPointF `
    ///
    pub fn setPrimaries2(self: QColorSpace, _whitePoint: anytype, redPoint: anytype, greenPoint: anytype, bluePoint: anytype) void {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        comptime _ = @TypeOf(redPoint)._is_QPointF;
        comptime _ = @TypeOf(greenPoint)._is_QPointF;
        comptime _ = @TypeOf(bluePoint)._is_QPointF;
        qtc.QColorSpace_SetPrimaries2(@ptrCast(self.ptr), @ptrCast(_whitePoint.ptr), @ptrCast(redPoint.ptr), @ptrCast(greenPoint.ptr), @ptrCast(bluePoint.ptr));
    }

    /// ### DEPRECATED: Use `setWhitePoint` instead
    ///
    pub const SetWhitePoint = setWhitePoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setWhitePoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _whitePoint: QPointF `
    ///
    pub fn setWhitePoint(self: QColorSpace, _whitePoint: anytype) void {
        comptime _ = @TypeOf(_whitePoint)._is_QPointF;
        qtc.QColorSpace_SetWhitePoint(@ptrCast(self.ptr), @ptrCast(_whitePoint.ptr));
    }

    /// ### DEPRECATED: Use `whitePoint` instead
    ///
    pub const WhitePoint = whitePoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#whitePoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn whitePoint(self: QColorSpace) QPointF {
        return .{ .ptr = qtc.QColorSpace_WhitePoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `transformModel` instead
    ///
    pub const TransformModel = transformModel;

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
    pub fn transformModel(self: QColorSpace) u8 {
        return qtc.QColorSpace_TransformModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorModel` instead
    ///
    pub const ColorModel = colorModel;

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
    pub fn colorModel(self: QColorSpace) u8 {
        return qtc.QColorSpace_ColorModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn detach(self: QColorSpace) void {
        qtc.QColorSpace_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn isValid(self: QColorSpace) bool {
        return qtc.QColorSpace_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValidTarget` instead
    ///
    pub const IsValidTarget = isValidTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValidTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn isValidTarget(self: QColorSpace) bool {
        return qtc.QColorSpace_IsValidTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromIccProfile` instead
    ///
    pub const FromIccProfile = fromIccProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` _iccProfile: []u8 `
    ///
    pub fn fromIccProfile(_iccProfile: []u8) QColorSpace {
        const iccProfile_str = qtc.libqt_string{
            .len = _iccProfile.len,
            .data = _iccProfile.ptr,
        };
        return .{ .ptr = qtc.QColorSpace_FromIccProfile(iccProfile_str) };
    }

    /// ### DEPRECATED: Use `iccProfile` instead
    ///
    pub const IccProfile = iccProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iccProfile(self: QColorSpace, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QColorSpace_IccProfile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QColorSpace.iccProfile: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `transformationToColorSpace` instead
    ///
    pub const TransformationToColorSpace = transformationToColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformationToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` colorspace: QColorSpace `
    ///
    pub fn transformationToColorSpace(self: QColorSpace, colorspace: anytype) QColorTransform {
        comptime _ = @TypeOf(colorspace)._is_QColorSpace;
        return .{ .ptr = qtc.QColorSpace_TransformationToColorSpace(@ptrCast(self.ptr), @ptrCast(colorspace.ptr)) };
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    pub fn toQVariant(self: QColorSpace) QVariant {
        return .{ .ptr = qtc.QColorSpace_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransferFunction22` instead
    ///
    pub const SetTransferFunction22 = setTransferFunction22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` _gamma: f32 `
    ///
    pub fn setTransferFunction22(self: QColorSpace, _transferFunction: i32, _gamma: f32) void {
        qtc.QColorSpace_SetTransferFunction22(@ptrCast(self.ptr), @bitCast(_transferFunction), @bitCast(_gamma));
    }

    /// ### DEPRECATED: Use `withTransferFunction22` instead
    ///
    pub const WithTransferFunction22 = withTransferFunction22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColorSpace `
    ///
    /// ` _transferFunction: qcolorspace_enums.TransferFunction `
    ///
    /// ` _gamma: f32 `
    ///
    pub fn withTransferFunction22(self: QColorSpace, _transferFunction: i32, _gamma: f32) QColorSpace {
        return .{ .ptr = qtc.QColorSpace_WithTransferFunction22(@ptrCast(self.ptr), @bitCast(_transferFunction), @bitCast(_gamma)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#dtor.QColorSpace)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QColorSpace `
    ///
    pub fn delete(self: QColorSpace) void {
        qtc.QColorSpace_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)
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
