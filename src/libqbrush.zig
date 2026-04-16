const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QImage = @import("libqt6").QImage;
const QPixmap = @import("libqt6").QPixmap;
const QPointF = @import("libqt6").QPointF;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qbrush_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");
const Struct_f64_QColor = extern struct { first: f64, second: QColor };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html)
pub const QBrush = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBrush,

    pub const _is_QBrush = {};

    /// New constructs a new QBrush object.
    ///
    pub fn New() QBrush {
        return .{ .ptr = qtc.QBrush_new() };
    }

    /// New2 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bs: qnamespace_enums.BrushStyle `
    ///
    pub fn New2(bs: i32) QBrush {
        return .{ .ptr = qtc.QBrush_new2(@bitCast(bs)) };
    }

    /// New3 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    pub fn New3(color: anytype) QBrush {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QBrush_new3(@ptrCast(color.ptr)) };
    }

    /// New4 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn New4(color: i32) QBrush {
        return .{ .ptr = qtc.QBrush_new4(@bitCast(color)) };
    }

    /// New5 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn New5(color: anytype, pixmap: anytype) QBrush {
        comptime _ = @TypeOf(color)._is_QColor;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBrush_new5(@ptrCast(color.ptr), @ptrCast(pixmap.ptr)) };
    }

    /// New6 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn New6(color: i32, pixmap: anytype) QBrush {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBrush_new6(@bitCast(color), @ptrCast(pixmap.ptr)) };
    }

    /// New7 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn New7(pixmap: anytype) QBrush {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBrush_new7(@ptrCast(pixmap.ptr)) };
    }

    /// New8 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn New8(image: anytype) QBrush {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBrush_new8(@ptrCast(image.ptr)) };
    }

    /// New9 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QBrush `
    ///
    pub fn New9(brush: anytype) QBrush {
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QBrush_new9(@ptrCast(brush.ptr)) };
    }

    /// New10 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` gradient: QGradient `
    ///
    pub fn New10(gradient: anytype) QBrush {
        comptime _ = @TypeOf(gradient)._is_QGradient;
        return .{ .ptr = qtc.QBrush_new10(@ptrCast(gradient.ptr)) };
    }

    /// New11 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` bs: qnamespace_enums.BrushStyle `
    ///
    pub fn New11(color: anytype, bs: i32) QBrush {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QBrush_new11(@ptrCast(color.ptr), @bitCast(bs)) };
    }

    /// New12 constructs a new QBrush object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    /// ` bs: qnamespace_enums.BrushStyle `
    ///
    pub fn New12(color: i32, bs: i32) QBrush {
        return .{ .ptr = qtc.QBrush_new12(@bitCast(color), @bitCast(bs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` brush: QBrush `
    ///
    pub fn OperatorAssign(self: QBrush, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QBrush_OperatorAssign(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` other: QBrush `
    ///
    pub fn Swap(self: QBrush, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBrush;
        qtc.QBrush_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn ToQVariant(self: QBrush) QVariant {
        return .{ .ptr = qtc.QBrush_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.BrushStyle `
    ///
    pub fn Style(self: QBrush) i32 {
        return qtc.QBrush_Style(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` style: qnamespace_enums.BrushStyle `
    ///
    pub fn SetStyle(self: QBrush, style: i32) void {
        qtc.QBrush_SetStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn Transform(self: QBrush) QTransform {
        return .{ .ptr = qtc.QBrush_Transform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` transform: QTransform `
    ///
    pub fn SetTransform(self: QBrush, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QTransform;
        qtc.QBrush_SetTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn Texture(self: QBrush) QPixmap {
        return .{ .ptr = qtc.QBrush_Texture(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SetTexture(self: QBrush, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QBrush_SetTexture(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#textureImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn TextureImage(self: QBrush) QImage {
        return .{ .ptr = qtc.QBrush_TextureImage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setTextureImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` image: QImage `
    ///
    pub fn SetTextureImage(self: QBrush, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QBrush_SetTextureImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn Color(self: QBrush) QColor {
        return .{ .ptr = qtc.QBrush_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QBrush, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QBrush_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn SetColor2(self: QBrush, color: i32) void {
        qtc.QBrush_SetColor2(@ptrCast(self.ptr), @bitCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#gradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn Gradient(self: QBrush) QGradient {
        return .{ .ptr = qtc.QBrush_Gradient(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#isOpaque)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn IsOpaque(self: QBrush) bool {
        return qtc.QBrush_IsOpaque(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` b: QBrush `
    ///
    pub fn OperatorEqual(self: QBrush, b: anytype) bool {
        comptime _ = @TypeOf(b)._is_QBrush;
        return qtc.QBrush_OperatorEqual(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` b: QBrush `
    ///
    pub fn OperatorNotEqual(self: QBrush, b: anytype) bool {
        comptime _ = @TypeOf(b)._is_QBrush;
        return qtc.QBrush_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn IsDetached(self: QBrush) bool {
        return qtc.QBrush_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#dtor.QBrush)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBrush `
    ///
    pub fn Delete(self: QBrush) void {
        qtc.QBrush_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html)
pub const QGradient = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGradient,

    pub const _is_QGradient = {};

    /// New constructs a new QGradient object.
    ///
    pub fn New() QGradient {
        return .{ .ptr = qtc.QGradient_new() };
    }

    /// New2 constructs a new QGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qbrush_enums.Preset `
    ///
    pub fn New2(param1: i32) QGradient {
        return .{ .ptr = qtc.QGradient_new2(@bitCast(param1)) };
    }

    /// New3 constructs a new QGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGradient `
    ///
    pub fn New3(param1: anytype) QGradient {
        comptime _ = @TypeOf(param1)._is_QGradient;
        return .{ .ptr = qtc.QGradient_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Type `
    ///
    pub fn Type(self: QGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` spread: qbrush_enums.Spread `
    ///
    pub fn SetSpread(self: QGradient, spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(spread));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#spread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Spread `
    ///
    pub fn Spread(self: QGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` pos: f64 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColorAt(self: QGradient, pos: f64, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` stops: []Struct_f64_QColor `
    ///
    pub fn SetStops(self: QGradient, stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = stops.len,
            .data = @ptrCast(stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#stops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Stops(self: QGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("qgradient.Stops: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.CoordinateMode `
    ///
    pub fn CoordinateMode(self: QGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` mode: qbrush_enums.CoordinateMode `
    ///
    pub fn SetCoordinateMode(self: QGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.InterpolationMode `
    ///
    pub fn InterpolationMode(self: QGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` mode: qbrush_enums.InterpolationMode `
    ///
    pub fn SetInterpolationMode(self: QGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` gradient: QGradient `
    ///
    pub fn OperatorEqual(self: QGradient, gradient: anytype) bool {
        comptime _ = @TypeOf(gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` other: QGradient `
    ///
    pub fn OperatorNotEqual(self: QGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#dtor.QGradient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGradient `
    ///
    pub fn Delete(self: QGradient) void {
        qtc.QGradient_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html)
pub const QLinearGradient = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLinearGradient,

    pub const _is_QLinearGradient = {};
    pub const _is_QGradient = {};

    /// New constructs a new QLinearGradient object.
    ///
    pub fn New() QLinearGradient {
        return .{ .ptr = qtc.QLinearGradient_new() };
    }

    /// New2 constructs a new QLinearGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` start: QPointF `
    ///
    /// ` finalStop: QPointF `
    ///
    pub fn New2(start: anytype, finalStop: anytype) QLinearGradient {
        comptime _ = @TypeOf(start)._is_QPointF;
        comptime _ = @TypeOf(finalStop)._is_QPointF;
        return .{ .ptr = qtc.QLinearGradient_new2(@ptrCast(start.ptr), @ptrCast(finalStop.ptr)) };
    }

    /// New3 constructs a new QLinearGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xStart: f64 `
    ///
    /// ` yStart: f64 `
    ///
    /// ` xFinalStop: f64 `
    ///
    /// ` yFinalStop: f64 `
    ///
    pub fn New3(xStart: f64, yStart: f64, xFinalStop: f64, yFinalStop: f64) QLinearGradient {
        return .{ .ptr = qtc.QLinearGradient_new3(@bitCast(xStart), @bitCast(yStart), @bitCast(xFinalStop), @bitCast(yFinalStop)) };
    }

    /// New4 constructs a new QLinearGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLinearGradient `
    ///
    pub fn New4(param1: anytype) QLinearGradient {
        comptime _ = @TypeOf(param1)._is_QLinearGradient;
        return .{ .ptr = qtc.QLinearGradient_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    pub fn Start(self: QLinearGradient) QPointF {
        return .{ .ptr = qtc.QLinearGradient_Start(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` start: QPointF `
    ///
    pub fn SetStart(self: QLinearGradient, start: anytype) void {
        comptime _ = @TypeOf(start)._is_QPointF;
        qtc.QLinearGradient_SetStart(@ptrCast(self.ptr), @ptrCast(start.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetStart2(self: QLinearGradient, x: f64, y: f64) void {
        qtc.QLinearGradient_SetStart2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#finalStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    pub fn FinalStop(self: QLinearGradient) QPointF {
        return .{ .ptr = qtc.QLinearGradient_FinalStop(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#setFinalStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` stop: QPointF `
    ///
    pub fn SetFinalStop(self: QLinearGradient, stop: anytype) void {
        comptime _ = @TypeOf(stop)._is_QPointF;
        qtc.QLinearGradient_SetFinalStop(@ptrCast(self.ptr), @ptrCast(stop.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#setFinalStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetFinalStop2(self: QLinearGradient, x: f64, y: f64) void {
        qtc.QLinearGradient_SetFinalStop2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Type `
    ///
    pub fn Type(self: QLinearGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` spread: qbrush_enums.Spread `
    ///
    pub fn SetSpread(self: QLinearGradient, spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(spread));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#spread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Spread `
    ///
    pub fn Spread(self: QLinearGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` pos: f64 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColorAt(self: QLinearGradient, pos: f64, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(color.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` stops: []Struct_f64_QColor `
    ///
    pub fn SetStops(self: QLinearGradient, stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = stops.len,
            .data = @ptrCast(stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#stops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Stops(self: QLinearGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("qlineargradient.Stops: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.CoordinateMode `
    ///
    pub fn CoordinateMode(self: QLinearGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` mode: qbrush_enums.CoordinateMode `
    ///
    pub fn SetCoordinateMode(self: QLinearGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.InterpolationMode `
    ///
    pub fn InterpolationMode(self: QLinearGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` mode: qbrush_enums.InterpolationMode `
    ///
    pub fn SetInterpolationMode(self: QLinearGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` gradient: QGradient `
    ///
    pub fn OperatorEqual(self: QLinearGradient, gradient: anytype) bool {
        comptime _ = @TypeOf(gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` other: QGradient `
    ///
    pub fn OperatorNotEqual(self: QLinearGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#dtor.QLinearGradient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLinearGradient `
    ///
    pub fn Delete(self: QLinearGradient) void {
        qtc.QLinearGradient_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html)
pub const QRadialGradient = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRadialGradient,

    pub const _is_QRadialGradient = {};
    pub const _is_QGradient = {};

    /// New constructs a new QRadialGradient object.
    ///
    pub fn New() QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new() };
    }

    /// New2 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QPointF `
    ///
    /// ` radius: f64 `
    ///
    /// ` focalPoint: QPointF `
    ///
    pub fn New2(center: anytype, radius: f64, focalPoint: anytype) QRadialGradient {
        comptime _ = @TypeOf(center)._is_QPointF;
        comptime _ = @TypeOf(focalPoint)._is_QPointF;
        return .{ .ptr = qtc.QRadialGradient_new2(@ptrCast(center.ptr), @bitCast(radius), @ptrCast(focalPoint.ptr)) };
    }

    /// New3 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` radius: f64 `
    ///
    /// ` fx: f64 `
    ///
    /// ` fy: f64 `
    ///
    pub fn New3(cx: f64, cy: f64, radius: f64, fx: f64, fy: f64) QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new3(@bitCast(cx), @bitCast(cy), @bitCast(radius), @bitCast(fx), @bitCast(fy)) };
    }

    /// New4 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QPointF `
    ///
    /// ` radius: f64 `
    ///
    pub fn New4(center: anytype, radius: f64) QRadialGradient {
        comptime _ = @TypeOf(center)._is_QPointF;
        return .{ .ptr = qtc.QRadialGradient_new4(@ptrCast(center.ptr), @bitCast(radius)) };
    }

    /// New5 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` radius: f64 `
    ///
    pub fn New5(cx: f64, cy: f64, radius: f64) QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new5(@bitCast(cx), @bitCast(cy), @bitCast(radius)) };
    }

    /// New6 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QPointF `
    ///
    /// ` centerRadius: f64 `
    ///
    /// ` focalPoint: QPointF `
    ///
    /// ` focalRadius: f64 `
    ///
    pub fn New6(center: anytype, centerRadius: f64, focalPoint: anytype, focalRadius: f64) QRadialGradient {
        comptime _ = @TypeOf(center)._is_QPointF;
        comptime _ = @TypeOf(focalPoint)._is_QPointF;
        return .{ .ptr = qtc.QRadialGradient_new6(@ptrCast(center.ptr), @bitCast(centerRadius), @ptrCast(focalPoint.ptr), @bitCast(focalRadius)) };
    }

    /// New7 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` centerRadius: f64 `
    ///
    /// ` fx: f64 `
    ///
    /// ` fy: f64 `
    ///
    /// ` focalRadius: f64 `
    ///
    pub fn New7(cx: f64, cy: f64, centerRadius: f64, fx: f64, fy: f64, focalRadius: f64) QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new7(@bitCast(cx), @bitCast(cy), @bitCast(centerRadius), @bitCast(fx), @bitCast(fy), @bitCast(focalRadius)) };
    }

    /// New8 constructs a new QRadialGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRadialGradient `
    ///
    pub fn New8(param1: anytype) QRadialGradient {
        comptime _ = @TypeOf(param1)._is_QRadialGradient;
        return .{ .ptr = qtc.QRadialGradient_new8(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn Center(self: QRadialGradient) QPointF {
        return .{ .ptr = qtc.QRadialGradient_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` center: QPointF `
    ///
    pub fn SetCenter(self: QRadialGradient, center: anytype) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QRadialGradient_SetCenter(@ptrCast(self.ptr), @ptrCast(center.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetCenter2(self: QRadialGradient, x: f64, y: f64) void {
        qtc.QRadialGradient_SetCenter2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#focalPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn FocalPoint(self: QRadialGradient) QPointF {
        return .{ .ptr = qtc.QRadialGradient_FocalPoint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setFocalPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` focalPoint: QPointF `
    ///
    pub fn SetFocalPoint(self: QRadialGradient, focalPoint: anytype) void {
        comptime _ = @TypeOf(focalPoint)._is_QPointF;
        qtc.QRadialGradient_SetFocalPoint(@ptrCast(self.ptr), @ptrCast(focalPoint.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setFocalPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetFocalPoint2(self: QRadialGradient, x: f64, y: f64) void {
        qtc.QRadialGradient_SetFocalPoint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#radius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn Radius(self: QRadialGradient) f64 {
        return qtc.QRadialGradient_Radius(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetRadius(self: QRadialGradient, radius: f64) void {
        qtc.QRadialGradient_SetRadius(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#centerRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn CenterRadius(self: QRadialGradient) f64 {
        return qtc.QRadialGradient_CenterRadius(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setCenterRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetCenterRadius(self: QRadialGradient, radius: f64) void {
        qtc.QRadialGradient_SetCenterRadius(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#focalRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn FocalRadius(self: QRadialGradient) f64 {
        return qtc.QRadialGradient_FocalRadius(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setFocalRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetFocalRadius(self: QRadialGradient, radius: f64) void {
        qtc.QRadialGradient_SetFocalRadius(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Type `
    ///
    pub fn Type(self: QRadialGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` spread: qbrush_enums.Spread `
    ///
    pub fn SetSpread(self: QRadialGradient, spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(spread));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#spread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Spread `
    ///
    pub fn Spread(self: QRadialGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` pos: f64 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColorAt(self: QRadialGradient, pos: f64, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(color.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` stops: []Struct_f64_QColor `
    ///
    pub fn SetStops(self: QRadialGradient, stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = stops.len,
            .data = @ptrCast(stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#stops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Stops(self: QRadialGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("qradialgradient.Stops: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.CoordinateMode `
    ///
    pub fn CoordinateMode(self: QRadialGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` mode: qbrush_enums.CoordinateMode `
    ///
    pub fn SetCoordinateMode(self: QRadialGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.InterpolationMode `
    ///
    pub fn InterpolationMode(self: QRadialGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` mode: qbrush_enums.InterpolationMode `
    ///
    pub fn SetInterpolationMode(self: QRadialGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` gradient: QGradient `
    ///
    pub fn OperatorEqual(self: QRadialGradient, gradient: anytype) bool {
        comptime _ = @TypeOf(gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` other: QGradient `
    ///
    pub fn OperatorNotEqual(self: QRadialGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#dtor.QRadialGradient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn Delete(self: QRadialGradient) void {
        qtc.QRadialGradient_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html)
pub const QConicalGradient = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QConicalGradient,

    pub const _is_QConicalGradient = {};
    pub const _is_QGradient = {};

    /// New constructs a new QConicalGradient object.
    ///
    pub fn New() QConicalGradient {
        return .{ .ptr = qtc.QConicalGradient_new() };
    }

    /// New2 constructs a new QConicalGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` center: QPointF `
    ///
    /// ` startAngle: f64 `
    ///
    pub fn New2(center: anytype, startAngle: f64) QConicalGradient {
        comptime _ = @TypeOf(center)._is_QPointF;
        return .{ .ptr = qtc.QConicalGradient_new2(@ptrCast(center.ptr), @bitCast(startAngle)) };
    }

    /// New3 constructs a new QConicalGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` startAngle: f64 `
    ///
    pub fn New3(cx: f64, cy: f64, startAngle: f64) QConicalGradient {
        return .{ .ptr = qtc.QConicalGradient_new3(@bitCast(cx), @bitCast(cy), @bitCast(startAngle)) };
    }

    /// New4 constructs a new QConicalGradient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QConicalGradient `
    ///
    pub fn New4(param1: anytype) QConicalGradient {
        comptime _ = @TypeOf(param1)._is_QConicalGradient;
        return .{ .ptr = qtc.QConicalGradient_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    pub fn Center(self: QConicalGradient) QPointF {
        return .{ .ptr = qtc.QConicalGradient_Center(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` center: QPointF `
    ///
    pub fn SetCenter(self: QConicalGradient, center: anytype) void {
        comptime _ = @TypeOf(center)._is_QPointF;
        qtc.QConicalGradient_SetCenter(@ptrCast(self.ptr), @ptrCast(center.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetCenter2(self: QConicalGradient, x: f64, y: f64) void {
        qtc.QConicalGradient_SetCenter2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#angle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    pub fn Angle(self: QConicalGradient) f64 {
        return qtc.QConicalGradient_Angle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#setAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetAngle(self: QConicalGradient, angle: f64) void {
        qtc.QConicalGradient_SetAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Type `
    ///
    pub fn Type(self: QConicalGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` spread: qbrush_enums.Spread `
    ///
    pub fn SetSpread(self: QConicalGradient, spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(spread));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#spread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.Spread `
    ///
    pub fn Spread(self: QConicalGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` pos: f64 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColorAt(self: QConicalGradient, pos: f64, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(color.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` stops: []Struct_f64_QColor `
    ///
    pub fn SetStops(self: QConicalGradient, stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = stops.len,
            .data = @ptrCast(stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#stops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Stops(self: QConicalGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("qconicalgradient.Stops: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.CoordinateMode `
    ///
    pub fn CoordinateMode(self: QConicalGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` mode: qbrush_enums.CoordinateMode `
    ///
    pub fn SetCoordinateMode(self: QConicalGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ## Returns:
    ///
    /// ` qbrush_enums.InterpolationMode `
    ///
    pub fn InterpolationMode(self: QConicalGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` mode: qbrush_enums.InterpolationMode `
    ///
    pub fn SetInterpolationMode(self: QConicalGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` gradient: QGradient `
    ///
    pub fn OperatorEqual(self: QConicalGradient, gradient: anytype) bool {
        comptime _ = @TypeOf(gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` other: QGradient `
    ///
    pub fn OperatorNotEqual(self: QConicalGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#dtor.QConicalGradient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QConicalGradient `
    ///
    pub fn Delete(self: QConicalGradient) void {
        qtc.QConicalGradient_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient-qgradientdata.html)
pub const QGradient__QGradientData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient-qgradientdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGradient__QGradientData,

    pub const _is_QGradient__QGradientData = {};

    /// New constructs a new QGradient::QGradientData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGradient__QGradientData `
    ///
    pub fn New(param1: anytype) QGradient__QGradientData {
        comptime _ = @TypeOf(param1)._is_QGradient__QGradientData;
        return .{ .ptr = qtc.QGradient__QGradientData_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGradient__QGradientData `
    ///
    pub fn Delete(self: QGradient__QGradientData) void {
        qtc.QGradient__QGradientData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const LinearGradient: i32 = 0;
        pub const RadialGradient: i32 = 1;
        pub const ConicalGradient: i32 = 2;
        pub const NoGradient: i32 = 3;
    };

    pub const Spread = enum(i32) {
        pub const PadSpread: i32 = 0;
        pub const ReflectSpread: i32 = 1;
        pub const RepeatSpread: i32 = 2;
    };

    pub const CoordinateMode = enum(i32) {
        pub const LogicalMode: i32 = 0;
        pub const StretchToDeviceMode: i32 = 1;
        pub const ObjectBoundingMode: i32 = 2;
        pub const ObjectMode: i32 = 3;
    };

    pub const InterpolationMode = enum(i32) {
        pub const ColorInterpolation: i32 = 0;
        pub const ComponentInterpolation: i32 = 1;
    };

    pub const Preset = enum(i32) {
        pub const WarmFlame: i32 = 1;
        pub const NightFade: i32 = 2;
        pub const SpringWarmth: i32 = 3;
        pub const JuicyPeach: i32 = 4;
        pub const YoungPassion: i32 = 5;
        pub const LadyLips: i32 = 6;
        pub const SunnyMorning: i32 = 7;
        pub const RainyAshville: i32 = 8;
        pub const FrozenDreams: i32 = 9;
        pub const WinterNeva: i32 = 10;
        pub const DustyGrass: i32 = 11;
        pub const TemptingAzure: i32 = 12;
        pub const HeavyRain: i32 = 13;
        pub const AmyCrisp: i32 = 14;
        pub const MeanFruit: i32 = 15;
        pub const DeepBlue: i32 = 16;
        pub const RipeMalinka: i32 = 17;
        pub const CloudyKnoxville: i32 = 18;
        pub const MalibuBeach: i32 = 19;
        pub const NewLife: i32 = 20;
        pub const TrueSunset: i32 = 21;
        pub const MorpheusDen: i32 = 22;
        pub const RareWind: i32 = 23;
        pub const NearMoon: i32 = 24;
        pub const WildApple: i32 = 25;
        pub const SaintPetersburg: i32 = 26;
        pub const PlumPlate: i32 = 28;
        pub const EverlastingSky: i32 = 29;
        pub const HappyFisher: i32 = 30;
        pub const Blessing: i32 = 31;
        pub const SharpeyeEagle: i32 = 32;
        pub const LadogaBottom: i32 = 33;
        pub const LemonGate: i32 = 34;
        pub const ItmeoBranding: i32 = 35;
        pub const ZeusMiracle: i32 = 36;
        pub const OldHat: i32 = 37;
        pub const StarWine: i32 = 38;
        pub const HappyAcid: i32 = 41;
        pub const AwesomePine: i32 = 42;
        pub const NewYork: i32 = 43;
        pub const ShyRainbow: i32 = 44;
        pub const MixedHopes: i32 = 46;
        pub const FlyHigh: i32 = 47;
        pub const StrongBliss: i32 = 48;
        pub const FreshMilk: i32 = 49;
        pub const SnowAgain: i32 = 50;
        pub const FebruaryInk: i32 = 51;
        pub const KindSteel: i32 = 52;
        pub const SoftGrass: i32 = 53;
        pub const GrownEarly: i32 = 54;
        pub const SharpBlues: i32 = 55;
        pub const ShadyWater: i32 = 56;
        pub const DirtyBeauty: i32 = 57;
        pub const GreatWhale: i32 = 58;
        pub const TeenNotebook: i32 = 59;
        pub const PoliteRumors: i32 = 60;
        pub const SweetPeriod: i32 = 61;
        pub const WideMatrix: i32 = 62;
        pub const SoftCherish: i32 = 63;
        pub const RedSalvation: i32 = 64;
        pub const BurningSpring: i32 = 65;
        pub const NightParty: i32 = 66;
        pub const SkyGlider: i32 = 67;
        pub const HeavenPeach: i32 = 68;
        pub const PurpleDivision: i32 = 69;
        pub const AquaSplash: i32 = 70;
        pub const SpikyNaga: i32 = 72;
        pub const LoveKiss: i32 = 73;
        pub const CleanMirror: i32 = 75;
        pub const PremiumDark: i32 = 76;
        pub const ColdEvening: i32 = 77;
        pub const CochitiLake: i32 = 78;
        pub const SummerGames: i32 = 79;
        pub const PassionateBed: i32 = 80;
        pub const MountainRock: i32 = 81;
        pub const DesertHump: i32 = 82;
        pub const JungleDay: i32 = 83;
        pub const PhoenixStart: i32 = 84;
        pub const OctoberSilence: i32 = 85;
        pub const FarawayRiver: i32 = 86;
        pub const AlchemistLab: i32 = 87;
        pub const OverSun: i32 = 88;
        pub const PremiumWhite: i32 = 89;
        pub const MarsParty: i32 = 90;
        pub const EternalConstance: i32 = 91;
        pub const JapanBlush: i32 = 92;
        pub const SmilingRain: i32 = 93;
        pub const CloudyApple: i32 = 94;
        pub const BigMango: i32 = 95;
        pub const HealthyWater: i32 = 96;
        pub const AmourAmour: i32 = 97;
        pub const RiskyConcrete: i32 = 98;
        pub const StrongStick: i32 = 99;
        pub const ViciousStance: i32 = 100;
        pub const PaloAlto: i32 = 101;
        pub const HappyMemories: i32 = 102;
        pub const MidnightBloom: i32 = 103;
        pub const Crystalline: i32 = 104;
        pub const PartyBliss: i32 = 106;
        pub const ConfidentCloud: i32 = 107;
        pub const LeCocktail: i32 = 108;
        pub const RiverCity: i32 = 109;
        pub const FrozenBerry: i32 = 110;
        pub const ChildCare: i32 = 112;
        pub const FlyingLemon: i32 = 113;
        pub const NewRetrowave: i32 = 114;
        pub const HiddenJaguar: i32 = 115;
        pub const AboveTheSky: i32 = 116;
        pub const Nega: i32 = 117;
        pub const DenseWater: i32 = 118;
        pub const Seashore: i32 = 120;
        pub const MarbleWall: i32 = 121;
        pub const CheerfulCaramel: i32 = 122;
        pub const NightSky: i32 = 123;
        pub const MagicLake: i32 = 124;
        pub const YoungGrass: i32 = 125;
        pub const ColorfulPeach: i32 = 126;
        pub const GentleCare: i32 = 127;
        pub const PlumBath: i32 = 128;
        pub const HappyUnicorn: i32 = 129;
        pub const AfricanField: i32 = 131;
        pub const SolidStone: i32 = 132;
        pub const OrangeJuice: i32 = 133;
        pub const GlassWater: i32 = 134;
        pub const NorthMiracle: i32 = 136;
        pub const FruitBlend: i32 = 137;
        pub const MillenniumPine: i32 = 138;
        pub const HighFlight: i32 = 139;
        pub const MoleHall: i32 = 140;
        pub const SpaceShift: i32 = 142;
        pub const ForestInei: i32 = 143;
        pub const RoyalGarden: i32 = 144;
        pub const RichMetal: i32 = 145;
        pub const JuicyCake: i32 = 146;
        pub const SmartIndigo: i32 = 147;
        pub const SandStrike: i32 = 148;
        pub const NorseBeauty: i32 = 149;
        pub const AquaGuidance: i32 = 150;
        pub const SunVeggie: i32 = 151;
        pub const SeaLord: i32 = 152;
        pub const BlackSea: i32 = 153;
        pub const GrassShampoo: i32 = 154;
        pub const LandingAircraft: i32 = 155;
        pub const WitchDance: i32 = 156;
        pub const SleeplessNight: i32 = 157;
        pub const AngelCare: i32 = 158;
        pub const CrystalRiver: i32 = 159;
        pub const SoftLipstick: i32 = 160;
        pub const SaltMountain: i32 = 161;
        pub const PerfectWhite: i32 = 162;
        pub const FreshOasis: i32 = 163;
        pub const StrictNovember: i32 = 164;
        pub const MorningSalad: i32 = 165;
        pub const DeepRelief: i32 = 166;
        pub const SeaStrike: i32 = 167;
        pub const NightCall: i32 = 168;
        pub const SupremeSky: i32 = 169;
        pub const LightBlue: i32 = 170;
        pub const MindCrawl: i32 = 171;
        pub const LilyMeadow: i32 = 172;
        pub const SugarLollipop: i32 = 173;
        pub const SweetDessert: i32 = 174;
        pub const MagicRay: i32 = 175;
        pub const TeenParty: i32 = 176;
        pub const FrozenHeat: i32 = 177;
        pub const GagarinView: i32 = 178;
        pub const FabledSunset: i32 = 179;
        pub const PerfectBlue: i32 = 180;
        pub const NumPresets: i32 = 181;
    };
};
