const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRgba64 = @import("libqt6").QRgba64;
const QVariant = @import("libqt6").QVariant;
const qcolor_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)
pub const QColor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QColor,

    pub const _is_QColor = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QColor `
    ///
    pub fn new(other: anytype) QColor {
        comptime _ = @TypeOf(other)._is_QColor;
        return .{ .ptr = qtc.QColor_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QColor object and invalidate the source QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QColor `
    ///
    pub fn new2(other: anytype) QColor {
        comptime _ = @TypeOf(other)._is_QColor;
        return .{ .ptr = qtc.QColor_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QColor object in C++ memory
    ///
    pub fn new3() QColor {
        return .{ .ptr = qtc.QColor_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn new4(color: i32) QColor {
        return .{ .ptr = qtc.QColor_new4(@bitCast(color)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn new5(r: i32, g: i32, b: i32) QColor {
        return .{ .ptr = qtc.QColor_new5(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _rgb: u32 `
    ///
    pub fn new6(_rgb: u32) QColor {
        return .{ .ptr = qtc.QColor_new6(@bitCast(_rgb)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _rgba64: QRgba64 `
    ///
    pub fn new7(_rgba64: anytype) QColor {
        comptime _ = @TypeOf(_rgba64)._is_QRgba64;
        return .{ .ptr = qtc.QColor_new7(@ptrCast(_rgba64.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new8(_name: []const u8) QColor {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QColor_new8(name_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new9(_name: []const u8) QColor {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QColor_new9(name_str) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` aname: [:0]const u8 `
    ///
    pub fn new10(aname: [:0]const u8) QColor {
        const aname_Cstring = aname.ptr;
        return .{ .ptr = qtc.QColor_new10(aname_Cstring) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    pub fn new11(_name: []u8) QColor {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QColor_new11(name_str) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _spec: qcolor_enums.Spec `
    ///
    pub fn new12(_spec: i32) QColor {
        return .{ .ptr = qtc.QColor_new12(@bitCast(_spec)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _spec: qcolor_enums.Spec `
    ///
    /// ` a1: u16 `
    ///
    /// ` a2: u16 `
    ///
    /// ` a3: u16 `
    ///
    /// ` a4: u16 `
    ///
    pub fn new13(_spec: i32, a1: u16, a2: u16, a3: u16, a4: u16) QColor {
        return .{ .ptr = qtc.QColor_new13(@bitCast(_spec), @bitCast(a1), @bitCast(a2), @bitCast(a3), @bitCast(a4)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QColor `
    ///
    pub fn new14(param1: anytype) QColor {
        comptime _ = @TypeOf(param1)._is_QColor;
        return .{ .ptr = qtc.QColor_new14(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn new15(r: i32, g: i32, b: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_new15(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `new16` instead
    ///
    pub const New16 = new16;

    /// Allocate a new QColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _spec: qcolor_enums.Spec `
    ///
    /// ` a1: u16 `
    ///
    /// ` a2: u16 `
    ///
    /// ` a3: u16 `
    ///
    /// ` a4: u16 `
    ///
    /// ` a5: u16 `
    ///
    pub fn new16(_spec: i32, a1: u16, a2: u16, a3: u16, a4: u16, a5: u16) QColor {
        return .{ .ptr = qtc.QColor_new16(@bitCast(_spec), @bitCast(a1), @bitCast(a2), @bitCast(a3), @bitCast(a4), @bitCast(a5)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QColor `
    ///
    /// ` other: QColor `
    ///
    pub fn copyAssign(self: QColor, other: QColor) void {
        qtc.QColor_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QColor `
    ///
    /// ` other: QColor `
    ///
    pub fn moveAssign(self: QColor, other: QColor) void {
        qtc.QColor_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn fromString(_name: []const u8) QColor {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QColor_FromString(name_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn operatorAssign(self: QColor, color: i32) void {
        qtc.QColor_OperatorAssign(@ptrCast(self.ptr), @bitCast(color));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn isValid(self: QColor) bool {
        return qtc.QColor_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QColor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QColor_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QColor.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNamedColor` instead
    ///
    pub const SetNamedColor = setNamedColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setNamedColor(self: QColor, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QColor_SetNamedColor(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setNamedColor2` instead
    ///
    pub const SetNamedColor2 = setNamedColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setNamedColor2(self: QColor, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QColor_SetNamedColor2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setNamedColor3` instead
    ///
    pub const SetNamedColor3 = setNamedColor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _name: []u8 `
    ///
    pub fn setNamedColor3(self: QColor, _name: []u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QColor_SetNamedColor3(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `colorNames` instead
    ///
    pub const ColorNames = colorNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#colorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn colorNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QColor_ColorNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QColor.colorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QColor.colorNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `spec` instead
    ///
    pub const Spec = spec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#spec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ## Returns:
    ///
    /// ` qcolor_enums.Spec `
    ///
    pub fn spec(self: QColor) i32 {
        return qtc.QColor_Spec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alpha` instead
    ///
    pub const Alpha = alpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#alpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn alpha(self: QColor) i32 {
        return qtc.QColor_Alpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlpha` instead
    ///
    pub const SetAlpha = setAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _alpha: i32 `
    ///
    pub fn setAlpha(self: QColor, _alpha: i32) void {
        qtc.QColor_SetAlpha(@ptrCast(self.ptr), @bitCast(_alpha));
    }

    /// ### DEPRECATED: Use `alphaF` instead
    ///
    pub const AlphaF = alphaF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#alphaF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn alphaF(self: QColor) f32 {
        return qtc.QColor_AlphaF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlphaF` instead
    ///
    pub const SetAlphaF = setAlphaF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setAlphaF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _alpha: f32 `
    ///
    pub fn setAlphaF(self: QColor, _alpha: f32) void {
        qtc.QColor_SetAlphaF(@ptrCast(self.ptr), @bitCast(_alpha));
    }

    /// ### DEPRECATED: Use `red` instead
    ///
    pub const Red = red;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#red)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn red(self: QColor) i32 {
        return qtc.QColor_Red(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `green` instead
    ///
    pub const Green = green;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#green)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn green(self: QColor) i32 {
        return qtc.QColor_Green(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blue` instead
    ///
    pub const Blue = blue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn blue(self: QColor) i32 {
        return qtc.QColor_Blue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRed` instead
    ///
    pub const SetRed = setRed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _red: i32 `
    ///
    pub fn setRed(self: QColor, _red: i32) void {
        qtc.QColor_SetRed(@ptrCast(self.ptr), @bitCast(_red));
    }

    /// ### DEPRECATED: Use `setGreen` instead
    ///
    pub const SetGreen = setGreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setGreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _green: i32 `
    ///
    pub fn setGreen(self: QColor, _green: i32) void {
        qtc.QColor_SetGreen(@ptrCast(self.ptr), @bitCast(_green));
    }

    /// ### DEPRECATED: Use `setBlue` instead
    ///
    pub const SetBlue = setBlue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setBlue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _blue: i32 `
    ///
    pub fn setBlue(self: QColor, _blue: i32) void {
        qtc.QColor_SetBlue(@ptrCast(self.ptr), @bitCast(_blue));
    }

    /// ### DEPRECATED: Use `redF` instead
    ///
    pub const RedF = redF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#redF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn redF(self: QColor) f32 {
        return qtc.QColor_RedF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `greenF` instead
    ///
    pub const GreenF = greenF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#greenF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn greenF(self: QColor) f32 {
        return qtc.QColor_GreenF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blueF` instead
    ///
    pub const BlueF = blueF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn blueF(self: QColor) f32 {
        return qtc.QColor_BlueF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRedF` instead
    ///
    pub const SetRedF = setRedF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRedF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _red: f32 `
    ///
    pub fn setRedF(self: QColor, _red: f32) void {
        qtc.QColor_SetRedF(@ptrCast(self.ptr), @bitCast(_red));
    }

    /// ### DEPRECATED: Use `setGreenF` instead
    ///
    pub const SetGreenF = setGreenF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setGreenF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _green: f32 `
    ///
    pub fn setGreenF(self: QColor, _green: f32) void {
        qtc.QColor_SetGreenF(@ptrCast(self.ptr), @bitCast(_green));
    }

    /// ### DEPRECATED: Use `setBlueF` instead
    ///
    pub const SetBlueF = setBlueF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setBlueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _blue: f32 `
    ///
    pub fn setBlueF(self: QColor, _blue: f32) void {
        qtc.QColor_SetBlueF(@ptrCast(self.ptr), @bitCast(_blue));
    }

    /// ### DEPRECATED: Use `getRgb` instead
    ///
    pub const GetRgb = getRgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *i32 `
    ///
    /// ` g: *i32 `
    ///
    /// ` b: *i32 `
    ///
    pub fn getRgb(self: QColor, r: *i32, g: *i32, b: *i32) void {
        qtc.QColor_GetRgb(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b));
    }

    /// ### DEPRECATED: Use `setRgb` instead
    ///
    pub const SetRgb = setRgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn setRgb(self: QColor, r: i32, g: i32, b: i32) void {
        qtc.QColor_SetRgb(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b));
    }

    /// ### DEPRECATED: Use `getRgbF` instead
    ///
    pub const GetRgbF = getRgbF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *f32 `
    ///
    /// ` g: *f32 `
    ///
    /// ` b: *f32 `
    ///
    pub fn getRgbF(self: QColor, r: *f32, g: *f32, b: *f32) void {
        qtc.QColor_GetRgbF(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b));
    }

    /// ### DEPRECATED: Use `setRgbF` instead
    ///
    pub const SetRgbF = setRgbF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    pub fn setRgbF(self: QColor, r: f32, g: f32, b: f32) void {
        qtc.QColor_SetRgbF(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b));
    }

    /// ### DEPRECATED: Use `rgba64` instead
    ///
    pub const Rgba64 = rgba64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn rgba64(self: QColor) QRgba64 {
        return .{ .ptr = qtc.QColor_Rgba64(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRgba64` instead
    ///
    pub const SetRgba64 = setRgba64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _rgba: QRgba64 `
    ///
    pub fn setRgba64(self: QColor, _rgba: anytype) void {
        comptime _ = @TypeOf(_rgba)._is_QRgba64;
        qtc.QColor_SetRgba64(@ptrCast(self.ptr), @ptrCast(_rgba.ptr));
    }

    /// ### DEPRECATED: Use `rgba` instead
    ///
    pub const Rgba = rgba;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn rgba(self: QColor) u32 {
        return qtc.QColor_Rgba(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRgba` instead
    ///
    pub const SetRgba = setRgba;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _rgba: u32 `
    ///
    pub fn setRgba(self: QColor, _rgba: u32) void {
        qtc.QColor_SetRgba(@ptrCast(self.ptr), @bitCast(_rgba));
    }

    /// ### DEPRECATED: Use `rgb` instead
    ///
    pub const Rgb = rgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn rgb(self: QColor) u32 {
        return qtc.QColor_Rgb(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRgb2` instead
    ///
    pub const SetRgb2 = setRgb2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` _rgb: u32 `
    ///
    pub fn setRgb2(self: QColor, _rgb: u32) void {
        qtc.QColor_SetRgb2(@ptrCast(self.ptr), @bitCast(_rgb));
    }

    /// ### DEPRECATED: Use `hue` instead
    ///
    pub const Hue = hue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hue(self: QColor) i32 {
        return qtc.QColor_Hue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saturation` instead
    ///
    pub const Saturation = saturation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#saturation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn saturation(self: QColor) i32 {
        return qtc.QColor_Saturation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hsvHue` instead
    ///
    pub const HsvHue = hsvHue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvHue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hsvHue(self: QColor) i32 {
        return qtc.QColor_HsvHue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hsvSaturation` instead
    ///
    pub const HsvSaturation = hsvSaturation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvSaturation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hsvSaturation(self: QColor) i32 {
        return qtc.QColor_HsvSaturation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn value(self: QColor) i32 {
        return qtc.QColor_Value(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hueF` instead
    ///
    pub const HueF = hueF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hueF(self: QColor) f32 {
        return qtc.QColor_HueF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saturationF` instead
    ///
    pub const SaturationF = saturationF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#saturationF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn saturationF(self: QColor) f32 {
        return qtc.QColor_SaturationF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hsvHueF` instead
    ///
    pub const HsvHueF = hsvHueF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvHueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hsvHueF(self: QColor) f32 {
        return qtc.QColor_HsvHueF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hsvSaturationF` instead
    ///
    pub const HsvSaturationF = hsvSaturationF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvSaturationF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hsvSaturationF(self: QColor) f32 {
        return qtc.QColor_HsvSaturationF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `valueF` instead
    ///
    pub const ValueF = valueF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#valueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn valueF(self: QColor) f32 {
        return qtc.QColor_ValueF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getHsv` instead
    ///
    pub const GetHsv = getHsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` v: *i32 `
    ///
    pub fn getHsv(self: QColor, h: *i32, s: *i32, v: *i32) void {
        qtc.QColor_GetHsv(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v));
    }

    /// ### DEPRECATED: Use `setHsv` instead
    ///
    pub const SetHsv = setHsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    pub fn setHsv(self: QColor, h: i32, s: i32, v: i32) void {
        qtc.QColor_SetHsv(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v));
    }

    /// ### DEPRECATED: Use `getHsvF` instead
    ///
    pub const GetHsvF = getHsvF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` v: *f32 `
    ///
    pub fn getHsvF(self: QColor, h: *f32, s: *f32, v: *f32) void {
        qtc.QColor_GetHsvF(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v));
    }

    /// ### DEPRECATED: Use `setHsvF` instead
    ///
    pub const SetHsvF = setHsvF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn setHsvF(self: QColor, h: f32, s: f32, v: f32) void {
        qtc.QColor_SetHsvF(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v));
    }

    /// ### DEPRECATED: Use `cyan` instead
    ///
    pub const Cyan = cyan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#cyan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn cyan(self: QColor) i32 {
        return qtc.QColor_Cyan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `magenta` instead
    ///
    pub const Magenta = magenta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#magenta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn magenta(self: QColor) i32 {
        return qtc.QColor_Magenta(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yellow` instead
    ///
    pub const Yellow = yellow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#yellow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn yellow(self: QColor) i32 {
        return qtc.QColor_Yellow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `black` instead
    ///
    pub const Black = black;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#black)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn black(self: QColor) i32 {
        return qtc.QColor_Black(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cyanF` instead
    ///
    pub const CyanF = cyanF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#cyanF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn cyanF(self: QColor) f32 {
        return qtc.QColor_CyanF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `magentaF` instead
    ///
    pub const MagentaF = magentaF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#magentaF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn magentaF(self: QColor) f32 {
        return qtc.QColor_MagentaF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yellowF` instead
    ///
    pub const YellowF = yellowF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#yellowF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn yellowF(self: QColor) f32 {
        return qtc.QColor_YellowF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blackF` instead
    ///
    pub const BlackF = blackF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blackF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn blackF(self: QColor) f32 {
        return qtc.QColor_BlackF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getCmyk` instead
    ///
    pub const GetCmyk = getCmyk;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *i32 `
    ///
    /// ` m: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` k: *i32 `
    ///
    pub fn getCmyk(self: QColor, c: *i32, m: *i32, y: *i32, k: *i32) void {
        qtc.QColor_GetCmyk(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k));
    }

    /// ### DEPRECATED: Use `setCmyk` instead
    ///
    pub const SetCmyk = setCmyk;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    pub fn setCmyk(self: QColor, c: i32, m: i32, y: i32, k: i32) void {
        qtc.QColor_SetCmyk(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k));
    }

    /// ### DEPRECATED: Use `getCmykF` instead
    ///
    pub const GetCmykF = getCmykF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *f32 `
    ///
    /// ` m: *f32 `
    ///
    /// ` y: *f32 `
    ///
    /// ` k: *f32 `
    ///
    pub fn getCmykF(self: QColor, c: *f32, m: *f32, y: *f32, k: *f32) void {
        qtc.QColor_GetCmykF(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k));
    }

    /// ### DEPRECATED: Use `setCmykF` instead
    ///
    pub const SetCmykF = setCmykF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    pub fn setCmykF(self: QColor, c: f32, m: f32, y: f32, k: f32) void {
        qtc.QColor_SetCmykF(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k));
    }

    /// ### DEPRECATED: Use `hslHue` instead
    ///
    pub const HslHue = hslHue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslHue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hslHue(self: QColor) i32 {
        return qtc.QColor_HslHue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hslSaturation` instead
    ///
    pub const HslSaturation = hslSaturation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslSaturation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hslSaturation(self: QColor) i32 {
        return qtc.QColor_HslSaturation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lightness` instead
    ///
    pub const Lightness = lightness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lightness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn lightness(self: QColor) i32 {
        return qtc.QColor_Lightness(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hslHueF` instead
    ///
    pub const HslHueF = hslHueF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslHueF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hslHueF(self: QColor) f32 {
        return qtc.QColor_HslHueF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hslSaturationF` instead
    ///
    pub const HslSaturationF = hslSaturationF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslSaturationF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn hslSaturationF(self: QColor) f32 {
        return qtc.QColor_HslSaturationF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lightnessF` instead
    ///
    pub const LightnessF = lightnessF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lightnessF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn lightnessF(self: QColor) f32 {
        return qtc.QColor_LightnessF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getHsl` instead
    ///
    pub const GetHsl = getHsl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` l: *i32 `
    ///
    pub fn getHsl(self: QColor, h: *i32, s: *i32, l: *i32) void {
        qtc.QColor_GetHsl(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l));
    }

    /// ### DEPRECATED: Use `setHsl` instead
    ///
    pub const SetHsl = setHsl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    pub fn setHsl(self: QColor, h: i32, s: i32, l: i32) void {
        qtc.QColor_SetHsl(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l));
    }

    /// ### DEPRECATED: Use `getHslF` instead
    ///
    pub const GetHslF = getHslF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` l: *f32 `
    ///
    pub fn getHslF(self: QColor, h: *f32, s: *f32, l: *f32) void {
        qtc.QColor_GetHslF(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l));
    }

    /// ### DEPRECATED: Use `setHslF` instead
    ///
    pub const SetHslF = setHslF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    pub fn setHslF(self: QColor, h: f32, s: f32, l: f32) void {
        qtc.QColor_SetHslF(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l));
    }

    /// ### DEPRECATED: Use `toRgb` instead
    ///
    pub const ToRgb = toRgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn toRgb(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToRgb(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toHsv` instead
    ///
    pub const ToHsv = toHsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn toHsv(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToHsv(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCmyk` instead
    ///
    pub const ToCmyk = toCmyk;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn toCmyk(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToCmyk(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toHsl` instead
    ///
    pub const ToHsl = toHsl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn toHsl(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToHsl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toExtendedRgb` instead
    ///
    pub const ToExtendedRgb = toExtendedRgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toExtendedRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn toExtendedRgb(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_ToExtendedRgb(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `convertTo` instead
    ///
    pub const ConvertTo = convertTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` colorSpec: qcolor_enums.Spec `
    ///
    pub fn convertTo(self: QColor, colorSpec: i32) QColor {
        return .{ .ptr = qtc.QColor_ConvertTo(@ptrCast(self.ptr), @bitCast(colorSpec)) };
    }

    /// ### DEPRECATED: Use `fromRgb` instead
    ///
    pub const FromRgb = fromRgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` _rgb: u32 `
    ///
    pub fn fromRgb(_rgb: u32) QColor {
        return .{ .ptr = qtc.QColor_FromRgb(@bitCast(_rgb)) };
    }

    /// ### DEPRECATED: Use `fromRgba` instead
    ///
    pub const FromRgba = fromRgba;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` _rgba: u32 `
    ///
    pub fn fromRgba(_rgba: u32) QColor {
        return .{ .ptr = qtc.QColor_FromRgba(@bitCast(_rgba)) };
    }

    /// ### DEPRECATED: Use `fromRgb2` instead
    ///
    pub const FromRgb2 = fromRgb2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn fromRgb2(r: i32, g: i32, b: i32) QColor {
        return .{ .ptr = qtc.QColor_FromRgb2(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### DEPRECATED: Use `fromRgbF` instead
    ///
    pub const FromRgbF = fromRgbF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    pub fn fromRgbF(r: f32, g: f32, b: f32) QColor {
        return .{ .ptr = qtc.QColor_FromRgbF(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### DEPRECATED: Use `fromRgba64` instead
    ///
    pub const FromRgba64 = fromRgba64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: u16 `
    ///
    /// ` g: u16 `
    ///
    /// ` b: u16 `
    ///
    pub fn fromRgba64(r: u16, g: u16, b: u16) QColor {
        return .{ .ptr = qtc.QColor_FromRgba64(@bitCast(r), @bitCast(g), @bitCast(b)) };
    }

    /// ### DEPRECATED: Use `fromRgba642` instead
    ///
    pub const FromRgba642 = fromRgba642;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` _rgba: QRgba64 `
    ///
    pub fn fromRgba642(_rgba: anytype) QColor {
        comptime _ = @TypeOf(_rgba)._is_QRgba64;
        return .{ .ptr = qtc.QColor_FromRgba642(@ptrCast(_rgba.ptr)) };
    }

    /// ### DEPRECATED: Use `fromHsv` instead
    ///
    pub const FromHsv = fromHsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    pub fn fromHsv(h: i32, s: i32, v: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsv(@bitCast(h), @bitCast(s), @bitCast(v)) };
    }

    /// ### DEPRECATED: Use `fromHsvF` instead
    ///
    pub const FromHsvF = fromHsvF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn fromHsvF(h: f32, s: f32, v: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHsvF(@bitCast(h), @bitCast(s), @bitCast(v)) };
    }

    /// ### DEPRECATED: Use `fromCmyk` instead
    ///
    pub const FromCmyk = fromCmyk;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    pub fn fromCmyk(c: i32, m: i32, y: i32, k: i32) QColor {
        return .{ .ptr = qtc.QColor_FromCmyk(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k)) };
    }

    /// ### DEPRECATED: Use `fromCmykF` instead
    ///
    pub const FromCmykF = fromCmykF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    pub fn fromCmykF(c: f32, m: f32, y: f32, k: f32) QColor {
        return .{ .ptr = qtc.QColor_FromCmykF(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k)) };
    }

    /// ### DEPRECATED: Use `fromHsl` instead
    ///
    pub const FromHsl = fromHsl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    pub fn fromHsl(h: i32, s: i32, l: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsl(@bitCast(h), @bitCast(s), @bitCast(l)) };
    }

    /// ### DEPRECATED: Use `fromHslF` instead
    ///
    pub const FromHslF = fromHslF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    pub fn fromHslF(h: f32, s: f32, l: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHslF(@bitCast(h), @bitCast(s), @bitCast(l)) };
    }

    /// ### DEPRECATED: Use `lighter` instead
    ///
    pub const Lighter = lighter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn lighter(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_Lighter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `darker` instead
    ///
    pub const Darker = darker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#darker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn darker(self: QColor) QColor {
        return .{ .ptr = qtc.QColor_Darker(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: QColor `
    ///
    pub fn operatorEqual(self: QColor, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QColor;
        return qtc.QColor_OperatorEqual(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: QColor `
    ///
    pub fn operatorNotEqual(self: QColor, c: anytype) bool {
        comptime _ = @TypeOf(c)._is_QColor;
        return qtc.QColor_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    pub fn toQVariant(self: QColor) QVariant {
        return .{ .ptr = qtc.QColor_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValidColor` instead
    ///
    pub const IsValidColor = isValidColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn isValidColor(_name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QColor_IsValidColor(name_str);
    }

    /// ### DEPRECATED: Use `isValidColor2` instead
    ///
    pub const IsValidColor2 = isValidColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn isValidColor2(param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QColor_IsValidColor2(param1_str);
    }

    /// ### DEPRECATED: Use `isValidColor3` instead
    ///
    pub const IsValidColor3 = isValidColor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn isValidColor3(param1: []u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QColor_IsValidColor3(param1_str);
    }

    /// ### DEPRECATED: Use `isValidColorName` instead
    ///
    pub const IsValidColorName = isValidColorName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn isValidColorName(param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QColor_IsValidColorName(param1_str);
    }

    /// ### DEPRECATED: Use `name1` instead
    ///
    pub const Name1 = name1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` format: qcolor_enums.NameFormat `
    ///
    pub fn name1(self: QColor, allocator: std.mem.Allocator, format: i32) []const u8 {
        var _str = qtc.QColor_Name1(@ptrCast(self.ptr), @bitCast(format));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QColor.name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `getRgb4` instead
    ///
    pub const GetRgb4 = getRgb4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *i32 `
    ///
    /// ` g: *i32 `
    ///
    /// ` b: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn getRgb4(self: QColor, r: *i32, g: *i32, b: *i32, a: *i32) void {
        qtc.QColor_GetRgb4(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setRgb4` instead
    ///
    pub const SetRgb4 = setRgb4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn setRgb4(self: QColor, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QColor_SetRgb4(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getRgbF4` instead
    ///
    pub const GetRgbF4 = getRgbF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: *f32 `
    ///
    /// ` g: *f32 `
    ///
    /// ` b: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn getRgbF4(self: QColor, r: *f32, g: *f32, b: *f32, a: *f32) void {
        qtc.QColor_GetRgbF4(@ptrCast(self.ptr), @ptrCast(r), @ptrCast(g), @ptrCast(b), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setRgbF4` instead
    ///
    pub const SetRgbF4 = setRgbF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn setRgbF4(self: QColor, r: f32, g: f32, b: f32, a: f32) void {
        qtc.QColor_SetRgbF4(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getHsv4` instead
    ///
    pub const GetHsv4 = getHsv4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` v: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn getHsv4(self: QColor, h: *i32, s: *i32, v: *i32, a: *i32) void {
        qtc.QColor_GetHsv4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setHsv4` instead
    ///
    pub const SetHsv4 = setHsv4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn setHsv4(self: QColor, h: i32, s: i32, v: i32, a: i32) void {
        qtc.QColor_SetHsv4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getHsvF4` instead
    ///
    pub const GetHsvF4 = getHsvF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` v: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn getHsvF4(self: QColor, h: *f32, s: *f32, v: *f32, a: *f32) void {
        qtc.QColor_GetHsvF4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(v), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setHsvF4` instead
    ///
    pub const SetHsvF4 = setHsvF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn setHsvF4(self: QColor, h: f32, s: f32, v: f32, a: f32) void {
        qtc.QColor_SetHsvF4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getCmyk5` instead
    ///
    pub const GetCmyk5 = getCmyk5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *i32 `
    ///
    /// ` m: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` k: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn getCmyk5(self: QColor, c: *i32, m: *i32, y: *i32, k: *i32, a: *i32) void {
        qtc.QColor_GetCmyk5(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setCmyk5` instead
    ///
    pub const SetCmyk5 = setCmyk5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn setCmyk5(self: QColor, c: i32, m: i32, y: i32, k: i32, a: i32) void {
        qtc.QColor_SetCmyk5(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getCmykF5` instead
    ///
    pub const GetCmykF5 = getCmykF5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: *f32 `
    ///
    /// ` m: *f32 `
    ///
    /// ` y: *f32 `
    ///
    /// ` k: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn getCmykF5(self: QColor, c: *f32, m: *f32, y: *f32, k: *f32, a: *f32) void {
        qtc.QColor_GetCmykF5(@ptrCast(self.ptr), @ptrCast(c), @ptrCast(m), @ptrCast(y), @ptrCast(k), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setCmykF5` instead
    ///
    pub const SetCmykF5 = setCmykF5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn setCmykF5(self: QColor, c: f32, m: f32, y: f32, k: f32, a: f32) void {
        qtc.QColor_SetCmykF5(@ptrCast(self.ptr), @bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getHsl4` instead
    ///
    pub const GetHsl4 = getHsl4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *i32 `
    ///
    /// ` s: *i32 `
    ///
    /// ` l: *i32 `
    ///
    /// ` a: *i32 `
    ///
    pub fn getHsl4(self: QColor, h: *i32, s: *i32, l: *i32, a: *i32) void {
        qtc.QColor_GetHsl4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setHsl4` instead
    ///
    pub const SetHsl4 = setHsl4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn setHsl4(self: QColor, h: i32, s: i32, l: i32, a: i32) void {
        qtc.QColor_SetHsl4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a));
    }

    /// ### DEPRECATED: Use `getHslF4` instead
    ///
    pub const GetHslF4 = getHslF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: *f32 `
    ///
    /// ` s: *f32 `
    ///
    /// ` l: *f32 `
    ///
    /// ` a: *f32 `
    ///
    pub fn getHslF4(self: QColor, h: *f32, s: *f32, l: *f32, a: *f32) void {
        qtc.QColor_GetHslF4(@ptrCast(self.ptr), @ptrCast(h), @ptrCast(s), @ptrCast(l), @ptrCast(a));
    }

    /// ### DEPRECATED: Use `setHslF4` instead
    ///
    pub const SetHslF4 = setHslF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn setHslF4(self: QColor, h: f32, s: f32, l: f32, a: f32) void {
        qtc.QColor_SetHslF4(@ptrCast(self.ptr), @bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a));
    }

    /// ### DEPRECATED: Use `fromRgb4` instead
    ///
    pub const FromRgb4 = fromRgb4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn fromRgb4(r: i32, g: i32, b: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromRgb4(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromRgbF4` instead
    ///
    pub const FromRgbF4 = fromRgbF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn fromRgbF4(r: f32, g: f32, b: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromRgbF4(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromRgba644` instead
    ///
    pub const FromRgba644 = fromRgba644;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: u16 `
    ///
    /// ` g: u16 `
    ///
    /// ` b: u16 `
    ///
    /// ` a: u16 `
    ///
    pub fn fromRgba644(r: u16, g: u16, b: u16, a: u16) QColor {
        return .{ .ptr = qtc.QColor_FromRgba644(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromHsv4` instead
    ///
    pub const FromHsv4 = fromHsv4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` v: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn fromHsv4(h: i32, s: i32, v: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsv4(@bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromHsvF4` instead
    ///
    pub const FromHsvF4 = fromHsvF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` v: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn fromHsvF4(h: f32, s: f32, v: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHsvF4(@bitCast(h), @bitCast(s), @bitCast(v), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromCmyk5` instead
    ///
    pub const FromCmyk5 = fromCmyk5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: i32 `
    ///
    /// ` m: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` k: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn fromCmyk5(c: i32, m: i32, y: i32, k: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromCmyk5(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromCmykF5` instead
    ///
    pub const FromCmykF5 = fromCmykF5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: f32 `
    ///
    /// ` m: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` k: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn fromCmykF5(c: f32, m: f32, y: f32, k: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromCmykF5(@bitCast(c), @bitCast(m), @bitCast(y), @bitCast(k), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromHsl4` instead
    ///
    pub const FromHsl4 = fromHsl4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: i32 `
    ///
    /// ` s: i32 `
    ///
    /// ` l: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn fromHsl4(h: i32, s: i32, l: i32, a: i32) QColor {
        return .{ .ptr = qtc.QColor_FromHsl4(@bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `fromHslF4` instead
    ///
    pub const FromHslF4 = fromHslF4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
    ///
    /// ## Parameter(s):
    ///
    /// ` h: f32 `
    ///
    /// ` s: f32 `
    ///
    /// ` l: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn fromHslF4(h: f32, s: f32, l: f32, a: f32) QColor {
        return .{ .ptr = qtc.QColor_FromHslF4(@bitCast(h), @bitCast(s), @bitCast(l), @bitCast(a)) };
    }

    /// ### DEPRECATED: Use `lighter1` instead
    ///
    pub const Lighter1 = lighter1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` f: i32 `
    ///
    pub fn lighter1(self: QColor, f: i32) QColor {
        return .{ .ptr = qtc.QColor_Lighter1(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `darker1` instead
    ///
    pub const Darker1 = darker1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#darker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColor `
    ///
    /// ` f: i32 `
    ///
    pub fn darker1(self: QColor, f: i32) QColor {
        return .{ .ptr = qtc.QColor_Darker1(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#dtor.QColor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QColor `
    ///
    pub fn delete(self: QColor) void {
        qtc.QColor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#public-types)
pub const enums = struct {
    pub const Spec = enum {
        pub const Invalid: i32 = 0;
        pub const Rgb: i32 = 1;
        pub const Hsv: i32 = 2;
        pub const Cmyk: i32 = 3;
        pub const Hsl: i32 = 4;
        pub const ExtendedRgb: i32 = 5;
    };

    pub const NameFormat = enum {
        pub const HexRgb: i32 = 0;
        pub const HexArgb: i32 = 1;
    };
};
