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
const Struct_f64_QColor = @import("libqt6").types.Struct_f64_QColor; // extern struct { first: f64, second: QColor }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html)
pub const QBrush = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBrush,

    pub const _is_QBrush = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBrush object in C++ memory
    ///
    pub fn new() QBrush {
        return .{ .ptr = qtc.QBrush_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bs: qnamespace_enums.BrushStyle `
    ///
    pub fn new2(bs: i32) QBrush {
        return .{ .ptr = qtc.QBrush_new2(@bitCast(bs)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: QColor `
    ///
    pub fn new3(_color: anytype) QBrush {
        comptime _ = @TypeOf(_color)._is_QColor;
        return .{ .ptr = qtc.QBrush_new3(@ptrCast(_color.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: qnamespace_enums.GlobalColor `
    ///
    pub fn new4(_color: i32) QBrush {
        return .{ .ptr = qtc.QBrush_new4(@bitCast(_color)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: QColor `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn new5(_color: anytype, pixmap: anytype) QBrush {
        comptime _ = @TypeOf(_color)._is_QColor;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBrush_new5(@ptrCast(_color.ptr), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: qnamespace_enums.GlobalColor `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn new6(_color: i32, pixmap: anytype) QBrush {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBrush_new6(@bitCast(_color), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn new7(pixmap: anytype) QBrush {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBrush_new7(@ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn new8(image: anytype) QBrush {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBrush_new8(@ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` brush: QBrush `
    ///
    pub fn new9(brush: anytype) QBrush {
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QBrush_new9(@ptrCast(brush.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _gradient: QGradient `
    ///
    pub fn new10(_gradient: anytype) QBrush {
        comptime _ = @TypeOf(_gradient)._is_QGradient;
        return .{ .ptr = qtc.QBrush_new10(@ptrCast(_gradient.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: QColor `
    ///
    /// ` bs: qnamespace_enums.BrushStyle `
    ///
    pub fn new11(_color: anytype, bs: i32) QBrush {
        comptime _ = @TypeOf(_color)._is_QColor;
        return .{ .ptr = qtc.QBrush_new11(@ptrCast(_color.ptr), @bitCast(bs)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QBrush object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _color: qnamespace_enums.GlobalColor `
    ///
    /// ` bs: qnamespace_enums.BrushStyle `
    ///
    pub fn new12(_color: i32, bs: i32) QBrush {
        return .{ .ptr = qtc.QBrush_new12(@bitCast(_color), @bitCast(bs)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` brush: QBrush `
    ///
    pub fn operatorAssign(self: QBrush, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QBrush_OperatorAssign(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` other: QBrush `
    ///
    pub fn swap(self: QBrush, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBrush;
        qtc.QBrush_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn toQVariant(self: QBrush) QVariant {
        return .{ .ptr = qtc.QBrush_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

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
    pub fn style(self: QBrush) i32 {
        return qtc.QBrush_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` _style: qnamespace_enums.BrushStyle `
    ///
    pub fn setStyle(self: QBrush, _style: i32) void {
        qtc.QBrush_SetStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn transform(self: QBrush) QTransform {
        return .{ .ptr = qtc.QBrush_Transform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` _transform: QTransform `
    ///
    pub fn setTransform(self: QBrush, _transform: anytype) void {
        comptime _ = @TypeOf(_transform)._is_QTransform;
        qtc.QBrush_SetTransform(@ptrCast(self.ptr), @ptrCast(_transform.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn texture(self: QBrush) QPixmap {
        return .{ .ptr = qtc.QBrush_Texture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn setTexture(self: QBrush, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QBrush_SetTexture(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `textureImage` instead
    ///
    pub const TextureImage = textureImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#textureImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn textureImage(self: QBrush) QImage {
        return .{ .ptr = qtc.QBrush_TextureImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextureImage` instead
    ///
    pub const SetTextureImage = setTextureImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setTextureImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` image: QImage `
    ///
    pub fn setTextureImage(self: QBrush, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QBrush_SetTextureImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn color(self: QBrush) QColor {
        return .{ .ptr = qtc.QBrush_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QBrush, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QBrush_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setColor2` instead
    ///
    pub const SetColor2 = setColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` _color: qnamespace_enums.GlobalColor `
    ///
    pub fn setColor2(self: QBrush, _color: i32) void {
        qtc.QBrush_SetColor2(@ptrCast(self.ptr), @bitCast(_color));
    }

    /// ### DEPRECATED: Use `gradient` instead
    ///
    pub const Gradient = gradient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#gradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn gradient(self: QBrush) QGradient {
        return .{ .ptr = qtc.QBrush_Gradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isOpaque` instead
    ///
    pub const IsOpaque = isOpaque;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#isOpaque)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn isOpaque(self: QBrush) bool {
        return qtc.QBrush_IsOpaque(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` b: QBrush `
    ///
    pub fn operatorEqual(self: QBrush, b: anytype) bool {
        comptime _ = @TypeOf(b)._is_QBrush;
        return qtc.QBrush_OperatorEqual(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    /// ` b: QBrush `
    ///
    pub fn operatorNotEqual(self: QBrush, b: anytype) bool {
        comptime _ = @TypeOf(b)._is_QBrush;
        return qtc.QBrush_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBrush `
    ///
    pub fn isDetached(self: QBrush) bool {
        return qtc.QBrush_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#dtor.QBrush)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBrush `
    ///
    pub fn delete(self: QBrush) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGradient object in C++ memory
    ///
    pub fn new() QGradient {
        return .{ .ptr = qtc.QGradient_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qbrush_enums.Preset `
    ///
    pub fn new2(param1: i32) QGradient {
        return .{ .ptr = qtc.QGradient_new2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGradient `
    ///
    pub fn new3(param1: anytype) QGradient {
        comptime _ = @TypeOf(param1)._is_QGradient;
        return .{ .ptr = qtc.QGradient_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpread` instead
    ///
    pub const SetSpread = setSpread;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` _spread: qbrush_enums.Spread `
    ///
    pub fn setSpread(self: QGradient, _spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(_spread));
    }

    /// ### DEPRECATED: Use `spread` instead
    ///
    pub const Spread = spread;

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
    pub fn spread(self: QGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorAt` instead
    ///
    pub const SetColorAt = setColorAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` pos: f64 `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColorAt(self: QGradient, pos: f64, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setStops` instead
    ///
    pub const SetStops = setStops;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` _stops: []Struct_f64_QColor `
    ///
    pub fn setStops(self: QGradient, _stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = _stops.len,
            .data = @ptrCast(_stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// ### DEPRECATED: Use `stops` instead
    ///
    pub const Stops = stops;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#stops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn stops(self: QGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("QGradient.stops: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `coordinateMode` instead
    ///
    pub const CoordinateMode = coordinateMode;

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
    pub fn coordinateMode(self: QGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCoordinateMode` instead
    ///
    pub const SetCoordinateMode = setCoordinateMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` mode: qbrush_enums.CoordinateMode `
    ///
    pub fn setCoordinateMode(self: QGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `interpolationMode` instead
    ///
    pub const InterpolationMode = interpolationMode;

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
    pub fn interpolationMode(self: QGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterpolationMode` instead
    ///
    pub const SetInterpolationMode = setInterpolationMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` mode: qbrush_enums.InterpolationMode `
    ///
    pub fn setInterpolationMode(self: QGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` _gradient: QGradient `
    ///
    pub fn operatorEqual(self: QGradient, _gradient: anytype) bool {
        comptime _ = @TypeOf(_gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(_gradient.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGradient `
    ///
    /// ` other: QGradient `
    ///
    pub fn operatorNotEqual(self: QGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#dtor.QGradient)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGradient `
    ///
    pub fn delete(self: QGradient) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLinearGradient object in C++ memory
    ///
    pub fn new() QLinearGradient {
        return .{ .ptr = qtc.QLinearGradient_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLinearGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _start: QPointF `
    ///
    /// ` _finalStop: QPointF `
    ///
    pub fn new2(_start: anytype, _finalStop: anytype) QLinearGradient {
        comptime _ = @TypeOf(_start)._is_QPointF;
        comptime _ = @TypeOf(_finalStop)._is_QPointF;
        return .{ .ptr = qtc.QLinearGradient_new2(@ptrCast(_start.ptr), @ptrCast(_finalStop.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QLinearGradient object in C++ memory
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
    pub fn new3(xStart: f64, yStart: f64, xFinalStop: f64, yFinalStop: f64) QLinearGradient {
        return .{ .ptr = qtc.QLinearGradient_new3(@bitCast(xStart), @bitCast(yStart), @bitCast(xFinalStop), @bitCast(yFinalStop)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QLinearGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QLinearGradient `
    ///
    pub fn new4(param1: anytype) QLinearGradient {
        comptime _ = @TypeOf(param1)._is_QLinearGradient;
        return .{ .ptr = qtc.QLinearGradient_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    pub fn start(self: QLinearGradient) QPointF {
        return .{ .ptr = qtc.QLinearGradient_Start(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` _start: QPointF `
    ///
    pub fn setStart(self: QLinearGradient, _start: anytype) void {
        comptime _ = @TypeOf(_start)._is_QPointF;
        qtc.QLinearGradient_SetStart(@ptrCast(self.ptr), @ptrCast(_start.ptr));
    }

    /// ### DEPRECATED: Use `setStart2` instead
    ///
    pub const SetStart2 = setStart2;

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
    pub fn setStart2(self: QLinearGradient, x: f64, y: f64) void {
        qtc.QLinearGradient_SetStart2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `finalStop` instead
    ///
    pub const FinalStop = finalStop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#finalStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    pub fn finalStop(self: QLinearGradient) QPointF {
        return .{ .ptr = qtc.QLinearGradient_FinalStop(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFinalStop` instead
    ///
    pub const SetFinalStop = setFinalStop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#setFinalStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` stop: QPointF `
    ///
    pub fn setFinalStop(self: QLinearGradient, stop: anytype) void {
        comptime _ = @TypeOf(stop)._is_QPointF;
        qtc.QLinearGradient_SetFinalStop(@ptrCast(self.ptr), @ptrCast(stop.ptr));
    }

    /// ### DEPRECATED: Use `setFinalStop2` instead
    ///
    pub const SetFinalStop2 = setFinalStop2;

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
    pub fn setFinalStop2(self: QLinearGradient, x: f64, y: f64) void {
        qtc.QLinearGradient_SetFinalStop2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QLinearGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpread` instead
    ///
    pub const SetSpread = setSpread;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` _spread: qbrush_enums.Spread `
    ///
    pub fn setSpread(self: QLinearGradient, _spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(_spread));
    }

    /// ### DEPRECATED: Use `spread` instead
    ///
    pub const Spread = spread;

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
    pub fn spread(self: QLinearGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorAt` instead
    ///
    pub const SetColorAt = setColorAt;

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
    /// ` _color: QColor `
    ///
    pub fn setColorAt(self: QLinearGradient, pos: f64, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setStops` instead
    ///
    pub const SetStops = setStops;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` _stops: []Struct_f64_QColor `
    ///
    pub fn setStops(self: QLinearGradient, _stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = _stops.len,
            .data = @ptrCast(_stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// ### DEPRECATED: Use `stops` instead
    ///
    pub const Stops = stops;

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
    pub fn stops(self: QLinearGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("QLinearGradient.stops: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `coordinateMode` instead
    ///
    pub const CoordinateMode = coordinateMode;

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
    pub fn coordinateMode(self: QLinearGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCoordinateMode` instead
    ///
    pub const SetCoordinateMode = setCoordinateMode;

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
    pub fn setCoordinateMode(self: QLinearGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `interpolationMode` instead
    ///
    pub const InterpolationMode = interpolationMode;

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
    pub fn interpolationMode(self: QLinearGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterpolationMode` instead
    ///
    pub const SetInterpolationMode = setInterpolationMode;

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
    pub fn setInterpolationMode(self: QLinearGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLinearGradient `
    ///
    /// ` _gradient: QGradient `
    ///
    pub fn operatorEqual(self: QLinearGradient, _gradient: anytype) bool {
        comptime _ = @TypeOf(_gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(_gradient.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QLinearGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineargradient.html#dtor.QLinearGradient)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLinearGradient `
    ///
    pub fn delete(self: QLinearGradient) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    pub fn new() QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QPointF `
    ///
    /// ` _radius: f64 `
    ///
    /// ` _focalPoint: QPointF `
    ///
    pub fn new2(_center: anytype, _radius: f64, _focalPoint: anytype) QRadialGradient {
        comptime _ = @TypeOf(_center)._is_QPointF;
        comptime _ = @TypeOf(_focalPoint)._is_QPointF;
        return .{ .ptr = qtc.QRadialGradient_new2(@ptrCast(_center.ptr), @bitCast(_radius), @ptrCast(_focalPoint.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` _radius: f64 `
    ///
    /// ` fx: f64 `
    ///
    /// ` fy: f64 `
    ///
    pub fn new3(cx: f64, cy: f64, _radius: f64, fx: f64, fy: f64) QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new3(@bitCast(cx), @bitCast(cy), @bitCast(_radius), @bitCast(fx), @bitCast(fy)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QPointF `
    ///
    /// ` _radius: f64 `
    ///
    pub fn new4(_center: anytype, _radius: f64) QRadialGradient {
        comptime _ = @TypeOf(_center)._is_QPointF;
        return .{ .ptr = qtc.QRadialGradient_new4(@ptrCast(_center.ptr), @bitCast(_radius)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` _radius: f64 `
    ///
    pub fn new5(cx: f64, cy: f64, _radius: f64) QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new5(@bitCast(cx), @bitCast(cy), @bitCast(_radius)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QPointF `
    ///
    /// ` _centerRadius: f64 `
    ///
    /// ` _focalPoint: QPointF `
    ///
    /// ` _focalRadius: f64 `
    ///
    pub fn new6(_center: anytype, _centerRadius: f64, _focalPoint: anytype, _focalRadius: f64) QRadialGradient {
        comptime _ = @TypeOf(_center)._is_QPointF;
        comptime _ = @TypeOf(_focalPoint)._is_QPointF;
        return .{ .ptr = qtc.QRadialGradient_new6(@ptrCast(_center.ptr), @bitCast(_centerRadius), @ptrCast(_focalPoint.ptr), @bitCast(_focalRadius)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` _centerRadius: f64 `
    ///
    /// ` fx: f64 `
    ///
    /// ` fy: f64 `
    ///
    /// ` _focalRadius: f64 `
    ///
    pub fn new7(cx: f64, cy: f64, _centerRadius: f64, fx: f64, fy: f64, _focalRadius: f64) QRadialGradient {
        return .{ .ptr = qtc.QRadialGradient_new7(@bitCast(cx), @bitCast(cy), @bitCast(_centerRadius), @bitCast(fx), @bitCast(fy), @bitCast(_focalRadius)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QRadialGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRadialGradient `
    ///
    pub fn new8(param1: anytype) QRadialGradient {
        comptime _ = @TypeOf(param1)._is_QRadialGradient;
        return .{ .ptr = qtc.QRadialGradient_new8(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn center(self: QRadialGradient) QPointF {
        return .{ .ptr = qtc.QRadialGradient_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCenter` instead
    ///
    pub const SetCenter = setCenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _center: QPointF `
    ///
    pub fn setCenter(self: QRadialGradient, _center: anytype) void {
        comptime _ = @TypeOf(_center)._is_QPointF;
        qtc.QRadialGradient_SetCenter(@ptrCast(self.ptr), @ptrCast(_center.ptr));
    }

    /// ### DEPRECATED: Use `setCenter2` instead
    ///
    pub const SetCenter2 = setCenter2;

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
    pub fn setCenter2(self: QRadialGradient, x: f64, y: f64) void {
        qtc.QRadialGradient_SetCenter2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `focalPoint` instead
    ///
    pub const FocalPoint = focalPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#focalPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn focalPoint(self: QRadialGradient) QPointF {
        return .{ .ptr = qtc.QRadialGradient_FocalPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFocalPoint` instead
    ///
    pub const SetFocalPoint = setFocalPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setFocalPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _focalPoint: QPointF `
    ///
    pub fn setFocalPoint(self: QRadialGradient, _focalPoint: anytype) void {
        comptime _ = @TypeOf(_focalPoint)._is_QPointF;
        qtc.QRadialGradient_SetFocalPoint(@ptrCast(self.ptr), @ptrCast(_focalPoint.ptr));
    }

    /// ### DEPRECATED: Use `setFocalPoint2` instead
    ///
    pub const SetFocalPoint2 = setFocalPoint2;

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
    pub fn setFocalPoint2(self: QRadialGradient, x: f64, y: f64) void {
        qtc.QRadialGradient_SetFocalPoint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `radius` instead
    ///
    pub const Radius = radius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#radius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn radius(self: QRadialGradient) f64 {
        return qtc.QRadialGradient_Radius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRadius` instead
    ///
    pub const SetRadius = setRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _radius: f64 `
    ///
    pub fn setRadius(self: QRadialGradient, _radius: f64) void {
        qtc.QRadialGradient_SetRadius(@ptrCast(self.ptr), @bitCast(_radius));
    }

    /// ### DEPRECATED: Use `centerRadius` instead
    ///
    pub const CenterRadius = centerRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#centerRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn centerRadius(self: QRadialGradient) f64 {
        return qtc.QRadialGradient_CenterRadius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCenterRadius` instead
    ///
    pub const SetCenterRadius = setCenterRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setCenterRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _radius: f64 `
    ///
    pub fn setCenterRadius(self: QRadialGradient, _radius: f64) void {
        qtc.QRadialGradient_SetCenterRadius(@ptrCast(self.ptr), @bitCast(_radius));
    }

    /// ### DEPRECATED: Use `focalRadius` instead
    ///
    pub const FocalRadius = focalRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#focalRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn focalRadius(self: QRadialGradient) f64 {
        return qtc.QRadialGradient_FocalRadius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocalRadius` instead
    ///
    pub const SetFocalRadius = setFocalRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#setFocalRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _radius: f64 `
    ///
    pub fn setFocalRadius(self: QRadialGradient, _radius: f64) void {
        qtc.QRadialGradient_SetFocalRadius(@ptrCast(self.ptr), @bitCast(_radius));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QRadialGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpread` instead
    ///
    pub const SetSpread = setSpread;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _spread: qbrush_enums.Spread `
    ///
    pub fn setSpread(self: QRadialGradient, _spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(_spread));
    }

    /// ### DEPRECATED: Use `spread` instead
    ///
    pub const Spread = spread;

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
    pub fn spread(self: QRadialGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorAt` instead
    ///
    pub const SetColorAt = setColorAt;

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
    /// ` _color: QColor `
    ///
    pub fn setColorAt(self: QRadialGradient, pos: f64, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setStops` instead
    ///
    pub const SetStops = setStops;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _stops: []Struct_f64_QColor `
    ///
    pub fn setStops(self: QRadialGradient, _stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = _stops.len,
            .data = @ptrCast(_stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// ### DEPRECATED: Use `stops` instead
    ///
    pub const Stops = stops;

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
    pub fn stops(self: QRadialGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("QRadialGradient.stops: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `coordinateMode` instead
    ///
    pub const CoordinateMode = coordinateMode;

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
    pub fn coordinateMode(self: QRadialGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCoordinateMode` instead
    ///
    pub const SetCoordinateMode = setCoordinateMode;

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
    pub fn setCoordinateMode(self: QRadialGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `interpolationMode` instead
    ///
    pub const InterpolationMode = interpolationMode;

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
    pub fn interpolationMode(self: QRadialGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterpolationMode` instead
    ///
    pub const SetInterpolationMode = setInterpolationMode;

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
    pub fn setInterpolationMode(self: QRadialGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRadialGradient `
    ///
    /// ` _gradient: QGradient `
    ///
    pub fn operatorEqual(self: QRadialGradient, _gradient: anytype) bool {
        comptime _ = @TypeOf(_gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(_gradient.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QRadialGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qradialgradient.html#dtor.QRadialGradient)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRadialGradient `
    ///
    pub fn delete(self: QRadialGradient) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QConicalGradient object in C++ memory
    ///
    pub fn new() QConicalGradient {
        return .{ .ptr = qtc.QConicalGradient_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QConicalGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _center: QPointF `
    ///
    /// ` startAngle: f64 `
    ///
    pub fn new2(_center: anytype, startAngle: f64) QConicalGradient {
        comptime _ = @TypeOf(_center)._is_QPointF;
        return .{ .ptr = qtc.QConicalGradient_new2(@ptrCast(_center.ptr), @bitCast(startAngle)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QConicalGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cx: f64 `
    ///
    /// ` cy: f64 `
    ///
    /// ` startAngle: f64 `
    ///
    pub fn new3(cx: f64, cy: f64, startAngle: f64) QConicalGradient {
        return .{ .ptr = qtc.QConicalGradient_new3(@bitCast(cx), @bitCast(cy), @bitCast(startAngle)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QConicalGradient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QConicalGradient `
    ///
    pub fn new4(param1: anytype) QConicalGradient {
        comptime _ = @TypeOf(param1)._is_QConicalGradient;
        return .{ .ptr = qtc.QConicalGradient_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `center` instead
    ///
    pub const Center = center;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#center)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    pub fn center(self: QConicalGradient) QPointF {
        return .{ .ptr = qtc.QConicalGradient_Center(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCenter` instead
    ///
    pub const SetCenter = setCenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#setCenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` _center: QPointF `
    ///
    pub fn setCenter(self: QConicalGradient, _center: anytype) void {
        comptime _ = @TypeOf(_center)._is_QPointF;
        qtc.QConicalGradient_SetCenter(@ptrCast(self.ptr), @ptrCast(_center.ptr));
    }

    /// ### DEPRECATED: Use `setCenter2` instead
    ///
    pub const SetCenter2 = setCenter2;

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
    pub fn setCenter2(self: QConicalGradient, x: f64, y: f64) void {
        qtc.QConicalGradient_SetCenter2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `angle` instead
    ///
    pub const Angle = angle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#angle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    pub fn angle(self: QConicalGradient) f64 {
        return qtc.QConicalGradient_Angle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAngle` instead
    ///
    pub const SetAngle = setAngle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#setAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` _angle: f64 `
    ///
    pub fn setAngle(self: QConicalGradient, _angle: f64) void {
        qtc.QConicalGradient_SetAngle(@ptrCast(self.ptr), @bitCast(_angle));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QConicalGradient) i32 {
        return qtc.QGradient_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpread` instead
    ///
    pub const SetSpread = setSpread;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setSpread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` _spread: qbrush_enums.Spread `
    ///
    pub fn setSpread(self: QConicalGradient, _spread: i32) void {
        qtc.QGradient_SetSpread(@ptrCast(self.ptr), @bitCast(_spread));
    }

    /// ### DEPRECATED: Use `spread` instead
    ///
    pub const Spread = spread;

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
    pub fn spread(self: QConicalGradient) i32 {
        return qtc.QGradient_Spread(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorAt` instead
    ///
    pub const SetColorAt = setColorAt;

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
    /// ` _color: QColor `
    ///
    pub fn setColorAt(self: QConicalGradient, pos: f64, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGradient_SetColorAt(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `setStops` instead
    ///
    pub const SetStops = setStops;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#setStops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` _stops: []Struct_f64_QColor `
    ///
    pub fn setStops(self: QConicalGradient, _stops: []Struct_f64_QColor) void {
        const stops_list = qtc.libqt_list{
            .len = _stops.len,
            .data = @ptrCast(_stops.ptr),
        };
        qtc.QGradient_SetStops(@ptrCast(self.ptr), stops_list);
    }

    /// ### DEPRECATED: Use `stops` instead
    ///
    pub const Stops = stops;

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
    pub fn stops(self: QConicalGradient, allocator: std.mem.Allocator) []Struct_f64_QColor {
        const _arr: qtc.libqt_list = qtc.QGradient_Stops(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QColor = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QColor, _arr.len) catch @panic("QConicalGradient.stops: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `coordinateMode` instead
    ///
    pub const CoordinateMode = coordinateMode;

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
    pub fn coordinateMode(self: QConicalGradient) i32 {
        return qtc.QGradient_CoordinateMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCoordinateMode` instead
    ///
    pub const SetCoordinateMode = setCoordinateMode;

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
    pub fn setCoordinateMode(self: QConicalGradient, mode: i32) void {
        qtc.QGradient_SetCoordinateMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `interpolationMode` instead
    ///
    pub const InterpolationMode = interpolationMode;

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
    pub fn interpolationMode(self: QConicalGradient) i32 {
        return qtc.QGradient_InterpolationMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterpolationMode` instead
    ///
    pub const SetInterpolationMode = setInterpolationMode;

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
    pub fn setInterpolationMode(self: QConicalGradient, mode: i32) void {
        qtc.QGradient_SetInterpolationMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QGradient
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgradient.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QConicalGradient `
    ///
    /// ` _gradient: QGradient `
    ///
    pub fn operatorEqual(self: QConicalGradient, _gradient: anytype) bool {
        comptime _ = @TypeOf(_gradient)._is_QGradient;
        return qtc.QGradient_OperatorEqual(@ptrCast(self.ptr), @ptrCast(_gradient.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QConicalGradient, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QGradient;
        return qtc.QGradient_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qconicalgradient.html#dtor.QConicalGradient)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QConicalGradient `
    ///
    pub fn delete(self: QConicalGradient) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGradient::QGradientData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QGradient__QGradientData `
    ///
    pub fn new(param1: anytype) QGradient__QGradientData {
        comptime _ = @TypeOf(param1)._is_QGradient__QGradientData;
        return .{ .ptr = qtc.QGradient__QGradientData_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGradient__QGradientData `
    ///
    pub fn delete(self: QGradient__QGradientData) void {
        qtc.QGradient__QGradientData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbrush.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const LinearGradient: i32 = 0;
        pub const RadialGradient: i32 = 1;
        pub const ConicalGradient: i32 = 2;
        pub const NoGradient: i32 = 3;
    };

    pub const Spread = enum {
        pub const PadSpread: i32 = 0;
        pub const ReflectSpread: i32 = 1;
        pub const RepeatSpread: i32 = 2;
    };

    pub const CoordinateMode = enum {
        pub const LogicalMode: i32 = 0;
        pub const StretchToDeviceMode: i32 = 1;
        pub const ObjectBoundingMode: i32 = 2;
        pub const ObjectMode: i32 = 3;
    };

    pub const InterpolationMode = enum {
        pub const ColorInterpolation: i32 = 0;
        pub const ComponentInterpolation: i32 = 1;
    };

    pub const Preset = enum {
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
